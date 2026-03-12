-module(openapi_enable_scrub_500_response).

-include("openapi.hrl").

-export([openapi_enable_scrub_500_response/0]).

-export([openapi_enable_scrub_500_response/1]).

-export_type([openapi_enable_scrub_500_response/0]).

-type openapi_enable_scrub_500_response() ::
  [ {'success', boolean() }
  | {'text', binary() }
  ].


openapi_enable_scrub_500_response() ->
    openapi_enable_scrub_500_response([]).

openapi_enable_scrub_500_response(Fields) ->
  Default = [ {'success', boolean() }
            , {'text', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

