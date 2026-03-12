-module(openapi_vps_order_service_types).

-export([encode/1]).

-export_type([openapi_vps_order_service_types/0]).

-type openapi_vps_order_service_types() ::
    #{ '32' => openapi_vps_order_service_types_32:openapi_vps_order_service_types_32()
     }.

encode(#{ '32' := 32
        }) ->
    #{ '32' => 32
     }.
