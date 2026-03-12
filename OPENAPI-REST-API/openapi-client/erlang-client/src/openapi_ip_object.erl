-module(openapi_ip_object).

-export([encode/1]).

-export_type([openapi_ip_object/0]).

-type openapi_ip_object() ::
    #{ 'ip' := binary()
     }.

encode(#{ 'ip' := Ip
        }) ->
    #{ 'ip' => Ip
     }.
