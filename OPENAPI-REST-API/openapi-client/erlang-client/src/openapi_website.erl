-module(openapi_website).

-export([encode/1]).

-export_type([openapi_website/0]).

-type openapi_website() ::
    #{ 'serviceInfo' => openapi_website_service_info:openapi_website_service_info(),
       'client_links' => list(),
       'billingDetails' => openapi_website_billing_details:openapi_website_billing_details(),
       'custCurrency' => binary(),
       'custCurrencySymbol' => binary(),
       'serviceMaster' => openapi_website_service_master:openapi_website_service_master(),
       'package' => binary(),
       'serviceExtra' => list(),
       'extraInfoTables' => openapi_website_extra_info_tables:openapi_website_extra_info_tables()
     }.

encode(#{ 'serviceInfo' := ServiceInfo,
          'client_links' := ClientLinks,
          'billingDetails' := BillingDetails,
          'custCurrency' := CustCurrency,
          'custCurrencySymbol' := CustCurrencySymbol,
          'serviceMaster' := ServiceMaster,
          'package' := Package,
          'serviceExtra' := ServiceExtra,
          'extraInfoTables' := ExtraInfoTables
        }) ->
    #{ 'serviceInfo' => ServiceInfo,
       'client_links' => ClientLinks,
       'billingDetails' => BillingDetails,
       'custCurrency' => CustCurrency,
       'custCurrencySymbol' => CustCurrencySymbol,
       'serviceMaster' => ServiceMaster,
       'package' => Package,
       'serviceExtra' => ServiceExtra,
       'extraInfoTables' => ExtraInfoTables
     }.
