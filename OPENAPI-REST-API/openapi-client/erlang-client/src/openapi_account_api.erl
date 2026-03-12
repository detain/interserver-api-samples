-module(openapi_account_api).

-export([change_account_username/1, change_account_username/2,
         delete_account_oauth_name/2, delete_account_oauth_name/3,
         delete_account_tfa/1, delete_account_tfa/2,
         delete_ip_limit/1, delete_ip_limit/2,
         get_account_info/1, get_account_info/2,
         get_account_tfa_setup/1, get_account_tfa_setup/2,
         get_home/1, get_home/2,
         get_search/1, get_search/2,
         logout/1, logout/2,
         logout_account_oauth/2, logout_account_oauth/3,
         update_account_api_key/1, update_account_api_key/2,
         update_account_features/1, update_account_features/2,
         update_account_info/8, update_account_info/9,
         update_account_ip_limits/3, update_account_ip_limits/4,
         update_account_password/2, update_account_password/3,
         update_account_ssh_key/1, update_account_ssh_key/2,
         update_account_tfa/2, update_account_tfa/3]).

-define(BASE_URL, <<"/apiv2">>).

%% @doc Change Account Username
%% Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
-spec change_account_username(ctx:ctx()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
change_account_username(Ctx) ->
    change_account_username(Ctx, #{}).

-spec change_account_username(ctx:ctx(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
change_account_username(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/account/username"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Unlink OAuth Account
%% Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
-spec delete_account_oauth_name(ctx:ctx(), binary()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_account_oauth_name(Ctx, Name) ->
    delete_account_oauth_name(Ctx, Name, #{}).

-spec delete_account_oauth_name(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_account_oauth_name(Ctx, Name, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/account/oauth/", Name, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Disable Two-Factor Authentication
%% Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
-spec delete_account_tfa(ctx:ctx()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_account_tfa(Ctx) ->
    delete_account_tfa(Ctx, #{}).

-spec delete_account_tfa(ctx:ctx(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_account_tfa(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/account/2fa"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Remove IP Access Restriction
%% Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
-spec delete_ip_limit(ctx:ctx()) -> {ok, openapi_generic_response:openapi_generic_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_ip_limit(Ctx) ->
    delete_ip_limit(Ctx, #{}).

-spec delete_ip_limit(ctx:ctx(), maps:map()) -> {ok, openapi_generic_response:openapi_generic_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_ip_limit(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = patch,
    Path = [?BASE_URL, "/account/iplimits"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Retrieve Account Details
%% Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
-spec get_account_info(ctx:ctx()) -> {ok, openapi_account_info:openapi_account_info(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_account_info(Ctx) ->
    get_account_info(Ctx, #{}).

-spec get_account_info(ctx:ctx(), maps:map()) -> {ok, openapi_account_info:openapi_account_info(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_account_info(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/account"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Two-Factor Setup Data
%% Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
-spec get_account_tfa_setup(ctx:ctx()) -> {ok, openapi_get_account_tfa_setup_200_response:openapi_get_account_tfa_setup_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_account_tfa_setup(Ctx) ->
    get_account_tfa_setup(Ctx, #{}).

-spec get_account_tfa_setup(ctx:ctx(), maps:map()) -> {ok, openapi_get_account_tfa_setup_200_response:openapi_get_account_tfa_setup_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_account_tfa_setup(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/account/2fa"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Home Data
%% Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
-spec get_home(ctx:ctx()) -> {ok, openapi_home:openapi_home(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_home(Ctx) ->
    get_home(Ctx, #{}).

-spec get_home(ctx:ctx(), maps:map()) -> {ok, openapi_home:openapi_home(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_home(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/home"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Search Autocomplete
%% Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.
-spec get_search(ctx:ctx()) -> {ok, openapi_search_autocomplete_response:openapi_search_autocomplete_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_search(Ctx) ->
    get_search(Ctx, #{}).

-spec get_search(ctx:ctx(), maps:map()) -> {ok, openapi_search_autocomplete_response:openapi_search_autocomplete_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_search(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/search"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Log Out
%% Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
-spec logout(ctx:ctx()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
logout(Ctx) ->
    logout(Ctx, #{}).

-spec logout(ctx:ctx(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
logout(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/logout"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Logout of OAuth
%% Logs out of the specified OAuth provider session.
-spec logout_account_oauth(ctx:ctx(), binary()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
logout_account_oauth(Ctx, Name) ->
    logout_account_oauth(Ctx, Name, #{}).

-spec logout_account_oauth(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
logout_account_oauth(Ctx, Name, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/account/oauth/", Name, "/logout"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Generate New API Key
%% Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
-spec update_account_api_key(ctx:ctx()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_account_api_key(Ctx) ->
    update_account_api_key(Ctx, #{}).

-spec update_account_api_key(ctx:ctx(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_account_api_key(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/account/apikey"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Account Feature Flags
%% Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
-spec update_account_features(ctx:ctx()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_account_features(Ctx) ->
    update_account_features(Ctx, #{}).

-spec update_account_features(ctx:ctx(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_account_features(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/account/features"],
    QS = [],
    Headers = [],
    Body1 = {form, []++openapi_utils:optional_params(['disable_reset', 'disable_reinstall'], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Account Information
%% Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
-spec update_account_info(ctx:ctx(), binary(), binary(), binary(), binary(), binary(), binary(), binary()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_account_info(Ctx, Name, Address, City, State, Zip, Country, Phone) ->
    update_account_info(Ctx, Name, Address, City, State, Zip, Country, Phone, #{}).

-spec update_account_info(ctx:ctx(), binary(), binary(), binary(), binary(), binary(), binary(), binary(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_account_info(Ctx, Name, Address, City, State, Zip, Country, Phone, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/account"],
    QS = [],
    Headers = [],
    Body1 = {form, [{<<"name">>, Name}, {<<"address">>, Address}, {<<"city">>, City}, {<<"state">>, State}, {<<"zip">>, Zip}, {<<"country">>, Country}, {<<"phone">>, Phone}]++openapi_utils:optional_params(['company', 'address2', 'locale', 'email_invoices', 'email_abuse', 'disable_reset', 'disable_reinstall', 'disable_server_notifications', 'disable_email_notifications', 'gstin'], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Add IP Access Restriction
%% Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
-spec update_account_ip_limits(ctx:ctx(), binary(), binary()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_account_ip_limits(Ctx, Start, End) ->
    update_account_ip_limits(Ctx, Start, End, #{}).

-spec update_account_ip_limits(ctx:ctx(), binary(), binary(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_account_ip_limits(Ctx, Start, End, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/account/iplimits"],
    QS = [],
    Headers = [],
    Body1 = {form, [{<<"start">>, Start}, {<<"end">>, End}]++openapi_utils:optional_params([], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Change Account Password
%% Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
-spec update_account_password(ctx:ctx(), binary()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_account_password(Ctx, Password) ->
    update_account_password(Ctx, Password, #{}).

-spec update_account_password(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_account_password(Ctx, Password, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/account/password"],
    QS = [],
    Headers = [],
    Body1 = {form, [{<<"password">>, Password}]++openapi_utils:optional_params([], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update SSH Keys
%% Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
-spec update_account_ssh_key(ctx:ctx()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_account_ssh_key(Ctx) ->
    update_account_ssh_key(Ctx, #{}).

-spec update_account_ssh_key(ctx:ctx(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_account_ssh_key(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/account/sshkey"],
    QS = [],
    Headers = [],
    Body1 = {form, []++openapi_utils:optional_params(['ssh_key'], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Enable Two-Factor Authentication
%% Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
-spec update_account_tfa(ctx:ctx(), binary()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_account_tfa(Ctx, 2faGoogleCode) ->
    update_account_tfa(Ctx, 2faGoogleCode, #{}).

-spec update_account_tfa(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_account_tfa(Ctx, 2faGoogleCode, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/account/2fa"],
    QS = [],
    Headers = [],
    Body1 = {form, [{<<"2fa_google_code">>, 2faGoogleCode}]++openapi_utils:optional_params([], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


