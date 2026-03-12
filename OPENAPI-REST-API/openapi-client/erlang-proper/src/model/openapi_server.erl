-module(openapi_server).

-include("openapi.hrl").

-export([openapi_server/0]).

-export([openapi_server/1]).

-export_type([openapi_server/0]).

-type openapi_server() ::
  [ {'ipmiAuth', boolean() }
  | {'client_links', list(openapi_server_client_link:openapi_server_client_link()) }
  | {'billingDetails', openapi_server_billing_details:openapi_server_billing_details() }
  | {'custCurrency', binary() }
  | {'custCurrencySymbol', binary() }
  | {'package', binary() }
  | {'serviceExtra', list(binary()) }
  | {'locations', openapi_server_locations:openapi_server_locations() }
  | {'networkInfo', openapi_server_network_info:openapi_server_network_info() }
  | {'extraInfoTables', openapi_server_extra_info_tables:openapi_server_extra_info_tables() }
  | {'serviceInfo', openapi_server_service_info:openapi_server_service_info() }
  ].


openapi_server() ->
    openapi_server([]).

openapi_server(Fields) ->
  Default = [ {'ipmiAuth', boolean() }
            , {'client_links', list(openapi_server_client_link:openapi_server_client_link()) }
            , {'billingDetails', openapi_server_billing_details:openapi_server_billing_details() }
            , {'custCurrency', binary() }
            , {'custCurrencySymbol', binary() }
            , {'package', binary() }
            , {'serviceExtra', list(binary()) }
            , {'locations', openapi_server_locations:openapi_server_locations() }
            , {'networkInfo', openapi_server_network_info:openapi_server_network_info() }
            , {'extraInfoTables', openapi_server_extra_info_tables:openapi_server_extra_info_tables() }
            , {'serviceInfo', openapi_server_service_info:openapi_server_service_info() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

