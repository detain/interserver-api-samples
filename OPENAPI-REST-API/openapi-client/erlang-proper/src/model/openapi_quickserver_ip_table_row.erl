-module(openapi_quickserver_ip_table_row).

-include("openapi.hrl").

-export([openapi_quickserver_ip_table_row/0]).

-export([openapi_quickserver_ip_table_row/1]).

-export_type([openapi_quickserver_ip_table_row/0]).

-type openapi_quickserver_ip_table_row() ::
  [ {'desc', binary() }
  | {'value', binary() }
  ].


openapi_quickserver_ip_table_row() ->
    openapi_quickserver_ip_table_row([]).

openapi_quickserver_ip_table_row(Fields) ->
  Default = [ {'desc', binary() }
            , {'value', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

