-module(openapi_close_ticket_response_schema).

-export([encode/1]).

-export_type([openapi_close_ticket_response_schema/0]).

-type openapi_close_ticket_response_schema() ::
    #{ 'success' => boolean(),
       'text' => binary()
     }.

encode(#{ 'success' := Success,
          'text' := Text
        }) ->
    #{ 'success' => Success,
       'text' => Text
     }.
