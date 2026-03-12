-module(openapi_servers_api).

-export([add_server/1, add_server/2,
         buy_it_now_server_order/1, buy_it_now_server_order/2,
         get_mp_servers/1, get_mp_servers/2,
         get_new_server/1, get_new_server/2,
         get_server_info/2, get_server_info/3,
         get_server_invoices/2, get_server_invoices/3,
         get_server_list/1, get_server_list/2,
         get_server_reverse_dns/2, get_server_reverse_dns/3,
         get_servers_welcome_email/2, get_servers_welcome_email/3,
         place_buy_now_server/2, place_buy_now_server/3,
         post_server_reverse_dns/3, post_server_reverse_dns/4,
         put_servers/1, put_servers/2,
         server_ipmi_live_get/2, server_ipmi_live_get/3,
         server_ipmi_live_post/3, server_ipmi_live_post/4,
         server_ipmi_power_get/2, server_ipmi_power_get/3,
         server_ipmi_power_post/3, server_ipmi_power_post/4,
         servers_cancel/2, servers_cancel/3,
         update_server_info/2, update_server_info/3]).

-define(BASE_URL, <<"/apiv2">>).

%% @doc Place Server Order
%% Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
-spec add_server(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_server(Ctx) ->
    add_server(Ctx, #{}).

-spec add_server(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_server(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/servers/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Buy Now Server Options
%% Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
-spec buy_it_now_server_order(ctx:ctx()) -> {ok, openapi_buy_it_now_server_order_200_response:openapi_buy_it_now_server_order_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
buy_it_now_server_order(Ctx) ->
    buy_it_now_server_order(Ctx, #{}).

-spec buy_it_now_server_order(ctx:ctx(), maps:map()) -> {ok, openapi_buy_it_now_server_order_200_response:openapi_buy_it_now_server_order_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
buy_it_now_server_order(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/servers/order/buy_now_server"],
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

%% @doc Server Ordering Information
%% Retrieves available server configurations and pricing for ordering a new dedicated server.
-spec get_new_server(ctx:ctx()) -> {ok, openapi_server_order:openapi_server_order(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_server(Ctx) ->
    get_new_server(Ctx, #{}).

-spec get_new_server(ctx:ctx(), maps:map()) -> {ok, openapi_server_order:openapi_server_order(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_server(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/servers/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Server Order
%% Returns detailed information about a specific server including its hardware configuration, IPs, and status.
-spec get_server_info(ctx:ctx(), integer()) -> {ok, openapi_server:openapi_server(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_server_info(Ctx, Id) ->
    get_server_info(Ctx, Id, #{}).

-spec get_server_info(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_server:openapi_server(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_server_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/servers/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Server Invoices
%% Returns the billing invoices associated with this dedicated server.
-spec get_server_invoices(ctx:ctx(), integer()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_server_invoices(Ctx, Id) ->
    get_server_invoices(Ctx, Id, #{}).

-spec get_server_invoices(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_server_invoices(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/servers/", Id, "/invoices"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Servers
%% Returns all dedicated server services on the account with their current status and configuration.
-spec get_server_list(ctx:ctx()) -> {ok, [openapi_server_row:openapi_server_row()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_server_list(Ctx) ->
    get_server_list(Ctx, #{}).

-spec get_server_list(ctx:ctx(), maps:map()) -> {ok, [openapi_server_row:openapi_server_row()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_server_list(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/servers"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Reverse DNS Info
%% Returns the current reverse DNS (PTR record) entries for the server's IP addresses.
-spec get_server_reverse_dns(ctx:ctx(), integer()) -> {ok, openapi_reverse_dns_entries:openapi_reverse_dns_entries(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_server_reverse_dns(Ctx, Id) ->
    get_server_reverse_dns(Ctx, Id, #{}).

-spec get_server_reverse_dns(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_reverse_dns_entries:openapi_reverse_dns_entries(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_server_reverse_dns(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/servers/", Id, "/reverse_dns"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Resend Server Welcome Email
%% Resends the welcome email for the order.
-spec get_servers_welcome_email(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_servers_welcome_email(Ctx, Id) ->
    get_servers_welcome_email(Ctx, Id, #{}).

-spec get_servers_welcome_email(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_servers_welcome_email(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/servers/", Id, "/welcome_email"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Place Buy Now Server Order
%% Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
-spec place_buy_now_server(ctx:ctx()) -> {ok, openapi_servers_buy_now_response:openapi_servers_buy_now_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
place_buy_now_server(Ctx) ->
    place_buy_now_server(Ctx, #{}).

-spec place_buy_now_server(ctx:ctx(), maps:map()) -> {ok, openapi_servers_buy_now_response:openapi_servers_buy_now_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
place_buy_now_server(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/servers/order/buy_now_server"],
    QS = [],
    Headers = [],
    Body1 = OpenapiPlaceBuyNowServerRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Reverse DNS
%% Updates the reverse DNS (PTR record) entries for the server's IP addresses.
-spec post_server_reverse_dns(ctx:ctx(), integer(), openapi_reverse_dns_entries:openapi_reverse_dns_entries()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_server_reverse_dns(Ctx, Id, OpenapiReverseDnsEntries) ->
    post_server_reverse_dns(Ctx, Id, OpenapiReverseDnsEntries, #{}).

-spec post_server_reverse_dns(ctx:ctx(), integer(), openapi_reverse_dns_entries:openapi_reverse_dns_entries(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_server_reverse_dns(Ctx, Id, OpenapiReverseDnsEntries, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/servers/", Id, "/reverse_dns"],
    QS = [],
    Headers = [],
    Body1 = OpenapiReverseDnsEntries,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Validate Server Order
%% Validates a server order before placing it. Use this to check for errors before committing to a purchase.
-spec put_servers(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_servers(Ctx) ->
    put_servers(Ctx, #{}).

-spec put_servers(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_servers(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = put,
    Path = [?BASE_URL, "/servers/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Server IPMI Live Information
%% Returns the current IPMI live connection information for the server.
-spec server_ipmi_live_get(ctx:ctx(), integer()) -> {ok, openapi_server_ipmi_live_info:openapi_server_ipmi_live_info(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
server_ipmi_live_get(Ctx, Id) ->
    server_ipmi_live_get(Ctx, Id, #{}).

-spec server_ipmi_live_get(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_server_ipmi_live_info:openapi_server_ipmi_live_info(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
server_ipmi_live_get(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/servers/", Id, "/ipmi_live"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Server IPMI Live Setup
%% Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.
-spec server_ipmi_live_post(ctx:ctx(), integer(), binary()) -> {ok, openapi_server_ipmi_live_info:openapi_server_ipmi_live_info(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
server_ipmi_live_post(Ctx, Id, Ip) ->
    server_ipmi_live_post(Ctx, Id, Ip, #{}).

-spec server_ipmi_live_post(ctx:ctx(), integer(), binary(), maps:map()) -> {ok, openapi_server_ipmi_live_info:openapi_server_ipmi_live_info(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
server_ipmi_live_post(Ctx, Id, Ip, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/servers/", Id, "/ipmi_live"],
    QS = [],
    Headers = [],
    Body1 = {form, [{<<"ip">>, Ip}]++openapi_utils:optional_params(['asset'], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get IPMI Power Status
%% Returns the chassis power status from ipmi.
-spec server_ipmi_power_get(ctx:ctx(), integer()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
server_ipmi_power_get(Ctx, Id) ->
    server_ipmi_power_get(Ctx, Id, #{}).

-spec server_ipmi_power_get(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
server_ipmi_power_get(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/servers/", Id, "/ipmi_power"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Server IPMI Power
%% Uses the IPMI interface to set the Power status on the server.
-spec server_ipmi_power_post(ctx:ctx(), integer(), binary()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
server_ipmi_power_post(Ctx, Id, Action) ->
    server_ipmi_power_post(Ctx, Id, Action, #{}).

-spec server_ipmi_power_post(ctx:ctx(), integer(), binary(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
server_ipmi_power_post(Ctx, Id, Action, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/servers/", Id, "/ipmi_power"],
    QS = [],
    Headers = [],
    Body1 = {form, [{<<"action">>, Action}]++openapi_utils:optional_params(['asset'], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Cancel Server Service
%% Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
-spec servers_cancel(ctx:ctx(), integer()) -> {ok, openapi_servers_cancel_200_response:openapi_servers_cancel_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
servers_cancel(Ctx, Id) ->
    servers_cancel(Ctx, Id, #{}).

-spec servers_cancel(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_servers_cancel_200_response:openapi_servers_cancel_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
servers_cancel(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/servers/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Server Order
%% Updates settings on a dedicated server order.
-spec update_server_info(ctx:ctx(), binary()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_server_info(Ctx, Id) ->
    update_server_info(Ctx, Id, #{}).

-spec update_server_info(ctx:ctx(), binary(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_server_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/servers/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


