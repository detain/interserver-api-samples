-module(openapi_license).

-include("openapi.hrl").

-export([openapi_license/0]).

-export([openapi_license/1]).

-export_type([openapi_license/0]).

-type openapi_license() ::
  [ {'serviceInfo', openapi_license_service_info:openapi_license_service_info() }
  | {'client_links', list(openapi_license_client_link:openapi_license_client_link()) }
  | {'billingDetails', openapi_license_billing_details:openapi_license_billing_details() }
  | {'custCurrency', binary() }
  | {'custCurrencySymbol', binary() }
  | {'package', binary() }
  | {'serviceExtra', list(binary()) }
  | {'extraInfoTables', openapi_license_extra_info_tables:openapi_license_extra_info_tables() }
  | {'service_overview_extra', binary() }
  | {'serviceType', openapi_license_service_type:openapi_license_service_type() }
  | {'license_key', binary() }
  ].


openapi_license() ->
    openapi_license([]).

openapi_license(Fields) ->
  Default = [ {'serviceInfo', openapi_license_service_info:openapi_license_service_info() }
            , {'client_links', list(openapi_license_client_link:openapi_license_client_link()) }
            , {'billingDetails', openapi_license_billing_details:openapi_license_billing_details() }
            , {'custCurrency', binary() }
            , {'custCurrencySymbol', binary() }
            , {'package', binary() }
            , {'serviceExtra', list(binary()) }
            , {'extraInfoTables', openapi_license_extra_info_tables:openapi_license_extra_info_tables() }
            , {'service_overview_extra', binary() }
            , {'serviceType', openapi_license_service_type:openapi_license_service_type() }
            , {'license_key', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

