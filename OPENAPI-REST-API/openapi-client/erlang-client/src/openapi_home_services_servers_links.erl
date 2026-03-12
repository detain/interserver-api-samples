-module(openapi_home_services_servers_links).

-export([encode/1]).

-export_type([openapi_home_services_servers_links/0]).

-type openapi_home_services_servers_links() ::
    #{ '16058' => binary()
     }.

encode(#{ '16058' := 16058
        }) ->
    #{ '16058' => 16058
     }.
