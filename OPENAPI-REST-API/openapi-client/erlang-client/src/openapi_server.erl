-module(openapi_server).

-export([encode/1]).

-export_type([openapi_server/0]).

-type openapi_server() ::
    #{ 'ipmiAuth' := boolean(),
       'client_links' := list(),
       'billingDetails' := openapi_server_billing_details:openapi_server_billing_details(),
       'custCurrency' := binary(),
       'custCurrencySymbol' := binary(),
       'package' := binary(),
       'serviceExtra' := list(),
       'locations' := openapi_server_locations:openapi_server_locations(),
       'networkInfo' := openapi_server_network_info:openapi_server_network_info(),
       'extraInfoTables' := openapi_server_extra_info_tables:openapi_server_extra_info_tables(),
       'serviceInfo' := openapi_server_service_info:openapi_server_service_info()
     }.

encode(#{ 'ipmiAuth' := IpmiAuth,
          'client_links' := ClientLinks,
          'billingDetails' := BillingDetails,
          'custCurrency' := CustCurrency,
          'custCurrencySymbol' := CustCurrencySymbol,
          'package' := Package,
          'serviceExtra' := ServiceExtra,
          'locations' := Locations,
          'networkInfo' := NetworkInfo,
          'extraInfoTables' := ExtraInfoTables,
          'serviceInfo' := ServiceInfo
        }) ->
    #{ 'ipmiAuth' => IpmiAuth,
       'client_links' => ClientLinks,
       'billingDetails' => BillingDetails,
       'custCurrency' => CustCurrency,
       'custCurrencySymbol' => CustCurrencySymbol,
       'package' => Package,
       'serviceExtra' => ServiceExtra,
       'locations' => Locations,
       'networkInfo' => NetworkInfo,
       'extraInfoTables' => ExtraInfoTables,
       'serviceInfo' => ServiceInfo
     }.
