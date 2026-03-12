-module(openapi_domain_order_response_attributes).

-include("openapi.hrl").

-export([openapi_domain_order_response_attributes/0]).

-export([openapi_domain_order_response_attributes/1]).

-export_type([openapi_domain_order_response_attributes/0]).

-type openapi_domain_order_response_attributes() ::
  [ {'id', binary() }
  | {'admin_email', binary() }
  ].


openapi_domain_order_response_attributes() ->
    openapi_domain_order_response_attributes([]).

openapi_domain_order_response_attributes(Fields) ->
  Default = [ {'id', binary() }
            , {'admin_email', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

