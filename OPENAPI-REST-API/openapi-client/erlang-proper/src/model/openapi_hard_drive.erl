-module(openapi_hard_drive).

-include("openapi.hrl").

-export([openapi_hard_drive/0]).

-export([openapi_hard_drive/1]).

-export_type([openapi_hard_drive/0]).

-type openapi_hard_drive() ::
  [ {'id', integer() }
  | {'short_desc', binary() }
  | {'size', binary() }
  | {'drive_type', binary() }
  | {'monthly_price', integer() }
  | {'monthly_price_display', binary() }
  ].


openapi_hard_drive() ->
    openapi_hard_drive([]).

openapi_hard_drive(Fields) ->
  Default = [ {'id', integer() }
            , {'short_desc', binary() }
            , {'size', binary() }
            , {'drive_type', binary() }
            , {'monthly_price', integer() }
            , {'monthly_price_display', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

