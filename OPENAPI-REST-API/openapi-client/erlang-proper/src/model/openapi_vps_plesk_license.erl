-module(openapi_vps_plesk_license).

-include("openapi.hrl").

-export([openapi_vps_plesk_license/0]).

-export([openapi_vps_plesk_license/1]).

-export_type([openapi_vps_plesk_license/0]).

-type openapi_vps_plesk_license() ::
  [ {'id', integer() }
  | {'name', binary() }
  | {'sub_name', binary() }
  | {'cost', integer() }
  ].


openapi_vps_plesk_license() ->
    openapi_vps_plesk_license([]).

openapi_vps_plesk_license(Fields) ->
  Default = [ {'id', integer() }
            , {'name', binary() }
            , {'sub_name', binary() }
            , {'cost', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

