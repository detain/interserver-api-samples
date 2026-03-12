-module(openapi_quickserver_ip_info).

-include("openapi.hrl").

-export([openapi_quickserver_ip_info/0]).

-export([openapi_quickserver_ip_info/1]).

-export_type([openapi_quickserver_ip_info/0]).

-type openapi_quickserver_ip_info() ::
  [ {'title', binary() }
  | {'rows', list(openapi_quickserver_ip_table_row:openapi_quickserver_ip_table_row()) }
  ].


openapi_quickserver_ip_info() ->
    openapi_quickserver_ip_info([]).

openapi_quickserver_ip_info(Fields) ->
  Default = [ {'title', binary() }
            , {'rows', list(openapi_quickserver_ip_table_row:openapi_quickserver_ip_table_row()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

