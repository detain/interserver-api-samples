-module(openapi_quickserver_order).

-include("openapi.hrl").

-export([openapi_quickserver_order/0]).

-export([openapi_quickserver_order/1]).

-export_type([openapi_quickserver_order/0]).

-type openapi_quickserver_order() ::
  [ {'qs_id', binary() }
  | {'server_details', openapi_quickserver_order_server_details:openapi_quickserver_order_server_details() }
  | {'templates', openapi_quickserver_order_templates:openapi_quickserver_order_templates() }
  | {'version', openapi_quickserver_order_version:openapi_quickserver_order_version() }
  | {'distro_sel', openapi_quickserver_order_distro_sel:openapi_quickserver_order_distro_sel() }
  ].


openapi_quickserver_order() ->
    openapi_quickserver_order([]).

openapi_quickserver_order(Fields) ->
  Default = [ {'qs_id', binary() }
            , {'server_details', openapi_quickserver_order_server_details:openapi_quickserver_order_server_details() }
            , {'templates', openapi_quickserver_order_templates:openapi_quickserver_order_templates() }
            , {'version', openapi_quickserver_order_version:openapi_quickserver_order_version() }
            , {'distro_sel', openapi_quickserver_order_distro_sel:openapi_quickserver_order_distro_sel() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

