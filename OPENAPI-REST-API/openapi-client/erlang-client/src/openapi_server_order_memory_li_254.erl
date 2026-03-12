-module(openapi_server_order_memory_li_254).

-export([encode/1]).

-export_type([openapi_server_order_memory_li_254/0]).

-type openapi_server_order_memory_li_254() ::
    #{ '65' => openapi_server_order_memory:openapi_server_order_memory()
     }.

encode(#{ '65' := 65
        }) ->
    #{ '65' => 65
     }.
