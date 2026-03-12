-module(openapi_vps_traffic_totals_resposne).

-include("openapi.hrl").

-export([openapi_vps_traffic_totals_resposne/0]).

-export([openapi_vps_traffic_totals_resposne/1]).

-export_type([openapi_vps_traffic_totals_resposne/0]).

-type openapi_vps_traffic_totals_resposne() ::
  [ {'day', openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response() }
  | {'month', openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response() }
  | {'year', openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response() }
  | {'all', openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response() }
  ].


openapi_vps_traffic_totals_resposne() ->
    openapi_vps_traffic_totals_resposne([]).

openapi_vps_traffic_totals_resposne(Fields) ->
  Default = [ {'day', openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response() }
            , {'month', openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response() }
            , {'year', openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response() }
            , {'all', openapi_vps_traffic_totals_section_response:openapi_vps_traffic_totals_section_response() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

