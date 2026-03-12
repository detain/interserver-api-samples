-module(openapi_server_order_config_ids).

-export([encode/1]).

-export_type([openapi_server_order_config_ids/0]).

-type openapi_server_order_config_ids() ::
    #{ 'memory' => integer(),
       'bandwidth' => binary(),
       'ips' => binary(),
       'os' => binary(),
       'cp' => integer(),
       'raid' => binary(),
       'hd' => binary()
     }.

encode(#{ 'memory' := Memory,
          'bandwidth' := Bandwidth,
          'ips' := Ips,
          'os' := Os,
          'cp' := Cp,
          'raid' := Raid,
          'hd' := Hd
        }) ->
    #{ 'memory' => Memory,
       'bandwidth' => Bandwidth,
       'ips' => Ips,
       'os' => Os,
       'cp' => Cp,
       'raid' => Raid,
       'hd' => Hd
     }.
