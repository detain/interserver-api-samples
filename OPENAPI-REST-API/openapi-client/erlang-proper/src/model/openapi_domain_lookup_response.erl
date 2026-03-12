-module(openapi_domain_lookup_response).

-include("openapi.hrl").

-export([openapi_domain_lookup_response/0]).

-export([openapi_domain_lookup_response/1]).

-export_type([openapi_domain_lookup_response/0]).

-type openapi_domain_lookup_response() ::
  [ {'available', boolean() }
  | {'premium', boolean() }
  | {'website', boolean() }
  | {'domain_service', boolean() }
  | {'service', map() }
  | {'whois_privacy', boolean() }
  | {'new', binary() }
  | {'renewal', binary() }
  | {'transfer', binary() }
  | {'fields', map() }
  | {'currencies', map() }
  ].


openapi_domain_lookup_response() ->
    openapi_domain_lookup_response([]).

openapi_domain_lookup_response(Fields) ->
  Default = [ {'available', boolean() }
            , {'premium', boolean() }
            , {'website', boolean() }
            , {'domain_service', boolean() }
            , {'service', map() }
            , {'whois_privacy', boolean() }
            , {'new', binary() }
            , {'renewal', binary() }
            , {'transfer', binary() }
            , {'fields', map() }
            , {'currencies', map() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

