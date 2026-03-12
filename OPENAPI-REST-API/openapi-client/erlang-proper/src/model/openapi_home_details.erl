-module(openapi_home_details).

-include("openapi.hrl").

-export([openapi_home_details/0]).

-export([openapi_home_details/1]).

-export_type([openapi_home_details/0]).

-type openapi_home_details() ::
  [ {'modules', openapi_home_details_modules:openapi_home_details_modules() }
  ].


openapi_home_details() ->
    openapi_home_details([]).

openapi_home_details(Fields) ->
  Default = [ {'modules', openapi_home_details_modules:openapi_home_details_modules() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

