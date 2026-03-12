-module(openapi_mail_log).

-include("openapi.hrl").

-export([openapi_mail_log/0]).

-export([openapi_mail_log/1]).

-export_type([openapi_mail_log/0]).

-type openapi_mail_log() ::
  [ {'total', integer() }
  | {'skip', integer() }
  | {'limit', integer() }
  | {'emails', list(openapi_mail_log_entry:openapi_mail_log_entry()) }
  ].


openapi_mail_log() ->
    openapi_mail_log([]).

openapi_mail_log(Fields) ->
  Default = [ {'total', integer() }
            , {'skip', integer() }
            , {'limit', integer() }
            , {'emails', list(openapi_mail_log_entry:openapi_mail_log_entry()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

