-module(openapi_home_details_modules_quickservers).

-include("openapi.hrl").

-export([openapi_home_details_modules_quickservers/0]).

-export([openapi_home_details_modules_quickservers/1]).

-export_type([openapi_home_details_modules_quickservers/0]).

-type openapi_home_details_modules_quickservers() ::
  [ {'icon', binary() }
  | {'view_link', binary() }
  | {'heading', binary() }
  | {'buy_link', binary() }
  | {'list_link', binary() }
  ].


openapi_home_details_modules_quickservers() ->
    openapi_home_details_modules_quickservers([]).

openapi_home_details_modules_quickservers(Fields) ->
  Default = [ {'icon', binary() }
            , {'view_link', binary() }
            , {'heading', binary() }
            , {'buy_link', binary() }
            , {'list_link', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

