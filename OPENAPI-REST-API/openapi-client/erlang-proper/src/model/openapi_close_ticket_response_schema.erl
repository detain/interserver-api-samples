-module(openapi_close_ticket_response_schema).

-include("openapi.hrl").

-export([openapi_close_ticket_response_schema/0]).

-export([openapi_close_ticket_response_schema/1]).

-export_type([openapi_close_ticket_response_schema/0]).

-type openapi_close_ticket_response_schema() ::
  [ {'success', boolean() }
  | {'text', binary() }
  ].


openapi_close_ticket_response_schema() ->
    openapi_close_ticket_response_schema([]).

openapi_close_ticket_response_schema(Fields) ->
  Default = [ {'success', boolean() }
            , {'text', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

