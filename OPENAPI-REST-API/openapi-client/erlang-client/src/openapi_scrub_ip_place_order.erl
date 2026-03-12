-module(openapi_scrub_ip_place_order).

-export([encode/1]).

-export_type([openapi_scrub_ip_place_order/0]).

-type openapi_scrub_ip_place_order() ::
    #{ 'service_type' := integer(),
       'ip' := binary()
     }.

encode(#{ 'service_type' := ServiceType,
          'ip' := Ip
        }) ->
    #{ 'service_type' => ServiceType,
       'ip' => Ip
     }.
