-module(openapi_account_features).

-include("openapi.hrl").

-export([openapi_account_features/0]).

-export([openapi_account_features/1]).

-export_type([openapi_account_features/0]).

-type openapi_account_features() ::
  [ {'disable_reset', integer() }
  | {'disable_reinstall', integer() }
  ].


openapi_account_features() ->
    openapi_account_features([]).

openapi_account_features(Fields) ->
  Default = [ {'disable_reset', integer() }
            , {'disable_reinstall', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

