-module(openapi_billing_invoice_list).

-export([encode/1]).

-export_type([openapi_billing_invoice_list/0]).

-type openapi_billing_invoice_list() ::
    #{ 'rows' => list(),
       'summary' => maps:map()
     }.

encode(#{ 'rows' := Rows,
          'summary' := Summary
        }) ->
    #{ 'rows' => Rows,
       'summary' => Summary
     }.
