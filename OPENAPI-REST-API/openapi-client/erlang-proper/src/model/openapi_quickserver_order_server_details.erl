-module(openapi_quickserver_order_server_details).

-include("openapi.hrl").

-export([openapi_quickserver_order_server_details/0]).

-export([openapi_quickserver_order_server_details/1]).

-export_type([openapi_quickserver_order_server_details/0]).

-type openapi_quickserver_order_server_details() ::
  [ {'381', openapi_quickserver_order_server_details381:openapi_quickserver_order_server_details381() }
  ].


openapi_quickserver_order_server_details() ->
    openapi_quickserver_order_server_details([]).

openapi_quickserver_order_server_details(Fields) ->
  Default = [ {'381', openapi_quickserver_order_server_details381:openapi_quickserver_order_server_details381() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

