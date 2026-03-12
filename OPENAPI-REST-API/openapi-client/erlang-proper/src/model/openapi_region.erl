-module(openapi_region).

-include("openapi.hrl").

-export([openapi_region/0]).

-export([openapi_region/1]).

-export_type([openapi_region/0]).

-type openapi_region() ::
  [ {'region_id', integer() }
  | {'region_name', binary() }
  ].


openapi_region() ->
    openapi_region([]).

openapi_region(Fields) ->
  Default = [ {'region_id', integer() }
            , {'region_name', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

