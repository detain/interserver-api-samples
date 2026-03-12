-module(openapi_server_network_info_assets).

-export([encode/1]).

-export_type([openapi_server_network_info_assets/0]).

-type openapi_server_network_info_assets() ::
    #{ '3497' := openapi_server_asset:openapi_server_asset()
     }.

encode(#{ '3497' := 3497
        }) ->
    #{ '3497' => 3497
     }.
