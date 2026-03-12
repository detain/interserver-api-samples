-module(openapi_tickets_row).

-include("openapi.hrl").

-export([openapi_tickets_row/0]).

-export([openapi_tickets_row/1]).

-export_type([openapi_tickets_row/0]).

-type openapi_tickets_row() ::
  [ {'title', binary() }
  | {'ticketmaskid', binary() }
  | {'lastreplier', binary() }
  | {'status', binary() }
  | {'priority', binary() }
  | {'total_replies', integer() }
  | {'lastactivity', binary() }
  | {'departmenttitle', binary() }
  | {'ticketid', integer() }
  | {'can_close', binary() }
  | {'attachments', openapi_any_type:openapi_any_type() }
  | {'status_text', binary() }
  | {'checked', boolean() }
  ].


openapi_tickets_row() ->
    openapi_tickets_row([]).

openapi_tickets_row(Fields) ->
  Default = [ {'title', binary() }
            , {'ticketmaskid', binary() }
            , {'lastreplier', binary() }
            , {'status', binary() }
            , {'priority', binary() }
            , {'total_replies', integer() }
            , {'lastactivity', binary() }
            , {'departmenttitle', binary() }
            , {'ticketid', integer() }
            , {'can_close', binary() }
            , {'attachments', openapi_any_type:openapi_any_type() }
            , {'status_text', binary() }
            , {'checked', boolean() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

