-module(openapi_asset_server_cpu_inner).

-include("openapi.hrl").

-export([openapi_asset_server_cpu_inner/0]).

-export([openapi_asset_server_cpu_inner/1]).

-export_type([openapi_asset_server_cpu_inner/0]).

-type openapi_asset_server_cpu_inner() ::
  [ 
  ].


openapi_asset_server_cpu_inner() ->
    openapi_asset_server_cpu_inner([]).

openapi_asset_server_cpu_inner(Fields) ->
  Default = [ 
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

