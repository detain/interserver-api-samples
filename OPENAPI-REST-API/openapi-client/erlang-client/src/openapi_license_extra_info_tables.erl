-module(openapi_license_extra_info_tables).

-export([encode/1]).

-export_type([openapi_license_extra_info_tables/0]).

-type openapi_license_extra_info_tables() ::
    #{ 'ip_info' => openapi_license_ip_info:openapi_license_ip_info()
     }.

encode(#{ 'ip_info' := IpInfo
        }) ->
    #{ 'ip_info' => IpInfo
     }.
