-module(openapi_quickserver).

-export([encode/1]).

-export_type([openapi_quickserver/0]).

-type openapi_quickserver() ::
    #{ 'serviceInfo' := openapi_quickserver_service_info:openapi_quickserver_service_info(),
       'client_links' := list(),
       'billingDetails' := openapi_quickserver_billing_details:openapi_quickserver_billing_details(),
       'custCurrency' := binary(),
       'custCurrencySymbol' := binary(),
       'serviceMaster' := openapi_quickserver_service_master:openapi_quickserver_service_master(),
       'package' := binary(),
       'os_template' := binary(),
       'serviceExtra' := openapi_quickserver_service_extra:openapi_quickserver_service_extra(),
       'extraInfoTables' := openapi_quickserver_extra_info_tables:openapi_quickserver_extra_info_tables(),
       'cpu_graph_data' := binary(),
       'bandwidth_xaxis' := binary(),
       'bandwidth_yaxis' := binary(),
       'module' := binary(),
       'token' := binary(),
       'service_disk_used' := binary(),
       'service_disk_total' := binary(),
       'disk_percentage' := integer(),
       'memory' := binary(),
       'hdd' := binary(),
       'service_overview_extra' := list()
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
          'bandwidth_xaxis' := BandwidthXaxis,
          'bandwidth_yaxis' := BandwidthYaxis,
          'module' := Module,
          'token' := Token,
          'service_disk_used' := ServiceDiskUsed,
          'service_disk_total' := ServiceDiskTotal,
          'disk_percentage' := DiskPercentage,
          'memory' := Memory,
          'hdd' := Hdd,
          'service_overview_extra' := ServiceOverviewExtra
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
       'bandwidth_xaxis' => BandwidthXaxis,
       'bandwidth_yaxis' => BandwidthYaxis,
       'module' => Module,
       'token' => Token,
       'service_disk_used' => ServiceDiskUsed,
       'service_disk_total' => ServiceDiskTotal,
       'disk_percentage' => DiskPercentage,
       'memory' => Memory,
       'hdd' => Hdd,
       'service_overview_extra' => ServiceOverviewExtra
     }.
