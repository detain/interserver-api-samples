-module(openapi_quickserver_addons_row).

-export([encode/1]).

-export_type([openapi_quickserver_addons_row/0]).

-type openapi_quickserver_addons_row() ::
    #{ 'desc' => binary(),
       'value' => binary()
     }.

encode(#{ 'desc' := Desc,
          'value' := Value
        }) ->
    #{ 'desc' => Desc,
       'value' => Value
     }.
