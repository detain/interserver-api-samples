-module(openapi_login_error_response).

-include("openapi.hrl").

-export([openapi_login_error_response/0]).

-export([openapi_login_error_response/1]).

-export_type([openapi_login_error_response/0]).

-type openapi_login_error_response() ::
  [ {'message', binary() }
  | {'field', binary() }
  ].


openapi_login_error_response() ->
    openapi_login_error_response([]).

openapi_login_error_response(Fields) ->
  Default = [ {'message', binary() }
            , {'field', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

