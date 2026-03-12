-module(openapi_post_oauth_callback_request).

-export([encode/1]).

-export_type([openapi_post_oauth_callback_request/0]).

-type openapi_post_oauth_callback_request() ::
    #{ 'provider' => binary()
     }.

encode(#{ 'provider' := Provider
        }) ->
    #{ 'provider' => Provider
     }.
