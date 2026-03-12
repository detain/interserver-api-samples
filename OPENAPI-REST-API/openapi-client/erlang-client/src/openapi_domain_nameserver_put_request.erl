-module(openapi_domain_nameserver_put_request).

-export([encode/1]).

-export_type([openapi_domain_nameserver_put_request/0]).

-type openapi_domain_nameserver_put_request() ::
    #{ 'nameserver' := list()
     }.

encode(#{ 'nameserver' := Nameserver
        }) ->
    #{ 'nameserver' => Nameserver
     }.
