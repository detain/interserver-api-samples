-module(openapi_websites_order_service_types).

-export([encode/1]).

-export_type([openapi_websites_order_service_types/0]).

-type openapi_websites_order_service_types() ::
    #{ '11447' := openapi_websites_order_service_types:openapi_websites_order_service_types()
     }.

encode(#{ '11447' := 11447
        }) ->
    #{ '11447' => 11447
     }.
