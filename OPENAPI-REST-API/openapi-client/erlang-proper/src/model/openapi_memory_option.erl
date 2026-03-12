-module(openapi_memory_option).

-include("openapi.hrl").

-export([openapi_memory_option/0]).

-export([openapi_memory_option/1]).

-export_type([openapi_memory_option/0]).

-type openapi_memory_option() ::
  [ {'id', integer() }
  | {'short_desc', binary() }
  | {'monthly_price', integer() }
  | {'monthly_price_display', binary() }
  ].


openapi_memory_option() ->
    openapi_memory_option([]).

openapi_memory_option(Fields) ->
  Default = [ {'id', integer() }
            , {'short_desc', binary() }
            , {'monthly_price', integer() }
            , {'monthly_price_display', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

