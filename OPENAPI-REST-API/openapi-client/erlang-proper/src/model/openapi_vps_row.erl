-module(openapi_vps_row).

-include("openapi.hrl").

-export([openapi_vps_row/0]).

-export([openapi_vps_row/1]).

-export_type([openapi_vps_row/0]).

-type openapi_vps_row() ::
  [ {'vps_id', binary() }
  | {'vps_name', binary() }
  | {'repeat_invoices_cost', binary() }
  | {'vps_hostname', binary() }
  | {'vps_ip', binary() }
  | {'vps_status', binary() }
  | {'services_name', binary() }
  | {'vps_comment', binary() }
  ].


openapi_vps_row() ->
    openapi_vps_row([]).

openapi_vps_row(Fields) ->
  Default = [ {'vps_id', binary() }
            , {'vps_name', binary() }
            , {'repeat_invoices_cost', binary() }
            , {'vps_hostname', binary() }
            , {'vps_ip', binary() }
            , {'vps_status', binary() }
            , {'services_name', binary() }
            , {'vps_comment', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

