-module(openapi_home_services_vps).

-export([encode/1]).

-export_type([openapi_home_services_vps/0]).

-type openapi_home_services_vps() ::
    #{ 'links' => openapi_home_services_vps_links:openapi_home_services_vps_links(),
       'count' => integer()
     }.

encode(#{ 'links' := Links,
          'count' := Count
        }) ->
    #{ 'links' => Links,
       'count' => Count
     }.
