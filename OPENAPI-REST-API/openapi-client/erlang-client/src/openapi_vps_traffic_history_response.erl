-module(openapi_vps_traffic_history_response).

-export([encode/1]).

-export_type([openapi_vps_traffic_history_response/0]).

-type openapi_vps_traffic_history_response() ::
    #{ 'hour' := openapi_vps_traffic_history_section_response:openapi_vps_traffic_history_section_response(),
       'day' := openapi_vps_traffic_history_section_response:openapi_vps_traffic_history_section_response()
     }.

encode(#{ 'hour' := Hour,
          'day' := Day
        }) ->
    #{ 'hour' => Hour,
       'day' => Day
     }.
