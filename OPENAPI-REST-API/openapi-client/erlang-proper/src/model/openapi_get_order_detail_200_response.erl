-module(openapi_get_order_detail_200_response).

-include("openapi.hrl").

-export([openapi_get_order_detail_200_response/0]).

-export([openapi_get_order_detail_200_response/1]).

-export_type([openapi_get_order_detail_200_response/0]).

-type openapi_get_order_detail_200_response() ::
  [ {'packageCosts', openapi_get_order_detail_200_response_package_costs:openapi_get_order_detail_200_response_package_costs() }
  | {'serviceTypes', list(openapi_get_order_detail_200_response_service_types_inner:openapi_get_order_detail_200_response_service_types_inner()) }
  | {'ips', list(openapi_get_order_detail_200_response_ips_inner:openapi_get_order_detail_200_response_ips_inner()) }
  ].


openapi_get_order_detail_200_response() ->
    openapi_get_order_detail_200_response([]).

openapi_get_order_detail_200_response(Fields) ->
  Default = [ {'packageCosts', openapi_get_order_detail_200_response_package_costs:openapi_get_order_detail_200_response_package_costs() }
            , {'serviceTypes', list(openapi_get_order_detail_200_response_service_types_inner:openapi_get_order_detail_200_response_service_types_inner()) }
            , {'ips', list(openapi_get_order_detail_200_response_ips_inner:openapi_get_order_detail_200_response_ips_inner()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

