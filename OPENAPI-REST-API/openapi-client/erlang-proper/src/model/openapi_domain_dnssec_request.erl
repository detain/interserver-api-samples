-module(openapi_domain_dnssec_request).

-include("openapi.hrl").

-export([openapi_domain_dnssec_request/0]).

-export([openapi_domain_dnssec_request/1]).

-export_type([openapi_domain_dnssec_request/0]).

-type openapi_domain_dnssec_request() ::
  [ {'algorithm', list(integer()) }
  | {'digest_type', list(integer()) }
  | {'digest', list(binary()) }
  | {'key_tag', list(integer()) }
  ].


openapi_domain_dnssec_request() ->
    openapi_domain_dnssec_request([]).

openapi_domain_dnssec_request(Fields) ->
  Default = [ {'algorithm', list(integer()) }
            , {'digest_type', list(integer()) }
            , {'digest', list(binary()) }
            , {'key_tag', list(integer()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

