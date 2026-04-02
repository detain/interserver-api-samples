-module(openapi_add_server_200_response).

-include("openapi.hrl").

-export([openapi_add_server_200_response/0]).

-export([openapi_add_server_200_response/1]).

-export_type([openapi_add_server_200_response/0]).

-type openapi_add_server_200_response() ::
  [ {'text', binary() }
  | {'invoice', integer() }
  | {'order', integer() }
  ].


openapi_add_server_200_response() ->
    openapi_add_server_200_response([]).

openapi_add_server_200_response(Fields) ->
  Default = [ {'text', binary() }
            , {'invoice', integer() }
            , {'order', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

