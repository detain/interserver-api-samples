-module(openapi_update_ticket_response_schema).

-include("openapi.hrl").

-export([openapi_update_ticket_response_schema/0]).

-export([openapi_update_ticket_response_schema/1]).

-export_type([openapi_update_ticket_response_schema/0]).

-type openapi_update_ticket_response_schema() ::
  [ {'success', boolean() }
  | {'message', binary() }
  ].


openapi_update_ticket_response_schema() ->
    openapi_update_ticket_response_schema([]).

openapi_update_ticket_response_schema(Fields) ->
  Default = [ {'success', boolean() }
            , {'message', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

