-module(openapi_backups_order_package_costs).

-include("openapi.hrl").

-export([openapi_backups_order_package_costs/0]).

-export([openapi_backups_order_package_costs/1]).

-export_type([openapi_backups_order_package_costs/0]).

-type openapi_backups_order_package_costs() ::
  [ {'11006', integer() }
  ].


openapi_backups_order_package_costs() ->
    openapi_backups_order_package_costs([]).

openapi_backups_order_package_costs(Fields) ->
  Default = [ {'11006', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

