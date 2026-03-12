-module(openapi_server_network_info).

-include("openapi.hrl").

-export([openapi_server_network_info/0]).

-export([openapi_server_network_info/1]).

-export_type([openapi_server_network_info/0]).

-type openapi_server_network_info() ::
  [ {'vlans', list(binary()) }
  | {'vlans6', list(binary()) }
  | {'assets', openapi_server_network_info_assets:openapi_server_network_info_assets() }
  | {'switchports', openapi_server_network_info_switchports:openapi_server_network_info_switchports() }
  ].


openapi_server_network_info() ->
    openapi_server_network_info([]).

openapi_server_network_info(Fields) ->
  Default = [ {'vlans', list(binary()) }
            , {'vlans6', list(binary()) }
            , {'assets', openapi_server_network_info_assets:openapi_server_network_info_assets() }
            , {'switchports', openapi_server_network_info_switchports:openapi_server_network_info_switchports() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

