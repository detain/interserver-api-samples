-module(openapi_patch_oauth_two_factor_request).

-include("openapi.hrl").

-export([openapi_patch_oauth_two_factor_request/0]).

-export([openapi_patch_oauth_two_factor_request/1]).

-export_type([openapi_patch_oauth_two_factor_request/0]).

-type openapi_patch_oauth_two_factor_request() ::
  [ {'account_id', integer() }
  | {'code', binary() }
  ].


openapi_patch_oauth_two_factor_request() ->
    openapi_patch_oauth_two_factor_request([]).

openapi_patch_oauth_two_factor_request(Fields) ->
  Default = [ {'account_id', integer() }
            , {'code', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

