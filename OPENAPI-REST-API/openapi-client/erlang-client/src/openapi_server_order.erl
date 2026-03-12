-module(openapi_server_order).

-export([encode/1]).

-export_type([openapi_server_order/0]).

-type openapi_server_order() ::
    #{ 'form_values' => openapi_server_order_form_values:openapi_server_order_form_values(),
       'config_ids' => openapi_server_order_config_ids:openapi_server_order_config_ids(),
       'cpu' => integer(),
       'field_label' => openapi_server_order_field_labels:openapi_server_order_field_labels(),
       'cpu_li' => openapi_server_order_cpu_li:openapi_server_order_cpu_li(),
       'memory_li' => openapi_server_order_memory_li:openapi_server_order_memory_li(),
       'bandwidth_li' => openapi_server_order_bandwidth_li:openapi_server_order_bandwidth_li(),
       'ips_li' => openapi_server_order_ips_li:openapi_server_order_ips_li(),
       'os_li' => openapi_server_order_os_li:openapi_server_order_os_li(),
       'cp_li' => openapi_server_order_cp_li:openapi_server_order_cp_li(),
       'raid_li' => list()
     }.

encode(#{ 'form_values' := FormValues,
          'config_ids' := ConfigIds,
          'cpu' := Cpu,
          'field_label' := FieldLabel,
          'cpu_li' := CpuLi,
          'memory_li' := MemoryLi,
          'bandwidth_li' := BandwidthLi,
          'ips_li' := IpsLi,
          'os_li' := OsLi,
          'cp_li' := CpLi,
          'raid_li' := RaidLi
        }) ->
    #{ 'form_values' => FormValues,
       'config_ids' => ConfigIds,
       'cpu' => Cpu,
       'field_label' => FieldLabel,
       'cpu_li' => CpuLi,
       'memory_li' => MemoryLi,
       'bandwidth_li' => BandwidthLi,
       'ips_li' => IpsLi,
       'os_li' => OsLi,
       'cp_li' => CpLi,
       'raid_li' => RaidLi
     }.
