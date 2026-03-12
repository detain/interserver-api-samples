-module(openapi_licenses_order).

-include("openapi.hrl").

-export([openapi_licenses_order/0]).

-export([openapi_licenses_order/1]).

-export_type([openapi_licenses_order/0]).

-type openapi_licenses_order() ::
  [ {'serviceCategories', openapi_licenses_order_service_categories:openapi_licenses_order_service_categories() }
  | {'packageCosts', openapi_licenses_order_package_costs:openapi_licenses_order_package_costs() }
  | {'serviceTypes', openapi_licenses_order_service_types:openapi_licenses_order_service_types() }
  ].


openapi_licenses_order() ->
    openapi_licenses_order([]).

openapi_licenses_order(Fields) ->
  Default = [ {'serviceCategories', openapi_licenses_order_service_categories:openapi_licenses_order_service_categories() }
            , {'packageCosts', openapi_licenses_order_package_costs:openapi_licenses_order_package_costs() }
            , {'serviceTypes', openapi_licenses_order_service_types:openapi_licenses_order_service_types() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

