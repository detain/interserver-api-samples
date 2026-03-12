-module(openapi_vps_extra_info_tables).

-include("openapi.hrl").

-export([openapi_vps_extra_info_tables/0]).

-export([openapi_vps_extra_info_tables/1]).

-export_type([openapi_vps_extra_info_tables/0]).

-type openapi_vps_extra_info_tables() ::
  [ {'ip_info', openapi_vps_ip_info:openapi_vps_ip_info() }
  ].


openapi_vps_extra_info_tables() ->
    openapi_vps_extra_info_tables([]).

openapi_vps_extra_info_tables(Fields) ->
  Default = [ {'ip_info', openapi_vps_ip_info:openapi_vps_ip_info() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

