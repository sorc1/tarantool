-- box.tuple test
env = require('test_run')
test_run = env.new()
test_run:cmd("push filter ".."'\\.lua.*:[0-9]+: ' to '.lua...\"]:<line>: '")

format = {}
format[1] = {name = 'aaa', type = 'unsigned'}
format[2] = {name = 'bbb', type = 'unsigned'}
format[3] = {name = 'ccc', type = 'unsigned'}
format[4] = {name = 'ddd', type = 'unsigned'}
subscriber = box.schema.space.create('subscriber', {format = format})
subscriber:frommap({ddd = 1, aaa = 2, ccc = 3, bbb = 4})
subscriber:frommap({ddd = 1, aaa = 2, bbb = 3})
subscriber:frommap({ddd = 1, aaa = 2, ccc = 3, eee = 4})
subscriber:frommap()
subscriber:frommap({})
subscriber:frommap({ddd = 1, aaa = 2, ccc = 3, bbb = 4}, {table = true})
subscriber:frommap({ddd = 1, aaa = 2, ccc = 3, bbb = 4}, {table = false})
subscriber:frommap({ddd = 1, aaa = 2, ccc = 3, bbb = box.NULL})
subscriber:frommap({ddd = 1, aaa = 2, ccc = 3, bbb = 4}, {dummy = true})
_ = subscriber:create_index('primary', {parts={'aaa'}})
tuple = subscriber:frommap({ddd = 1, aaa = 2, ccc = 3, bbb = 4})
subscriber:replace(tuple)
subscriber:drop()
