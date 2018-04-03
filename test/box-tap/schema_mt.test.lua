#!/usr/bin/env tarantool
--
-- pr-3204: expose space_mt, index_mt into box.schema.
--

local tap = require('tap')
local test = tap.test('schema_mt')

test:plan(18)

box.cfg{
  log="tarantool.log",
}

--
-- Check that space metatable is shared between all spaces,
-- regardless of engine.
--
local sp1 = box.schema.create_space('test1', {engine = 'memtx'})
local sp2 = box.schema.create_space('test2', {engine = 'vinyl'})
test:is(getmetatable(sp1), getmetatable(sp2), 'spaces share metatables')

function box.schema.space_mt.myfunc(space, args)
  return args
end
test:is(sp1:myfunc(123), 123, 'space_mt can be extended')
test:is(sp1.myfunc, sp2.myfunc, 'space_mt can be extended')

--
-- Check that index metatable is shared in a scope of an engine.
--
local sp1_pk = sp1:create_index('pk')
local sp1_sk = sp1:create_index('sk')
local sp2_pk = sp2:create_index('pk')
local sp2_sk = sp2:create_index('sk')
test:is(getmetatable(sp1_pk), getmetatable(sp1_sk), 'memtx indexes share metatables')
test:is(getmetatable(sp2_pk), getmetatable(sp2_sk), 'vinyl indexes share metatables')
test:isnt(getmetatable(sp1_pk), getmetatable(sp2_pk), 'engines do not share metatables')

--
-- Check that there are two ways to extend index metatable:
-- extend base index metatable, or extend engine specific.
--
function box.schema.index_mt.common_func(index, args)
  return args
end
function box.schema.vinyl_index_mt.vinyl_func(index, args)
  return args
end
function box.schema.memtx_index_mt.memtx_func(index, args)
  return args
end
test:is(box.schema.index_mt.common_func, box.schema.vinyl_index_mt.common_func,
        'base index_mt is replicated into vinyl index_mt')
test:is(box.schema.index_mt.common_func, box.schema.memtx_index_mt.common_func,
        'base index_mt is replicated into memtx index_mt')
test:is(box.schema.index_mt.vinyl_func, nil, 'vinyl index_mt is not replicated')
test:is(box.schema.index_mt.memtx_func, nil, 'memtx index_mt is not replicated')

test:is(sp1_pk.common_func, box.schema.index_mt.common_func,
        'new common methods are visible in memtx index')
test:is(sp2_pk.common_func, box.schema.index_mt.common_func,
        'new common methods are visible in vinyl index')

test:is(sp1_pk.memtx_func, box.schema.memtx_index_mt.memtx_func,
        'new memtx methods are visible in memtx index')
test:is(sp2_pk.vinyl_func, box.schema.vinyl_index_mt.vinyl_func,
        'new vinyl methods are visible in vinyl index')

test:is(sp1_pk:memtx_func(100), 100, 'memtx local methods work')
test:is(sp1_sk:common_func(200), 200, 'memtx common methods work')
test:is(sp2_pk:vinyl_func(300), 300, 'vinyl local methods work')
test:is(sp2_sk:common_func(400), 400, 'vinyl common methods work')

sp1:drop()
sp2:drop()

test:check()

os.exit(0)
