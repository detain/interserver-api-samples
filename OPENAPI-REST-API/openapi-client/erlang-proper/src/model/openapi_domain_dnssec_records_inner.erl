-module(openapi_domain_dnssec_records_inner).

-include("openapi.hrl").

-export([openapi_domain_dnssec_records_inner/0]).

-export([openapi_domain_dnssec_records_inner/1]).

-export_type([openapi_domain_dnssec_records_inner/0]).

-type openapi_domain_dnssec_records_inner() ::
  [ {'algorithm', binary() }
  | {'digest_type', binary() }
  | {'digest', binary() }
  | {'key_tag', binary() }
  ].


openapi_domain_dnssec_records_inner() ->
    openapi_domain_dnssec_records_inner([]).

openapi_domain_dnssec_records_inner(Fields) ->
  Default = [ {'algorithm', binary() }
            , {'digest_type', binary() }
            , {'digest', binary() }
            , {'key_tag', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

