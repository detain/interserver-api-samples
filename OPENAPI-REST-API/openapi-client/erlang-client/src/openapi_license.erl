-module(openapi_license).

-export([encode/1]).

-export_type([openapi_license/0]).

-type openapi_license() ::
    #{ 'serviceInfo' := openapi_license_service_info:openapi_license_service_info(),
       'client_links' := list(),
       'billingDetails' := openapi_license_billing_details:openapi_license_billing_details(),
       'custCurrency' := binary(),
       'custCurrencySymbol' := binary(),
       'package' := binary(),
       'serviceExtra' := list(),
       'extraInfoTables' := openapi_license_extra_info_tables:openapi_license_extra_info_tables(),
       'service_overview_extra' := binary(),
       'serviceType' := openapi_license_service_type:openapi_license_service_type(),
       'license_key' := binary()
     }.

encode(#{ 'serviceInfo' := ServiceInfo,
          'client_links' := ClientLinks,
          'billingDetails' := BillingDetails,
          'custCurrency' := CustCurrency,
          'custCurrencySymbol' := CustCurrencySymbol,
          'package' := Package,
          'serviceExtra' := ServiceExtra,
          'extraInfoTables' := ExtraInfoTables,
          'service_overview_extra' := ServiceOverviewExtra,
          'serviceType' := ServiceType,
          'license_key' := LicenseKey
        }) ->
    #{ 'serviceInfo' => ServiceInfo,
       'client_links' => ClientLinks,
       'billingDetails' => BillingDetails,
       'custCurrency' => CustCurrency,
       'custCurrencySymbol' => CustCurrencySymbol,
       'package' => Package,
       'serviceExtra' => ServiceExtra,
       'extraInfoTables' => ExtraInfoTables,
       'service_overview_extra' => ServiceOverviewExtra,
       'serviceType' => ServiceType,
       'license_key' => LicenseKey
     }.
