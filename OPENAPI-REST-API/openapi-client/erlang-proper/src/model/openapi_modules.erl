-module(openapi_modules).

-include("openapi.hrl").

-export([openapi_modules/0]).

-export([openapi_modules/1]).

-export_type([openapi_modules/0]).

-type openapi_modules() ::
  [ 
  ].


openapi_modules() ->
    openapi_modules([]).

openapi_modules(Fields) ->
  Default = [ 
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

