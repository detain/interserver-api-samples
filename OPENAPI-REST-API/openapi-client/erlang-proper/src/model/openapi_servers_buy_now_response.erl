-module(openapi_servers_buy_now_response).

-include("openapi.hrl").

-export([openapi_servers_buy_now_response/0]).

-export([openapi_servers_buy_now_response/1]).

-export_type([openapi_servers_buy_now_response/0]).

-type openapi_servers_buy_now_response() ::
  [ {'success', boolean() }
  | {'text', binary() }
  | {'order_details', openapi_servers_buy_now_response_order_details:openapi_servers_buy_now_response_order_details() }
  ].


openapi_servers_buy_now_response() ->
    openapi_servers_buy_now_response([]).

openapi_servers_buy_now_response(Fields) ->
  Default = [ {'success', boolean() }
            , {'text', binary() }
            , {'order_details', openapi_servers_buy_now_response_order_details:openapi_servers_buy_now_response_order_details() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

