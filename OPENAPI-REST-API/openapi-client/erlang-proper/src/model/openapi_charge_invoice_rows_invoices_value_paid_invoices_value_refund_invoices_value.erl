-module(openapi_charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value).

-include("openapi.hrl").

-export([openapi_charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value/0]).

-export([openapi_charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value/1]).

-export_type([openapi_charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value/0]).

-type openapi_charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value() ::
  [ {'invoices_id', integer() }
  | {'invoices_description', binary() }
  | {'invoices_amount', integer() }
  | {'invoices_date', binary() }
  | {'invoices_currency', binary() }
  | {'currency_symbol', binary() }
  | {'invoices_date_formatted', binary() }
  ].


openapi_charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value() ->
    openapi_charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value([]).

openapi_charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value(Fields) ->
  Default = [ {'invoices_id', integer() }
            , {'invoices_description', binary() }
            , {'invoices_amount', integer() }
            , {'invoices_date', binary() }
            , {'invoices_currency', binary() }
            , {'currency_symbol', binary() }
            , {'invoices_date_formatted', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

