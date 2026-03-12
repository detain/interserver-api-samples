-module(openapi_websites_order_json_services).

-export([encode/1]).

-export_type([openapi_websites_order_json_services/0]).

-type openapi_websites_order_json_services() ::
    #{ '11447' := binary()
     }.

encode(#{ '11447' := 11447
        }) ->
    #{ '11447' => 11447
     }.
