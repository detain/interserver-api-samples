-module(openapi_hostname_object).

-export([encode/1]).

-export_type([openapi_hostname_object/0]).

-type openapi_hostname_object() ::
    #{ 'hostname' => binary()
     }.

encode(#{ 'hostname' := Hostname
        }) ->
    #{ 'hostname' => Hostname
     }.
