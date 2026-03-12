-module(openapi_websites_order).

-export([encode/1]).

-export_type([openapi_websites_order/0]).

-type openapi_websites_order() ::
    #{ 'step' := binary(),
       'website' := binary(),
       'period' := integer(),
       'serviceOfferId' := integer(),
       'packages' := openapi_websites_order_packages:openapi_websites_order_packages(),
       'enableDomainRegistering' := boolean(),
       'jsonServices' := openapi_websites_order_json_services:openapi_websites_order_json_services(),
       'jsonServiceOffers' := openapi_websites_order_json_service_offers:openapi_websites_order_json_service_offers(),
       'serviceTypes' := openapi_websites_order_service_types:openapi_websites_order_service_types(),
       'serviceOffers' := openapi_websites_order_service_offers:openapi_websites_order_service_offers(),
       'packges' => openapi_websites_order_packges:openapi_websites_order_packges()
     }.

encode(#{ 'step' := Step,
          'website' := Website,
          'period' := Period,
          'serviceOfferId' := ServiceOfferId,
          'packages' := Packages,
          'enableDomainRegistering' := EnableDomainRegistering,
          'jsonServices' := JsonServices,
          'jsonServiceOffers' := JsonServiceOffers,
          'serviceTypes' := ServiceTypes,
          'serviceOffers' := ServiceOffers,
          'packges' := Packges
        }) ->
    #{ 'step' => Step,
       'website' => Website,
       'period' => Period,
       'serviceOfferId' => ServiceOfferId,
       'packages' => Packages,
       'enableDomainRegistering' => EnableDomainRegistering,
       'jsonServices' => JsonServices,
       'jsonServiceOffers' => JsonServiceOffers,
       'serviceTypes' => ServiceTypes,
       'serviceOffers' => ServiceOffers,
       'packges' => Packges
     }.
