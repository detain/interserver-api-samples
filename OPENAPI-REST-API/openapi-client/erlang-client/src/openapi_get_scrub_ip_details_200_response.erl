-module(openapi_get_scrub_ip_details_200_response).

-export([encode/1]).

-export_type([openapi_get_scrub_ip_details_200_response/0]).

-type openapi_get_scrub_ip_details_200_response() ::
    #{ 'serviceInfo' => openapi_get_scrub_ip_details_200_response_service_info:openapi_get_scrub_ip_details_200_response_service_info(),
       'client_links' => list(),
       'billingDetails' => openapi_get_scrub_ip_details_200_response_billing_details:openapi_get_scrub_ip_details_200_response_billing_details(),
       'custCurrency' => binary(),
       'custCurrencySymbol' => binary(),
       'package' => binary(),
       'extraInfoTables' => openapi_get_scrub_ip_details_200_response_extra_info_tables:openapi_get_scrub_ip_details_200_response_extra_info_tables(),
       'filter_firewall' => openapi_get_scrub_ip_details_200_response_filter_firewall:openapi_get_scrub_ip_details_200_response_filter_firewall()
     }.

encode(#{ 'serviceInfo' := ServiceInfo,
          'client_links' := ClientLinks,
          'billingDetails' := BillingDetails,
          'custCurrency' := CustCurrency,
          'custCurrencySymbol' := CustCurrencySymbol,
          'package' := Package,
          'extraInfoTables' := ExtraInfoTables,
          'filter_firewall' := FilterFirewall
        }) ->
    #{ 'serviceInfo' => ServiceInfo,
       'client_links' => ClientLinks,
       'billingDetails' => BillingDetails,
       'custCurrency' => CustCurrency,
       'custCurrencySymbol' => CustCurrencySymbol,
       'package' => Package,
       'extraInfoTables' => ExtraInfoTables,
       'filter_firewall' => FilterFirewall
     }.
