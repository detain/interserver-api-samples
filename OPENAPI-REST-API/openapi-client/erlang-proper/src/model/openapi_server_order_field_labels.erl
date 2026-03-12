-module(openapi_server_order_field_labels).

-include("openapi.hrl").

-export([openapi_server_order_field_labels/0]).

-export([openapi_server_order_field_labels/1]).

-export_type([openapi_server_order_field_labels/0]).

-type openapi_server_order_field_labels() ::
  [ {'bandwidth', openapi_server_order_field_label:openapi_server_order_field_label() }
  | {'ips', openapi_server_order_field_label:openapi_server_order_field_label() }
  | {'os', openapi_server_order_field_label:openapi_server_order_field_label() }
  | {'cp', openapi_server_order_field_label:openapi_server_order_field_label() }
  | {'raid', openapi_server_order_field_label:openapi_server_order_field_label() }
  | {'memory', openapi_server_order_field_label:openapi_server_order_field_label() }
  | {'hd', openapi_server_order_field_label:openapi_server_order_field_label() }
  ].


openapi_server_order_field_labels() ->
    openapi_server_order_field_labels([]).

openapi_server_order_field_labels(Fields) ->
  Default = [ {'bandwidth', openapi_server_order_field_label:openapi_server_order_field_label() }
            , {'ips', openapi_server_order_field_label:openapi_server_order_field_label() }
            , {'os', openapi_server_order_field_label:openapi_server_order_field_label() }
            , {'cp', openapi_server_order_field_label:openapi_server_order_field_label() }
            , {'raid', openapi_server_order_field_label:openapi_server_order_field_label() }
            , {'memory', openapi_server_order_field_label:openapi_server_order_field_label() }
            , {'hd', openapi_server_order_field_label:openapi_server_order_field_label() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

