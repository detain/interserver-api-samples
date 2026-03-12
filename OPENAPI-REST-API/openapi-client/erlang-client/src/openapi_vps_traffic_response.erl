-module(openapi_vps_traffic_response).

-export([encode/1]).

-export_type([openapi_vps_traffic_response/0]).

-type openapi_vps_traffic_response() ::
    #{ 'name' := binary(),
       'target' := binary(),
       'interval' := integer(),
       'history' := openapi_vps_traffic_history_response:openapi_vps_traffic_history_response(),
       'last' := openapi_date_time:openapi_date_time(),
       'times' := list(),
       'totals' := openapi_vps_traffic_totals_resposne:openapi_vps_traffic_totals_resposne(),
       'usage' := openapi_vps_traffic_usage_response:openapi_vps_traffic_usage_response(),
       'data' := list()
     }.

encode(#{ 'name' := Name,
          'target' := Target,
          'interval' := Interval,
          'history' := History,
          'last' := Last,
          'times' := Times,
          'totals' := Totals,
          'usage' := Usage,
          'data' := Data
        }) ->
    #{ 'name' => Name,
       'target' => Target,
       'interval' => Interval,
       'history' => History,
       'last' => Last,
       'times' => Times,
       'totals' => Totals,
       'usage' => Usage,
       'data' => Data
     }.
