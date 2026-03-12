-module(openapi_vps_traffic_history_section_response).

-include("openapi.hrl").

-export([openapi_vps_traffic_history_section_response/0]).

-export([openapi_vps_traffic_history_section_response/1]).

-export_type([openapi_vps_traffic_history_section_response/0]).

-type openapi_vps_traffic_history_section_response() ::
  [ {'data', list(openapi_vps_traffic_history_section_data_response:openapi_vps_traffic_history_section_data_response()) }
  | {'times', list(datetime()) }
  ].


openapi_vps_traffic_history_section_response() ->
    openapi_vps_traffic_history_section_response([]).

openapi_vps_traffic_history_section_response(Fields) ->
  Default = [ {'data', list(openapi_vps_traffic_history_section_data_response:openapi_vps_traffic_history_section_data_response()) }
            , {'times', list(datetime()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

