-module(openapi_account_info_oauth_config_providers).

-include("openapi.hrl").

-export([openapi_account_info_oauth_config_providers/0]).

-export([openapi_account_info_oauth_config_providers/1]).

-export_type([openapi_account_info_oauth_config_providers/0]).

-type openapi_account_info_oauth_config_providers() ::
  [ 
  ].


openapi_account_info_oauth_config_providers() ->
    openapi_account_info_oauth_config_providers([]).

openapi_account_info_oauth_config_providers(Fields) ->
  Default = [ 
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

