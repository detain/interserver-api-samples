-module(openapi_server_order_bandwidth).

-include("openapi.hrl").

-export([openapi_server_order_bandwidth/0]).

-export([openapi_server_order_bandwidth/1]).

-export_type([openapi_server_order_bandwidth/0]).

-type openapi_server_order_bandwidth() ::
  [ {'id', binary() }
  | {'price', integer() }
  | {'img', binary() }
  | {'short_desc', binary() }
  | {'long_desc', binary() }
  | {'type', binary() }
  | {'qty', binary() }
  | {'active', binary() }
  | {'monthly_price', integer() }
  | {'price_display', binary() }
  | {'monthly_price_display', binary() }
  ].


openapi_server_order_bandwidth() ->
    openapi_server_order_bandwidth([]).

openapi_server_order_bandwidth(Fields) ->
  Default = [ {'id', binary() }
            , {'price', integer() }
            , {'img', binary() }
            , {'short_desc', binary() }
            , {'long_desc', binary() }
            , {'type', binary() }
            , {'qty', binary() }
            , {'active', binary() }
            , {'monthly_price', integer() }
            , {'price_display', binary() }
            , {'monthly_price_display', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

