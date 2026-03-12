-module(openapi_mail_blocks).

-export([encode/1]).

-export_type([openapi_mail_blocks/0]).

-type openapi_mail_blocks() ::
    #{ 'local' := list(),
       'mbtrap' := list(),
       'subject' := list()
     }.

encode(#{ 'local' := Local,
          'mbtrap' := Mbtrap,
          'subject' := Subject
        }) ->
    #{ 'local' => Local,
       'mbtrap' => Mbtrap,
       'subject' => Subject
     }.
