-module(openapi_account_info).

-export([encode/1]).

-export_type([openapi_account_info/0]).

-type openapi_account_info() ::
    #{ 'custid' => binary(),
       'ima' => binary(),
       'data' => openapi_account_info_data:openapi_account_info_data(),
       'ip' => binary(),
       'oauthproviders' => openapi_account_info_oauthproviders:openapi_account_info_oauthproviders(),
       'oauthconfig' => openapi_account_info_oauth_config:openapi_account_info_oauth_config(),
       'oauthadapters' => list(),
       'limits' => openapi_account_info_limits:openapi_account_info_limits(),
       'language' => binary(),
       'countryCurrencies' => openapi_account_info_country_currencies:openapi_account_info_country_currencies(),
       'enableLocales' => boolean(),
       'enableCurrencies' => boolean(),
       'gravatar' => binary()
     }.

encode(#{ 'custid' := Custid,
          'ima' := Ima,
          'data' := Data,
          'ip' := Ip,
          'oauthproviders' := Oauthproviders,
          'oauthconfig' := Oauthconfig,
          'oauthadapters' := Oauthadapters,
          'limits' := Limits,
          'language' := Language,
          'countryCurrencies' := CountryCurrencies,
          'enableLocales' := EnableLocales,
          'enableCurrencies' := EnableCurrencies,
          'gravatar' := Gravatar
        }) ->
    #{ 'custid' => Custid,
       'ima' => Ima,
       'data' => Data,
       'ip' => Ip,
       'oauthproviders' => Oauthproviders,
       'oauthconfig' => Oauthconfig,
       'oauthadapters' => Oauthadapters,
       'limits' => Limits,
       'language' => Language,
       'countryCurrencies' => CountryCurrencies,
       'enableLocales' => EnableLocales,
       'enableCurrencies' => EnableCurrencies,
       'gravatar' => Gravatar
     }.
