-module(openapi_licenses_order_service_categories).

-export([encode/1]).

-export_type([openapi_licenses_order_service_categories/0]).

-type openapi_licenses_order_service_categories() ::
    #{ 'LicensesOrderServiceCategories509' => openapi_licenses_order_service_categories509:openapi_licenses_order_service_categories509()
     }.

encode(#{ 'LicensesOrderServiceCategories509' := LicensesOrderServiceCategories509
        }) ->
    #{ 'LicensesOrderServiceCategories509' => LicensesOrderServiceCategories509
     }.
