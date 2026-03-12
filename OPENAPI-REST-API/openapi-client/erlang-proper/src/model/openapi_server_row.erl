-module(openapi_server_row).

-include("openapi.hrl").

-export([openapi_server_row/0]).

-export([openapi_server_row/1]).

-export_type([openapi_server_row/0]).

-type openapi_server_row() ::
  [ {'server_id', binary() }
  | {'account_lid', binary() }
  | {'server_hostname', binary() }
  | {'server_status', binary() }
  ].


openapi_server_row() ->
    openapi_server_row([]).

openapi_server_row(Fields) ->
  Default = [ {'server_id', binary() }
            , {'account_lid', binary() }
            , {'server_hostname', binary() }
            , {'server_status', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

