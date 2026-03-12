-module(openapi_dns_new_domain).

-include("openapi.hrl").

-export([openapi_dns_new_domain/0]).

-export([openapi_dns_new_domain/1]).

-export_type([openapi_dns_new_domain/0]).

-type openapi_dns_new_domain() ::
  [ {'domain', binary() }
  | {'ip', binary() }
  ].


openapi_dns_new_domain() ->
    openapi_dns_new_domain([]).

openapi_dns_new_domain(Fields) ->
  Default = [ {'domain', binary() }
            , {'ip', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

