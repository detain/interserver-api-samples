-module(openapi_vps_traffic_usage_response).

-export([encode/1]).

-export_type([openapi_vps_traffic_usage_response/0]).

-type openapi_vps_traffic_usage_response() ::
    #{ 'current' := openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response(),
       'peak' := openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response(),
       'average' := openapi_vps_traffic_usage_average_response:openapi_vps_traffic_usage_average_response()
     }.

encode(#{ 'current' := Current,
          'peak' := Peak,
          'average' := Average
        }) ->
    #{ 'current' => Current,
       'peak' => Peak,
       'average' => Average
     }.
