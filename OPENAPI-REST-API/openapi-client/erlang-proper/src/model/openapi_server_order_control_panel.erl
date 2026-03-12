-module(openapi_server_order_control_panel).

-include("openapi.hrl").

-export([openapi_server_order_control_panel/0]).

-export([openapi_server_order_control_panel/1]).

-export_type([openapi_server_order_control_panel/0]).

-type openapi_server_order_control_panel() ::
  [ {'id', binary() }
  | {'price', integer() }
  | {'img', binary() }
  | {'short_desc', binary() }
  | {'long_desc', binary() }
  | {'os_type', binary() }
  | {'monthly_price', integer() }
  | {'types', list(binary()) }
  | {'price_display', binary() }
  | {'monthly_price_display', binary() }
  ].


openapi_server_order_control_panel() ->
    openapi_server_order_control_panel([]).

openapi_server_order_control_panel(Fields) ->
  Default = [ {'id', binary() }
            , {'price', integer() }
            , {'img', binary() }
            , {'short_desc', binary() }
            , {'long_desc', binary() }
            , {'os_type', binary() }
            , {'monthly_price', integer() }
            , {'types', list(binary()) }
            , {'price_display', binary() }
            , {'monthly_price_display', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

