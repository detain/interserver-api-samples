-module(openapi_server_order_os_li).

-include("openapi.hrl").

-export([openapi_server_order_os_li/0]).

-export([openapi_server_order_os_li/1]).

-export_type([openapi_server_order_os_li/0]).

-type openapi_server_order_os_li() ::
  [ {'51', openapi_server_order_os:openapi_server_order_os() }
  ].


openapi_server_order_os_li() ->
    openapi_server_order_os_li([]).

openapi_server_order_os_li(Fields) ->
  Default = [ {'51', openapi_server_order_os:openapi_server_order_os() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

