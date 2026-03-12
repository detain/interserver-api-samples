-module(openapi_server_network_info).

-export([encode/1]).

-export_type([openapi_server_network_info/0]).

-type openapi_server_network_info() ::
    #{ 'vlans' := list(),
       'vlans6' := list(),
       'assets' := openapi_server_network_info_assets:openapi_server_network_info_assets(),
       'switchports' := openapi_server_network_info_switchports:openapi_server_network_info_switchports()
     }.

encode(#{ 'vlans' := Vlans,
          'vlans6' := Vlans6,
          'assets' := Assets,
          'switchports' := Switchports
        }) ->
    #{ 'vlans' => Vlans,
       'vlans6' => Vlans6,
       'assets' => Assets,
       'switchports' => Switchports
     }.
