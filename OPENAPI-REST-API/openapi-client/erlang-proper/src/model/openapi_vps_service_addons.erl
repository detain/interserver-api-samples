-module(openapi_vps_service_addons).

-include("openapi.hrl").

-export([openapi_vps_service_addons/0]).

-export([openapi_vps_service_addons/1]).

-export_type([openapi_vps_service_addons/0]).

-type openapi_vps_service_addons() ::
  [ {'has_cpanel', boolean() }
  | {'has_directadmin', boolean() }
  | {'has_fantastico', boolean() }
  | {'has_softaculous', boolean() }
  | {'has_hdspace', boolean() }
  | {'dedicated_ip', boolean() }
  | {'extra_ips', list(binary()) }
  | {'extra_ips6', list(binary()) }
  | {'unpaid_ips', list(binary()) }
  | {'ips', list(binary()) }
  | {'ips6', list(binary()) }
  | {'cpanel_id', integer() }
  | {'cost', integer() }
  | {'ids', list(binary()) }
  | {'rdata', list(binary()) }
  ].


openapi_vps_service_addons() ->
    openapi_vps_service_addons([]).

openapi_vps_service_addons(Fields) ->
  Default = [ {'has_cpanel', boolean() }
            , {'has_directadmin', boolean() }
            , {'has_fantastico', boolean() }
            , {'has_softaculous', boolean() }
            , {'has_hdspace', boolean() }
            , {'dedicated_ip', boolean() }
            , {'extra_ips', list(binary()) }
            , {'extra_ips6', list(binary()) }
            , {'unpaid_ips', list(binary()) }
            , {'ips', list(binary()) }
            , {'ips6', list(binary()) }
            , {'cpanel_id', integer() }
            , {'cost', integer() }
            , {'ids', list(binary()) }
            , {'rdata', list(binary()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

