-module(openapi_vps_traffic_data_data_section_response_inner).

-include("openapi.hrl").

-export([openapi_vps_traffic_data_data_section_response_inner/0]).

-export([openapi_vps_traffic_data_data_section_response_inner/1]).

-export_type([openapi_vps_traffic_data_data_section_response_inner/0]).

-type openapi_vps_traffic_data_data_section_response_inner() ::
  [ 
  ].


openapi_vps_traffic_data_data_section_response_inner() ->
    openapi_vps_traffic_data_data_section_response_inner([]).

openapi_vps_traffic_data_data_section_response_inner(Fields) ->
  Default = [ 
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

