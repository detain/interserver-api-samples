-module(openapi_get_website_buy_ip_200_response).

-export([encode/1]).

-export_type([openapi_get_website_buy_ip_200_response/0]).

-type openapi_get_website_buy_ip_200_response() ::
    #{ 'ips' => maps:map()
     }.

encode(#{ 'ips' := Ips
        }) ->
    #{ 'ips' => Ips
     }.
