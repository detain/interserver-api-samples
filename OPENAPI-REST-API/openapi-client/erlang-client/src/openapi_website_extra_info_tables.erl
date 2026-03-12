-module(openapi_website_extra_info_tables).

-export([encode/1]).

-export_type([openapi_website_extra_info_tables/0]).

-type openapi_website_extra_info_tables() ::
    #{ 'links' => openapi_website_table:openapi_website_table(),
       'preview' => openapi_website_table:openapi_website_table(),
       'dns' => openapi_website_table:openapi_website_table()
     }.

encode(#{ 'links' := Links,
          'preview' := Preview,
          'dns' := Dns
        }) ->
    #{ 'links' => Links,
       'preview' => Preview,
       'dns' => Dns
     }.
