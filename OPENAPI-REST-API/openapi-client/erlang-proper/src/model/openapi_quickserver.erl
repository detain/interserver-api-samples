-module(openapi_quickserver).

-include("openapi.hrl").

-export([openapi_quickserver/0]).

-export([openapi_quickserver/1]).

-export_type([openapi_quickserver/0]).

-type openapi_quickserver() ::
  [ {'serviceInfo', openapi_quickserver_service_info:openapi_quickserver_service_info() }
  | {'client_links', list(openapi_quickserver_client_link:openapi_quickserver_client_link()) }
  | {'billingDetails', openapi_quickserver_billing_details:openapi_quickserver_billing_details() }
  | {'custCurrency', binary() }
  | {'custCurrencySymbol', binary() }
  | {'serviceMaster', openapi_quickserver_service_master:openapi_quickserver_service_master() }
  | {'package', binary() }
  | {'os_template', binary() }
  | {'serviceExtra', openapi_quickserver_service_extra:openapi_quickserver_service_extra() }
  | {'extraInfoTables', openapi_quickserver_extra_info_tables:openapi_quickserver_extra_info_tables() }
  | {'cpu_graph_data', binary() }
  | {'bandwidth_xaxis', binary() }
  | {'bandwidth_yaxis', binary() }
  | {'module', binary() }
  | {'token', binary() }
  | {'service_disk_used', binary() }
  | {'service_disk_total', binary() }
  | {'disk_percentage', integer() }
  | {'memory', binary() }
  | {'hdd', binary() }
  | {'service_overview_extra', list(binary()) }
  ].


openapi_quickserver() ->
    openapi_quickserver([]).

openapi_quickserver(Fields) ->
  Default = [ {'serviceInfo', openapi_quickserver_service_info:openapi_quickserver_service_info() }
            , {'client_links', list(openapi_quickserver_client_link:openapi_quickserver_client_link()) }
            , {'billingDetails', openapi_quickserver_billing_details:openapi_quickserver_billing_details() }
            , {'custCurrency', binary() }
            , {'custCurrencySymbol', binary() }
            , {'serviceMaster', openapi_quickserver_service_master:openapi_quickserver_service_master() }
            , {'package', binary() }
            , {'os_template', binary() }
            , {'serviceExtra', openapi_quickserver_service_extra:openapi_quickserver_service_extra() }
            , {'extraInfoTables', openapi_quickserver_extra_info_tables:openapi_quickserver_extra_info_tables() }
            , {'cpu_graph_data', binary() }
            , {'bandwidth_xaxis', binary() }
            , {'bandwidth_yaxis', binary() }
            , {'module', binary() }
            , {'token', binary() }
            , {'service_disk_used', binary() }
            , {'service_disk_total', binary() }
            , {'disk_percentage', integer() }
            , {'memory', binary() }
            , {'hdd', binary() }
            , {'service_overview_extra', list(binary()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

