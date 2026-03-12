-module(openapi_domain_prov_process_pending_attributes).

-include("openapi.hrl").

-export([openapi_domain_prov_process_pending_attributes/0]).

-export([openapi_domain_prov_process_pending_attributes/1]).

-export_type([openapi_domain_prov_process_pending_attributes/0]).

-type openapi_domain_prov_process_pending_attributes() ::
  [ {'id', binary() }
  | {'order_id', binary() }
  | {'registration_expiration_date', binary() }
  | {'f_auto_renew', binary() }
  ].


openapi_domain_prov_process_pending_attributes() ->
    openapi_domain_prov_process_pending_attributes([]).

openapi_domain_prov_process_pending_attributes(Fields) ->
  Default = [ {'id', binary() }
            , {'order_id', binary() }
            , {'registration expiration date', binary() }
            , {'f_auto_renew', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

