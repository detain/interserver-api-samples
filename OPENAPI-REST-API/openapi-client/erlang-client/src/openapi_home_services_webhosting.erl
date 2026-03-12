-module(openapi_home_services_webhosting).

-export([encode/1]).

-export_type([openapi_home_services_webhosting/0]).

-type openapi_home_services_webhosting() ::
    #{ 'links' => openapi_home_services_webhosting_links:openapi_home_services_webhosting_links(),
       'count' => integer()
     }.

encode(#{ 'links' := Links,
          'count' := Count
        }) ->
    #{ 'links' => Links,
       'count' => Count
     }.
