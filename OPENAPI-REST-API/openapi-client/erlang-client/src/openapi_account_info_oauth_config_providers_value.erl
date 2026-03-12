-module(openapi_account_info_oauth_config_providers_value).

-export([encode/1]).

-export_type([openapi_account_info_oauth_config_providers_value/0]).

-type openapi_account_info_oauth_config_providers_value() ::
    #{ 'enabled' => boolean(),
       'linked' => boolean(),
       'account' => binary(),
       'url' => binary()
     }.

encode(#{ 'enabled' := Enabled,
          'linked' := Linked,
          'account' := Account,
          'url' := Url
        }) ->
    #{ 'enabled' => Enabled,
       'linked' => Linked,
       'account' => Account,
       'url' => Url
     }.
