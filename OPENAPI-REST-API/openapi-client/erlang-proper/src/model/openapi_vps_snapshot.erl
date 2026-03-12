-module(openapi_vps_snapshot).

-include("openapi.hrl").

-export([openapi_vps_snapshot/0]).

-export([openapi_vps_snapshot/1]).

-export_type([openapi_vps_snapshot/0]).

-type openapi_vps_snapshot() ::
  [ {'name', binary() }
  | {'used', integer() }
  | {'date', integer() }
  ].


openapi_vps_snapshot() ->
    openapi_vps_snapshot([]).

openapi_vps_snapshot(Fields) ->
  Default = [ {'name', binary() }
            , {'used', integer() }
            , {'date', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

