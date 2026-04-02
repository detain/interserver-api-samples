-module(openapi_vps_service_info).

-include("openapi.hrl").

-export([openapi_vps_service_info/0]).

-export([openapi_vps_service_info/1]).

-export_type([openapi_vps_service_info/0]).

-type openapi_vps_service_info() ::
  [ {'vps_id', binary() }
  | {'vps_custid', binary() }
  | {'vps_server', binary() }
  | {'vps_ip', binary() }
  | {'vps_ipv6', binary() }
  | {'vps_vzid', binary() }
  | {'vps_currency', binary() }
  | {'vps_type', binary() }
  | {'vps_order_date', binary() }
  | {'vps_status', binary() }
  | {'vps_invoice', binary() }
  | {'vps_coupon', binary() }
  | {'vps_extra', binary() }
  | {'vps_hostname', binary() }
  | {'vps_server_status', binary() }
  | {'vps_comment', binary() }
  | {'vps_slices', binary() }
  | {'vps_vnc', binary() }
  | {'vps_vnc_port', binary() }
  | {'vps_rootpass', binary() }
  | {'vps_mac', binary() }
  | {'vps_os', binary() }
  | {'vps_version', binary() }
  | {'vps_location', binary() }
  | {'vps_platform', binary() }
  | {'vps_diskused', binary() }
  | {'vps_diskmax', binary() }
  ].


openapi_vps_service_info() ->
    openapi_vps_service_info([]).

openapi_vps_service_info(Fields) ->
  Default = [ {'vps_id', binary() }
            , {'vps_custid', binary() }
            , {'vps_server', binary() }
            , {'vps_ip', binary() }
            , {'vps_ipv6', binary() }
            , {'vps_vzid', binary() }
            , {'vps_currency', binary() }
            , {'vps_type', binary() }
            , {'vps_order_date', binary() }
            , {'vps_status', binary() }
            , {'vps_invoice', binary() }
            , {'vps_coupon', binary() }
            , {'vps_extra', binary() }
            , {'vps_hostname', binary() }
            , {'vps_server_status', binary() }
            , {'vps_comment', binary() }
            , {'vps_slices', binary() }
            , {'vps_vnc', binary() }
            , {'vps_vnc_port', binary() }
            , {'vps_rootpass', binary() }
            , {'vps_mac', binary() }
            , {'vps_os', binary() }
            , {'vps_version', binary() }
            , {'vps_location', binary() }
            , {'vps_platform', binary() }
            , {'vps_diskused', binary() }
            , {'vps_diskmax', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

