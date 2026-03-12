-module(openapi_public_api).

-export([get_captcha/1, get_captcha/2,
         get_countries/1, get_countries/2,
         get_info/1, get_info/2,
         get_login_info/1, get_login_info/2,
         get_mp_servers/1, get_mp_servers/2,
         get_oauth_redirect/2, get_oauth_redirect/3,
         get_timezones/1, get_timezones/2,
         patch_oauth_two_factor/2, patch_oauth_two_factor/3,
         ping_server/1, ping_server/2,
         post_oauth_callback/3, post_oauth_callback/4,
         submit_login/3, submit_login/4,
         submit_signup/2, submit_signup/3]).

-define(BASE_URL, <<"/apiv2">>).

%% @doc Get Captcha Challenge
%% Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
-spec get_captcha(ctx:ctx()) -> {ok, openapi_captcha_response:openapi_captcha_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_captcha(Ctx) ->
    get_captcha(Ctx, #{}).

-spec get_captcha(ctx:ctx(), maps:map()) -> {ok, openapi_captcha_response:openapi_captcha_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_captcha(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/captcha"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Countries
%% Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
-spec get_countries(ctx:ctx()) -> {ok, maps:map(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_countries(Ctx) ->
    get_countries(Ctx, #{}).

-spec get_countries(ctx:ctx(), maps:map()) -> {ok, maps:map(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_countries(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/account/countries"],
    QS = lists:flatten([])++openapi_utils:optional_params(['fetch_by'], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Server Info
%% Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
-spec get_info(ctx:ctx()) -> {ok, openapi_services_info:openapi_services_info(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_info(Ctx) ->
    get_info(Ctx, #{}).

-spec get_info(ctx:ctx(), maps:map()) -> {ok, openapi_services_info:openapi_services_info(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_info(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/info"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Login Info
%% Gets the various pieces of information useful for generating a login page.
-spec get_login_info(ctx:ctx()) -> {ok, openapi_login_info:openapi_login_info(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_login_info(Ctx) ->
    get_login_info(Ctx, #{}).

-spec get_login_info(ctx:ctx(), maps:map()) -> {ok, openapi_login_info:openapi_login_info(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_login_info(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/login"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Marketplace Servers
%% Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
-spec get_mp_servers(ctx:ctx()) -> {ok, openapi_buy_it_now_list:openapi_buy_it_now_list(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mp_servers(Ctx) ->
    get_mp_servers(Ctx, #{}).

-spec get_mp_servers(ctx:ctx(), maps:map()) -> {ok, openapi_buy_it_now_list:openapi_buy_it_now_list(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mp_servers(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/buy_now_servers_list"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get OAuth Redirect URL
%% Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
-spec get_oauth_redirect(ctx:ctx(), binary()) -> {ok, openapi_get_oauth_redirect_200_response:openapi_get_oauth_redirect_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_oauth_redirect(Ctx, Provider) ->
    get_oauth_redirect(Ctx, Provider, #{}).

-spec get_oauth_redirect(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_get_oauth_redirect_200_response:openapi_get_oauth_redirect_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_oauth_redirect(Ctx, Provider, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/oauth"],
    QS = lists:flatten([{<<"provider">>, Provider}])++openapi_utils:optional_params([], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Available Timezones
%% Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
-spec get_timezones(ctx:ctx()) -> {ok, [binary()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_timezones(Ctx) ->
    get_timezones(Ctx, #{}).

-spec get_timezones(ctx:ctx(), maps:map()) -> {ok, [binary()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_timezones(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/account/timezones"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Complete OAuth Two-Factor Verification
%% Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
-spec patch_oauth_two_factor(ctx:ctx(), openapi_patch_oauth_two_factor_request:openapi_patch_oauth_two_factor_request()) -> {ok, openapi_patch_oauth_two_factor_200_response:openapi_patch_oauth_two_factor_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
patch_oauth_two_factor(Ctx, OpenapiPatchOauthTwoFactorRequest) ->
    patch_oauth_two_factor(Ctx, OpenapiPatchOauthTwoFactorRequest, #{}).

-spec patch_oauth_two_factor(ctx:ctx(), openapi_patch_oauth_two_factor_request:openapi_patch_oauth_two_factor_request(), maps:map()) -> {ok, openapi_patch_oauth_two_factor_200_response:openapi_patch_oauth_two_factor_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
patch_oauth_two_factor(Ctx, OpenapiPatchOauthTwoFactorRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = patch,
    Path = [?BASE_URL, "/oauth"],
    QS = [],
    Headers = [],
    Body1 = OpenapiPatchOauthTwoFactorRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Ping Server
%% Performs a single ping/pong request to let you know if the server is up.
-spec ping_server(ctx:ctx()) -> {ok, binary(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
ping_server(Ctx) ->
    ping_server(Ctx, #{}).

-spec ping_server(ctx:ctx(), maps:map()) -> {ok, binary(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
ping_server(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/ping"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc OAuth Callback
%% Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
-spec post_oauth_callback(ctx:ctx(), binary()) -> {ok, openapi_post_oauth_callback_200_response:openapi_post_oauth_callback_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_oauth_callback(Ctx, Provider) ->
    post_oauth_callback(Ctx, Provider, #{}).

-spec post_oauth_callback(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_post_oauth_callback_200_response:openapi_post_oauth_callback_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_oauth_callback(Ctx, Provider, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/oauth"],
    QS = lists:flatten([{<<"provider">>, Provider}])++openapi_utils:optional_params([], _OptionalParams),
    Headers = [],
    Body1 = OpenapiPostOauthCallbackRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Submit Login Information
%% Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.
-spec submit_login(ctx:ctx(), binary(), binary()) -> {ok, openapi_login_success_response:openapi_login_success_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
submit_login(Ctx, Login, Passwd) ->
    submit_login(Ctx, Login, Passwd, #{}).

-spec submit_login(ctx:ctx(), binary(), binary(), maps:map()) -> {ok, openapi_login_success_response:openapi_login_success_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
submit_login(Ctx, Login, Passwd, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/login"],
    QS = [],
    Headers = [],
    Body1 = {form, [{<<"login">>, Login}, {<<"passwd">>, Passwd}]++openapi_utils:optional_params(['remember', 'g-recaptcha-response', 'tfa'], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Submit Signup Information
%% Creates a new account in our system using the provided information.
-spec submit_signup(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
submit_signup(Ctx) ->
    submit_signup(Ctx, #{}).

-spec submit_signup(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
submit_signup(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/signup"],
    QS = [],
    Headers = [],
    Body1 = OpenapiLoginSubmissionExample,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


