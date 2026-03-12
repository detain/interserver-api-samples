-module(openapi_account_features).

-export([encode/1]).

-export_type([openapi_account_features/0]).

-type openapi_account_features() ::
    #{ 'disable_reset' => integer(),
       'disable_reinstall' => integer()
     }.

encode(#{ 'disable_reset' := DisableReset,
          'disable_reinstall' := DisableReinstall
        }) ->
    #{ 'disable_reset' => DisableReset,
       'disable_reinstall' => DisableReinstall
     }.
