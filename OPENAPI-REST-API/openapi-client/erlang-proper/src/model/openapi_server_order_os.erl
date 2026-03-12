-module(openapi_server_order_os).

-include("openapi.hrl").

-export([openapi_server_order_os/0]).

-export([openapi_server_order_os/1]).

-export_type([openapi_server_order_os/0]).

-type openapi_server_order_os() ::
  [ {'id', binary() }
  | {'price', integer() }
  | {'img', binary() }
  | {'short_desc', binary() }
  | {'long_desc', binary() }
  | {'monthly_price', integer() }
  | {'active', binary() }
  | {'price_display', binary() }
  | {'monthly_price_display', binary() }
  ].


openapi_server_order_os() ->
    openapi_server_order_os([]).

openapi_server_order_os(Fields) ->
  Default = [ {'id', binary() }
            , {'price', integer() }
            , {'img', binary() }
            , {'short_desc', binary() }
            , {'long_desc', binary() }
            , {'monthly_price', integer() }
            , {'active', binary() }
            , {'price_display', binary() }
            , {'monthly_price_display', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

