-module(openapi_tickets).

-export([encode/1]).

-export_type([openapi_tickets/0]).

-type openapi_tickets() ::
    #{ 'ima' := binary(),
       'custid' := binary(),
       'view' := binary(),
       'currentPage' := integer(),
       'limit' := integer(),
       'sortcol' := integer(),
       'sortdir' := integer(),
       'rowsOffset' := integer(),
       'tickets' := list(),
       'pages' := integer(),
       'rowsTotal' := integer(),
       'inboxCount' := integer(),
       'countArray' := openapi_tickets_count_array:openapi_tickets_count_array(),
       'viewText' := binary()
     }.

encode(#{ 'ima' := Ima,
          'custid' := Custid,
          'view' := View,
          'currentPage' := CurrentPage,
          'limit' := Limit,
          'sortcol' := Sortcol,
          'sortdir' := Sortdir,
          'rowsOffset' := RowsOffset,
          'tickets' := Tickets,
          'pages' := Pages,
          'rowsTotal' := RowsTotal,
          'inboxCount' := InboxCount,
          'countArray' := CountArray,
          'viewText' := ViewText
        }) ->
    #{ 'ima' => Ima,
       'custid' => Custid,
       'view' => View,
       'currentPage' => CurrentPage,
       'limit' => Limit,
       'sortcol' => Sortcol,
       'sortdir' => Sortdir,
       'rowsOffset' => RowsOffset,
       'tickets' => Tickets,
       'pages' => Pages,
       'rowsTotal' => RowsTotal,
       'inboxCount' => InboxCount,
       'countArray' => CountArray,
       'viewText' => ViewText
     }.
