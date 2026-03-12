-module(openapi_domain_order).

-include("openapi.hrl").

-export([openapi_domain_order/0]).

-export([openapi_domain_order/1]).

-export_type([openapi_domain_order/0]).

-type openapi_domain_order() ::
  [ {'whoisPrivacyCost', binary() }
  | {'services', openapi_domain_order_services:openapi_domain_order_services() }
  | {'tldServices', map() }
  ].


openapi_domain_order() ->
    openapi_domain_order([]).

openapi_domain_order(Fields) ->
  Default = [ {'whoisPrivacyCost', binary() }
            , {'services', openapi_domain_order_services:openapi_domain_order_services() }
            , {'tldServices', map() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

