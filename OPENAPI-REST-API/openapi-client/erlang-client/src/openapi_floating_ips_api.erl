-module(openapi_floating_ips_api).

-export([add_floating_ip/1, add_floating_ip/2,
         floating_ips_cancel/2, floating_ips_cancel/3,
         get_floating_ip_info/2, get_floating_ip_info/3,
         get_floating_ip_invoices/2, get_floating_ip_invoices/3,
         get_floating_ips_list/1, get_floating_ips_list/2,
         get_floating_ips_welcome_email/2, get_floating_ips_welcome_email/3,
         get_new_floating_ip/1, get_new_floating_ip/2,
         post_floating_ips_change_ip/3, post_floating_ips_change_ip/4,
         put_floating_ips/1, put_floating_ips/2,
         update_floating_ip_info/2, update_floating_ip_info/3]).

-define(BASE_URL, <<"/apiv2">>).

%% @doc Place Floating IP Order
%% Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.
-spec add_floating_ip(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_floating_ip(Ctx) ->
    add_floating_ip(Ctx, #{}).

-spec add_floating_ip(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_floating_ip(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/floating_ips/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Cancel Floating IP
%% Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
-spec floating_ips_cancel(ctx:ctx(), integer()) -> {ok, openapi_floating_ips_cancel_200_response:openapi_floating_ips_cancel_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
floating_ips_cancel(Ctx, Id) ->
    floating_ips_cancel(Ctx, Id, #{}).

-spec floating_ips_cancel(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_floating_ips_cancel_200_response:openapi_floating_ips_cancel_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
floating_ips_cancel(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/floating_ips/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc View Floating IP
%% Returns detailed information about a specific Floating IP service including its current target IP assignment.
-spec get_floating_ip_info(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_floating_ip_info(Ctx, Id) ->
    get_floating_ip_info(Ctx, Id, #{}).

-spec get_floating_ip_info(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_floating_ip_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/floating_ips/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Floating IP Invoices
%% Returns the billing invoices associated with this Floating IP service.
-spec get_floating_ip_invoices(ctx:ctx(), integer()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_floating_ip_invoices(Ctx, Id) ->
    get_floating_ip_invoices(Ctx, Id, #{}).

-spec get_floating_ip_invoices(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_floating_ip_invoices(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/floating_ips/", Id, "/invoices"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Floating IPs
%% Returns all Floating IP services on the account with their current status and assignment details.
-spec get_floating_ips_list(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_floating_ips_list(Ctx) ->
    get_floating_ips_list(Ctx, #{}).

-spec get_floating_ips_list(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_floating_ips_list(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/floating_ips"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Resend Floating IPs Welcome Email
%% Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
-spec get_floating_ips_welcome_email(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_floating_ips_welcome_email(Ctx, Id) ->
    get_floating_ips_welcome_email(Ctx, Id, #{}).

-spec get_floating_ips_welcome_email(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_floating_ips_welcome_email(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/floating_ips/", Id, "/welcome_email"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Floating IP Ordering Information
%% Retrieves available options and pricing for ordering a new Floating IP.
-spec get_new_floating_ip(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_floating_ip(Ctx) ->
    get_new_floating_ip(Ctx, #{}).

-spec get_new_floating_ip(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_floating_ip(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/floating_ips/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Change Floating IP Target
%% Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
-spec post_floating_ips_change_ip(ctx:ctx(), integer(), binary()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_floating_ips_change_ip(Ctx, Id, Ip) ->
    post_floating_ips_change_ip(Ctx, Id, Ip, #{}).

-spec post_floating_ips_change_ip(ctx:ctx(), integer(), binary(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_floating_ips_change_ip(Ctx, Id, Ip, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/floating_ips/", Id, "/change_ip"],
    QS = [],
    Headers = [],
    Body1 = {form, [{<<"ip">>, Ip}]++openapi_utils:optional_params([], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Validate Floating IP Order
%% Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
-spec put_floating_ips(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_floating_ips(Ctx) ->
    put_floating_ips(Ctx, #{}).

-spec put_floating_ips(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_floating_ips(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = put,
    Path = [?BASE_URL, "/floating_ips/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Floating IP
%% Updates settings on a Floating IP service, such as its label or configuration metadata.
-spec update_floating_ip_info(ctx:ctx(), binary()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_floating_ip_info(Ctx, Id) ->
    update_floating_ip_info(Ctx, Id, #{}).

-spec update_floating_ip_info(ctx:ctx(), binary(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_floating_ip_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/floating_ips/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


