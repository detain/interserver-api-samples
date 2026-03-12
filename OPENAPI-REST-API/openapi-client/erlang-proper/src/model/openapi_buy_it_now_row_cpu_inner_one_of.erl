-module(openapi_buy_it_now_row_cpu_inner_one_of).

-include("openapi.hrl").

-export([openapi_buy_it_now_row_cpu_inner_one_of/0]).

-export([openapi_buy_it_now_row_cpu_inner_one_of/1]).

-export_type([openapi_buy_it_now_row_cpu_inner_one_of/0]).

-type openapi_buy_it_now_row_cpu_inner_one_of() ::
  [ {'img', binary() }
  | {'type', binary() }
  | {'speed', binary() }
  | {'num_cpus', binary() }
  | {'num_cores', binary() }
  ].


openapi_buy_it_now_row_cpu_inner_one_of() ->
    openapi_buy_it_now_row_cpu_inner_one_of([]).

openapi_buy_it_now_row_cpu_inner_one_of(Fields) ->
  Default = [ {'img', binary() }
            , {'type', binary() }
            , {'speed', binary() }
            , {'num_cpus', binary() }
            , {'num_cores', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

