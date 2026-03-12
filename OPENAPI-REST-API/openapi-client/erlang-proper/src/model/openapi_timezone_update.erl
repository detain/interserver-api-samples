-module(openapi_timezone_update).

-include("openapi.hrl").

-export([openapi_timezone_update/0]).

-export([openapi_timezone_update/1]).

-export_type([openapi_timezone_update/0]).

-type openapi_timezone_update() ::
  [ {'timezone', binary() }
  ].


openapi_timezone_update() ->
    openapi_timezone_update([]).

openapi_timezone_update(Fields) ->
  Default = [ {'timezone', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

