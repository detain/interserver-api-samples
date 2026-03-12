-module(openapi_vps_plesk12_data).

-include("openapi.hrl").

-export([openapi_vps_plesk12_data/0]).

-export([openapi_vps_plesk12_data/1]).

-export_type([openapi_vps_plesk12_data/0]).

-type openapi_vps_plesk12_data() ::
  [ {'admin', openapi_vps_plesk_license:openapi_vps_plesk_license() }
  | {'pro', openapi_vps_plesk_license:openapi_vps_plesk_license() }
  | {'host', openapi_vps_plesk_license:openapi_vps_plesk_license() }
  ].


openapi_vps_plesk12_data() ->
    openapi_vps_plesk12_data([]).

openapi_vps_plesk12_data(Fields) ->
  Default = [ {'admin', openapi_vps_plesk_license:openapi_vps_plesk_license() }
            , {'pro', openapi_vps_plesk_license:openapi_vps_plesk_license() }
            , {'host', openapi_vps_plesk_license:openapi_vps_plesk_license() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

