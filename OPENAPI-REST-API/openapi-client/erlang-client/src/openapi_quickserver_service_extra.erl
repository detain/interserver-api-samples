-module(openapi_quickserver_service_extra).

-export([encode/1]).

-export_type([openapi_quickserver_service_extra/0]).

-type openapi_quickserver_service_extra() ::
    #{ 'platform' => binary()
     }.

encode(#{ 'platform' := Platform
        }) ->
    #{ 'platform' => Platform
     }.
