-module(openapi_account_info_limits).

-include("openapi.hrl").

-export([openapi_account_info_limits/0]).

-export_type([openapi_account_info_limits/0]).

-type openapi_account_info_limits() ::
  list(openapi_account_info_limits_inner:openapi_account_info_limits_inner()).

openapi_account_info_limits() ->
  list(openapi_account_info_limits_inner:openapi_account_info_limits_inner()).

