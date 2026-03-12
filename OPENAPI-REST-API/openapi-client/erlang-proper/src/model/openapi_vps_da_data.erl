-module(openapi_vps_da_data).

-include("openapi.hrl").

-export([openapi_vps_da_data/0]).

-export([openapi_vps_da_data/1]).

-export_type([openapi_vps_da_data/0]).

-type openapi_vps_da_data() ::
  [ {'free', openapi_vps_da_license:openapi_vps_da_license() }
  ].


openapi_vps_da_data() ->
    openapi_vps_da_data([]).

openapi_vps_da_data(Fields) ->
  Default = [ {'free', openapi_vps_da_license:openapi_vps_da_license() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

