-module(openapi_websites_order_service_offers).

-export([encode/1]).

-export_type([openapi_websites_order_service_offers/0]).

-type openapi_websites_order_service_offers() ::
    #{ '1026' := list()
     }.

encode(#{ '1026' := 1026
        }) ->
    #{ '1026' => 1026
     }.
