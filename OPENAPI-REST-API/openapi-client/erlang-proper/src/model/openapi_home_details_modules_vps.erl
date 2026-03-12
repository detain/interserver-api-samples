-module(openapi_home_details_modules_vps).

-include("openapi.hrl").

-export([openapi_home_details_modules_vps/0]).

-export([openapi_home_details_modules_vps/1]).

-export_type([openapi_home_details_modules_vps/0]).

-type openapi_home_details_modules_vps() ::
  [ {'icon', binary() }
  | {'view_link', binary() }
  | {'heading', binary() }
  | {'buy_link', binary() }
  | {'list_link', binary() }
  ].


openapi_home_details_modules_vps() ->
    openapi_home_details_modules_vps([]).

openapi_home_details_modules_vps(Fields) ->
  Default = [ {'icon', binary() }
            , {'view_link', binary() }
            , {'heading', binary() }
            , {'buy_link', binary() }
            , {'list_link', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

