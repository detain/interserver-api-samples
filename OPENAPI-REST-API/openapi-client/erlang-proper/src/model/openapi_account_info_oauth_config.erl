-module(openapi_account_info_oauth_config).

-include("openapi.hrl").

-export([openapi_account_info_oauth_config/0]).

-export([openapi_account_info_oauth_config/1]).

-export_type([openapi_account_info_oauth_config/0]).

-type openapi_account_info_oauth_config() ::
  [ {'callback', binary() }
  | {'providers', openapi_account_info_oauth_config_providers:openapi_account_info_oauth_config_providers() }
  ].


openapi_account_info_oauth_config() ->
    openapi_account_info_oauth_config([]).

openapi_account_info_oauth_config(Fields) ->
  Default = [ {'callback', binary() }
            , {'providers', openapi_account_info_oauth_config_providers:openapi_account_info_oauth_config_providers() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

