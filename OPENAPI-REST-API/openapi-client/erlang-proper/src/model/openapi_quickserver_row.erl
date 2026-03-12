-module(openapi_quickserver_row).

-include("openapi.hrl").

-export([openapi_quickserver_row/0]).

-export([openapi_quickserver_row/1]).

-export_type([openapi_quickserver_row/0]).

-type openapi_quickserver_row() ::
  [ {'qs_id', binary() }
  | {'qs_name', binary() }
  | {'cost', binary() }
  | {'qs_hostname', binary() }
  | {'qs_status', binary() }
  | {'qs_comment', binary() }
  ].


openapi_quickserver_row() ->
    openapi_quickserver_row([]).

openapi_quickserver_row(Fields) ->
  Default = [ {'qs_id', binary() }
            , {'qs_name', binary() }
            , {'cost', binary() }
            , {'qs_hostname', binary() }
            , {'qs_status', binary() }
            , {'qs_comment', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

