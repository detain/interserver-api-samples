-module(openapi_get_account_info_401_response).

-export([encode/1]).

-export_type([openapi_get_account_info_401_response/0]).

-type openapi_get_account_info_401_response() ::
    #{ 'code' := integer(),
       'message' := binary()
     }.

encode(#{ 'code' := Code,
          'message' := Message
        }) ->
    #{ 'code' => Code,
       'message' => Message
     }.
