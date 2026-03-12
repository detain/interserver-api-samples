-module(openapi_scrub_ips_log_row_schema).

-include("openapi.hrl").

-export([openapi_scrub_ips_log_row_schema/0]).

-export([openapi_scrub_ips_log_row_schema/1]).

-export_type([openapi_scrub_ips_log_row_schema/0]).

-type openapi_scrub_ips_log_row_schema() ::
  [ {'date', binary() }
  | {'filter', binary() }
  | {'blocked_ip', binary() }
  | {'target_ip', binary() }
  | {'target_port', integer() }
  | {'protocol', binary() }
  | {'byte_count', integer() }
  | {'xdp_action', binary() }
  ].


openapi_scrub_ips_log_row_schema() ->
    openapi_scrub_ips_log_row_schema([]).

openapi_scrub_ips_log_row_schema(Fields) ->
  Default = [ {'date', binary() }
            , {'filter', binary() }
            , {'blocked_ip', binary() }
            , {'target_ip', binary() }
            , {'target_port', integer() }
            , {'protocol', binary() }
            , {'byte_count', integer() }
            , {'xdp_action', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

