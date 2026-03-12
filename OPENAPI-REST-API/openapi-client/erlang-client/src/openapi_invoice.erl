-module(openapi_invoice).

-export([encode/1]).

-export_type([openapi_invoice/0]).

-type openapi_invoice() ::
    #{ 'id' => integer()
     }.

encode(#{ 'id' := Id
        }) ->
    #{ 'id' => Id
     }.
