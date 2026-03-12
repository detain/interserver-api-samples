-module(openapi_get_scrub_ip_details_200_response).

-include("openapi.hrl").

-export([openapi_get_scrub_ip_details_200_response/0]).

-export([openapi_get_scrub_ip_details_200_response/1]).

-export_type([openapi_get_scrub_ip_details_200_response/0]).

-type openapi_get_scrub_ip_details_200_response() ::
  [ {'serviceInfo', openapi_get_scrub_ip_details_200_response_service_info:openapi_get_scrub_ip_details_200_response_service_info() }
  | {'client_links', list(openapi_get_scrub_ip_details_200_response_client_links_inner:openapi_get_scrub_ip_details_200_response_client_links_inner()) }
  | {'billingDetails', openapi_get_scrub_ip_details_200_response_billing_details:openapi_get_scrub_ip_details_200_response_billing_details() }
  | {'custCurrency', binary() }
  | {'custCurrencySymbol', binary() }
  | {'package', binary() }
  | {'extraInfoTables', openapi_get_scrub_ip_details_200_response_extra_info_tables:openapi_get_scrub_ip_details_200_response_extra_info_tables() }
  | {'filter_firewall', openapi_get_scrub_ip_details_200_response_filter_firewall:openapi_get_scrub_ip_details_200_response_filter_firewall() }
  ].


openapi_get_scrub_ip_details_200_response() ->
    openapi_get_scrub_ip_details_200_response([]).

openapi_get_scrub_ip_details_200_response(Fields) ->
  Default = [ {'serviceInfo', openapi_get_scrub_ip_details_200_response_service_info:openapi_get_scrub_ip_details_200_response_service_info() }
            , {'client_links', list(openapi_get_scrub_ip_details_200_response_client_links_inner:openapi_get_scrub_ip_details_200_response_client_links_inner()) }
            , {'billingDetails', openapi_get_scrub_ip_details_200_response_billing_details:openapi_get_scrub_ip_details_200_response_billing_details() }
            , {'custCurrency', binary() }
            , {'custCurrencySymbol', binary() }
            , {'package', binary() }
            , {'extraInfoTables', openapi_get_scrub_ip_details_200_response_extra_info_tables:openapi_get_scrub_ip_details_200_response_extra_info_tables() }
            , {'filter_firewall', openapi_get_scrub_ip_details_200_response_filter_firewall:openapi_get_scrub_ip_details_200_response_filter_firewall() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

