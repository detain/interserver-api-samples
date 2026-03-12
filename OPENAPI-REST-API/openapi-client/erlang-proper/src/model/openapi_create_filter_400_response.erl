-module(openapi_create_filter_400_response).

-include("openapi.hrl").

-export([openapi_create_filter_400_response/0]).

-export([openapi_create_filter_400_response/1]).

-export_type([openapi_create_filter_400_response/0]).

-type openapi_create_filter_400_response() ::
  [ {'success', boolean() }
  | {'text', binary() }
  | {'errors', list(binary()) }
  ].


openapi_create_filter_400_response() ->
    openapi_create_filter_400_response([]).

openapi_create_filter_400_response(Fields) ->
  Default = [ {'success', boolean() }
            , {'text', binary() }
            , {'errors', list(binary()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

