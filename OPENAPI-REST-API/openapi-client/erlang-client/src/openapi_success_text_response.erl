-module(openapi_success_text_response).

-export([encode/1]).

-export_type([openapi_success_text_response/0]).

-type openapi_success_text_response() ::
    #{ 'success' := boolean(),
       'text' => binary(),
       'action' => binary()
     }.

encode(#{ 'success' := Success,
          'text' := Text,
          'action' := Action
        }) ->
    #{ 'success' => Success,
       'text' => Text,
       'action' => Action
     }.
