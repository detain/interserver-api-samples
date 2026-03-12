-module(openapi_domain_search_response).

-include("openapi.hrl").

-export([openapi_domain_search_response/0]).

-export([openapi_domain_search_response/1]).

-export_type([openapi_domain_search_response/0]).

-type openapi_domain_search_response() ::
  [ {'success', boolean() }
  | {'response_text', binary() }
  | {'response_time', binary() }
  | {'lookup', list(map()) }
  | {'suggest', list(map()) }
  | {'tlds', list(binary()) }
  ].


openapi_domain_search_response() ->
    openapi_domain_search_response([]).

openapi_domain_search_response(Fields) ->
  Default = [ {'success', boolean() }
            , {'response_text', binary() }
            , {'response_time', binary() }
            , {'lookup', list(map()) }
            , {'suggest', list(map()) }
            , {'tlds', list(binary()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

