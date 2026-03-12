-module(openapi_server_order_form_values).

-include("openapi.hrl").

-export([openapi_server_order_form_values/0]).

-export([openapi_server_order_form_values/1]).

-export_type([openapi_server_order_form_values/0]).

-type openapi_server_order_form_values() ::
  [ {'memory', integer() }
  | {'bandwidth', binary() }
  | {'ips', binary() }
  | {'os', binary() }
  | {'cp', integer() }
  | {'raid', binary() }
  | {'hd', binary() }
  ].


openapi_server_order_form_values() ->
    openapi_server_order_form_values([]).

openapi_server_order_form_values(Fields) ->
  Default = [ {'memory', integer() }
            , {'bandwidth', binary() }
            , {'ips', binary() }
            , {'os', binary() }
            , {'cp', integer() }
            , {'raid', binary() }
            , {'hd', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

