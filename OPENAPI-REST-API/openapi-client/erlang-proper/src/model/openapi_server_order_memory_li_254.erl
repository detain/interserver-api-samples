-module(openapi_server_order_memory_li_254).

-include("openapi.hrl").

-export([openapi_server_order_memory_li_254/0]).

-export([openapi_server_order_memory_li_254/1]).

-export_type([openapi_server_order_memory_li_254/0]).

-type openapi_server_order_memory_li_254() ::
  [ {'65', openapi_server_order_memory:openapi_server_order_memory() }
  ].


openapi_server_order_memory_li_254() ->
    openapi_server_order_memory_li_254([]).

openapi_server_order_memory_li_254(Fields) ->
  Default = [ {'65', openapi_server_order_memory:openapi_server_order_memory() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

