-module(openapi_update_ticket_response_schema).

-export([encode/1]).

-export_type([openapi_update_ticket_response_schema/0]).

-type openapi_update_ticket_response_schema() ::
    #{ 'success' => boolean(),
       'message' => binary()
     }.

encode(#{ 'success' := Success,
          'message' := Message
        }) ->
    #{ 'success' => Success,
       'message' => Message
     }.
