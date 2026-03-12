-module(openapi_home_ticket_status_view).

-export([encode/1]).

-export_type([openapi_home_ticket_status_view/0]).

-type openapi_home_ticket_status_view() ::
    #{ '4' => binary(),
       '5' => binary(),
       '6' => binary()
     }.

encode(#{ '4' := 4,
          '5' := 5,
          '6' := 6
        }) ->
    #{ '4' => 4,
       '5' => 5,
       '6' => 6
     }.
