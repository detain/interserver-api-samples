-module(openapi_server_order_ip).

-include("openapi.hrl").

-export([openapi_server_order_ip/0]).

-export([openapi_server_order_ip/1]).

-export_type([openapi_server_order_ip/0]).

-type openapi_server_order_ip() ::
  [ {'id', binary() }
  | {'price', integer() }
  | {'img', binary() }
  | {'short_desc', binary() }
  | {'long_desc', binary() }
  | {'qty', binary() }
  | {'monthly_price', integer() }
  | {'price_display', binary() }
  | {'monthly_price_display', binary() }
  ].


openapi_server_order_ip() ->
    openapi_server_order_ip([]).

openapi_server_order_ip(Fields) ->
  Default = [ {'id', binary() }
            , {'price', integer() }
            , {'img', binary() }
            , {'short_desc', binary() }
            , {'long_desc', binary() }
            , {'qty', binary() }
            , {'monthly_price', integer() }
            , {'price_display', binary() }
            , {'monthly_price_display', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

