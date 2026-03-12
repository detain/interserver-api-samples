-module(openapi_backup_login_response).

-include("openapi.hrl").

-export([openapi_backup_login_response/0]).

-export([openapi_backup_login_response/1]).

-export_type([openapi_backup_login_response/0]).

-type openapi_backup_login_response() ::
  [ {'success', boolean() }
  | {'text', binary() }
  ].


openapi_backup_login_response() ->
    openapi_backup_login_response([]).

openapi_backup_login_response(Fields) ->
  Default = [ {'success', boolean() }
            , {'text', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

