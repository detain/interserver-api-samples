-module(openapi_server_service_info).

-include("openapi.hrl").

-export([openapi_server_service_info/0]).

-export([openapi_server_service_info/1]).

-export_type([openapi_server_service_info/0]).

-type openapi_server_service_info() ::
  [ {'server_id', binary() }
  | {'server_hostname', binary() }
  | {'server_custid', binary() }
  | {'server_type', binary() }
  | {'server_currency', binary() }
  | {'server_order_date', binary() }
  | {'server_invoice', binary() }
  | {'server_coupon', binary() }
  | {'server_status', binary() }
  | {'server_root', binary() }
  | {'server_dedicated_tag', binary() }
  | {'server_custom_tag', binary() }
  | {'server_comment', binary() }
  | {'server_initial_bill', binary() }
  | {'server_hardware', binary() }
  | {'server_ips', binary() }
  | {'server_monthly_bill', binary() }
  | {'server_setup', binary() }
  | {'server_discount', openapi_any_type:openapi_any_type() }
  | {'server_rep', binary() }
  | {'server_date', binary() }
  | {'server_total_cost', binary() }
  | {'server_location', openapi_any_type:openapi_any_type() }
  | {'server_hardware_ordered', binary() }
  | {'server_billed', binary() }
  | {'server_welcome_email', binary() }
  | {'server_dedicated_cpu', binary() }
  | {'server_dedicated_memory', binary() }
  | {'server_dedicated_hd1', binary() }
  | {'server_dedicated_hd2', openapi_any_type:openapi_any_type() }
  | {'server_dedicated_bandwidth', binary() }
  | {'server_dedicated_ips', binary() }
  | {'server_dedicated_os', binary() }
  | {'server_dedicated_cp', openapi_any_type:openapi_any_type() }
  | {'server_dedicated_raid', binary() }
  | {'server_extra', binary() }
  ].


openapi_server_service_info() ->
    openapi_server_service_info([]).

openapi_server_service_info(Fields) ->
  Default = [ {'server_id', binary() }
            , {'server_hostname', binary() }
            , {'server_custid', binary() }
            , {'server_type', binary() }
            , {'server_currency', binary() }
            , {'server_order_date', binary() }
            , {'server_invoice', binary() }
            , {'server_coupon', binary() }
            , {'server_status', binary() }
            , {'server_root', binary() }
            , {'server_dedicated_tag', binary() }
            , {'server_custom_tag', binary() }
            , {'server_comment', binary() }
            , {'server_initial_bill', binary() }
            , {'server_hardware', binary() }
            , {'server_ips', binary() }
            , {'server_monthly_bill', binary() }
            , {'server_setup', binary() }
            , {'server_discount', openapi_any_type:openapi_any_type() }
            , {'server_rep', binary() }
            , {'server_date', binary() }
            , {'server_total_cost', binary() }
            , {'server_location', openapi_any_type:openapi_any_type() }
            , {'server_hardware_ordered', binary() }
            , {'server_billed', binary() }
            , {'server_welcome_email', binary() }
            , {'server_dedicated_cpu', binary() }
            , {'server_dedicated_memory', binary() }
            , {'server_dedicated_hd1', binary() }
            , {'server_dedicated_hd2', openapi_any_type:openapi_any_type() }
            , {'server_dedicated_bandwidth', binary() }
            , {'server_dedicated_ips', binary() }
            , {'server_dedicated_os', binary() }
            , {'server_dedicated_cp', openapi_any_type:openapi_any_type() }
            , {'server_dedicated_raid', binary() }
            , {'server_extra', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

