-module(openapi_tickets_count_array).

-include("openapi.hrl").

-export([openapi_tickets_count_array/0]).

-export([openapi_tickets_count_array/1]).

-export_type([openapi_tickets_count_array/0]).

-type openapi_tickets_count_array() ::
  [ {'Open', integer() }
  | {'On_Hold', integer() }
  | {'Closed', integer() }
  ].


openapi_tickets_count_array() ->
    openapi_tickets_count_array([]).

openapi_tickets_count_array(Fields) ->
  Default = [ {'Open', integer() }
            , {'On Hold', integer() }
            , {'Closed', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

