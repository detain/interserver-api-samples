-module(openapi_ticket_new_response).

-include("openapi.hrl").

-export([openapi_ticket_new_response/0]).

-export([openapi_ticket_new_response/1]).

-export_type([openapi_ticket_new_response/0]).

-type openapi_ticket_new_response() ::
  [ {'ticket_id', integer() }
  | {'text', binary() }
  | {'success', boolean() }
  ].


openapi_ticket_new_response() ->
    openapi_ticket_new_response([]).

openapi_ticket_new_response(Fields) ->
  Default = [ {'ticket_id', integer() }
            , {'text', binary() }
            , {'success', boolean() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

