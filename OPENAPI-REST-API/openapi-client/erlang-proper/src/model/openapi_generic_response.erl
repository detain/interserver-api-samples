-module(openapi_generic_response).

-include("openapi.hrl").

-export([openapi_generic_response/0]).

-export([openapi_generic_response/1]).

-export_type([openapi_generic_response/0]).

-type openapi_generic_response() ::
  [ {'status', binary() }
  | {'text', binary() }
  ].


openapi_generic_response() ->
    openapi_generic_response([]).

openapi_generic_response(Fields) ->
  Default = [ {'status', binary() }
            , {'text', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

