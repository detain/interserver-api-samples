-module(openapi_vps_order_location_stock).

-export([encode/1]).

-export_type([openapi_vps_order_location_stock/0]).

-type openapi_vps_order_location_stock() ::
    #{ '1' => openapi_vps_order_location_stock_1:openapi_vps_order_location_stock_1()
     }.

encode(#{ '1' := 1
        }) ->
    #{ '1' => 1
     }.
