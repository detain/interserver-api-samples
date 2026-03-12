-module(openapi_url_request).

-export([encode/1]).

-export_type([openapi_url_request/0]).

-type openapi_url_request() ::
    #{ 'url' => binary()
     }.

encode(#{ 'url' := Url
        }) ->
    #{ 'url' => Url
     }.
