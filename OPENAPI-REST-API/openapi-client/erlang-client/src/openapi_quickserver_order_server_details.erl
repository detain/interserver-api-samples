-module(openapi_quickserver_order_server_details).

-export([encode/1]).

-export_type([openapi_quickserver_order_server_details/0]).

-type openapi_quickserver_order_server_details() ::
    #{ '381' => openapi_quickserver_order_server_details381:openapi_quickserver_order_server_details381()
     }.

encode(#{ '381' := 381
        }) ->
    #{ '381' => 381
     }.
