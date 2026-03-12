-module(openapi_timezone_update).

-export([encode/1]).

-export_type([openapi_timezone_update/0]).

-type openapi_timezone_update() ::
    #{ 'timezone' := binary()
     }.

encode(#{ 'timezone' := Timezone
        }) ->
    #{ 'timezone' => Timezone
     }.
