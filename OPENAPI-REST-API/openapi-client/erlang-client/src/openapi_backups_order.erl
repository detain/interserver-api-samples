-module(openapi_backups_order).

-export([encode/1]).

-export_type([openapi_backups_order/0]).

-type openapi_backups_order() ::
    #{ 'packageCosts' := openapi_backups_order_package_costs:openapi_backups_order_package_costs(),
       'serviceTypes' := openapi_backups_order_service_types:openapi_backups_order_service_types()
     }.

encode(#{ 'packageCosts' := PackageCosts,
          'serviceTypes' := ServiceTypes
        }) ->
    #{ 'packageCosts' => PackageCosts,
       'serviceTypes' => ServiceTypes
     }.
