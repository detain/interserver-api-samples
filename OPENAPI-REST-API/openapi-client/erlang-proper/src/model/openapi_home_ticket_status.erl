-module(openapi_home_ticket_status).

-include("openapi.hrl").

-export([openapi_home_ticket_status/0]).

-export([openapi_home_ticket_status/1]).

-export_type([openapi_home_ticket_status/0]).

-type openapi_home_ticket_status() ::
  [ {'Open', integer() }
  | {'On_Hold', integer() }
  ].


openapi_home_ticket_status() ->
    openapi_home_ticket_status([]).

openapi_home_ticket_status(Fields) ->
  Default = [ {'Open', integer() }
            , {'On Hold', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

