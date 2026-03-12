-module(openapi_get_order_detail_200_response).

-export([encode/1]).

-export_type([openapi_get_order_detail_200_response/0]).

-type openapi_get_order_detail_200_response() ::
    #{ 'packageCosts' => openapi_get_order_detail_200_response_package_costs:openapi_get_order_detail_200_response_package_costs(),
       'serviceTypes' => list(),
       'ips' => list()
     }.

encode(#{ 'packageCosts' := PackageCosts,
          'serviceTypes' := ServiceTypes,
          'ips' := Ips
        }) ->
    #{ 'packageCosts' => PackageCosts,
       'serviceTypes' => ServiceTypes,
       'ips' => Ips
     }.
