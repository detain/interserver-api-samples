-module(openapi_server_extra_info_tables).

-export([encode/1]).

-export_type([openapi_server_extra_info_tables/0]).

-type openapi_server_extra_info_tables() ::
    #{ 'assets' := openapi_server_assets:openapi_server_assets()
     }.

encode(#{ 'assets' := Assets
        }) ->
    #{ 'assets' => Assets
     }.
