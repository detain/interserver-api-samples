-module(openapi_domain).

-include("openapi.hrl").

-export([openapi_domain/0]).

-export([openapi_domain/1]).

-export_type([openapi_domain/0]).

-type openapi_domain() ::
  [ {'serviceInfo', openapi_domain_service_info:openapi_domain_service_info() }
  | {'serviceTypes', map() }
  | {'client_links', list(openapi_domain_client_link:openapi_domain_client_link()) }
  | {'billingDetails', openapi_domain_billing_details:openapi_domain_billing_details() }
  | {'custCurrency', binary() }
  | {'custCurrencySymbol', binary() }
  | {'serviceExtra', openapi_domain_billing_extra:openapi_domain_billing_extra() }
  | {'extraInfoTables', openapi_backup_extra_info_tables:openapi_backup_extra_info_tables() }
  | {'serviceType', openapi_domain_service_type:openapi_domain_service_type() }
  | {'contact_details', openapi_domain_contact_details:openapi_domain_contact_details() }
  | {'pwarning', binary() }
  | {'transfer_info', binary() }
  | {'errors', boolean() }
  | {'domain_logs', list(binary()) }
  | {'allInfo', openapi_domain_all_info:openapi_domain_all_info() }
  | {'registrarStatus', binary() }
  | {'locked', binary() }
  | {'whoisPrivacy', binary() }
  | {'autoRenew', binary() }
  ].


openapi_domain() ->
    openapi_domain([]).

openapi_domain(Fields) ->
  Default = [ {'serviceInfo', openapi_domain_service_info:openapi_domain_service_info() }
            , {'serviceTypes', map() }
            , {'client_links', list(openapi_domain_client_link:openapi_domain_client_link()) }
            , {'billingDetails', openapi_domain_billing_details:openapi_domain_billing_details() }
            , {'custCurrency', binary() }
            , {'custCurrencySymbol', binary() }
            , {'serviceExtra', openapi_domain_billing_extra:openapi_domain_billing_extra() }
            , {'extraInfoTables', openapi_backup_extra_info_tables:openapi_backup_extra_info_tables() }
            , {'serviceType', openapi_domain_service_type:openapi_domain_service_type() }
            , {'contact_details', openapi_domain_contact_details:openapi_domain_contact_details() }
            , {'pwarning', binary() }
            , {'transfer_info', binary() }
            , {'errors', boolean() }
            , {'domain_logs', list(binary()) }
            , {'allInfo', openapi_domain_all_info:openapi_domain_all_info() }
            , {'registrarStatus', binary() }
            , {'locked', binary() }
            , {'whoisPrivacy', binary() }
            , {'autoRenew', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

