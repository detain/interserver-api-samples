-module(openapi_mail_tutorials_table_row).

-export([encode/1]).

-export_type([openapi_mail_tutorials_table_row/0]).

-type openapi_mail_tutorials_table_row() ::
    #{ 'desc' => binary(),
       'value' => binary()
     }.

encode(#{ 'desc' := Desc,
          'value' := Value
        }) ->
    #{ 'desc' => Desc,
       'value' => Value
     }.
