-module(openapi_add_server_200_response).

-export([encode/1]).

-export_type([openapi_add_server_200_response/0]).

-type openapi_add_server_200_response() ::
    #{ 'text' => binary(),
       'invoice' => integer(),
       'order' => integer()
     }.

encode(#{ 'text' := Text,
          'invoice' := Invoice,
          'order' := Order
        }) ->
    #{ 'text' => Text,
       'invoice' => Invoice,
       'order' => Order
     }.
