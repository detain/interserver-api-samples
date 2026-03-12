-module(openapi_affiliate_payment_setup).

-include("openapi.hrl").

-export([openapi_affiliate_payment_setup/0]).

-export([openapi_affiliate_payment_setup/1]).

-export_type([openapi_affiliate_payment_setup/0]).

-type openapi_affiliate_payment_setup() ::
  [ {'affiliate_paypal', binary() }
  | {'affiliate_payment_method', binary() }
  ].


openapi_affiliate_payment_setup() ->
    openapi_affiliate_payment_setup([]).

openapi_affiliate_payment_setup(Fields) ->
  Default = [ {'affiliate_paypal', binary() }
            , {'affiliate_payment_method', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

