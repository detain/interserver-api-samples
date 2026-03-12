-module(openapi_quickserver_addons).

-export([encode/1]).

-export_type([openapi_quickserver_addons/0]).

-type openapi_quickserver_addons() ::
    #{ 'title' => binary(),
       'rows' => list()
     }.

encode(#{ 'title' := Title,
          'rows' := Rows
        }) ->
    #{ 'title' => Title,
       'rows' => Rows
     }.
