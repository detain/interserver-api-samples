-module(openapi_websites_order_packages).

-export([encode/1]).

-export_type([openapi_websites_order_packages/0]).

-type openapi_websites_order_packages() ::
    #{ '11447' := binary()
     }.

encode(#{ '11447' := 11447
        }) ->
    #{ '11447' => 11447
     }.
