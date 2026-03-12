-module(openapi_domain_billing_extra).

-include("openapi.hrl").

-export([openapi_domain_billing_extra/0]).

-export([openapi_domain_billing_extra/1]).

-export_type([openapi_domain_billing_extra/0]).

-type openapi_domain_billing_extra() ::
  [ {'order', openapi_domain_order_response:openapi_domain_order_response() }
  | {'order_id', binary() }
  | {'domain_id', binary() }
  | {'provProcessPending', openapi_domain_prov_process_pending:openapi_domain_prov_process_pending() }
  | {'email', binary() }
  | {'firstname', binary() }
  | {'lastname', binary() }
  | {'company', binary() }
  | {'address', binary() }
  | {'address2', binary() }
  | {'address3', binary() }
  | {'city', binary() }
  | {'state', binary() }
  | {'zip', binary() }
  | {'country', binary() }
  | {'phone', binary() }
  | {'fax', binary() }
  ].


openapi_domain_billing_extra() ->
    openapi_domain_billing_extra([]).

openapi_domain_billing_extra(Fields) ->
  Default = [ {'order', openapi_domain_order_response:openapi_domain_order_response() }
            , {'order_id', binary() }
            , {'domain_id', binary() }
            , {'provProcessPending', openapi_domain_prov_process_pending:openapi_domain_prov_process_pending() }
            , {'email', binary() }
            , {'firstname', binary() }
            , {'lastname', binary() }
            , {'company', binary() }
            , {'address', binary() }
            , {'address2', binary() }
            , {'address3', binary() }
            , {'city', binary() }
            , {'state', binary() }
            , {'zip', binary() }
            , {'country', binary() }
            , {'phone', binary() }
            , {'fax', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

