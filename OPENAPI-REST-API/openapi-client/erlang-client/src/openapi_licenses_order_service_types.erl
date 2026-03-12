-module(openapi_licenses_order_service_types).

-export([encode/1]).

-export_type([openapi_licenses_order_service_types/0]).

-type openapi_licenses_order_service_types() ::
    #{ 'LicensesOrderServiceTypes11482' => openapi_licenses_order_service_types11482:openapi_licenses_order_service_types11482()
     }.

encode(#{ 'LicensesOrderServiceTypes11482' := LicensesOrderServiceTypes11482
        }) ->
    #{ 'LicensesOrderServiceTypes11482' => LicensesOrderServiceTypes11482
     }.
