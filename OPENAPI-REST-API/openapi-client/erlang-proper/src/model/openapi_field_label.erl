-module(openapi_field_label).

-include("openapi.hrl").

-export([openapi_field_label/0]).

-export([openapi_field_label/1]).

-export_type([openapi_field_label/0]).

-type openapi_field_label() ::
  [ {'name', binary() }
  | {'active', integer() }
  ].


openapi_field_label() ->
    openapi_field_label([]).

openapi_field_label(Fields) ->
  Default = [ {'name', binary() }
            , {'active', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

