-module(openapi_mail_tutorials_table).

-include("openapi.hrl").

-export([openapi_mail_tutorials_table/0]).

-export([openapi_mail_tutorials_table/1]).

-export_type([openapi_mail_tutorials_table/0]).

-type openapi_mail_tutorials_table() ::
  [ {'title', binary() }
  | {'rows', list(openapi_mail_tutorials_table_row:openapi_mail_tutorials_table_row()) }
  ].


openapi_mail_tutorials_table() ->
    openapi_mail_tutorials_table([]).

openapi_mail_tutorials_table(Fields) ->
  Default = [ {'title', binary() }
            , {'rows', list(openapi_mail_tutorials_table_row:openapi_mail_tutorials_table_row()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

