-module(openapi_quickserver_extra_info_tables).

-export([encode/1]).

-export_type([openapi_quickserver_extra_info_tables/0]).

-type openapi_quickserver_extra_info_tables() ::
    #{ 'ip_info' => openapi_quickserver_ip_info:openapi_quickserver_ip_info(),
       'addons' => openapi_quickserver_addons:openapi_quickserver_addons()
     }.

encode(#{ 'ip_info' := IpInfo,
          'addons' := Addons
        }) ->
    #{ 'ip_info' => IpInfo,
       'addons' => Addons
     }.
