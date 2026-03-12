-module(openapi_buy_it_now_server_order_200_response).

-include("openapi.hrl").

-export([openapi_buy_it_now_server_order_200_response/0]).

-export([openapi_buy_it_now_server_order_200_response/1]).

-export_type([openapi_buy_it_now_server_order_200_response/0]).

-type openapi_buy_it_now_server_order_200_response() ::
  [ {'bandwidth', list(openapi_buy_it_now_server_order_200_response_bandwidth_inner:openapi_buy_it_now_server_order_200_response_bandwidth_inner()) }
  | {'ips', list(openapi_buy_it_now_server_order_200_response_ips_inner:openapi_buy_it_now_server_order_200_response_ips_inner()) }
  | {'os', list(openapi_buy_it_now_server_order_200_response_os_inner:openapi_buy_it_now_server_order_200_response_os_inner()) }
  | {'cp', list(openapi_buy_it_now_server_order_200_response_cp_inner:openapi_buy_it_now_server_order_200_response_cp_inner()) }
  | {'raid', list(openapi_buy_it_now_server_order_200_response_raid_inner:openapi_buy_it_now_server_order_200_response_raid_inner()) }
  ].


openapi_buy_it_now_server_order_200_response() ->
    openapi_buy_it_now_server_order_200_response([]).

openapi_buy_it_now_server_order_200_response(Fields) ->
  Default = [ {'bandwidth', list(openapi_buy_it_now_server_order_200_response_bandwidth_inner:openapi_buy_it_now_server_order_200_response_bandwidth_inner()) }
            , {'ips', list(openapi_buy_it_now_server_order_200_response_ips_inner:openapi_buy_it_now_server_order_200_response_ips_inner()) }
            , {'os', list(openapi_buy_it_now_server_order_200_response_os_inner:openapi_buy_it_now_server_order_200_response_os_inner()) }
            , {'cp', list(openapi_buy_it_now_server_order_200_response_cp_inner:openapi_buy_it_now_server_order_200_response_cp_inner()) }
            , {'raid', list(openapi_buy_it_now_server_order_200_response_raid_inner:openapi_buy_it_now_server_order_200_response_raid_inner()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

