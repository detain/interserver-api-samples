-module(openapi_vps_traffic_usage_average_section_response).

-export([encode/1]).

-export_type([openapi_vps_traffic_usage_average_section_response/0]).

-type openapi_vps_traffic_usage_average_section_response() ::
    #{ 'total' := integer(),
       'count' := integer(),
       'value' := integer()
     }.

encode(#{ 'total' := Total,
          'count' := Count,
          'value' := Value
        }) ->
    #{ 'total' => Total,
       'count' => Count,
       'value' => Value
     }.
