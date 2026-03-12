-module(openapi_server_network_info_switchports).

-include("openapi.hrl").

-export([openapi_server_network_info_switchports/0]).

-export([openapi_server_network_info_switchports/1]).

-export_type([openapi_server_network_info_switchports/0]).

-type openapi_server_network_info_switchports() ::
  [ {'10414', openapi_server_switchport:openapi_server_switchport() }
  ].


openapi_server_network_info_switchports() ->
    openapi_server_network_info_switchports([]).

openapi_server_network_info_switchports(Fields) ->
  Default = [ {'10414', openapi_server_switchport:openapi_server_switchport() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

