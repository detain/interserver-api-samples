-module(openapi_license_row).

-include("openapi.hrl").

-export([openapi_license_row/0]).

-export([openapi_license_row/1]).

-export_type([openapi_license_row/0]).

-type openapi_license_row() ::
  [ {'license_id', binary() }
  | {'license_hostname', binary() }
  | {'license_ip', binary() }
  | {'services_name', binary() }
  | {'cost', binary() }
  | {'license_status', binary() }
  | {'invoices_paid', binary() }
  | {'invoices_date', datetime() }
  ].


openapi_license_row() ->
    openapi_license_row([]).

openapi_license_row(Fields) ->
  Default = [ {'license_id', binary() }
            , {'license_hostname', binary() }
            , {'license_ip', binary() }
            , {'services_name', binary() }
            , {'cost', binary() }
            , {'license_status', binary() }
            , {'invoices_paid', binary() }
            , {'invoices_date', datetime() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

