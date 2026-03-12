-module(openapi_account_info).

-include("openapi.hrl").

-export([openapi_account_info/0]).

-export([openapi_account_info/1]).

-export_type([openapi_account_info/0]).

-type openapi_account_info() ::
  [ {'custid', binary() }
  | {'ima', binary() }
  | {'data', openapi_account_info_data:openapi_account_info_data() }
  | {'ip', binary() }
  | {'oauthproviders', openapi_account_info_oauthproviders:openapi_account_info_oauthproviders() }
  | {'oauthconfig', openapi_account_info_oauth_config:openapi_account_info_oauth_config() }
  | {'oauthadapters', list(binary()) }
  | {'limits', openapi_account_info_limits:openapi_account_info_limits() }
  | {'language', binary() }
  | {'countryCurrencies', openapi_account_info_country_currencies:openapi_account_info_country_currencies() }
  | {'enableLocales', boolean() }
  | {'enableCurrencies', boolean() }
  | {'gravatar', binary() }
  ].


openapi_account_info() ->
    openapi_account_info([]).

openapi_account_info(Fields) ->
  Default = [ {'custid', binary() }
            , {'ima', binary() }
            , {'data', openapi_account_info_data:openapi_account_info_data() }
            , {'ip', binary() }
            , {'oauthproviders', openapi_account_info_oauthproviders:openapi_account_info_oauthproviders() }
            , {'oauthconfig', openapi_account_info_oauth_config:openapi_account_info_oauth_config() }
            , {'oauthadapters', list(binary()) }
            , {'limits', openapi_account_info_limits:openapi_account_info_limits() }
            , {'language', binary() }
            , {'countryCurrencies', openapi_account_info_country_currencies:openapi_account_info_country_currencies() }
            , {'enableLocales', boolean() }
            , {'enableCurrencies', boolean() }
            , {'gravatar', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

