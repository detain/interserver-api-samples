-module(openapi_domain_order).

-export([encode/1]).

-export_type([openapi_domain_order/0]).

-type openapi_domain_order() ::
    #{ 'whoisPrivacyCost' => binary(),
       'services' => openapi_domain_order_services:openapi_domain_order_services(),
       'tldServices' => maps:map()
     }.

encode(#{ 'whoisPrivacyCost' := WhoisPrivacyCost,
          'services' := Services,
          'tldServices' := TldServices
        }) ->
    #{ 'whoisPrivacyCost' => WhoisPrivacyCost,
       'services' => Services,
       'tldServices' => TldServices
     }.
