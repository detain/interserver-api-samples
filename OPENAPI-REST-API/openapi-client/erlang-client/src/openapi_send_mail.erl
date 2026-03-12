-module(openapi_send_mail).

-export([encode/1]).

-export_type([openapi_send_mail/0]).

-type openapi_send_mail() ::
    #{ 'to' := binary(),
       'from' := binary(),
       'subject' := binary(),
       'body' := binary()
     }.

encode(#{ 'to' := To,
          'from' := From,
          'subject' := Subject,
          'body' := Body
        }) ->
    #{ 'to' => To,
       'from' => From,
       'subject' => Subject,
       'body' => Body
     }.
