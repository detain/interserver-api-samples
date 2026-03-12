-module(openapi_service_types).

-export([encode/1]).

-export_type([openapi_service_types/0]).

-type openapi_service_types() ::
    #{ 
     }.

encode(#{ 
        }) ->
    #{ 
     }.
