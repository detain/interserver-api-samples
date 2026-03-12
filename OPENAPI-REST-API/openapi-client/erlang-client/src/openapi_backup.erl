-module(openapi_backup).

-export([encode/1]).

-export_type([openapi_backup/0]).

-type openapi_backup() ::
    #{ 'serviceInfo' => openapi_backup_service_info:openapi_backup_service_info(),
       'client_links' => list(),
       'billingDetails' => openapi_backup_billing_details:openapi_backup_billing_details(),
       'custCurrency' => binary(),
       'custCurrencySymbol' => binary(),
       'serviceMaster' => openapi_backup_service_master:openapi_backup_service_master(),
       'package' => binary(),
       'serviceExtra' => binary(),
       'extraInfoTables' => openapi_backup_extra_info_tables:openapi_backup_extra_info_tables()
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
