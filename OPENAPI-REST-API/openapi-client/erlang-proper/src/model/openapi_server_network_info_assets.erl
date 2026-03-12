-module(openapi_server_network_info_assets).

-include("openapi.hrl").

-export([openapi_server_network_info_assets/0]).

-export([openapi_server_network_info_assets/1]).

-export_type([openapi_server_network_info_assets/0]).

-type openapi_server_network_info_assets() ::
  [ {'3497', openapi_server_asset:openapi_server_asset() }
  ].


openapi_server_network_info_assets() ->
    openapi_server_network_info_assets([]).

openapi_server_network_info_assets(Fields) ->
  Default = [ {'3497', openapi_server_asset:openapi_server_asset() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

