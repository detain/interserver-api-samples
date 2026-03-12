-module(openapi_quickserver_addons).

-include("openapi.hrl").

-export([openapi_quickserver_addons/0]).

-export([openapi_quickserver_addons/1]).

-export_type([openapi_quickserver_addons/0]).

-type openapi_quickserver_addons() ::
  [ {'title', binary() }
  | {'rows', list(openapi_quickserver_addons_row:openapi_quickserver_addons_row()) }
  ].


openapi_quickserver_addons() ->
    openapi_quickserver_addons([]).

openapi_quickserver_addons(Fields) ->
  Default = [ {'title', binary() }
            , {'rows', list(openapi_quickserver_addons_row:openapi_quickserver_addons_row()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

