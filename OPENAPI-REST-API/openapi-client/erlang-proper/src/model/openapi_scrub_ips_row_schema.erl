-module(openapi_scrub_ips_row_schema).

-include("openapi.hrl").

-export([openapi_scrub_ips_row_schema/0]).

-export([openapi_scrub_ips_row_schema/1]).

-export_type([openapi_scrub_ips_row_schema/0]).

-type openapi_scrub_ips_row_schema() ::
  [ {'scrub_ip_id', integer() }
  | {'repeat_invoices_cost', integer() }
  | {'scrub_ip_ip', binary() }
  | {'scrub_ip_status', binary() }
  | {'services_name', binary() }
  ].


openapi_scrub_ips_row_schema() ->
    openapi_scrub_ips_row_schema([]).

openapi_scrub_ips_row_schema(Fields) ->
  Default = [ {'scrub_ip_id', integer() }
            , {'repeat_invoices_cost', integer() }
            , {'scrub_ip_ip', binary() }
            , {'scrub_ip_status', binary() }
            , {'services_name', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

