-module(openapi_vps_da_license).

-include("openapi.hrl").

-export([openapi_vps_da_license/0]).

-export([openapi_vps_da_license/1]).

-export_type([openapi_vps_da_license/0]).

-type openapi_vps_da_license() ::
  [ {'name', binary() }
  | {'sub_name', binary() }
  | {'cost', integer() }
  | {'img_disabled', binary() }
  | {'img_active', binary() }
  ].


openapi_vps_da_license() ->
    openapi_vps_da_license([]).

openapi_vps_da_license(Fields) ->
  Default = [ {'name', binary() }
            , {'sub_name', binary() }
            , {'cost', integer() }
            , {'img_disabled', binary() }
            , {'img_active', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

