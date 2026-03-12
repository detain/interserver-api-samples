-module(openapi_websites_order_json_service_offers_item).

-include("openapi.hrl").

-export([openapi_websites_order_json_service_offers_item/0]).

-export([openapi_websites_order_json_service_offers_item/1]).

-export_type([openapi_websites_order_json_service_offers_item/0]).

-type openapi_websites_order_json_service_offers_item() ::
  [ {'service_offer_id', binary() }
  | {'service_id', binary() }
  | {'intro_cost', integer() }
  | {'renewal_cost', integer() }
  | {'intro_frequency', binary() }
  | {'renewal_frequency', binary() }
  | {'allow_coupon', binary() }
  | {'service_module', binary() }
  | {'created_at', binary() }
  | {'updated_at', binary() }
  | {'deleted_at', binary() }
  | {'currencySymbol', binary() }
  ].


openapi_websites_order_json_service_offers_item() ->
    openapi_websites_order_json_service_offers_item([]).

openapi_websites_order_json_service_offers_item(Fields) ->
  Default = [ {'service_offer_id', binary() }
            , {'service_id', binary() }
            , {'intro_cost', integer() }
            , {'renewal_cost', integer() }
            , {'intro_frequency', binary() }
            , {'renewal_frequency', binary() }
            , {'allow_coupon', binary() }
            , {'service_module', binary() }
            , {'created_at', binary() }
            , {'updated_at', binary() }
            , {'deleted_at', binary() }
            , {'currencySymbol', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

