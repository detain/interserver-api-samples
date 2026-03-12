-module(openapi_domain_prov_process_pending).

-include("openapi.hrl").

-export([openapi_domain_prov_process_pending/0]).

-export([openapi_domain_prov_process_pending/1]).

-export_type([openapi_domain_prov_process_pending/0]).

-type openapi_domain_prov_process_pending() ::
  [ {'_OPS_version', binary() }
  | {'response_text', binary() }
  | {'protocol', binary() }
  | {'response_code', binary() }
  | {'action', binary() }
  | {'object', binary() }
  | {'is_success', binary() }
  | {'attributes', openapi_domain_prov_process_pending_attributes:openapi_domain_prov_process_pending_attributes() }
  ].


openapi_domain_prov_process_pending() ->
    openapi_domain_prov_process_pending([]).

openapi_domain_prov_process_pending(Fields) ->
  Default = [ {'_OPS_version', binary() }
            , {'response_text', binary() }
            , {'protocol', binary() }
            , {'response_code', binary() }
            , {'action', binary() }
            , {'object', binary() }
            , {'is_success', binary() }
            , {'attributes', openapi_domain_prov_process_pending_attributes:openapi_domain_prov_process_pending_attributes() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

