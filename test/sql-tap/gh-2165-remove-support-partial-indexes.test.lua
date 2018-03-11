#!/usr/bin/env tarantool
test = require("sqltester")

test:plan(1)


test:do_catchsql_test(
    "partial-index-1",
    [[
        CREATE TABLE t1 (a INTEGER PRIMARY KEY, b INTEGER)
        CREATE UNIQUE INDEX i ON t1 (a) WHERE a = 3;
    ]], {
        1, "keyword \"CREATE\" is reserved"
    })

--This test intended to be deleted in #2626
test:finish_test()
