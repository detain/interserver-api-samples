-module(openapi_mail_schema_extra_info_tables).

-include("openapi.hrl").

-export([openapi_mail_schema_extra_info_tables/0]).

-export([openapi_mail_schema_extra_info_tables/1]).

-export_type([openapi_mail_schema_extra_info_tables/0]).

-type openapi_mail_schema_extra_info_tables() ::
  [ {'mail', openapi_mail_extra_info_table:openapi_mail_extra_info_table() }
  | {'tutorials', openapi_mail_tutorials_table:openapi_mail_tutorials_table() }
  ].


openapi_mail_schema_extra_info_tables() ->
    openapi_mail_schema_extra_info_tables([]).

openapi_mail_schema_extra_info_tables(Fields) ->
  Default = [ {'mail', openapi_mail_extra_info_table:openapi_mail_extra_info_table() }
            , {'tutorials', openapi_mail_tutorials_table:openapi_mail_tutorials_table() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

