-module(openapi_login_success_response).

-include("openapi.hrl").

-export([openapi_login_success_response/0]).

-export([openapi_login_success_response/1]).

-export_type([openapi_login_success_response/0]).

-type openapi_login_success_response() ::
  [ {'sessionId', binary() }
  | {'account_id', integer() }
  | {'account_lid', binary() }
  | {'ima', binary() }
  | {'gravatar', binary() }
  ].


openapi_login_success_response() ->
    openapi_login_success_response([]).

openapi_login_success_response(Fields) ->
  Default = [ {'sessionId', binary() }
            , {'account_id', integer() }
            , {'account_lid', binary() }
            , {'ima', binary() }
            , {'gravatar', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

