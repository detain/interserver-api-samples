-module(openapi_server_order_cp_li).

-export([encode/1]).

-export_type([openapi_server_order_cp_li/0]).

-type openapi_server_order_cp_li() ::
    #{ '9' => openapi_server_order_control_panel:openapi_server_order_control_panel()
     }.

encode(#{ '9' := 9
        }) ->
    #{ '9' => 9
     }.
