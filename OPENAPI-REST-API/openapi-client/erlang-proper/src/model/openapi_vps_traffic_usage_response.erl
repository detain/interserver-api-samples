-module(openapi_vps_traffic_usage_response).

-include("openapi.hrl").

-export([openapi_vps_traffic_usage_response/0]).

-export([openapi_vps_traffic_usage_response/1]).

-export_type([openapi_vps_traffic_usage_response/0]).

-type openapi_vps_traffic_usage_response() ::
  [ {'current', openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response() }
  | {'peak', openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response() }
  | {'average', openapi_vps_traffic_usage_average_response:openapi_vps_traffic_usage_average_response() }
  ].


openapi_vps_traffic_usage_response() ->
    openapi_vps_traffic_usage_response([]).

openapi_vps_traffic_usage_response(Fields) ->
  Default = [ {'current', openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response() }
            , {'peak', openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response() }
            , {'average', openapi_vps_traffic_usage_average_response:openapi_vps_traffic_usage_average_response() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

