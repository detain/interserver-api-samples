-module(openapi_success_text_response).

-include("openapi.hrl").

-export([openapi_success_text_response/0]).

-export([openapi_success_text_response/1]).

-export_type([openapi_success_text_response/0]).

-type openapi_success_text_response() ::
  [ {'success', boolean() }
  | {'text', binary() }
  | {'action', binary() }
  ].


openapi_success_text_response() ->
    openapi_success_text_response([]).

openapi_success_text_response(Fields) ->
  Default = [ {'success', boolean() }
            , {'text', binary() }
            , {'action', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

