-module(openapi_billing_prepay_request).

-export([encode/1]).

-export_type([openapi_billing_prepay_request/0]).

-type openapi_billing_prepay_request() ::
    #{ 'module' => binary(),
       'amount' => integer(),
       'automatic_use' => binary()
     }.

encode(#{ 'module' := Module,
          'amount' := Amount,
          'automatic_use' := AutomaticUse
        }) ->
    #{ 'module' => Module,
       'amount' => Amount,
       'automatic_use' => AutomaticUse
     }.
