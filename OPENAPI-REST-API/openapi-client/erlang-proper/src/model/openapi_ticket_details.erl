-module(openapi_ticket_details).

-include("openapi.hrl").

-export([openapi_ticket_details/0]).

-export([openapi_ticket_details/1]).

-export_type([openapi_ticket_details/0]).

-type openapi_ticket_details() ::
  [ {'ticketid', integer() }
  | {'ticketmaskid', binary() }
  | {'department', binary() }
  | {'status', binary() }
  | {'priority', binary() }
  | {'subject', binary() }
  | {'created_on', binary() }
  | {'updated_on', binary() }
  ].


openapi_ticket_details() ->
    openapi_ticket_details([]).

openapi_ticket_details(Fields) ->
  Default = [ {'ticketid', integer() }
            , {'ticketmaskid', binary() }
            , {'department', binary() }
            , {'status', binary() }
            , {'priority', binary() }
            , {'subject', binary() }
            , {'created_on', binary() }
            , {'updated_on', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

