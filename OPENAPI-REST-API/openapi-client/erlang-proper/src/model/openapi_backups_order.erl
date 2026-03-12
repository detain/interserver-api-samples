-module(openapi_backups_order).

-include("openapi.hrl").

-export([openapi_backups_order/0]).

-export([openapi_backups_order/1]).

-export_type([openapi_backups_order/0]).

-type openapi_backups_order() ::
  [ {'packageCosts', openapi_backups_order_package_costs:openapi_backups_order_package_costs() }
  | {'serviceTypes', openapi_backups_order_service_types:openapi_backups_order_service_types() }
  ].


openapi_backups_order() ->
    openapi_backups_order([]).

openapi_backups_order(Fields) ->
  Default = [ {'packageCosts', openapi_backups_order_package_costs:openapi_backups_order_package_costs() }
            , {'serviceTypes', openapi_backups_order_service_types:openapi_backups_order_service_types() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

