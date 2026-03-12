-module(openapi_get_oauth_redirect_200_response).

-export([encode/1]).

-export_type([openapi_get_oauth_redirect_200_response/0]).

-type openapi_get_oauth_redirect_200_response() ::
    #{ 'redirect_url' => binary()
     }.

encode(#{ 'redirect_url' := RedirectUrl
        }) ->
    #{ 'redirect_url' => RedirectUrl
     }.
