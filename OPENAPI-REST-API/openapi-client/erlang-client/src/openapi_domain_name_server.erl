-module(openapi_domain_name_server).

-export([encode/1]).

-export_type([openapi_domain_name_server/0]).

-type openapi_domain_name_server() ::
    #{ 'sortorder' => binary(),
       'name' => binary(),
       'ipaddress' => binary()
     }.

encode(#{ 'sortorder' := Sortorder,
          'name' := Name,
          'ipaddress' := Ipaddress
        }) ->
    #{ 'sortorder' => Sortorder,
       'name' => Name,
       'ipaddress' => Ipaddress
     }.
