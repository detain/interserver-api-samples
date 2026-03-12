-module(openapi_tickets).

-include("openapi.hrl").

-export([openapi_tickets/0]).

-export([openapi_tickets/1]).

-export_type([openapi_tickets/0]).

-type openapi_tickets() ::
  [ {'ima', binary() }
  | {'custid', binary() }
  | {'view', binary() }
  | {'currentPage', integer() }
  | {'limit', integer() }
  | {'sortcol', integer() }
  | {'sortdir', integer() }
  | {'rowsOffset', integer() }
  | {'tickets', list(openapi_tickets_row:openapi_tickets_row()) }
  | {'pages', integer() }
  | {'rowsTotal', integer() }
  | {'inboxCount', integer() }
  | {'countArray', openapi_tickets_count_array:openapi_tickets_count_array() }
  | {'viewText', binary() }
  ].


openapi_tickets() ->
    openapi_tickets([]).

openapi_tickets(Fields) ->
  Default = [ {'ima', binary() }
            , {'custid', binary() }
            , {'view', binary() }
            , {'currentPage', integer() }
            , {'limit', integer() }
            , {'sortcol', integer() }
            , {'sortdir', integer() }
            , {'rowsOffset', integer() }
            , {'tickets', list(openapi_tickets_row:openapi_tickets_row()) }
            , {'pages', integer() }
            , {'rowsTotal', integer() }
            , {'inboxCount', integer() }
            , {'countArray', openapi_tickets_count_array:openapi_tickets_count_array() }
            , {'viewText', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

