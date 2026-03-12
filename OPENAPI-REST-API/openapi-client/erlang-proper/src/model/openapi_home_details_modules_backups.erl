-module(openapi_home_details_modules_backups).

-include("openapi.hrl").

-export([openapi_home_details_modules_backups/0]).

-export([openapi_home_details_modules_backups/1]).

-export_type([openapi_home_details_modules_backups/0]).

-type openapi_home_details_modules_backups() ::
  [ {'icon', binary() }
  | {'view_link', binary() }
  | {'heading', binary() }
  | {'buy_link', binary() }
  | {'list_link', binary() }
  ].


openapi_home_details_modules_backups() ->
    openapi_home_details_modules_backups([]).

openapi_home_details_modules_backups(Fields) ->
  Default = [ {'icon', binary() }
            , {'view_link', binary() }
            , {'heading', binary() }
            , {'buy_link', binary() }
            , {'list_link', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

