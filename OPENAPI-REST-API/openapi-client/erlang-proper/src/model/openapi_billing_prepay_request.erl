-module(openapi_billing_prepay_request).

-include("openapi.hrl").

-export([openapi_billing_prepay_request/0]).

-export([openapi_billing_prepay_request/1]).

-export_type([openapi_billing_prepay_request/0]).

-type openapi_billing_prepay_request() ::
  [ {'module', binary() }
  | {'amount', integer() }
  | {'automatic_use', binary() }
  ].


openapi_billing_prepay_request() ->
    openapi_billing_prepay_request([]).

openapi_billing_prepay_request(Fields) ->
  Default = [ {'module', binary() }
            , {'amount', integer() }
            , {'automatic_use', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

