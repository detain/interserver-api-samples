-module(openapi_login_service_counts).

-export([encode/1]).

-export_type([openapi_login_service_counts/0]).

-type openapi_login_service_counts() ::
    #{ 'vps' := integer(),
       'websites' := integer(),
       'servers' := integer()
     }.

encode(#{ 'vps' := Vps,
          'websites' := Websites,
          'servers' := Servers
        }) ->
    #{ 'vps' => Vps,
       'websites' => Websites,
       'servers' => Servers
     }.
