-module(openapi_domain_order_response).

-include("openapi.hrl").

-export([openapi_domain_order_response/0]).

-export([openapi_domain_order_response/1]).

-export_type([openapi_domain_order_response/0]).

-type openapi_domain_order_response() ::
  [ {'_OPS_version', binary() }
  | {'protocol', binary() }
  | {'is_success', binary() }
  | {'action', binary() }
  | {'attributes', openapi_domain_order_response_attributes:openapi_domain_order_response_attributes() }
  | {'response_text', binary() }
  | {'object', binary() }
  | {'response_code', binary() }
  ].


openapi_domain_order_response() ->
    openapi_domain_order_response([]).

openapi_domain_order_response(Fields) ->
  Default = [ {'_OPS_version', binary() }
            , {'protocol', binary() }
            , {'is_success', binary() }
            , {'action', binary() }
            , {'attributes', openapi_domain_order_response_attributes:openapi_domain_order_response_attributes() }
            , {'response_text', binary() }
            , {'object', binary() }
            , {'response_code', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

