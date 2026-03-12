-module(openapi_vps_order_location_stock_1).

-include("openapi.hrl").

-export([openapi_vps_order_location_stock_1/0]).

-export([openapi_vps_order_location_stock_1/1]).

-export_type([openapi_vps_order_location_stock_1/0]).

-type openapi_vps_order_location_stock_1() ::
  [ {'kvm', boolean() }
  | {'kvmstorage', boolean() }
  | {'hyperv', boolean() }
  ].


openapi_vps_order_location_stock_1() ->
    openapi_vps_order_location_stock_1([]).

openapi_vps_order_location_stock_1(Fields) ->
  Default = [ {'kvm', boolean() }
            , {'kvmstorage', boolean() }
            , {'hyperv', boolean() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

