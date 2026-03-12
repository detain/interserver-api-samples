-module(openapi_queue_response).

-include("openapi.hrl").

-export([openapi_queue_response/0]).

-export([openapi_queue_response/1]).

-export_type([openapi_queue_response/0]).

-type openapi_queue_response() ::
  [ {'text', binary() }
  | {'queueId', integer() }
  ].


openapi_queue_response() ->
    openapi_queue_response([]).

openapi_queue_response(Fields) ->
  Default = [ {'text', binary() }
            , {'queueId', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

