-module(openapi_backup_extra_info_tables).

-export([encode/1]).

-export_type([openapi_backup_extra_info_tables/0]).

-type openapi_backup_extra_info_tables() ::
    #{ 'ip_info' => openapi_backup_ip_info:openapi_backup_ip_info()
     }.

encode(#{ 'ip_info' := IpInfo
        }) ->
    #{ 'ip_info' => IpInfo
     }.
