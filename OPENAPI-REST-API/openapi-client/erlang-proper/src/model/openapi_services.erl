-module(openapi_services).

-include("openapi.hrl").

-export([openapi_services/0]).

-export([openapi_services/1]).

-export_type([openapi_services/0]).

-type openapi_services() ::
  [ 
  ].


openapi_services() ->
    openapi_services([]).

openapi_services(Fields) ->
  Default = [ 
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

