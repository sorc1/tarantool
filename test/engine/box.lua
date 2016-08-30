#!/usr/bin/env tarantool
os = require('os')

local vinyl = {
    range_size=1024*64,
    page_size=1024,
}

box.cfg{
    listen              = os.getenv("LISTEN"),
    slab_alloc_arena    = 0.1,
    pid_file            = "tarantool.pid",
    rows_per_wal        = 50,
    vinyl               = vinyl,
}

require('console').listen(os.getenv('ADMIN'))

_to_exclude = {
    'pid_file', 'logger', 'vinyl_dir',
    'snap_dir', 'wal_dir',
    'slab_alloc_maximal', 'slab_alloc_minimal'
}

_exclude = {}
for _, f in pairs(_to_exclude) do
    _exclude[f] = 1
end

function cfg_filter(data)
    local result = {}
    for field, val in pairs(data) do
        if _exclude[field] == nil then
            result[field] = val
        end
    end
    return result
end
