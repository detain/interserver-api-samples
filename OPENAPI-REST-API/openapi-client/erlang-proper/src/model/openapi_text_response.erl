-module(openapi_text_response).

-include("openapi.hrl").

-export([openapi_text_response/0]).

-export([openapi_text_response/1]).

-export_type([openapi_text_response/0]).

-type openapi_text_response() ::
  [ {'text', binary() }
  | {'message', binary() }
  ].


openapi_text_response() ->
    openapi_text_response([]).

openapi_text_response(Fields) ->
  Default = [ {'text', binary() }
            , {'message', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

