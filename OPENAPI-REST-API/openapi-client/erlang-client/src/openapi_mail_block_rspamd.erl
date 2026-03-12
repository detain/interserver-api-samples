-module(openapi_mail_block_rspamd).

-export([encode/1]).

-export_type([openapi_mail_block_rspamd/0]).

-type openapi_mail_block_rspamd() ::
    #{ 'from' := binary(),
       'subject' := binary()
     }.

encode(#{ 'from' := From,
          'subject' := Subject
        }) ->
    #{ 'from' => From,
       'subject' => Subject
     }.
