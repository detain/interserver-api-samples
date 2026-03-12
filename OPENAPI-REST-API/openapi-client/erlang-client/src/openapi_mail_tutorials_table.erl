-module(openapi_mail_tutorials_table).

-export([encode/1]).

-export_type([openapi_mail_tutorials_table/0]).

-type openapi_mail_tutorials_table() ::
    #{ 'title' => binary(),
       'rows' => list()
     }.

encode(#{ 'title' := Title,
          'rows' := Rows
        }) ->
    #{ 'title' => Title,
       'rows' => Rows
     }.
