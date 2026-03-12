-module(openapi_home_services_domains).

-export([encode/1]).

-export_type([openapi_home_services_domains/0]).

-type openapi_home_services_domains() ::
    #{ 'links' => openapi_home_services_domains_links:openapi_home_services_domains_links(),
       'count' => integer()
     }.

encode(#{ 'links' := Links,
          'count' := Count
        }) ->
    #{ 'links' => Links,
       'count' => Count
     }.
