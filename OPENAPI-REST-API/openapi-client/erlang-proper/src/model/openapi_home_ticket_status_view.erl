-module(openapi_home_ticket_status_view).

-include("openapi.hrl").

-export([openapi_home_ticket_status_view/0]).

-export([openapi_home_ticket_status_view/1]).

-export_type([openapi_home_ticket_status_view/0]).

-type openapi_home_ticket_status_view() ::
  [ {'4', binary() }
  | {'5', binary() }
  | {'6', binary() }
  ].


openapi_home_ticket_status_view() ->
    openapi_home_ticket_status_view([]).

openapi_home_ticket_status_view(Fields) ->
  Default = [ {'4', binary() }
            , {'5', binary() }
            , {'6', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

