-module(openapi_server_order_cp_li).

-include("openapi.hrl").

-export([openapi_server_order_cp_li/0]).

-export([openapi_server_order_cp_li/1]).

-export_type([openapi_server_order_cp_li/0]).

-type openapi_server_order_cp_li() ::
  [ {'9', openapi_server_order_control_panel:openapi_server_order_control_panel() }
  ].


openapi_server_order_cp_li() ->
    openapi_server_order_cp_li([]).

openapi_server_order_cp_li(Fields) ->
  Default = [ {'9', openapi_server_order_control_panel:openapi_server_order_control_panel() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

