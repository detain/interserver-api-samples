-module(openapi_billing_invoice_list).

-include("openapi.hrl").

-export([openapi_billing_invoice_list/0]).

-export([openapi_billing_invoice_list/1]).

-export_type([openapi_billing_invoice_list/0]).

-type openapi_billing_invoice_list() ::
  [ {'rows', list(map()) }
  | {'summary', map() }
  ].


openapi_billing_invoice_list() ->
    openapi_billing_invoice_list([]).

openapi_billing_invoice_list(Fields) ->
  Default = [ {'rows', list(map()) }
            , {'summary', map() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

