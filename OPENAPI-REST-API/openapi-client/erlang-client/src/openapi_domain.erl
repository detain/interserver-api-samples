-module(openapi_domain).

-export([encode/1]).

-export_type([openapi_domain/0]).

-type openapi_domain() ::
    #{ 'serviceInfo' => openapi_domain_service_info:openapi_domain_service_info(),
       'serviceTypes' => maps:map(),
       'client_links' => list(),
       'billingDetails' => openapi_domain_billing_details:openapi_domain_billing_details(),
       'custCurrency' => binary(),
       'custCurrencySymbol' => binary(),
       'serviceExtra' => openapi_domain_billing_extra:openapi_domain_billing_extra(),
       'extraInfoTables' => openapi_backup_extra_info_tables:openapi_backup_extra_info_tables(),
       'serviceType' => openapi_domain_service_type:openapi_domain_service_type(),
       'contact_details' => openapi_domain_contact_details:openapi_domain_contact_details(),
       'pwarning' => binary(),
       'transfer_info' => binary(),
       'errors' => boolean(),
       'domain_logs' => list(),
       'allInfo' => openapi_domain_all_info:openapi_domain_all_info(),
       'registrarStatus' => binary(),
       'locked' => binary(),
       'whoisPrivacy' => binary(),
       'autoRenew' => binary()
     }.

encode(#{ 'serviceInfo' := ServiceInfo,
          'serviceTypes' := ServiceTypes,
          'client_links' := ClientLinks,
          'billingDetails' := BillingDetails,
          'custCurrency' := CustCurrency,
          'custCurrencySymbol' := CustCurrencySymbol,
          'serviceExtra' := ServiceExtra,
          'extraInfoTables' := ExtraInfoTables,
          'serviceType' := ServiceType,
          'contact_details' := ContactDetails,
          'pwarning' := Pwarning,
          'transfer_info' := TransferInfo,
          'errors' := Errors,
          'domain_logs' := DomainLogs,
          'allInfo' := AllInfo,
          'registrarStatus' := RegistrarStatus,
          'locked' := Locked,
          'whoisPrivacy' := WhoisPrivacy,
          'autoRenew' := AutoRenew
        }) ->
    #{ 'serviceInfo' => ServiceInfo,
       'serviceTypes' => ServiceTypes,
       'client_links' => ClientLinks,
       'billingDetails' => BillingDetails,
       'custCurrency' => CustCurrency,
       'custCurrencySymbol' => CustCurrencySymbol,
       'serviceExtra' => ServiceExtra,
       'extraInfoTables' => ExtraInfoTables,
       'serviceType' => ServiceType,
       'contact_details' => ContactDetails,
       'pwarning' => Pwarning,
       'transfer_info' => TransferInfo,
       'errors' => Errors,
       'domain_logs' => DomainLogs,
       'allInfo' => AllInfo,
       'registrarStatus' => RegistrarStatus,
       'locked' => Locked,
       'whoisPrivacy' => WhoisPrivacy,
       'autoRenew' => AutoRenew
     }.
