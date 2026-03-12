-module(openapi_home_services_servers).

-export([encode/1]).

-export_type([openapi_home_services_servers/0]).

-type openapi_home_services_servers() ::
    #{ 'links' => openapi_home_services_servers_links:openapi_home_services_servers_links(),
       'count' => integer()
     }.

encode(#{ 'links' := Links,
          'count' := Count
        }) ->
    #{ 'links' => Links,
       'count' => Count
     }.
