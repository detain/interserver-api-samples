-module(openapi_buy_it_now_list).

-include("openapi.hrl").

-export([openapi_buy_it_now_list/0]).

-export_type([openapi_buy_it_now_list/0]).

-type openapi_buy_it_now_list() ::
  list(openapi_buy_it_now_row:openapi_buy_it_now_row()).

openapi_buy_it_now_list() ->
  list(openapi_buy_it_now_row:openapi_buy_it_now_row()).

