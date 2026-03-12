-module(openapi_update_account_tfa_request).

-export([encode/1]).

-export_type([openapi_update_account_tfa_request/0]).

-type openapi_update_account_tfa_request() ::
    #{ '2fa_google_code' := binary()
     }.

encode(#{ '2fa_google_code' := 2faGoogleCode
        }) ->
    #{ '2fa_google_code' => 2faGoogleCode
     }.
