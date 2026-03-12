-module(openapi_create_filter_201_response).

-include("openapi.hrl").

-export([openapi_create_filter_201_response/0]).

-export([openapi_create_filter_201_response/1]).

-export_type([openapi_create_filter_201_response/0]).

-type openapi_create_filter_201_response() ::
  [ {'success', boolean() }
  | {'text', binary() }
  ].


openapi_create_filter_201_response() ->
    openapi_create_filter_201_response([]).

openapi_create_filter_201_response(Fields) ->
  Default = [ {'success', boolean() }
            , {'text', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

