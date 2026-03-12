-module(openapi_licenses_order_service_categories).

-include("openapi.hrl").

-export([openapi_licenses_order_service_categories/0]).

-export([openapi_licenses_order_service_categories/1]).

-export_type([openapi_licenses_order_service_categories/0]).

-type openapi_licenses_order_service_categories() ::
  [ {'LicensesOrderServiceCategories509', openapi_licenses_order_service_categories509:openapi_licenses_order_service_categories509() }
  ].


openapi_licenses_order_service_categories() ->
    openapi_licenses_order_service_categories([]).

openapi_licenses_order_service_categories(Fields) ->
  Default = [ {'LicensesOrderServiceCategories509', openapi_licenses_order_service_categories509:openapi_licenses_order_service_categories509() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

