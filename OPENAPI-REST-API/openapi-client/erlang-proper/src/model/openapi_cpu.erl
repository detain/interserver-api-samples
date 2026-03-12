-module(openapi_cpu).

-include("openapi.hrl").

-export([openapi_cpu/0]).

-export([openapi_cpu/1]).

-export_type([openapi_cpu/0]).

-type openapi_cpu() ::
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
  ].


openapi_cpu() ->
    openapi_cpu([]).

openapi_cpu(Fields) ->
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
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

