-module(openapi_licenses_order).

-export([encode/1]).

-export_type([openapi_licenses_order/0]).

-type openapi_licenses_order() ::
    #{ 'serviceCategories' => openapi_licenses_order_service_categories:openapi_licenses_order_service_categories(),
       'packageCosts' => openapi_licenses_order_package_costs:openapi_licenses_order_package_costs(),
       'serviceTypes' => openapi_licenses_order_service_types:openapi_licenses_order_service_types()
     }.

encode(#{ 'serviceCategories' := ServiceCategories,
          'packageCosts' := PackageCosts,
          'serviceTypes' := ServiceTypes
        }) ->
    #{ 'serviceCategories' => ServiceCategories,
       'packageCosts' => PackageCosts,
       'serviceTypes' => ServiceTypes
     }.
