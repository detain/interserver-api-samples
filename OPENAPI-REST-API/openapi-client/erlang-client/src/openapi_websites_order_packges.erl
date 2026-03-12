-module(openapi_websites_order_packges).

-export([encode/1]).

-export_type([openapi_websites_order_packges/0]).

-type openapi_websites_order_packges() ::
    #{ '11440' := openapi_websites_order_packages_info:openapi_websites_order_packages_info()
     }.

encode(#{ '11440' := 11440
        }) ->
    #{ '11440' => 11440
     }.
