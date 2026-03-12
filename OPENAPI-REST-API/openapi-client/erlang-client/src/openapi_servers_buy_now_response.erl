-module(openapi_servers_buy_now_response).

-export([encode/1]).

-export_type([openapi_servers_buy_now_response/0]).

-type openapi_servers_buy_now_response() ::
    #{ 'success' => boolean(),
       'text' => binary(),
       'order_details' => openapi_servers_buy_now_response_order_details:openapi_servers_buy_now_response_order_details()
     }.

encode(#{ 'success' := Success,
          'text' := Text,
          'order_details' := OrderDetails
        }) ->
    #{ 'success' => Success,
       'text' => Text,
       'order_details' => OrderDetails
     }.
