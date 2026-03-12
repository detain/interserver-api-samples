-module(openapi_website_table).

-export([encode/1]).

-export_type([openapi_website_table/0]).

-type openapi_website_table() ::
    #{ 'title' => binary(),
       'rows' => list()
     }.

encode(#{ 'title' := Title,
          'rows' := Rows
        }) ->
    #{ 'title' => Title,
       'rows' => Rows
     }.
