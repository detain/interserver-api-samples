-module(openapi_vps_order_service_types).

-include("openapi.hrl").

-export([openapi_vps_order_service_types/0]).

-export([openapi_vps_order_service_types/1]).

-export_type([openapi_vps_order_service_types/0]).

-type openapi_vps_order_service_types() ::
  [ {'32', openapi_vps_order_service_types_32:openapi_vps_order_service_types_32() }
  ].


openapi_vps_order_service_types() ->
    openapi_vps_order_service_types([]).

openapi_vps_order_service_types(Fields) ->
  Default = [ {'32', openapi_vps_order_service_types_32:openapi_vps_order_service_types_32() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

