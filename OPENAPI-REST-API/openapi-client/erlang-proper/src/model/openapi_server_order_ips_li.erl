-module(openapi_server_order_ips_li).

-include("openapi.hrl").

-export([openapi_server_order_ips_li/0]).

-export([openapi_server_order_ips_li/1]).

-export_type([openapi_server_order_ips_li/0]).

-type openapi_server_order_ips_li() ::
  [ {'9', openapi_server_order_ip:openapi_server_order_ip() }
  ].


openapi_server_order_ips_li() ->
    openapi_server_order_ips_li([]).

openapi_server_order_ips_li(Fields) ->
  Default = [ {'9', openapi_server_order_ip:openapi_server_order_ip() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

