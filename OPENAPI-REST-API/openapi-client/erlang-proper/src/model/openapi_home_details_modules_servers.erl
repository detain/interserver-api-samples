-module(openapi_home_details_modules_servers).

-include("openapi.hrl").

-export([openapi_home_details_modules_servers/0]).

-export([openapi_home_details_modules_servers/1]).

-export_type([openapi_home_details_modules_servers/0]).

-type openapi_home_details_modules_servers() ::
  [ {'icon', binary() }
  | {'view_link', binary() }
  | {'heading', binary() }
  | {'buy_link', binary() }
  | {'list_link', binary() }
  ].


openapi_home_details_modules_servers() ->
    openapi_home_details_modules_servers([]).

openapi_home_details_modules_servers(Fields) ->
  Default = [ {'icon', binary() }
            , {'view_link', binary() }
            , {'heading', binary() }
            , {'buy_link', binary() }
            , {'list_link', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

