-module(openapi_mail_extra_info_table).

-export([encode/1]).

-export_type([openapi_mail_extra_info_table/0]).

-type openapi_mail_extra_info_table() ::
    #{ 'title' => binary(),
       'rows' => list()
     }.

encode(#{ 'title' := Title,
          'rows' := Rows
        }) ->
    #{ 'title' => Title,
       'rows' => Rows
     }.
