-module(openapi_licenses_order_package_costs).

-include("openapi.hrl").

-export([openapi_licenses_order_package_costs/0]).

-export([openapi_licenses_order_package_costs/1]).

-export_type([openapi_licenses_order_package_costs/0]).

-type openapi_licenses_order_package_costs() ::
  [ {'LicensesOrderPackageCosts11468', integer() }
  ].


openapi_licenses_order_package_costs() ->
    openapi_licenses_order_package_costs([]).

openapi_licenses_order_package_costs(Fields) ->
  Default = [ {'LicensesOrderPackageCosts11468', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

