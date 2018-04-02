#!/usr/bin/env tarantool

local quorum = tonumber(arg[1])
local n_replics = tonumber(arg[2])
listen = os.getenv("LISTEN")
repl = {listen}
if n_replics == 2 then repl = { listen, '192.168.0.1:3301' } end

box.cfg({
    listen              = listen,
    replication         = repl,
    memtx_memory        = 107374182,
    replication_connect_quorum = quorum,
})

require('console').listen(os.getenv('ADMIN'))
