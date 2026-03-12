-module(openapi_server_order_memory_li).

-export([encode/1]).

-export_type([openapi_server_order_memory_li/0]).

-type openapi_server_order_memory_li() ::
    #{ '254' => openapi_server_order_memory_li_254:openapi_server_order_memory_li_254()
     }.

encode(#{ '254' := 254
        }) ->
    #{ '254' => 254
     }.
