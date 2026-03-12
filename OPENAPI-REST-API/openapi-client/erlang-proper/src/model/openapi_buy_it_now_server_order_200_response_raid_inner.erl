-module(openapi_buy_it_now_server_order_200_response_raid_inner).

-include("openapi.hrl").

-export([openapi_buy_it_now_server_order_200_response_raid_inner/0]).

-export([openapi_buy_it_now_server_order_200_response_raid_inner/1]).

-export_type([openapi_buy_it_now_server_order_200_response_raid_inner/0]).

-type openapi_buy_it_now_server_order_200_response_raid_inner() ::
  [ {'id', binary() }
  | {'short_desc', binary() }
  | {'long_desc', binary() }
  | {'monthly_price', binary() }
  ].


openapi_buy_it_now_server_order_200_response_raid_inner() ->
    openapi_buy_it_now_server_order_200_response_raid_inner([]).

openapi_buy_it_now_server_order_200_response_raid_inner(Fields) ->
  Default = [ {'id', binary() }
            , {'short_desc', binary() }
            , {'long_desc', binary() }
            , {'monthly_price', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

