-module(openapi_server_order_raid).

-include("openapi.hrl").

-export([openapi_server_order_raid/0]).

-export([openapi_server_order_raid/1]).

-export_type([openapi_server_order_raid/0]).

-type openapi_server_order_raid() ::
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


openapi_server_order_raid() ->
    openapi_server_order_raid([]).

openapi_server_order_raid(Fields) ->
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

