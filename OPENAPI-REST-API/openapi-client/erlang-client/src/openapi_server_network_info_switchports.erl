-module(openapi_server_network_info_switchports).

-export([encode/1]).

-export_type([openapi_server_network_info_switchports/0]).

-type openapi_server_network_info_switchports() ::
    #{ '10414' := openapi_server_switchport:openapi_server_switchport()
     }.

encode(#{ '10414' := 10414
        }) ->
    #{ '10414' => 10414
     }.
