-module(openapi_ticket_new).

-include("openapi.hrl").

-export([openapi_ticket_new/0]).

-export([openapi_ticket_new/1]).

-export_type([openapi_ticket_new/0]).

-type openapi_ticket_new() ::
  [ {'subject', binary() }
  | {'body', binary() }
  | {'service_id', integer() }
  | {'service_module', binary() }
  ].


openapi_ticket_new() ->
    openapi_ticket_new([]).

openapi_ticket_new(Fields) ->
  Default = [ {'subject', binary() }
            , {'body', binary() }
            , {'service_id', integer() }
            , {'service_module', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

