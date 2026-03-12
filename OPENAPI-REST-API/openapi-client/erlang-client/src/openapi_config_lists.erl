-module(openapi_config_lists).

-export([encode/1]).

-export_type([openapi_config_lists/0]).

-type openapi_config_lists() ::
    #{ 'cpu_li' => maps:map(),
       'memory_li' => maps:map(),
       'hd_li' => maps:map(),
       'bandwidth_li' => maps:map(),
       'ips_li' => maps:map(),
       'os_li' => maps:map(),
       'cp_li' => maps:map(),
       'raid_li' => list()
     }.

encode(#{ 'cpu_li' := CpuLi,
          'memory_li' := MemoryLi,
          'hd_li' := HdLi,
          'bandwidth_li' := BandwidthLi,
          'ips_li' := IpsLi,
          'os_li' := OsLi,
          'cp_li' := CpLi,
          'raid_li' := RaidLi
        }) ->
    #{ 'cpu_li' => CpuLi,
       'memory_li' => MemoryLi,
       'hd_li' => HdLi,
       'bandwidth_li' => BandwidthLi,
       'ips_li' => IpsLi,
       'os_li' => OsLi,
       'cp_li' => CpLi,
       'raid_li' => RaidLi
     }.
