-module(openapi_domain_nameserver_get_response_inner).

-export([encode/1]).

-export_type([openapi_domain_nameserver_get_response_inner/0]).

-type openapi_domain_nameserver_get_response_inner() ::
    #{ 'name' := binary(),
       'ipaddress' := binary(),
       'can_delete' := binary()
     }.

encode(#{ 'name' := Name,
          'ipaddress' := Ipaddress,
          'can_delete' := CanDelete
        }) ->
    #{ 'name' => Name,
       'ipaddress' => Ipaddress,
       'can_delete' => CanDelete
     }.
