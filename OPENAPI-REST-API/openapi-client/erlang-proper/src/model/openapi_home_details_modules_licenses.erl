-module(openapi_home_details_modules_licenses).

-include("openapi.hrl").

-export([openapi_home_details_modules_licenses/0]).

-export([openapi_home_details_modules_licenses/1]).

-export_type([openapi_home_details_modules_licenses/0]).

-type openapi_home_details_modules_licenses() ::
  [ {'icon', binary() }
  | {'view_link', binary() }
  | {'heading', binary() }
  | {'buy_link', binary() }
  | {'list_link', binary() }
  ].


openapi_home_details_modules_licenses() ->
    openapi_home_details_modules_licenses([]).

openapi_home_details_modules_licenses(Fields) ->
  Default = [ {'icon', binary() }
            , {'view_link', binary() }
            , {'heading', binary() }
            , {'buy_link', binary() }
            , {'list_link', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

