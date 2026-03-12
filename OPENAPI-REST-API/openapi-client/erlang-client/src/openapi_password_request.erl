-module(openapi_password_request).

-export([encode/1]).

-export_type([openapi_password_request/0]).

-type openapi_password_request() ::
    #{ 'password' := binary()
     }.

encode(#{ 'password' := Password
        }) ->
    #{ 'password' => Password
     }.
