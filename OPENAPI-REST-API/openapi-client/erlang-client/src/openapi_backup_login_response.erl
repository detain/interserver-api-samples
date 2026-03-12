-module(openapi_backup_login_response).

-export([encode/1]).

-export_type([openapi_backup_login_response/0]).

-type openapi_backup_login_response() ::
    #{ 'success' => boolean(),
       'text' => binary()
     }.

encode(#{ 'success' := Success,
          'text' := Text
        }) ->
    #{ 'success' => Success,
       'text' => Text
     }.
