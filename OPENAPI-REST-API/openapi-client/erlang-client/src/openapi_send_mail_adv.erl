-module(openapi_send_mail_adv).

-export([encode/1]).

-export_type([openapi_send_mail_adv/0]).

-type openapi_send_mail_adv() ::
    #{ 'subject' := binary(),
       'body' := binary(),
       'from' := openapi_email_address_name:openapi_email_address_name(),
       'to' := list(),
       'replyto' => list(),
       'cc' => list(),
       'bcc' => list(),
       'attachments' => list(),
       'id' => integer()
     }.

encode(#{ 'subject' := Subject,
          'body' := Body,
          'from' := From,
          'to' := To,
          'replyto' := Replyto,
          'cc' := Cc,
          'bcc' := Bcc,
          'attachments' := Attachments,
          'id' := Id
        }) ->
    #{ 'subject' => Subject,
       'body' => Body,
       'from' => From,
       'to' => To,
       'replyto' => Replyto,
       'cc' => Cc,
       'bcc' => Bcc,
       'attachments' => Attachments,
       'id' => Id
     }.
