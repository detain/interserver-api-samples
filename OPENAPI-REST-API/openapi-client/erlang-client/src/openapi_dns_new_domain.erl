-module(openapi_dns_new_domain).

-export([encode/1]).

-export_type([openapi_dns_new_domain/0]).

-type openapi_dns_new_domain() ::
    #{ 'domain' := binary(),
       'ip' := binary()
     }.

encode(#{ 'domain' := Domain,
          'ip' := Ip
        }) ->
    #{ 'domain' => Domain,
       'ip' => Ip
     }.
