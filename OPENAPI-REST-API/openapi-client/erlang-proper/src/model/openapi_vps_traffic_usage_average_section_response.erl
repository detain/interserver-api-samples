-module(openapi_vps_traffic_usage_average_section_response).

-include("openapi.hrl").

-export([openapi_vps_traffic_usage_average_section_response/0]).

-export([openapi_vps_traffic_usage_average_section_response/1]).

-export_type([openapi_vps_traffic_usage_average_section_response/0]).

-type openapi_vps_traffic_usage_average_section_response() ::
  [ {'total', integer() }
  | {'count', integer() }
  | {'value', integer() }
  ].


openapi_vps_traffic_usage_average_section_response() ->
    openapi_vps_traffic_usage_average_section_response([]).

openapi_vps_traffic_usage_average_section_response(Fields) ->
  Default = [ {'total', integer() }
            , {'count', integer() }
            , {'value', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

