-module(openapi_create_filter).

-include("openapi.hrl").

-export([openapi_create_filter/0]).

-export([openapi_create_filter/1]).

-export_type([openapi_create_filter/0]).

-type openapi_create_filter() ::
  [ {'filter_type', binary() }
  | {'port', integer() }
  ].


openapi_create_filter() ->
    openapi_create_filter([]).

openapi_create_filter(Fields) ->
  Default = [ {'filter_type', binary() }
            , {'port', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

