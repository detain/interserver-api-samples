-module(openapi_charge_invoice_rows).

-include("openapi.hrl").

-export([openapi_charge_invoice_rows/0]).

-export([openapi_charge_invoice_rows/1]).

-export_type([openapi_charge_invoice_rows/0]).

-type openapi_charge_invoice_rows() ::
  [ {'success', boolean() }
  | {'invoices', map() }
  ].


openapi_charge_invoice_rows() ->
    openapi_charge_invoice_rows([]).

openapi_charge_invoice_rows(Fields) ->
  Default = [ {'success', boolean() }
            , {'invoices', map() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

