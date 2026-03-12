-module(openapi_servers_buy_now_error).

-include("openapi.hrl").

-export([openapi_servers_buy_now_error/0]).

-export([openapi_servers_buy_now_error/1]).

-export_type([openapi_servers_buy_now_error/0]).

-type openapi_servers_buy_now_error() ::
  [ {'success', boolean() }
  | {'text', binary() }
  | {'errors', list(binary()) }
  ].


openapi_servers_buy_now_error() ->
    openapi_servers_buy_now_error([]).

openapi_servers_buy_now_error(Fields) ->
  Default = [ {'success', boolean() }
            , {'text', binary() }
            , {'errors', list(binary()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

