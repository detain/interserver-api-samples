-module(openapi_search_autocomplete_response).

-include("openapi.hrl").

-export([openapi_search_autocomplete_response/0]).

-export([openapi_search_autocomplete_response/1]).

-export_type([openapi_search_autocomplete_response/0]).

-type openapi_search_autocomplete_response() ::
  [ 
  ].


openapi_search_autocomplete_response() ->
    openapi_search_autocomplete_response([]).

openapi_search_autocomplete_response(Fields) ->
  Default = [ 
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

