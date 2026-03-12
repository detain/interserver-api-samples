-module(openapi_email_address_name).

-export([encode/1]).

-export_type([openapi_email_address_name/0]).

-type openapi_email_address_name() ::
    #{ 'email' := binary(),
       'name' => binary()
     }.

encode(#{ 'email' := Email,
          'name' := Name
        }) ->
    #{ 'email' => Email,
       'name' => Name
     }.
