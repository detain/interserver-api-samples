-module(openapi_server_order_bandwidth_li).

-include("openapi.hrl").

-export([openapi_server_order_bandwidth_li/0]).

-export([openapi_server_order_bandwidth_li/1]).

-export_type([openapi_server_order_bandwidth_li/0]).

-type openapi_server_order_bandwidth_li() ::
  [ {'15', openapi_server_order_bandwidth:openapi_server_order_bandwidth() }
  ].


openapi_server_order_bandwidth_li() ->
    openapi_server_order_bandwidth_li([]).

openapi_server_order_bandwidth_li(Fields) ->
  Default = [ {'15', openapi_server_order_bandwidth:openapi_server_order_bandwidth() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

