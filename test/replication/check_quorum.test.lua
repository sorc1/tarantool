--
-- gh-3278: test different replication and replication_connect_quorum configs.
--

env = require('test_run')
test_run = env.new()
test_run:cmd('switch default')
listen = os.getenv("LISTEN")
box.cfg{listen = listen, replication_timeout = 1, read_only = false}
box.info.status -- running
test_run:cmd("restart server default")
listen = os.getenv("LISTEN")
box.cfg{listen = listen, replication = { listen }, replication_timeout = 1, read_only = false}
box.info.status -- running
test_run:cmd("restart server default")
listen = os.getenv("LISTEN")
box.cfg{listen = listen, replication = { listen }, replication_timeout = 1, read_only = false, replication_connect_quorum = 1}
box.info.status -- running

test_run:cmd("create server replica with rpl_master=default, script='replication/replica_params.lua'")
test_run:cmd("start server replica with args='2 1'")
test_run:cmd('switch replica')
box.info.status -- running
box.cfg{replication_connect_quorum = 1}
test_run:cmd('switch default')
test_run:cmd("restart server replica with args='2 2'")
test_run:cmd('switch replica')
box.info.status -- orphan

