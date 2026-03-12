-module(openapi_restore_request).

-export([encode/1]).

-export_type([openapi_restore_request/0]).

-type openapi_restore_request() ::
    #{ 'backup' => binary(),
       'password' => binary()
     }.

encode(#{ 'backup' := Backup,
          'password' := Password
        }) ->
    #{ 'backup' => Backup,
       'password' => Password
     }.
