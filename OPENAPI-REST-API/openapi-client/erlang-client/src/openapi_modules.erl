-module(openapi_modules).

-export([encode/1]).

-export_type([openapi_modules/0]).

-type openapi_modules() ::
    #{ 
     }.

encode(#{ 
        }) ->
    #{ 
     }.
