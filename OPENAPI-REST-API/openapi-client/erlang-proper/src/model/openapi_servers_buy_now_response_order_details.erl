-module(openapi_servers_buy_now_response_order_details).

-include("openapi.hrl").

-export([openapi_servers_buy_now_response_order_details/0]).

-export([openapi_servers_buy_now_response_order_details/1]).

-export_type([openapi_servers_buy_now_response_order_details/0]).

-type openapi_servers_buy_now_response_order_details() ::
  [ {'service_id', integer() }
  | {'invoice_id', integer() }
  ].


openapi_servers_buy_now_response_order_details() ->
    openapi_servers_buy_now_response_order_details([]).

openapi_servers_buy_now_response_order_details(Fields) ->
  Default = [ {'service_id', integer() }
            , {'invoice_id', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

