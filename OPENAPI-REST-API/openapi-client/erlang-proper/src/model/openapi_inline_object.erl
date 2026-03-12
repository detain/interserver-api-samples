-module(openapi_inline_object).

-include("openapi.hrl").

-export([openapi_inline_object/0]).

-export([openapi_inline_object/1]).

-export_type([openapi_inline_object/0]).

-type openapi_inline_object() ::
  [ {'code', binary() }
  | {'message', binary() }
  ].


openapi_inline_object() ->
    openapi_inline_object([]).

openapi_inline_object(Fields) ->
  Default = [ {'code', binary() }
            , {'message', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

