-module(openapi_get_account_info_401_response).

-include("openapi.hrl").

-export([openapi_get_account_info_401_response/0]).

-export([openapi_get_account_info_401_response/1]).

-export_type([openapi_get_account_info_401_response/0]).

-type openapi_get_account_info_401_response() ::
  [ {'code', integer() }
  | {'message', binary() }
  ].


openapi_get_account_info_401_response() ->
    openapi_get_account_info_401_response([]).

openapi_get_account_info_401_response(Fields) ->
  Default = [ {'code', integer() }
            , {'message', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

