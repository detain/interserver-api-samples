-module(openapi_home_services).

-export([encode/1]).

-export_type([openapi_home_services/0]).

-type openapi_home_services() ::
    #{ 'domains' => openapi_home_services_domains:openapi_home_services_domains(),
       'webhosting' => openapi_home_services_webhosting:openapi_home_services_webhosting(),
       'vps' => openapi_home_services_vps:openapi_home_services_vps(),
       'licenses' => openapi_home_services_licenses:openapi_home_services_licenses(),
       'servers' => openapi_home_services_servers:openapi_home_services_servers(),
       'backups' => openapi_home_services_backups:openapi_home_services_backups()
     }.

encode(#{ 'domains' := Domains,
          'webhosting' := Webhosting,
          'vps' := Vps,
          'licenses' := Licenses,
          'servers' := Servers,
          'backups' := Backups
        }) ->
    #{ 'domains' => Domains,
       'webhosting' => Webhosting,
       'vps' => Vps,
       'licenses' => Licenses,
       'servers' => Servers,
       'backups' => Backups
     }.
