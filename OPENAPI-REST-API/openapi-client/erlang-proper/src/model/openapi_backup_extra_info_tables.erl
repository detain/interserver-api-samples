-module(openapi_backup_extra_info_tables).

-include("openapi.hrl").

-export([openapi_backup_extra_info_tables/0]).

-export([openapi_backup_extra_info_tables/1]).

-export_type([openapi_backup_extra_info_tables/0]).

-type openapi_backup_extra_info_tables() ::
  [ {'ip_info', openapi_backup_ip_info:openapi_backup_ip_info() }
  ].


openapi_backup_extra_info_tables() ->
    openapi_backup_extra_info_tables([]).

openapi_backup_extra_info_tables(Fields) ->
  Default = [ {'ip_info', openapi_backup_ip_info:openapi_backup_ip_info() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

