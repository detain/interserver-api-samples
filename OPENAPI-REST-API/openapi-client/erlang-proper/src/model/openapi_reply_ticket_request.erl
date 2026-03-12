-module(openapi_reply_ticket_request).

-include("openapi.hrl").

-export([openapi_reply_ticket_request/0]).

-export([openapi_reply_ticket_request/1]).

-export_type([openapi_reply_ticket_request/0]).

-type openapi_reply_ticket_request() ::
  [ {'content', binary() }
  ].


openapi_reply_ticket_request() ->
    openapi_reply_ticket_request([]).

openapi_reply_ticket_request(Fields) ->
  Default = [ {'content', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

