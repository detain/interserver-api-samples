-module(openapi_licenses_order_service_types).

-include("openapi.hrl").

-export([openapi_licenses_order_service_types/0]).

-export([openapi_licenses_order_service_types/1]).

-export_type([openapi_licenses_order_service_types/0]).

-type openapi_licenses_order_service_types() ::
  [ {'LicensesOrderServiceTypes11482', openapi_licenses_order_service_types11482:openapi_licenses_order_service_types11482() }
  ].


openapi_licenses_order_service_types() ->
    openapi_licenses_order_service_types([]).

openapi_licenses_order_service_types(Fields) ->
  Default = [ {'LicensesOrderServiceTypes11482', openapi_licenses_order_service_types11482:openapi_licenses_order_service_types11482() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

