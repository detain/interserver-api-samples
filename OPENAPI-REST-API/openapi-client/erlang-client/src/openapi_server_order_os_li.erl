-module(openapi_server_order_os_li).

-export([encode/1]).

-export_type([openapi_server_order_os_li/0]).

-type openapi_server_order_os_li() ::
    #{ '51' => openapi_server_order_os:openapi_server_order_os()
     }.

encode(#{ '51' := 51
        }) ->
    #{ '51' => 51
     }.
