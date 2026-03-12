-module(openapi_get_order_detail_200_response_service_types_inner).

-include("openapi.hrl").

-export([openapi_get_order_detail_200_response_service_types_inner/0]).

-export([openapi_get_order_detail_200_response_service_types_inner/1]).

-export_type([openapi_get_order_detail_200_response_service_types_inner/0]).

-type openapi_get_order_detail_200_response_service_types_inner() ::
  [ {'services_id', integer() }
  | {'services_name', binary() }
  | {'services_cost', integer() }
  | {'services_field1', binary() }
  | {'services_field2', binary() }
  | {'services_module', binary() }
  ].


openapi_get_order_detail_200_response_service_types_inner() ->
    openapi_get_order_detail_200_response_service_types_inner([]).

openapi_get_order_detail_200_response_service_types_inner(Fields) ->
  Default = [ {'services_id', integer() }
            , {'services_name', binary() }
            , {'services_cost', integer() }
            , {'services_field1', binary() }
            , {'services_field2', binary() }
            , {'services_module', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

