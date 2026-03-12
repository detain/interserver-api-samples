-module(openapi_delete_filter_400_response).

-include("openapi.hrl").

-export([openapi_delete_filter_400_response/0]).

-export([openapi_delete_filter_400_response/1]).

-export_type([openapi_delete_filter_400_response/0]).

-type openapi_delete_filter_400_response() ::
  [ {'success', boolean() }
  | {'text', binary() }
  ].


openapi_delete_filter_400_response() ->
    openapi_delete_filter_400_response([]).

openapi_delete_filter_400_response(Fields) ->
  Default = [ {'success', boolean() }
            , {'text', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

