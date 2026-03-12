-module(openapi_website_login_response).

-export([encode/1]).

-export_type([openapi_website_login_response/0]).

-type openapi_website_login_response() ::
    #{ 'type' => binary(),
       'location' => binary()
     }.

encode(#{ 'type' := Type,
          'location' := Location
        }) ->
    #{ 'type' => Type,
       'location' => Location
     }.
