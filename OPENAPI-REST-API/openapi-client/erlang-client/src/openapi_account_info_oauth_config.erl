-module(openapi_account_info_oauth_config).

-export([encode/1]).

-export_type([openapi_account_info_oauth_config/0]).

-type openapi_account_info_oauth_config() ::
    #{ 'callback' := binary(),
       'providers' := openapi_account_info_oauth_config_providers:openapi_account_info_oauth_config_providers()
     }.

encode(#{ 'callback' := Callback,
          'providers' := Providers
        }) ->
    #{ 'callback' => Callback,
       'providers' => Providers
     }.
