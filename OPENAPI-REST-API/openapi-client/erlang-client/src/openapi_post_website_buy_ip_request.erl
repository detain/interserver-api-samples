-module(openapi_post_website_buy_ip_request).

-export([encode/1]).

-export_type([openapi_post_website_buy_ip_request/0]).

-type openapi_post_website_buy_ip_request() ::
    #{ 'ips' => maps:map()
     }.

encode(#{ 'ips' := Ips
        }) ->
    #{ 'ips' => Ips
     }.
