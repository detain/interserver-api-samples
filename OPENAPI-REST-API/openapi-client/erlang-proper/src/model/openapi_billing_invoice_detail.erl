-module(openapi_billing_invoice_detail).

-include("openapi.hrl").

-export([openapi_billing_invoice_detail/0]).

-export([openapi_billing_invoice_detail/1]).

-export_type([openapi_billing_invoice_detail/0]).

-type openapi_billing_invoice_detail() ::
  [ 
  ].


openapi_billing_invoice_detail() ->
    openapi_billing_invoice_detail([]).

openapi_billing_invoice_detail(Fields) ->
  Default = [ 
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

