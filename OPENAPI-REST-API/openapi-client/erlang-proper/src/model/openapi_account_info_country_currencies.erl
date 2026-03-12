-module(openapi_account_info_country_currencies).

-include("openapi.hrl").

-export([openapi_account_info_country_currencies/0]).

-export([openapi_account_info_country_currencies/1]).

-export_type([openapi_account_info_country_currencies/0]).

-type openapi_account_info_country_currencies() ::
  [ 
  ].


openapi_account_info_country_currencies() ->
    openapi_account_info_country_currencies([]).

openapi_account_info_country_currencies(Fields) ->
  Default = [ 
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

