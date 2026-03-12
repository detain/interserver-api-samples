-module(openapi_update_account_tfa_request).

-include("openapi.hrl").

-export([openapi_update_account_tfa_request/0]).

-export([openapi_update_account_tfa_request/1]).

-export_type([openapi_update_account_tfa_request/0]).

-type openapi_update_account_tfa_request() ::
  [ {'2fa_google_code', binary() }
  ].


openapi_update_account_tfa_request() ->
    openapi_update_account_tfa_request([]).

openapi_update_account_tfa_request(Fields) ->
  Default = [ {'2fa_google_code', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

