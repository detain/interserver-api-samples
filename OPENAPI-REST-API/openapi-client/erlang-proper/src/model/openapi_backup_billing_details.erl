-module(openapi_backup_billing_details).

-include("openapi.hrl").

-export([openapi_backup_billing_details/0]).

-export([openapi_backup_billing_details/1]).

-export_type([openapi_backup_billing_details/0]).

-type openapi_backup_billing_details() ::
  [ {'service_last_invoice_date', binary() }
  | {'service_payment_status', binary() }
  | {'service_frequency', binary() }
  | {'next_date', binary() }
  | {'service_next_invoice_date', binary() }
  | {'service_currency', binary() }
  | {'service_currency_symbol', binary() }
  | {'service_cost_info', binary() }
  | {'service_extra', binary() }
  | {'service_extra_json', binary() }
  ].


openapi_backup_billing_details() ->
    openapi_backup_billing_details([]).

openapi_backup_billing_details(Fields) ->
  Default = [ {'service_last_invoice_date', binary() }
            , {'service_payment_status', binary() }
            , {'service_frequency', binary() }
            , {'next_date', binary() }
            , {'service_next_invoice_date', binary() }
            , {'service_currency', binary() }
            , {'service_currency_symbol', binary() }
            , {'service_cost_info', binary() }
            , {'service_extra', binary() }
            , {'service_extra_json', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

