-module(openapi_control_panel).

-include("openapi.hrl").

-export([openapi_control_panel/0]).

-export([openapi_control_panel/1]).

-export_type([openapi_control_panel/0]).

-type openapi_control_panel() ::
  [ {'id', integer() }
  | {'short_desc', binary() }
  | {'monthly_price', integer() }
  ].


openapi_control_panel() ->
    openapi_control_panel([]).

openapi_control_panel(Fields) ->
  Default = [ {'id', integer() }
            , {'short_desc', binary() }
            , {'monthly_price', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

