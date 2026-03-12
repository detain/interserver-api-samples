-module(openapi_form_values).

-export([encode/1]).

-export_type([openapi_form_values/0]).

-type openapi_form_values() ::
    #{ 'memory' => integer(),
       'bandwidth' => integer(),
       'ips' => integer(),
       'os' => integer(),
       'cp' => integer(),
       'raid' => integer(),
       'hd' => integer(),
       'region' => integer()
     }.

encode(#{ 'memory' := Memory,
          'bandwidth' := Bandwidth,
          'ips' := Ips,
          'os' := Os,
          'cp' := Cp,
          'raid' := Raid,
          'hd' := Hd,
          'region' := Region
        }) ->
    #{ 'memory' => Memory,
       'bandwidth' => Bandwidth,
       'ips' => Ips,
       'os' => Os,
       'cp' => Cp,
       'raid' => Raid,
       'hd' => Hd,
       'region' => Region
     }.
