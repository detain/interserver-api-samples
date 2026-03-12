-module(openapi_mail_log_entry).

-include("openapi.hrl").

-export([openapi_mail_log_entry/0]).

-export([openapi_mail_log_entry/1]).

-export_type([openapi_mail_log_entry/0]).

-type openapi_mail_log_entry() ::
  [ {'_id', integer() }
  | {'id', binary() }
  | {'from', binary() }
  | {'to', binary() }
  | {'subject', binary() }
  | {'messageId', binary() }
  | {'created', binary() }
  | {'time', integer() }
  | {'user', binary() }
  | {'transtype', binary() }
  | {'origin', binary() }
  | {'interface', binary() }
  | {'sendingZone', binary() }
  | {'bodySize', integer() }
  | {'seq', integer() }
  | {'recipient', binary() }
  | {'domain', binary() }
  | {'locked', integer() }
  | {'lockTime', integer() }
  | {'assigned', binary() }
  | {'queued', binary() }
  | {'mxHostname', binary() }
  | {'response', binary() }
  ].


openapi_mail_log_entry() ->
    openapi_mail_log_entry([]).

openapi_mail_log_entry(Fields) ->
  Default = [ {'_id', integer() }
            , {'id', binary() }
            , {'from', binary() }
            , {'to', binary() }
            , {'subject', binary() }
            , {'messageId', binary() }
            , {'created', binary() }
            , {'time', integer() }
            , {'user', binary() }
            , {'transtype', binary() }
            , {'origin', binary() }
            , {'interface', binary() }
            , {'sendingZone', binary() }
            , {'bodySize', integer() }
            , {'seq', integer() }
            , {'recipient', binary() }
            , {'domain', binary() }
            , {'locked', integer() }
            , {'lockTime', integer() }
            , {'assigned', binary() }
            , {'queued', binary() }
            , {'mxHostname', binary() }
            , {'response', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

