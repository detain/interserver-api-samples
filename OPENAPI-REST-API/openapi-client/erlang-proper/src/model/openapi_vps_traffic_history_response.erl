-module(openapi_vps_traffic_history_response).

-include("openapi.hrl").

-export([openapi_vps_traffic_history_response/0]).

-export([openapi_vps_traffic_history_response/1]).

-export_type([openapi_vps_traffic_history_response/0]).

-type openapi_vps_traffic_history_response() ::
  [ {'hour', openapi_vps_traffic_history_section_response:openapi_vps_traffic_history_section_response() }
  | {'day', openapi_vps_traffic_history_section_response:openapi_vps_traffic_history_section_response() }
  ].


openapi_vps_traffic_history_response() ->
    openapi_vps_traffic_history_response([]).

openapi_vps_traffic_history_response(Fields) ->
  Default = [ {'hour', openapi_vps_traffic_history_section_response:openapi_vps_traffic_history_section_response() }
            , {'day', openapi_vps_traffic_history_section_response:openapi_vps_traffic_history_section_response() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

