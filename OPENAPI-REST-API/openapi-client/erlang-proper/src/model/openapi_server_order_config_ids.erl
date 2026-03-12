-module(openapi_server_order_config_ids).

-include("openapi.hrl").

-export([openapi_server_order_config_ids/0]).

-export([openapi_server_order_config_ids/1]).

-export_type([openapi_server_order_config_ids/0]).

-type openapi_server_order_config_ids() ::
  [ {'memory', integer() }
  | {'bandwidth', binary() }
  | {'ips', binary() }
  | {'os', binary() }
  | {'cp', integer() }
  | {'raid', binary() }
  | {'hd', binary() }
  ].


openapi_server_order_config_ids() ->
    openapi_server_order_config_ids([]).

openapi_server_order_config_ids(Fields) ->
  Default = [ {'memory', integer() }
            , {'bandwidth', binary() }
            , {'ips', binary() }
            , {'os', binary() }
            , {'cp', integer() }
            , {'raid', binary() }
            , {'hd', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

