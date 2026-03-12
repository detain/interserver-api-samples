-module(openapi_quickserver_order_server_details381).

-include("openapi.hrl").

-export([openapi_quickserver_order_server_details381/0]).

-export([openapi_quickserver_order_server_details381/1]).

-export_type([openapi_quickserver_order_server_details381/0]).

-type openapi_quickserver_order_server_details381() ::
  [ {'cpu', binary() }
  | {'ram', binary() }
  | {'hd', binary() }
  | {'cores', integer() }
  | {'cost', binary() }
  ].


openapi_quickserver_order_server_details381() ->
    openapi_quickserver_order_server_details381([]).

openapi_quickserver_order_server_details381(Fields) ->
  Default = [ {'cpu', binary() }
            , {'ram', binary() }
            , {'hd', binary() }
            , {'cores', integer() }
            , {'cost', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

