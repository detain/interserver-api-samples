-module(openapi_quickserver_service_info).

-include("openapi.hrl").

-export([openapi_quickserver_service_info/0]).

-export([openapi_quickserver_service_info/1]).

-export_type([openapi_quickserver_service_info/0]).

-type openapi_quickserver_service_info() ::
  [ {'qs_id', binary() }
  | {'qs_custid', binary() }
  | {'qs_server', binary() }
  | {'qs_ip', binary() }
  | {'qs_ipv6', openapi_any_type:openapi_any_type() }
  | {'qs_vzid', binary() }
  | {'qs_currency', binary() }
  | {'qs_type', binary() }
  | {'qs_order_date', binary() }
  | {'qs_status', binary() }
  | {'qs_invoice', binary() }
  | {'qs_coupon', binary() }
  | {'qs_extra', binary() }
  | {'qs_hostname', binary() }
  | {'qs_server_status', binary() }
  | {'qs_comment', binary() }
  | {'qs_slices', binary() }
  | {'qs_vnc', binary() }
  | {'qs_vnc_port', openapi_any_type:openapi_any_type() }
  | {'qs_rootpass', binary() }
  | {'qs_mac', binary() }
  | {'qs_os', binary() }
  | {'qs_version', binary() }
  | {'qs_location', binary() }
  | {'qs_platform', openapi_any_type:openapi_any_type() }
  ].


openapi_quickserver_service_info() ->
    openapi_quickserver_service_info([]).

openapi_quickserver_service_info(Fields) ->
  Default = [ {'qs_id', binary() }
            , {'qs_custid', binary() }
            , {'qs_server', binary() }
            , {'qs_ip', binary() }
            , {'qs_ipv6', openapi_any_type:openapi_any_type() }
            , {'qs_vzid', binary() }
            , {'qs_currency', binary() }
            , {'qs_type', binary() }
            , {'qs_order_date', binary() }
            , {'qs_status', binary() }
            , {'qs_invoice', binary() }
            , {'qs_coupon', binary() }
            , {'qs_extra', binary() }
            , {'qs_hostname', binary() }
            , {'qs_server_status', binary() }
            , {'qs_comment', binary() }
            , {'qs_slices', binary() }
            , {'qs_vnc', binary() }
            , {'qs_vnc_port', openapi_any_type:openapi_any_type() }
            , {'qs_rootpass', binary() }
            , {'qs_mac', binary() }
            , {'qs_os', binary() }
            , {'qs_version', binary() }
            , {'qs_location', binary() }
            , {'qs_platform', openapi_any_type:openapi_any_type() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

