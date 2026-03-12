-module(openapi_get_order_detail_200_response_package_costs).

-export([encode/1]).

-export_type([openapi_get_order_detail_200_response_package_costs/0]).

-type openapi_get_order_detail_200_response_package_costs() ::
    #{ 'package_id' => integer(),
       'package_cost' => integer(),
       'currency' => binary(),
       'currencySymbol' => binary()
     }.

encode(#{ 'package_id' := PackageId,
          'package_cost' := PackageCost,
          'currency' := Currency,
          'currencySymbol' := CurrencySymbol
        }) ->
    #{ 'package_id' => PackageId,
       'package_cost' => PackageCost,
       'currency' => Currency,
       'currencySymbol' => CurrencySymbol
     }.
