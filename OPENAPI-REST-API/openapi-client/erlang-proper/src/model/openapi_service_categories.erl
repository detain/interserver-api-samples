-module(openapi_service_categories).

-include("openapi.hrl").

-export([openapi_service_categories/0]).

-export([openapi_service_categories/1]).

-export_type([openapi_service_categories/0]).

-type openapi_service_categories() ::
  [ 
  ].


openapi_service_categories() ->
    openapi_service_categories([]).

openapi_service_categories(Fields) ->
  Default = [ 
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

