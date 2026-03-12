-module(openapi_ssl_certificates_api).

-export([add_ssl/1, add_ssl/2,
         get_new_ssl/1, get_new_ssl/2,
         get_ssl_info/2, get_ssl_info/3,
         get_ssl_invoices/2, get_ssl_invoices/3,
         get_ssl_list/1, get_ssl_list/2,
         get_ssl_welcome_email/2, get_ssl_welcome_email/3,
         put_ssl/1, put_ssl/2,
         ssl_cancel/2, ssl_cancel/3,
         update_ssl_info/2, update_ssl_info/3]).

-define(BASE_URL, <<"/apiv2">>).

%% @doc Place SSL Cert Order
%% Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.
-spec add_ssl(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_ssl(Ctx) ->
    add_ssl(Ctx, #{}).

-spec add_ssl(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_ssl(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/ssl/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc SSL Cert Ordering Information
%% Retrieves available SSL certificate types and pricing for ordering.
-spec get_new_ssl(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_ssl(Ctx) ->
    get_new_ssl(Ctx, #{}).

-spec get_new_ssl(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_ssl(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/ssl/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get SSL Cert Info
%% Returns detailed information about a specific SSL certificate including its domain and expiration.
-spec get_ssl_info(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_ssl_info(Ctx, Id) ->
    get_ssl_info(Ctx, Id, #{}).

-spec get_ssl_info(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_ssl_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/ssl/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get SSL Cert Invoices
%% Returns the billing invoices associated with this SSL certificate.
-spec get_ssl_invoices(ctx:ctx(), integer()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_ssl_invoices(Ctx, Id) ->
    get_ssl_invoices(Ctx, Id, #{}).

-spec get_ssl_invoices(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_ssl_invoices(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/ssl/", Id, "/invoices"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List SSL Certs
%% Returns all SSL certificate services on the account with their current status.
-spec get_ssl_list(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_ssl_list(Ctx) ->
    get_ssl_list(Ctx, #{}).

-spec get_ssl_list(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_ssl_list(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/ssl"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Resend SSL Welcome Email
%% Resends the welcome email for the order.
-spec get_ssl_welcome_email(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_ssl_welcome_email(Ctx, Id) ->
    get_ssl_welcome_email(Ctx, Id, #{}).

-spec get_ssl_welcome_email(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_ssl_welcome_email(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/ssl/", Id, "/welcome_email"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Validate SSL Cert Order
%% Validates an SSL certificate order before placing it.
-spec put_ssl(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_ssl(Ctx) ->
    put_ssl(Ctx, #{}).

-spec put_ssl(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_ssl(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = put,
    Path = [?BASE_URL, "/ssl/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Cancel SSL Certificate Service
%% Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
-spec ssl_cancel(ctx:ctx(), integer()) -> {ok, openapi_ssl_cancel_200_response:openapi_ssl_cancel_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
ssl_cancel(Ctx, Id) ->
    ssl_cancel(Ctx, Id, #{}).

-spec ssl_cancel(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_ssl_cancel_200_response:openapi_ssl_cancel_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
ssl_cancel(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/ssl/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update SSL Cert Order
%% Updates settings on an SSL certificate order.
-spec update_ssl_info(ctx:ctx(), binary()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_ssl_info(Ctx, Id) ->
    update_ssl_info(Ctx, Id, #{}).

-spec update_ssl_info(ctx:ctx(), binary(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_ssl_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/ssl/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


