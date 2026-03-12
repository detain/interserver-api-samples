-module(openapi_domain_order_tld_services).

-include("openapi.hrl").

-export([openapi_domain_order_tld_services/0]).

-export([openapi_domain_order_tld_services/1]).

-export_type([openapi_domain_order_tld_services/0]).

-type openapi_domain_order_tld_services() ::
  [ {'_asia', integer() }
  | {'_be', integer() }
  | {'_biz', integer() }
  | {'_ca', integer() }
  ].


openapi_domain_order_tld_services() ->
    openapi_domain_order_tld_services([]).

openapi_domain_order_tld_services(Fields) ->
  Default = [ {'.asia', integer() }
            , {'.be', integer() }
            , {'.biz', integer() }
            , {'.ca', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

