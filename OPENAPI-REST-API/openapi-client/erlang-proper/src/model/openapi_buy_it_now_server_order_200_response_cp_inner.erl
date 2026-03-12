-module(openapi_buy_it_now_server_order_200_response_cp_inner).

-include("openapi.hrl").

-export([openapi_buy_it_now_server_order_200_response_cp_inner/0]).

-export([openapi_buy_it_now_server_order_200_response_cp_inner/1]).

-export_type([openapi_buy_it_now_server_order_200_response_cp_inner/0]).

-type openapi_buy_it_now_server_order_200_response_cp_inner() ::
  [ {'id', binary() }
  | {'short_desc', binary() }
  | {'long_desc', binary() }
  | {'os_type', binary() }
  | {'monthly_price', binary() }
  ].


openapi_buy_it_now_server_order_200_response_cp_inner() ->
    openapi_buy_it_now_server_order_200_response_cp_inner([]).

openapi_buy_it_now_server_order_200_response_cp_inner(Fields) ->
  Default = [ {'id', binary() }
            , {'short_desc', binary() }
            , {'long_desc', binary() }
            , {'os_type', binary() }
            , {'monthly_price', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

