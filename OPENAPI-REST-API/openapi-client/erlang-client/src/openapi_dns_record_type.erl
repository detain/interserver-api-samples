-module(openapi_dns_record_type).

-export([encode/1]).

-export_type([openapi_dns_record_type/0]).

-type openapi_dns_record_type() ::
    #{ 
     }.

encode(#{ 
        }) ->
    #{ 
     }.
