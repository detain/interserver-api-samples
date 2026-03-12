-module(openapi_asset_server).

-include("openapi.hrl").

-export([openapi_asset_server/0]).

-export([openapi_asset_server/1]).

-export_type([openapi_asset_server/0]).

-type openapi_asset_server() ::
  [ {'id', integer() }
  | {'Region', binary() }
  | {'price', binary() }
  | {'CPU', list(openapi_asset_server_cpu_inner:openapi_asset_server_cpu_inner()) }
  | {'Memory', list(openapi_asset_server_cpu_inner:openapi_asset_server_cpu_inner()) }
  | {'Bandwidth', list(openapi_asset_server_cpu_inner:openapi_asset_server_cpu_inner()) }
  | {'IPs', list(openapi_asset_server_cpu_inner:openapi_asset_server_cpu_inner()) }
  | {'HD', map() }
  ].


openapi_asset_server() ->
    openapi_asset_server([]).

openapi_asset_server(Fields) ->
  Default = [ {'id', integer() }
            , {'Region', binary() }
            , {'price', binary() }
            , {'CPU', list(openapi_asset_server_cpu_inner:openapi_asset_server_cpu_inner()) }
            , {'Memory', list(openapi_asset_server_cpu_inner:openapi_asset_server_cpu_inner()) }
            , {'Bandwidth', list(openapi_asset_server_cpu_inner:openapi_asset_server_cpu_inner()) }
            , {'IPs', list(openapi_asset_server_cpu_inner:openapi_asset_server_cpu_inner()) }
            , {'HD', map() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

