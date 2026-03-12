-module(openapi_send_mail_adv).

-include("openapi.hrl").

-export([openapi_send_mail_adv/0]).

-export([openapi_send_mail_adv/1]).

-export_type([openapi_send_mail_adv/0]).

-type openapi_send_mail_adv() ::
  [ {'subject', binary() }
  | {'body', binary() }
  | {'from', openapi_email_address_name:openapi_email_address_name() }
  | {'to', list(openapi_email_address_name:openapi_email_address_name()) }
  | {'replyto', list(openapi_email_address_name:openapi_email_address_name()) }
  | {'cc', list(openapi_email_address_name:openapi_email_address_name()) }
  | {'bcc', list(openapi_email_address_name:openapi_email_address_name()) }
  | {'attachments', list(openapi_mail_attachment:openapi_mail_attachment()) }
  | {'id', integer() }
  ].


openapi_send_mail_adv() ->
    openapi_send_mail_adv([]).

openapi_send_mail_adv(Fields) ->
  Default = [ {'subject', binary() }
            , {'body', binary() }
            , {'from', openapi_email_address_name:openapi_email_address_name() }
            , {'to', list(openapi_email_address_name:openapi_email_address_name()) }
            , {'replyto', list(openapi_email_address_name:openapi_email_address_name()) }
            , {'cc', list(openapi_email_address_name:openapi_email_address_name()) }
            , {'bcc', list(openapi_email_address_name:openapi_email_address_name()) }
            , {'attachments', list(openapi_mail_attachment:openapi_mail_attachment()) }
            , {'id', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

