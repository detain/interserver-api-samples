-module(openapi_billing_payment_method_request).

-include("openapi.hrl").

-export([openapi_billing_payment_method_request/0]).

-export([openapi_billing_payment_method_request/1]).

-export_type([openapi_billing_payment_method_request/0]).

-type openapi_billing_payment_method_request() ::
  [ {'payment_method', binary() }
  | {'cc_auto', binary() }
  ].


openapi_billing_payment_method_request() ->
    openapi_billing_payment_method_request([]).

openapi_billing_payment_method_request(Fields) ->
  Default = [ {'payment_method', binary() }
            , {'cc_auto', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

