-module(openapi_mail_extra_info_table).

-include("openapi.hrl").

-export([openapi_mail_extra_info_table/0]).

-export([openapi_mail_extra_info_table/1]).

-export_type([openapi_mail_extra_info_table/0]).

-type openapi_mail_extra_info_table() ::
  [ {'title', binary() }
  | {'rows', list(openapi_mail_extra_info_table_row:openapi_mail_extra_info_table_row()) }
  ].


openapi_mail_extra_info_table() ->
    openapi_mail_extra_info_table([]).

openapi_mail_extra_info_table(Fields) ->
  Default = [ {'title', binary() }
            , {'rows', list(openapi_mail_extra_info_table_row:openapi_mail_extra_info_table_row()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

