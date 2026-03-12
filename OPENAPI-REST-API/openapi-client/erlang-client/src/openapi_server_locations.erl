-module(openapi_server_locations).

-export([encode/1]).

-export_type([openapi_server_locations/0]).

-type openapi_server_locations() ::
    #{ '1' => openapi_server_location1:openapi_server_location1()
     }.

encode(#{ '1' := 1
        }) ->
    #{ '1' => 1
     }.
