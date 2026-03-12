-module(openapi_server_order_bandwidth_li).

-export([encode/1]).

-export_type([openapi_server_order_bandwidth_li/0]).

-type openapi_server_order_bandwidth_li() ::
    #{ '15' => openapi_server_order_bandwidth:openapi_server_order_bandwidth()
     }.

encode(#{ '15' := 15
        }) ->
    #{ '15' => 15
     }.
