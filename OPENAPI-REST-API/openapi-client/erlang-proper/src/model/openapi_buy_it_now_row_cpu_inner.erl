-module(openapi_buy_it_now_row_cpu_inner).

-include("openapi.hrl").

-export([openapi_buy_it_now_row_cpu_inner/0]).

-export([openapi_buy_it_now_row_cpu_inner/1]).

-export_type([openapi_buy_it_now_row_cpu_inner/0]).

-type openapi_buy_it_now_row_cpu_inner() ::
  [ {'img', binary() }
  | {'type', binary() }
  | {'speed', binary() }
  | {'num_cpus', binary() }
  | {'num_cores', binary() }
  ].


openapi_buy_it_now_row_cpu_inner() ->
    openapi_buy_it_now_row_cpu_inner([]).

openapi_buy_it_now_row_cpu_inner(Fields) ->
  Default = [ {'img', binary() }
            , {'type', binary() }
            , {'speed', binary() }
            , {'num_cpus', binary() }
            , {'num_cores', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

