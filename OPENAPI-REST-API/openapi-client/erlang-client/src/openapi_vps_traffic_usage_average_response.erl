-module(openapi_vps_traffic_usage_average_response).

-export([encode/1]).

-export_type([openapi_vps_traffic_usage_average_response/0]).

-type openapi_vps_traffic_usage_average_response() ::
    #{ 'in' := openapi_vps_traffic_usage_average_section_response:openapi_vps_traffic_usage_average_section_response(),
       'out' := openapi_vps_traffic_usage_average_section_response:openapi_vps_traffic_usage_average_section_response()
     }.

encode(#{ 'in' := In,
          'out' := Out
        }) ->
    #{ 'in' => In,
       'out' => Out
     }.
