-module(openapi_config_ids).

-export([encode/1]).

-export_type([openapi_config_ids/0]).

-type openapi_config_ids() ::
    #{ 'memory' => integer(),
       'hd' => integer(),
       'bandwidth' => integer(),
       'ips' => integer(),
       'os' => integer(),
       'cp' => integer(),
       'raid' => integer()
     }.

encode(#{ 'memory' := Memory,
          'hd' := Hd,
          'bandwidth' := Bandwidth,
          'ips' := Ips,
          'os' := Os,
          'cp' := Cp,
          'raid' := Raid
        }) ->
    #{ 'memory' => Memory,
       'hd' => Hd,
       'bandwidth' => Bandwidth,
       'ips' => Ips,
       'os' => Os,
       'cp' => Cp,
       'raid' => Raid
     }.
