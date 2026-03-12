-module(openapi_home_services).

-include("openapi.hrl").

-export([openapi_home_services/0]).

-export([openapi_home_services/1]).

-export_type([openapi_home_services/0]).

-type openapi_home_services() ::
  [ {'domains', openapi_home_services_domains:openapi_home_services_domains() }
  | {'webhosting', openapi_home_services_webhosting:openapi_home_services_webhosting() }
  | {'vps', openapi_home_services_vps:openapi_home_services_vps() }
  | {'licenses', openapi_home_services_licenses:openapi_home_services_licenses() }
  | {'servers', openapi_home_services_servers:openapi_home_services_servers() }
  | {'backups', openapi_home_services_backups:openapi_home_services_backups() }
  ].


openapi_home_services() ->
    openapi_home_services([]).

openapi_home_services(Fields) ->
  Default = [ {'domains', openapi_home_services_domains:openapi_home_services_domains() }
            , {'webhosting', openapi_home_services_webhosting:openapi_home_services_webhosting() }
            , {'vps', openapi_home_services_vps:openapi_home_services_vps() }
            , {'licenses', openapi_home_services_licenses:openapi_home_services_licenses() }
            , {'servers', openapi_home_services_servers:openapi_home_services_servers() }
            , {'backups', openapi_home_services_backups:openapi_home_services_backups() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

