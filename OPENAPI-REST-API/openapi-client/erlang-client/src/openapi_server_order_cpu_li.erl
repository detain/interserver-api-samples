-module(openapi_server_order_cpu_li).

-export([encode/1]).

-export_type([openapi_server_order_cpu_li/0]).

-type openapi_server_order_cpu_li() ::
    #{ '254' => openapi_server_order_cpu:openapi_server_order_cpu()
     }.

encode(#{ '254' := 254
        }) ->
    #{ '254' => 254
     }.
