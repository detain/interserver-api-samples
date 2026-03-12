-module(openapi_cpu_with_defaults).

-include("openapi.hrl").

-export([openapi_cpu_with_defaults/0]).

-export([openapi_cpu_with_defaults/1]).

-export_type([openapi_cpu_with_defaults/0]).

-type openapi_cpu_with_defaults() ::
  [ {'id', integer() }
  | {'short_desc', binary() }
  | {'long_desc', binary() }
  | {'type', binary() }
  | {'speed', binary() }
  | {'num_cores', binary() }
  | {'num_cpus', binary() }
  | {'benchmark', binary() }
  | {'monthly_price', integer() }
  | {'monthly_price_display', binary() }
  | {'max_ram', binary() }
  | {'min_ram', binary() }
  | {'max_lff', binary() }
  | {'max_sff', binary() }
  | {'max_nve', binary() }
  | {'visible', binary() }
  | {'active', binary() }
  | {'memory_det', openapi_memory_option:openapi_memory_option() }
  | {'hd_det', openapi_hard_drive:openapi_hard_drive() }
  | {'monthly_fee', binary() }
  ].


openapi_cpu_with_defaults() ->
    openapi_cpu_with_defaults([]).

openapi_cpu_with_defaults(Fields) ->
  Default = [ {'id', integer() }
            , {'short_desc', binary() }
            , {'long_desc', binary() }
            , {'type', binary() }
            , {'speed', binary() }
            , {'num_cores', binary() }
            , {'num_cpus', binary() }
            , {'benchmark', binary() }
            , {'monthly_price', integer() }
            , {'monthly_price_display', binary() }
            , {'max_ram', binary() }
            , {'min_ram', binary() }
            , {'max_lff', binary() }
            , {'max_sff', binary() }
            , {'max_nve', binary() }
            , {'visible', binary() }
            , {'active', binary() }
            , {'memory_det', openapi_memory_option:openapi_memory_option() }
            , {'hd_det', openapi_hard_drive:openapi_hard_drive() }
            , {'monthly_fee', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

