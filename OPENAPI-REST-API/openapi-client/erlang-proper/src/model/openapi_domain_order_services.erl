-module(openapi_domain_order_services).

-include("openapi.hrl").

-export([openapi_domain_order_services/0]).

-export([openapi_domain_order_services/1]).

-export_type([openapi_domain_order_services/0]).

-type openapi_domain_order_services() ::
  [ {'DomainOrderServices10001', openapi_domain_order_services10001:openapi_domain_order_services10001() }
  ].


openapi_domain_order_services() ->
    openapi_domain_order_services([]).

openapi_domain_order_services(Fields) ->
  Default = [ {'DomainOrderServices10001', openapi_domain_order_services10001:openapi_domain_order_services10001() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

