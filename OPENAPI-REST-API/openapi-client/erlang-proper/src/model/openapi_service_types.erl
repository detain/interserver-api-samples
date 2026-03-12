-module(openapi_service_types).

-include("openapi.hrl").

-export([openapi_service_types/0]).

-export([openapi_service_types/1]).

-export_type([openapi_service_types/0]).

-type openapi_service_types() ::
  [ 
  ].


openapi_service_types() ->
    openapi_service_types([]).

openapi_service_types(Fields) ->
  Default = [ 
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

