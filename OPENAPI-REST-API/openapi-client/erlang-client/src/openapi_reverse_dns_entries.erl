-module(openapi_reverse_dns_entries).

-export([encode/1]).

-export_type([openapi_reverse_dns_entries/0]).

-type openapi_reverse_dns_entries() ::
    #{ 'ips' => maps:map()
     }.

encode(#{ 'ips' := Ips
        }) ->
    #{ 'ips' => Ips
     }.
