-module(openapi_inline_object).

-export([encode/1]).

-export_type([openapi_inline_object/0]).

-type openapi_inline_object() ::
    #{ 'code' := binary(),
       'message' := binary()
     }.

encode(#{ 'code' := Code,
          'message' := Message
        }) ->
    #{ 'code' => Code,
       'message' => Message
     }.
