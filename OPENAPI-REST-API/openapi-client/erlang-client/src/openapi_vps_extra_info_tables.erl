-module(openapi_vps_extra_info_tables).

-export([encode/1]).

-export_type([openapi_vps_extra_info_tables/0]).

-type openapi_vps_extra_info_tables() ::
    #{ 'ip_info' => openapi_vps_ip_info:openapi_vps_ip_info()
     }.

encode(#{ 'ip_info' := IpInfo
        }) ->
    #{ 'ip_info' => IpInfo
     }.
