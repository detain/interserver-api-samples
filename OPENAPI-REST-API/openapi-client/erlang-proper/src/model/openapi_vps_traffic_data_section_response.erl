-module(openapi_vps_traffic_data_section_response).

-include("openapi.hrl").

-export([openapi_vps_traffic_data_section_response/0]).

-export([openapi_vps_traffic_data_section_response/1]).

-export_type([openapi_vps_traffic_data_section_response/0]).

-type openapi_vps_traffic_data_section_response() ::
  [ {'name', binary() }
  | {'data', list(openapi_v_ps_traffic_data_data_section_response:openapi_v_ps_traffic_data_data_section_response()) }
  ].


openapi_vps_traffic_data_section_response() ->
    openapi_vps_traffic_data_section_response([]).

openapi_vps_traffic_data_section_response(Fields) ->
  Default = [ {'name', binary() }
            , {'data', list(openapi_v_ps_traffic_data_data_section_response:openapi_v_ps_traffic_data_data_section_response()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

