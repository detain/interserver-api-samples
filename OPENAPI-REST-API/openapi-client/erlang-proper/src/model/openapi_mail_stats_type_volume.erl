-module(openapi_mail_stats_type_volume).

-include("openapi.hrl").

-export([openapi_mail_stats_type_volume/0]).

-export([openapi_mail_stats_type_volume/1]).

-export_type([openapi_mail_stats_type_volume/0]).

-type openapi_mail_stats_type_volume() ::
  [ {'to', openapi_mail_stats_type_volume_to:openapi_mail_stats_type_volume_to() }
  | {'from', openapi_mail_stats_type_volume_from:openapi_mail_stats_type_volume_from() }
  | {'ip', openapi_mail_stats_type_volume_ip:openapi_mail_stats_type_volume_ip() }
  ].


openapi_mail_stats_type_volume() ->
    openapi_mail_stats_type_volume([]).

openapi_mail_stats_type_volume(Fields) ->
  Default = [ {'to', openapi_mail_stats_type_volume_to:openapi_mail_stats_type_volume_to() }
            , {'from', openapi_mail_stats_type_volume_from:openapi_mail_stats_type_volume_from() }
            , {'ip', openapi_mail_stats_type_volume_ip:openapi_mail_stats_type_volume_ip() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

