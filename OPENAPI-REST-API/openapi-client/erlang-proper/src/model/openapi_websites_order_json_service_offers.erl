-module(openapi_websites_order_json_service_offers).

-include("openapi.hrl").

-export([openapi_websites_order_json_service_offers/0]).

-export([openapi_websites_order_json_service_offers/1]).

-export_type([openapi_websites_order_json_service_offers/0]).

-type openapi_websites_order_json_service_offers() ::
  [ {'1026', list(openapi_websites_order_json_service_offers_item:openapi_websites_order_json_service_offers_item()) }
  ].


openapi_websites_order_json_service_offers() ->
    openapi_websites_order_json_service_offers([]).

openapi_websites_order_json_service_offers(Fields) ->
  Default = [ {'1026', list(openapi_websites_order_json_service_offers_item:openapi_websites_order_json_service_offers_item()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

