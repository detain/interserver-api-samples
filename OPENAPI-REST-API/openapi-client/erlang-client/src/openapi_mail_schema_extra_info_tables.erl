-module(openapi_mail_schema_extra_info_tables).

-export([encode/1]).

-export_type([openapi_mail_schema_extra_info_tables/0]).

-type openapi_mail_schema_extra_info_tables() ::
    #{ 'mail' => openapi_mail_extra_info_table:openapi_mail_extra_info_table(),
       'tutorials' => openapi_mail_tutorials_table:openapi_mail_tutorials_table()
     }.

encode(#{ 'mail' := Mail,
          'tutorials' := Tutorials
        }) ->
    #{ 'mail' => Mail,
       'tutorials' => Tutorials
     }.
