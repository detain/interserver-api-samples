-module(openapi_server_order_get_response).

-include("openapi.hrl").

-export([openapi_server_order_get_response/0]).

-export([openapi_server_order_get_response/1]).

-export_type([openapi_server_order_get_response/0]).

-type openapi_server_order_get_response() ::
  [ {'form_values', openapi_form_values:openapi_form_values() }
  | {'config_ids', openapi_config_ids:openapi_config_ids() }
  | {'cpu', integer() }
  | {'cpu_li', map() }
  | {'config_li', openapi_config_lists:openapi_config_lists() }
  | {'field_label', map() }
  | {'cpu_cores', map() }
  | {'frequency', integer() }
  | {'currency', binary() }
  | {'currencySymbol', binary() }
  | {'country', binary() }
  | {'custid', integer() }
  | {'ima', binary() }
  | {'step', binary() }
  | {'regions', list(openapi_region:openapi_region()) }
  | {'asset_servers', list(openapi_asset_server:openapi_asset_server()) }
  | {'buy_it_servers', list(map()) }
  | {'display_showmore', binary() }
  | {'cust_discount', integer() }
  ].


openapi_server_order_get_response() ->
    openapi_server_order_get_response([]).

openapi_server_order_get_response(Fields) ->
  Default = [ {'form_values', openapi_form_values:openapi_form_values() }
            , {'config_ids', openapi_config_ids:openapi_config_ids() }
            , {'cpu', integer() }
            , {'cpu_li', map() }
            , {'config_li', openapi_config_lists:openapi_config_lists() }
            , {'field_label', map() }
            , {'cpu_cores', map() }
            , {'frequency', integer() }
            , {'currency', binary() }
            , {'currencySymbol', binary() }
            , {'country', binary() }
            , {'custid', integer() }
            , {'ima', binary() }
            , {'step', binary() }
            , {'regions', list(openapi_region:openapi_region()) }
            , {'asset_servers', list(openapi_asset_server:openapi_asset_server()) }
            , {'buy_it_servers', list(map()) }
            , {'display_showmore', binary() }
            , {'cust_discount', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

