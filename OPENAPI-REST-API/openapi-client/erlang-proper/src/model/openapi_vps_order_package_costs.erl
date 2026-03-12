-module(openapi_vps_order_package_costs).

-include("openapi.hrl").

-export([openapi_vps_order_package_costs/0]).

-export([openapi_vps_order_package_costs/1]).

-export_type([openapi_vps_order_package_costs/0]).

-type openapi_vps_order_package_costs() ::
  [ {'57', integer() }
  ].


openapi_vps_order_package_costs() ->
    openapi_vps_order_package_costs([]).

openapi_vps_order_package_costs(Fields) ->
  Default = [ {'57', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

