-module(openapi_websites_order_service_offer).

-include("openapi.hrl").

-export([openapi_websites_order_service_offer/0]).

-export([openapi_websites_order_service_offer/1]).

-export_type([openapi_websites_order_service_offer/0]).

-type openapi_websites_order_service_offer() ::
  [ {'service_offer_id', binary() }
  | {'service_id', binary() }
  | {'intro_cost', binary() }
  | {'renewal_cost', binary() }
  | {'intro_frequency', binary() }
  | {'renewal_frequency', binary() }
  | {'allow_coupon', binary() }
  | {'service_module', binary() }
  | {'created_at', binary() }
  | {'updated_at', binary() }
  | {'deleted_at', binary() }
  ].


openapi_websites_order_service_offer() ->
    openapi_websites_order_service_offer([]).

openapi_websites_order_service_offer(Fields) ->
  Default = [ {'service_offer_id', binary() }
            , {'service_id', binary() }
            , {'intro_cost', binary() }
            , {'renewal_cost', binary() }
            , {'intro_frequency', binary() }
            , {'renewal_frequency', binary() }
            , {'allow_coupon', binary() }
            , {'service_module', binary() }
            , {'created_at', binary() }
            , {'updated_at', binary() }
            , {'deleted_at', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

