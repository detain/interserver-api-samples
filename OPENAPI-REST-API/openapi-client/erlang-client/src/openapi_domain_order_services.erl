-module(openapi_domain_order_services).

-export([encode/1]).

-export_type([openapi_domain_order_services/0]).

-type openapi_domain_order_services() ::
    #{ 'DomainOrderServices10001' => openapi_domain_order_services10001:openapi_domain_order_services10001()
     }.

encode(#{ 'DomainOrderServices10001' := DomainOrderServices10001
        }) ->
    #{ 'DomainOrderServices10001' => DomainOrderServices10001
     }.
