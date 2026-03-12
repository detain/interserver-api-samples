-module(openapi_home_details).

-export([encode/1]).

-export_type([openapi_home_details/0]).

-type openapi_home_details() ::
    #{ 'modules' => openapi_home_details_modules:openapi_home_details_modules()
     }.

encode(#{ 'modules' := Modules
        }) ->
    #{ 'modules' => Modules
     }.
