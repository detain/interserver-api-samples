-module(openapi_account_info_oauth_config_providers_value).

-include("openapi.hrl").

-export([openapi_account_info_oauth_config_providers_value/0]).

-export([openapi_account_info_oauth_config_providers_value/1]).

-export_type([openapi_account_info_oauth_config_providers_value/0]).

-type openapi_account_info_oauth_config_providers_value() ::
  [ {'enabled', boolean() }
  | {'linked', boolean() }
  | {'account', binary() }
  | {'url', binary() }
  ].


openapi_account_info_oauth_config_providers_value() ->
    openapi_account_info_oauth_config_providers_value([]).

openapi_account_info_oauth_config_providers_value(Fields) ->
  Default = [ {'enabled', boolean() }
            , {'linked', boolean() }
            , {'account', binary() }
            , {'url', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

