-module(openapi_server_lease).

-export([encode/1]).

-export_type([openapi_server_lease/0]).

-type openapi_server_lease() ::
    #{ 'mac' := binary(),
       'authenticated' := boolean(),
       'group' := binary()
     }.

encode(#{ 'mac' := Mac,
          'authenticated' := Authenticated,
          'group' := Group
        }) ->
    #{ 'mac' => Mac,
       'authenticated' => Authenticated,
       'group' => Group
     }.
