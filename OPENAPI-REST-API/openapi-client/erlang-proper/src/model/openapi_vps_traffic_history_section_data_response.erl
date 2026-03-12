-module(openapi_vps_traffic_history_section_data_response).

-include("openapi.hrl").

-export([openapi_vps_traffic_history_section_data_response/0]).

-export_type([openapi_vps_traffic_history_section_data_response/0]).

-type openapi_vps_traffic_history_section_data_response() ::
  list(openapi_v_ps_traffic_data_data_section_response_inner:openapi_v_ps_traffic_data_data_section_response_inner()).

openapi_vps_traffic_history_section_data_response() ->
  list(openapi_v_ps_traffic_data_data_section_response_inner:openapi_v_ps_traffic_data_data_section_response_inner()).

