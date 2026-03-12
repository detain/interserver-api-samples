-module(openapi_vps_order).

-include("openapi.hrl").

-export([openapi_vps_order/0]).

-export([openapi_vps_order/1]).

-export_type([openapi_vps_order/0]).

-type openapi_vps_order() ::
  [ {'vpsSliceSsdOvzCost', integer() }
  | {'vpsSliceOvzCost', integer() }
  | {'vpsSliceSsdVirtuozzoCost', integer() }
  | {'vpsSliceVirtuozzoCost', integer() }
  | {'vpsSliceHypervCost', integer() }
  | {'vpsSliceVmwareCost', integer() }
  | {'vpsSliceLxcCost', integer() }
  | {'vpsSliceXenCost', integer() }
  | {'vpsSliceKvmLCost', integer() }
  | {'vpsSliceKvmStorageCost', integer() }
  | {'vpsNyCost', integer() }
  | {'vpsSliceKvmWCost', integer() }
  | {'cpanelCost', integer() }
  | {'daCost', integer() }
  | {'ramSlice', binary() }
  | {'hdSlice', binary() }
  | {'hdStorageSlice', binary() }
  | {'bwSlice', binary() }
  | {'bwType', binary() }
  | {'bwTotal', integer() }
  | {'maxSlices', binary() }
  | {'platformPackages', openapi_vps_order_platform_packages:openapi_vps_order_platform_packages() }
  | {'platformNames', openapi_vps_order_platform_names:openapi_vps_order_platform_names() }
  | {'packageCosts', openapi_vps_order_package_costs:openapi_vps_order_package_costs() }
  | {'locationStock', openapi_vps_order_location_stock:openapi_vps_order_location_stock() }
  | {'locationNames', openapi_vps_order_location_names:openapi_vps_order_location_names() }
  | {'osNames', openapi_vps_order_os_names:openapi_vps_order_os_names() }
  | {'templates', openapi_vps_order_templates:openapi_vps_order_templates() }
  | {'serviceTypes', openapi_vps_order_service_types:openapi_vps_order_service_types() }
  | {'currency', binary() }
  | {'currencySymbol', binary() }
  ].


openapi_vps_order() ->
    openapi_vps_order([]).

openapi_vps_order(Fields) ->
  Default = [ {'vpsSliceSsdOvzCost', integer() }
            , {'vpsSliceOvzCost', integer() }
            , {'vpsSliceSsdVirtuozzoCost', integer() }
            , {'vpsSliceVirtuozzoCost', integer() }
            , {'vpsSliceHypervCost', integer() }
            , {'vpsSliceVmwareCost', integer() }
            , {'vpsSliceLxcCost', integer() }
            , {'vpsSliceXenCost', integer() }
            , {'vpsSliceKvmLCost', integer() }
            , {'vpsSliceKvmStorageCost', integer() }
            , {'vpsNyCost', integer() }
            , {'vpsSliceKvmWCost', integer() }
            , {'cpanelCost', integer() }
            , {'daCost', integer() }
            , {'ramSlice', binary() }
            , {'hdSlice', binary() }
            , {'hdStorageSlice', binary() }
            , {'bwSlice', binary() }
            , {'bwType', binary() }
            , {'bwTotal', integer() }
            , {'maxSlices', binary() }
            , {'platformPackages', openapi_vps_order_platform_packages:openapi_vps_order_platform_packages() }
            , {'platformNames', openapi_vps_order_platform_names:openapi_vps_order_platform_names() }
            , {'packageCosts', openapi_vps_order_package_costs:openapi_vps_order_package_costs() }
            , {'locationStock', openapi_vps_order_location_stock:openapi_vps_order_location_stock() }
            , {'locationNames', openapi_vps_order_location_names:openapi_vps_order_location_names() }
            , {'osNames', openapi_vps_order_os_names:openapi_vps_order_os_names() }
            , {'templates', openapi_vps_order_templates:openapi_vps_order_templates() }
            , {'serviceTypes', openapi_vps_order_service_types:openapi_vps_order_service_types() }
            , {'currency', binary() }
            , {'currencySymbol', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

