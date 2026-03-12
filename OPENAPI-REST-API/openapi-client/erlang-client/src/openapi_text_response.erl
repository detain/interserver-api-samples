-module(openapi_text_response).

-export([encode/1]).

-export_type([openapi_text_response/0]).

-type openapi_text_response() ::
    #{ 'text' => binary(),
       'message' => binary()
     }.

encode(#{ 'text' := Text,
          'message' := Message
        }) ->
    #{ 'text' => Text,
       'message' => Message
     }.
