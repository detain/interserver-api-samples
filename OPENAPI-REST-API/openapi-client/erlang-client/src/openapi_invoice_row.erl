-module(openapi_invoice_row).

-export([encode/1]).

-export_type([openapi_invoice_row/0]).

-type openapi_invoice_row() ::
    #{ 
     }.

encode(#{ 
        }) ->
    #{ 
     }.
