-module(openapi_vps_service_extra).

-include("openapi.hrl").

-export([openapi_vps_service_extra/0]).

-export([openapi_vps_service_extra/1]).

-export_type([openapi_vps_service_extra/0]).

-type openapi_vps_service_extra() ::
  [ {'spice', integer() }
  | {'snapshots', list(openapi_vps_snapshot:openapi_vps_snapshot()) }
  ].


openapi_vps_service_extra() ->
    openapi_vps_service_extra([]).

openapi_vps_service_extra(Fields) ->
  Default = [ {'spice', integer() }
            , {'snapshots', list(openapi_vps_snapshot:openapi_vps_snapshot()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

