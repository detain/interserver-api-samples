-module(openapi_bandwidth).

-include("openapi.hrl").

-export([openapi_bandwidth/0]).

-export([openapi_bandwidth/1]).

-export_type([openapi_bandwidth/0]).

-type openapi_bandwidth() ::
  [ {'id', integer() }
  | {'short_desc', binary() }
  | {'monthly_price', integer() }
  | {'monthly_price_display', binary() }
  ].


openapi_bandwidth() ->
    openapi_bandwidth([]).

openapi_bandwidth(Fields) ->
  Default = [ {'id', integer() }
            , {'short_desc', binary() }
            , {'monthly_price', integer() }
            , {'monthly_price_display', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

