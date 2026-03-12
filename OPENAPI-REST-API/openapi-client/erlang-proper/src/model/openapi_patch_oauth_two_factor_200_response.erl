-module(openapi_patch_oauth_two_factor_200_response).

-include("openapi.hrl").

-export([openapi_patch_oauth_two_factor_200_response/0]).

-export([openapi_patch_oauth_two_factor_200_response/1]).

-export_type([openapi_patch_oauth_two_factor_200_response/0]).

-type openapi_patch_oauth_two_factor_200_response() ::
  [ {'login', boolean() }
  ].


openapi_patch_oauth_two_factor_200_response() ->
    openapi_patch_oauth_two_factor_200_response([]).

openapi_patch_oauth_two_factor_200_response(Fields) ->
  Default = [ {'login', boolean() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

