-module(openapi_account_info_oauthproviders).

-include("openapi.hrl").

-export([openapi_account_info_oauthproviders/0]).

-export([openapi_account_info_oauthproviders/1]).

-export_type([openapi_account_info_oauthproviders/0]).

-type openapi_account_info_oauthproviders() ::
  [ 
  ].


openapi_account_info_oauthproviders() ->
    openapi_account_info_oauthproviders([]).

openapi_account_info_oauthproviders(Fields) ->
  Default = [ 
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

