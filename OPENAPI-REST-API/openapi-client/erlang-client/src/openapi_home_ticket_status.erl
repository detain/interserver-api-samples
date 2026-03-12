-module(openapi_home_ticket_status).

-export([encode/1]).

-export_type([openapi_home_ticket_status/0]).

-type openapi_home_ticket_status() ::
    #{ 'Open' => integer(),
       'On_Hold' => integer()
     }.

encode(#{ 'Open' := Open,
          'On_Hold' := OnHold
        }) ->
    #{ 'Open' => Open,
       'On Hold' => OnHold
     }.
