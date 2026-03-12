-module(openapi_home_details_modules_domains).

-include("openapi.hrl").

-export([openapi_home_details_modules_domains/0]).

-export([openapi_home_details_modules_domains/1]).

-export_type([openapi_home_details_modules_domains/0]).

-type openapi_home_details_modules_domains() ::
  [ {'icon', binary() }
  | {'view_link', binary() }
  | {'heading', binary() }
  | {'buy_link', binary() }
  | {'list_link', binary() }
  ].


openapi_home_details_modules_domains() ->
    openapi_home_details_modules_domains([]).

openapi_home_details_modules_domains(Fields) ->
  Default = [ {'icon', binary() }
            , {'view_link', binary() }
            , {'heading', binary() }
            , {'buy_link', binary() }
            , {'list_link', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

