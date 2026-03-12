-module(openapi_email_address).

-export([encode/1]).

-export_type([openapi_email_address/0]).

-type openapi_email_address() ::
    #{ 'email' => binary()
     }.

encode(#{ 'email' := Email
        }) ->
    #{ 'email' => Email
     }.
