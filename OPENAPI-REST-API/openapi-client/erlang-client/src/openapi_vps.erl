-module(openapi_vps).

-export([encode/1]).

-export_type([openapi_vps/0]).

-type openapi_vps() ::
    #{ 'serviceInfo' := openapi_vps_service_info:openapi_vps_service_info(),
       'client_links' := list(),
       'billingDetails' := openapi_vps_billing_details:openapi_vps_billing_details(),
       'custCurrency' := binary(),
       'custCurrencySymbol' := binary(),
       'serviceMaster' := openapi_vps_service_master:openapi_vps_service_master(),
       'package' := binary(),
       'os_template' => binary(),
       'serviceExtra' := openapi_vps_service_extra:openapi_vps_service_extra(),
       'extraInfoTables' := openapi_vps_extra_info_tables:openapi_vps_extra_info_tables(),
       'cpu_graph_data' => openapi_any_type:openapi_any_type(),
       'module' := binary(),
       'token' := binary(),
       'da_link' := integer(),
       'sr_link' := integer(),
       'cp_data' := openapi_vps_cp_data:openapi_vps_cp_data(),
       'da_data' := openapi_vps_da_data:openapi_vps_da_data(),
       'plesk12_data' := openapi_vps_plesk12_data:openapi_vps_plesk12_data(),
       'serviceAddons' := openapi_vps_service_addons:openapi_vps_service_addons()
     }.

encode(#{ 'serviceInfo' := ServiceInfo,
          'client_links' := ClientLinks,
          'billingDetails' := BillingDetails,
          'custCurrency' := CustCurrency,
          'custCurrencySymbol' := CustCurrencySymbol,
          'serviceMaster' := ServiceMaster,
          'package' := Package,
          'os_template' := OsTemplate,
          'serviceExtra' := ServiceExtra,
          'extraInfoTables' := ExtraInfoTables,
          'cpu_graph_data' := CpuGraphData,
          'module' := Module,
          'token' := Token,
          'da_link' := DaLink,
          'sr_link' := SrLink,
          'cp_data' := CpData,
          'da_data' := DaData,
          'plesk12_data' := Plesk12Data,
          'serviceAddons' := ServiceAddons
        }) ->
    #{ 'serviceInfo' => ServiceInfo,
       'client_links' => ClientLinks,
       'billingDetails' => BillingDetails,
       'custCurrency' => CustCurrency,
       'custCurrencySymbol' => CustCurrencySymbol,
       'serviceMaster' => ServiceMaster,
       'package' => Package,
       'os_template' => OsTemplate,
       'serviceExtra' => ServiceExtra,
       'extraInfoTables' => ExtraInfoTables,
       'cpu_graph_data' => CpuGraphData,
       'module' => Module,
       'token' => Token,
       'da_link' => DaLink,
       'sr_link' => SrLink,
       'cp_data' => CpData,
       'da_data' => DaData,
       'plesk12_data' => Plesk12Data,
       'serviceAddons' => ServiceAddons
     }.
