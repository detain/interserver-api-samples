-module(openapi_server_order_cpu).

-include("openapi.hrl").

-export([openapi_server_order_cpu/0]).

-export([openapi_server_order_cpu/1]).

-export_type([openapi_server_order_cpu/0]).

-type openapi_server_order_cpu() ::
  [ {'id', binary() }
  | {'price', integer() }
  | {'img', binary() }
  | {'short_desc', binary() }
  | {'long_desc', binary() }
  | {'location', binary() }
  | {'fsb', binary() }
  | {'manu', binary() }
  | {'type', binary() }
  | {'speed', binary() }
  | {'cache', binary() }
  | {'active', binary() }
  | {'num_cores', binary() }
  | {'num_cpus', binary() }
  | {'benchmark', binary() }
  | {'monthly_price', integer() }
  | {'max_ram', binary() }
  | {'min_ram', binary() }
  | {'max_lff', binary() }
  | {'max_sff', binary() }
  | {'max_nve', binary() }
  | {'visible', binary() }
  | {'hd_ids', openapi_any_type:openapi_any_type() }
  | {'price_display', binary() }
  | {'monthly_price_display', binary() }
  ].


openapi_server_order_cpu() ->
    openapi_server_order_cpu([]).

openapi_server_order_cpu(Fields) ->
  Default = [ {'id', binary() }
            , {'price', integer() }
            , {'img', binary() }
            , {'short_desc', binary() }
            , {'long_desc', binary() }
            , {'location', binary() }
            , {'fsb', binary() }
            , {'manu', binary() }
            , {'type', binary() }
            , {'speed', binary() }
            , {'cache', binary() }
            , {'active', binary() }
            , {'num_cores', binary() }
            , {'num_cpus', binary() }
            , {'benchmark', binary() }
            , {'monthly_price', integer() }
            , {'max_ram', binary() }
            , {'min_ram', binary() }
            , {'max_lff', binary() }
            , {'max_sff', binary() }
            , {'max_nve', binary() }
            , {'visible', binary() }
            , {'hd_ids', openapi_any_type:openapi_any_type() }
            , {'price_display', binary() }
            , {'monthly_price_display', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

