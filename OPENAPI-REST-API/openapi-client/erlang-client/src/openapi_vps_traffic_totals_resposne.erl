-module(openapi_vps_traffic_totals_resposne).

-export([encode/1]).

-export_type([openapi_vps_traffic_totals_resposne/0]).

-type openapi_vps_traffic_totals_resposne() ::
    #{ 'day' := openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response(),
       'month' := openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response(),
       'year' := openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response(),
       'all' := openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response()
     }.

encode(#{ 'day' := Day,
          'month' := Month,
          'year' := Year,
          'all' := All
        }) ->
    #{ 'day' => Day,
       'month' => Month,
       'year' => Year,
       'all' => All
     }.
