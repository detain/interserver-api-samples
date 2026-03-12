-module(openapi_vps_ip_info).

-include("openapi.hrl").

-export([openapi_vps_ip_info/0]).

-export([openapi_vps_ip_info/1]).

-export_type([openapi_vps_ip_info/0]).

-type openapi_vps_ip_info() ::
  [ {'title', binary() }
  | {'rows', list(openapi_vps_ip_info_row:openapi_vps_ip_info_row()) }
  ].


openapi_vps_ip_info() ->
    openapi_vps_ip_info([]).

openapi_vps_ip_info(Fields) ->
  Default = [ {'title', binary() }
            , {'rows', list(openapi_vps_ip_info_row:openapi_vps_ip_info_row()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

