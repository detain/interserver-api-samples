-module(openapi_captcha_response).

-export([encode/1]).

-export_type([openapi_captcha_response/0]).

-type openapi_captcha_response() ::
    #{ 'captcha' := binary()
     }.

encode(#{ 'captcha' := Captcha
        }) ->
    #{ 'captcha' => Captcha
     }.
