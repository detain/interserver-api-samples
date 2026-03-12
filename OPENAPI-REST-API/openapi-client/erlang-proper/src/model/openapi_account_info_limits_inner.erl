-module(openapi_account_info_limits_inner).

-include("openapi.hrl").

-export([openapi_account_info_limits_inner/0]).

-export([openapi_account_info_limits_inner/1]).

-export_type([openapi_account_info_limits_inner/0]).

-type openapi_account_info_limits_inner() ::
  [ {'start', binary() }
  | {'End_', binary() }
  ].


openapi_account_info_limits_inner() ->
    openapi_account_info_limits_inner([]).

openapi_account_info_limits_inner(Fields) ->
  Default = [ {'start', binary() }
            , {'end', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

