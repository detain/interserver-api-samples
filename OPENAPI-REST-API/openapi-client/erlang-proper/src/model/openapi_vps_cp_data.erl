-module(openapi_vps_cp_data).

-include("openapi.hrl").

-export([openapi_vps_cp_data/0]).

-export([openapi_vps_cp_data/1]).

-export_type([openapi_vps_cp_data/0]).

-type openapi_vps_cp_data() ::
  [ {'name', binary() }
  | {'cost', integer() }
  ].


openapi_vps_cp_data() ->
    openapi_vps_cp_data([]).

openapi_vps_cp_data(Fields) ->
  Default = [ {'name', binary() }
            , {'cost', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

