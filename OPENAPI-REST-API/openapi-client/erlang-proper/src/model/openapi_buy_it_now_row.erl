-module(openapi_buy_it_now_row).

-include("openapi.hrl").

-export([openapi_buy_it_now_row/0]).

-export([openapi_buy_it_now_row/1]).

-export_type([openapi_buy_it_now_row/0]).

-type openapi_buy_it_now_row() ::
  [ {'server_id', binary() }
  | {'cpu', list(openapi_buy_it_now_row_cpu_inner:openapi_buy_it_now_row_cpu_inner()) }
  | {'memory', binary() }
  | {'disk', map() }
  | {'bandwidth', binary() }
  | {'ips', binary() }
  | {'location', binary() }
  | {'price', integer() }
  ].


openapi_buy_it_now_row() ->
    openapi_buy_it_now_row([]).

openapi_buy_it_now_row(Fields) ->
  Default = [ {'server_id', binary() }
            , {'cpu', list(openapi_buy_it_now_row_cpu_inner:openapi_buy_it_now_row_cpu_inner()) }
            , {'memory', binary() }
            , {'disk', map() }
            , {'bandwidth', binary() }
            , {'ips', binary() }
            , {'location', binary() }
            , {'price', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

