-module(openapi_server_locations).

-include("openapi.hrl").

-export([openapi_server_locations/0]).

-export([openapi_server_locations/1]).

-export_type([openapi_server_locations/0]).

-type openapi_server_locations() ::
  [ {'1', openapi_server_location1:openapi_server_location1() }
  ].


openapi_server_locations() ->
    openapi_server_locations([]).

openapi_server_locations(Fields) ->
  Default = [ {'1', openapi_server_location1:openapi_server_location1() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

