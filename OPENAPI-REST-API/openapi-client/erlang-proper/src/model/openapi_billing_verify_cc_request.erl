-module(openapi_billing_verify_cc_request).

-include("openapi.hrl").

-export([openapi_billing_verify_cc_request/0]).

-export([openapi_billing_verify_cc_request/1]).

-export_type([openapi_billing_verify_cc_request/0]).

-type openapi_billing_verify_cc_request() ::
  [ {'idx', integer() }
  | {'cc_ccv2', binary() }
  | {'cc_amount1', binary() }
  | {'cc_amount2', binary() }
  | {'terms', boolean() }
  ].


openapi_billing_verify_cc_request() ->
    openapi_billing_verify_cc_request([]).

openapi_billing_verify_cc_request(Fields) ->
  Default = [ {'idx', integer() }
            , {'cc_ccv2', binary() }
            , {'cc_amount1', binary() }
            , {'cc_amount2', binary() }
            , {'terms', boolean() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

