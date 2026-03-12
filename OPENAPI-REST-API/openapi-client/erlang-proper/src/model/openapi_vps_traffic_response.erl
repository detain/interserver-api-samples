-module(openapi_vps_traffic_response).

-include("openapi.hrl").

-export([openapi_vps_traffic_response/0]).

-export([openapi_vps_traffic_response/1]).

-export_type([openapi_vps_traffic_response/0]).

-type openapi_vps_traffic_response() ::
  [ {'name', binary() }
  | {'target', binary() }
  | {'interval', integer() }
  | {'history', openapi_vps_traffic_history_response:openapi_vps_traffic_history_response() }
  | {'last', datetime() }
  | {'times', list(datetime()) }
  | {'totals', openapi_vps_traffic_totals_resposne:openapi_vps_traffic_totals_resposne() }
  | {'usage', openapi_vps_traffic_usage_response:openapi_vps_traffic_usage_response() }
  | {'data', list(openapi_vps_traffic_data_section_response:openapi_vps_traffic_data_section_response()) }
  ].


openapi_vps_traffic_response() ->
    openapi_vps_traffic_response([]).

openapi_vps_traffic_response(Fields) ->
  Default = [ {'name', binary() }
            , {'target', binary() }
            , {'interval', integer() }
            , {'history', openapi_vps_traffic_history_response:openapi_vps_traffic_history_response() }
            , {'last', datetime() }
            , {'times', list(datetime()) }
            , {'totals', openapi_vps_traffic_totals_resposne:openapi_vps_traffic_totals_resposne() }
            , {'usage', openapi_vps_traffic_usage_response:openapi_vps_traffic_usage_response() }
            , {'data', list(openapi_vps_traffic_data_section_response:openapi_vps_traffic_data_section_response()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

