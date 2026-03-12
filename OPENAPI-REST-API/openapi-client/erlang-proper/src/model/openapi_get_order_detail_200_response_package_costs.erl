-module(openapi_get_order_detail_200_response_package_costs).

-include("openapi.hrl").

-export([openapi_get_order_detail_200_response_package_costs/0]).

-export([openapi_get_order_detail_200_response_package_costs/1]).

-export_type([openapi_get_order_detail_200_response_package_costs/0]).

-type openapi_get_order_detail_200_response_package_costs() ::
  [ {'package_id', integer() }
  | {'package_cost', integer() }
  | {'currency', binary() }
  | {'currencySymbol', binary() }
  ].


openapi_get_order_detail_200_response_package_costs() ->
    openapi_get_order_detail_200_response_package_costs([]).

openapi_get_order_detail_200_response_package_costs(Fields) ->
  Default = [ {'package_id', integer() }
            , {'package_cost', integer() }
            , {'currency', binary() }
            , {'currencySymbol', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

