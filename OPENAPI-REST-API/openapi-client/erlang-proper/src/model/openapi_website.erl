-module(openapi_website).

-include("openapi.hrl").

-export([openapi_website/0]).

-export([openapi_website/1]).

-export_type([openapi_website/0]).

-type openapi_website() ::
  [ {'serviceInfo', openapi_website_service_info:openapi_website_service_info() }
  | {'client_links', list(openapi_website_client_link:openapi_website_client_link()) }
  | {'billingDetails', openapi_website_billing_details:openapi_website_billing_details() }
  | {'custCurrency', binary() }
  | {'custCurrencySymbol', binary() }
  | {'serviceMaster', openapi_website_service_master:openapi_website_service_master() }
  | {'package', binary() }
  | {'serviceExtra', list(map()) }
  | {'extraInfoTables', openapi_website_extra_info_tables:openapi_website_extra_info_tables() }
  ].


openapi_website() ->
    openapi_website([]).

openapi_website(Fields) ->
  Default = [ {'serviceInfo', openapi_website_service_info:openapi_website_service_info() }
            , {'client_links', list(openapi_website_client_link:openapi_website_client_link()) }
            , {'billingDetails', openapi_website_billing_details:openapi_website_billing_details() }
            , {'custCurrency', binary() }
            , {'custCurrencySymbol', binary() }
            , {'serviceMaster', openapi_website_service_master:openapi_website_service_master() }
            , {'package', binary() }
            , {'serviceExtra', list(map()) }
            , {'extraInfoTables', openapi_website_extra_info_tables:openapi_website_extra_info_tables() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

