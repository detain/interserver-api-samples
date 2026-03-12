-module(openapi_billing_add_cc_request).

-include("openapi.hrl").

-export([openapi_billing_add_cc_request/0]).

-export([openapi_billing_add_cc_request/1]).

-export_type([openapi_billing_add_cc_request/0]).

-type openapi_billing_add_cc_request() ::
  [ {'name', binary() }
  | {'address', binary() }
  | {'city', binary() }
  | {'state', binary() }
  | {'country', binary() }
  | {'zip', binary() }
  | {'cc', binary() }
  | {'cc_exp', binary() }
  | {'cc_ccv2', binary() }
  ].


openapi_billing_add_cc_request() ->
    openapi_billing_add_cc_request([]).

openapi_billing_add_cc_request(Fields) ->
  Default = [ {'name', binary() }
            , {'address', binary() }
            , {'city', binary() }
            , {'state', binary() }
            , {'country', binary() }
            , {'zip', binary() }
            , {'cc', binary() }
            , {'cc_exp', binary() }
            , {'cc_ccv2', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

