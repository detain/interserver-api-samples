-module(openapi_vps_traffic_usage_average_response).

-include("openapi.hrl").

-export([openapi_vps_traffic_usage_average_response/0]).

-export([openapi_vps_traffic_usage_average_response/1]).

-export_type([openapi_vps_traffic_usage_average_response/0]).

-type openapi_vps_traffic_usage_average_response() ::
  [ {'in', openapi_vps_traffic_usage_average_section_response:openapi_vps_traffic_usage_average_section_response() }
  | {'out', openapi_vps_traffic_usage_average_section_response:openapi_vps_traffic_usage_average_section_response() }
  ].


openapi_vps_traffic_usage_average_response() ->
    openapi_vps_traffic_usage_average_response([]).

openapi_vps_traffic_usage_average_response(Fields) ->
  Default = [ {'in', openapi_vps_traffic_usage_average_section_response:openapi_vps_traffic_usage_average_section_response() }
            , {'out', openapi_vps_traffic_usage_average_section_response:openapi_vps_traffic_usage_average_section_response() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

