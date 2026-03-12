-module(openapi_backup).

-include("openapi.hrl").

-export([openapi_backup/0]).

-export([openapi_backup/1]).

-export_type([openapi_backup/0]).

-type openapi_backup() ::
  [ {'serviceInfo', openapi_backup_service_info:openapi_backup_service_info() }
  | {'client_links', list(openapi_backup_client_link:openapi_backup_client_link()) }
  | {'billingDetails', openapi_backup_billing_details:openapi_backup_billing_details() }
  | {'custCurrency', binary() }
  | {'custCurrencySymbol', binary() }
  | {'serviceMaster', openapi_backup_service_master:openapi_backup_service_master() }
  | {'package', binary() }
  | {'serviceExtra', binary() }
  | {'extraInfoTables', openapi_backup_extra_info_tables:openapi_backup_extra_info_tables() }
  ].


openapi_backup() ->
    openapi_backup([]).

openapi_backup(Fields) ->
  Default = [ {'serviceInfo', openapi_backup_service_info:openapi_backup_service_info() }
            , {'client_links', list(openapi_backup_client_link:openapi_backup_client_link()) }
            , {'billingDetails', openapi_backup_billing_details:openapi_backup_billing_details() }
            , {'custCurrency', binary() }
            , {'custCurrencySymbol', binary() }
            , {'serviceMaster', openapi_backup_service_master:openapi_backup_service_master() }
            , {'package', binary() }
            , {'serviceExtra', binary() }
            , {'extraInfoTables', openapi_backup_extra_info_tables:openapi_backup_extra_info_tables() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

