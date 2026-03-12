-module(openapi_server_order_ips_li).

-export([encode/1]).

-export_type([openapi_server_order_ips_li/0]).

-type openapi_server_order_ips_li() ::
    #{ '9' => openapi_server_order_ip:openapi_server_order_ip()
     }.

encode(#{ '9' := 9
        }) ->
    #{ '9' => 9
     }.
