-module(openapi_login_info).

-export([encode/1]).

-export_type([openapi_login_info/0]).

-type openapi_login_info() ::
    #{ 'logo' => binary(),
       'captcha' := binary(),
       'language' => binary(),
       'counts' := openapi_login_service_counts:openapi_login_service_counts()
     }.

encode(#{ 'logo' := Logo,
          'captcha' := Captcha,
          'language' := Language,
          'counts' := Counts
        }) ->
    #{ 'logo' => Logo,
       'captcha' => Captcha,
       'language' => Language,
       'counts' => Counts
     }.
