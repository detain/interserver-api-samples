-module(openapi_server_order_memory_li).

-include("openapi.hrl").

-export([openapi_server_order_memory_li/0]).

-export([openapi_server_order_memory_li/1]).

-export_type([openapi_server_order_memory_li/0]).

-type openapi_server_order_memory_li() ::
  [ {'254', openapi_server_order_memory_li_254:openapi_server_order_memory_li_254() }
  ].


openapi_server_order_memory_li() ->
    openapi_server_order_memory_li([]).

openapi_server_order_memory_li(Fields) ->
  Default = [ {'254', openapi_server_order_memory_li_254:openapi_server_order_memory_li_254() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

