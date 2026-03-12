-module(openapi_mail_schema).

-export([encode/1]).

-export_type([openapi_mail_schema/0]).

-type openapi_mail_schema() ::
    #{ 'serviceInfo' := openapi_mail_service_info:openapi_mail_service_info(),
       'client_links' := list(),
       'billingDetails' := openapi_mail_billing_details:openapi_mail_billing_details(),
       'custCurrency' := binary(),
       'custCurrencySymbol' := binary(),
       'package' := binary(),
       'serviceExtra' => list(),
       'extraInfoTables' := openapi_mail_schema_extra_info_tables:openapi_mail_schema_extra_info_tables(),
       'serviceType' := openapi_mail_service_type:openapi_mail_service_type(),
       'usage_count' := binary()
     }.

encode(#{ 'serviceInfo' := ServiceInfo,
          'client_links' := ClientLinks,
          'billingDetails' := BillingDetails,
          'custCurrency' := CustCurrency,
          'custCurrencySymbol' := CustCurrencySymbol,
          'package' := Package,
          'serviceExtra' := ServiceExtra,
          'extraInfoTables' := ExtraInfoTables,
          'serviceType' := ServiceType,
          'usage_count' := UsageCount
        }) ->
    #{ 'serviceInfo' => ServiceInfo,
       'client_links' => ClientLinks,
       'billingDetails' => BillingDetails,
       'custCurrency' => CustCurrency,
       'custCurrencySymbol' => CustCurrencySymbol,
       'package' => Package,
       'serviceExtra' => ServiceExtra,
       'extraInfoTables' => ExtraInfoTables,
       'serviceType' => ServiceType,
       'usage_count' => UsageCount
     }.
