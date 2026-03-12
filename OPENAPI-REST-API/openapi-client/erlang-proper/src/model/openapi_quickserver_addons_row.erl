-module(openapi_quickserver_addons_row).

-include("openapi.hrl").

-export([openapi_quickserver_addons_row/0]).

-export([openapi_quickserver_addons_row/1]).

-export_type([openapi_quickserver_addons_row/0]).

-type openapi_quickserver_addons_row() ::
  [ {'desc', binary() }
  | {'value', binary() }
  ].


openapi_quickserver_addons_row() ->
    openapi_quickserver_addons_row([]).

openapi_quickserver_addons_row(Fields) ->
  Default = [ {'desc', binary() }
            , {'value', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

