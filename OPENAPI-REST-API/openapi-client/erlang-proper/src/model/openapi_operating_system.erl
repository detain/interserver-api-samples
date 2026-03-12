-module(openapi_operating_system).

-include("openapi.hrl").

-export([openapi_operating_system/0]).

-export([openapi_operating_system/1]).

-export_type([openapi_operating_system/0]).

-type openapi_operating_system() ::
  [ {'id', integer() }
  | {'short_desc', binary() }
  | {'monthly_price', integer() }
  ].


openapi_operating_system() ->
    openapi_operating_system([]).

openapi_operating_system(Fields) ->
  Default = [ {'id', integer() }
            , {'short_desc', binary() }
            , {'monthly_price', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

