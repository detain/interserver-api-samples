-module(openapi_server_order_memory).

-include("openapi.hrl").

-export([openapi_server_order_memory/0]).

-export([openapi_server_order_memory/1]).

-export_type([openapi_server_order_memory/0]).

-type openapi_server_order_memory() ::
  [ {'id', binary() }
  | {'price', binary() }
  | {'img', binary() }
  | {'short_desc', binary() }
  | {'long_desc', binary() }
  | {'manu', binary() }
  | {'size', binary() }
  | {'type', binary() }
  | {'hidden', binary() }
  | {'monthly_price', integer() }
  | {'drive_type', binary() }
  | {'monthly_price_display', binary() }
  ].


openapi_server_order_memory() ->
    openapi_server_order_memory([]).

openapi_server_order_memory(Fields) ->
  Default = [ {'id', binary() }
            , {'price', binary() }
            , {'img', binary() }
            , {'short_desc', binary() }
            , {'long_desc', binary() }
            , {'manu', binary() }
            , {'size', binary() }
            , {'type', binary() }
            , {'hidden', binary() }
            , {'monthly_price', integer() }
            , {'drive_type', binary() }
            , {'monthly_price_display', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

