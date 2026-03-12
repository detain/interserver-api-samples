-module(openapi_reply_ticket_response_schema).

-include("openapi.hrl").

-export([openapi_reply_ticket_response_schema/0]).

-export([openapi_reply_ticket_response_schema/1]).

-export_type([openapi_reply_ticket_response_schema/0]).

-type openapi_reply_ticket_response_schema() ::
  [ {'success', boolean() }
  | {'post_id', integer() }
  ].


openapi_reply_ticket_response_schema() ->
    openapi_reply_ticket_response_schema([]).

openapi_reply_ticket_response_schema(Fields) ->
  Default = [ {'success', boolean() }
            , {'post_id', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

