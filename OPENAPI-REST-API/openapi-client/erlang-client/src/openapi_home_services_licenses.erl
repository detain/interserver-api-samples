-module(openapi_home_services_licenses).

-export([encode/1]).

-export_type([openapi_home_services_licenses/0]).

-type openapi_home_services_licenses() ::
    #{ 'links' => openapi_home_services_licenses_links:openapi_home_services_licenses_links(),
       'count' => integer()
     }.

encode(#{ 'links' := Links,
          'count' := Count
        }) ->
    #{ 'links' => Links,
       'count' => Count
     }.
