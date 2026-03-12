-module(openapi_mail_log).

-export([encode/1]).

-export_type([openapi_mail_log/0]).

-type openapi_mail_log() ::
    #{ 'total' := integer(),
       'skip' := integer(),
       'limit' := integer(),
       'emails' := list()
     }.

encode(#{ 'total' := Total,
          'skip' := Skip,
          'limit' := Limit,
          'emails' := Emails
        }) ->
    #{ 'total' => Total,
       'skip' => Skip,
       'limit' => Limit,
       'emails' => Emails
     }.
