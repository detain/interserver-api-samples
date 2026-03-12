-module(openapi_vps_traffic_totals_section_response).

-include("openapi.hrl").

-export([openapi_vps_traffic_totals_section_response/0]).

-export([openapi_vps_traffic_totals_section_response/1]).

-export_type([openapi_vps_traffic_totals_section_response/0]).

-type openapi_vps_traffic_totals_section_response() ::
  [ {'in', integer() }
  | {'out', integer() }
  ].


openapi_vps_traffic_totals_section_response() ->
    openapi_vps_traffic_totals_section_response([]).

openapi_vps_traffic_totals_section_response(Fields) ->
  Default = [ {'in', integer() }
            , {'out', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

