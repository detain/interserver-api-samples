-module(openapi_home_details_modules).

-export([encode/1]).

-export_type([openapi_home_details_modules/0]).

-type openapi_home_details_modules() ::
    #{ 'domains' => openapi_home_details_modules_domains:openapi_home_details_modules_domains(),
       'webhosting' => openapi_home_details_modules_webhosting:openapi_home_details_modules_webhosting(),
       'vps' => openapi_home_details_modules_vps:openapi_home_details_modules_vps(),
       'licenses' => openapi_home_details_modules_licenses:openapi_home_details_modules_licenses(),
       'backups' => openapi_home_details_modules_backups:openapi_home_details_modules_backups(),
       'servers' => openapi_home_details_modules_servers:openapi_home_details_modules_servers(),
       'quickservers' => openapi_home_details_modules_quickservers:openapi_home_details_modules_quickservers()
     }.

encode(#{ 'domains' := Domains,
          'webhosting' := Webhosting,
          'vps' := Vps,
          'licenses' := Licenses,
          'backups' := Backups,
          'servers' := Servers,
          'quickservers' := Quickservers
        }) ->
    #{ 'domains' => Domains,
       'webhosting' => Webhosting,
       'vps' => Vps,
       'licenses' => Licenses,
       'backups' => Backups,
       'servers' => Servers,
       'quickservers' => Quickservers
     }.
