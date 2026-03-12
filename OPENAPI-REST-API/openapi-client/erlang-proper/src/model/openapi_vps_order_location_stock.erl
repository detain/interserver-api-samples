-module(openapi_vps_order_location_stock).

-include("openapi.hrl").

-export([openapi_vps_order_location_stock/0]).

-export([openapi_vps_order_location_stock/1]).

-export_type([openapi_vps_order_location_stock/0]).

-type openapi_vps_order_location_stock() ::
  [ {'1', openapi_vps_order_location_stock_1:openapi_vps_order_location_stock_1() }
  ].


openapi_vps_order_location_stock() ->
    openapi_vps_order_location_stock([]).

openapi_vps_order_location_stock(Fields) ->
  Default = [ {'1', openapi_vps_order_location_stock_1:openapi_vps_order_location_stock_1() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

