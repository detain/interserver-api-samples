-module(openapi_scrub_ips_api).

-export([cancel_scrub_ip/2, cancel_scrub_ip/3,
         create_filter/3, create_filter/4,
         create_geo_rule/3, create_geo_rule/4,
         create_rule/3, create_rule/4,
         delete_filter/3, delete_filter/4,
         disable_scrub/2, disable_scrub/3,
         enable_scrub/2, enable_scrub/3,
         get_order_detail/1, get_order_detail/2,
         get_scrub_ip_details/2, get_scrub_ip_details/3,
         get_scrub_ip_filter_types/1, get_scrub_ip_filter_types/2,
         get_scrub_ip_invoices/2, get_scrub_ip_invoices/3,
         get_scrub_ip_logs/2, get_scrub_ip_logs/3,
         get_scrub_ips_list/1, get_scrub_ips_list/2,
         place_scrub_order/2, place_scrub_order/3,
         scrub_ips_delete_geo_rule/3, scrub_ips_delete_geo_rule/4,
         scrub_ips_delete_rule/3, scrub_ips_delete_rule/4]).

-define(BASE_URL, <<"/apiv2">>).

%% @doc Cancel Scrub IP Service
%% Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
-spec cancel_scrub_ip(ctx:ctx(), integer()) -> {ok, openapi_cancel_scrub_ip_200_response:openapi_cancel_scrub_ip_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
cancel_scrub_ip(Ctx, Id) ->
    cancel_scrub_ip(Ctx, Id, #{}).

-spec cancel_scrub_ip(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_cancel_scrub_ip_200_response:openapi_cancel_scrub_ip_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
cancel_scrub_ip(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/scrub_ips/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Create Traffic Filter
%% Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.
-spec create_filter(ctx:ctx(), integer(), openapi_create_filter:openapi_create_filter()) -> {ok, openapi_create_filter_201_response:openapi_create_filter_201_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
create_filter(Ctx, Id, OpenapiCreateFilter) ->
    create_filter(Ctx, Id, OpenapiCreateFilter, #{}).

-spec create_filter(ctx:ctx(), integer(), openapi_create_filter:openapi_create_filter(), maps:map()) -> {ok, openapi_create_filter_201_response:openapi_create_filter_201_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
create_filter(Ctx, Id, OpenapiCreateFilter, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/scrub_ips/", Id, "/create_filter"],
    QS = [],
    Headers = [],
    Body1 = OpenapiCreateFilter,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Create Geo Firewall Rule
%% Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
-spec create_geo_rule(ctx:ctx(), integer(), openapi_create_geo_firewall_rule:openapi_create_geo_firewall_rule()) -> {ok, openapi_create_rule_201_response:openapi_create_rule_201_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
create_geo_rule(Ctx, Id, OpenapiCreateGeoFirewallRule) ->
    create_geo_rule(Ctx, Id, OpenapiCreateGeoFirewallRule, #{}).

-spec create_geo_rule(ctx:ctx(), integer(), openapi_create_geo_firewall_rule:openapi_create_geo_firewall_rule(), maps:map()) -> {ok, openapi_create_rule_201_response:openapi_create_rule_201_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
create_geo_rule(Ctx, Id, OpenapiCreateGeoFirewallRule, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/scrub_ips/", Id, "/create_geo_rule"],
    QS = [],
    Headers = [],
    Body1 = OpenapiCreateGeoFirewallRule,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Create Firewall Rule
%% Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
-spec create_rule(ctx:ctx(), integer(), openapi_create_firewall_rule:openapi_create_firewall_rule()) -> {ok, openapi_create_rule_201_response:openapi_create_rule_201_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
create_rule(Ctx, Id, OpenapiCreateFirewallRule) ->
    create_rule(Ctx, Id, OpenapiCreateFirewallRule, #{}).

-spec create_rule(ctx:ctx(), integer(), openapi_create_firewall_rule:openapi_create_firewall_rule(), maps:map()) -> {ok, openapi_create_rule_201_response:openapi_create_rule_201_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
create_rule(Ctx, Id, OpenapiCreateFirewallRule, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/scrub_ips/", Id, "/create_rule"],
    QS = [],
    Headers = [],
    Body1 = OpenapiCreateFirewallRule,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Delete Traffic Filter
%% Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
-spec delete_filter(ctx:ctx(), integer(), openapi_create_filter:openapi_create_filter()) -> {ok, openapi_delete_filter_200_response:openapi_delete_filter_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_filter(Ctx, Id, OpenapiCreateFilter) ->
    delete_filter(Ctx, Id, OpenapiCreateFilter, #{}).

-spec delete_filter(ctx:ctx(), integer(), openapi_create_filter:openapi_create_filter(), maps:map()) -> {ok, openapi_delete_filter_200_response:openapi_delete_filter_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_filter(Ctx, Id, OpenapiCreateFilter, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/scrub_ips/", Id, "/delete_filter"],
    QS = [],
    Headers = [],
    Body1 = OpenapiCreateFilter,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Disable Scrub Protection
%% Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
-spec disable_scrub(ctx:ctx(), integer()) -> {ok, openapi_disable_scrub_200_response:openapi_disable_scrub_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
disable_scrub(Ctx, Id) ->
    disable_scrub(Ctx, Id, #{}).

-spec disable_scrub(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_disable_scrub_200_response:openapi_disable_scrub_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
disable_scrub(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/scrub_ips/", Id, "/disable"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Enable Scrub Protection
%% Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
-spec enable_scrub(ctx:ctx(), integer()) -> {ok, openapi_enable_scrub_200_response:openapi_enable_scrub_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
enable_scrub(Ctx, Id) ->
    enable_scrub(Ctx, Id, #{}).

-spec enable_scrub(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_enable_scrub_200_response:openapi_enable_scrub_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
enable_scrub(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/scrub_ips/", Id, "/enable"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Scrub IP Ordering Information
%% Returns the available Scrub IP service plans and pricing information needed to build an order form.
-spec get_order_detail(ctx:ctx()) -> {ok, openapi_get_order_detail_200_response:openapi_get_order_detail_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_order_detail(Ctx) ->
    get_order_detail(Ctx, #{}).

-spec get_order_detail(ctx:ctx(), maps:map()) -> {ok, openapi_get_order_detail_200_response:openapi_get_order_detail_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_order_detail(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/scrub_ips/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Scrub IP Details
%% Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
-spec get_scrub_ip_details(ctx:ctx(), integer()) -> {ok, openapi_get_scrub_ip_details_200_response:openapi_get_scrub_ip_details_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_scrub_ip_details(Ctx, Id) ->
    get_scrub_ip_details(Ctx, Id, #{}).

-spec get_scrub_ip_details(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_get_scrub_ip_details_200_response:openapi_get_scrub_ip_details_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_scrub_ip_details(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/scrub_ips/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Scrub Filter Types
%% Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.
-spec get_scrub_ip_filter_types(ctx:ctx()) -> {ok, openapi_scrub_ip_filter_types:openapi_scrub_ip_filter_types(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_scrub_ip_filter_types(Ctx) ->
    get_scrub_ip_filter_types(Ctx, #{}).

-spec get_scrub_ip_filter_types(ctx:ctx(), maps:map()) -> {ok, openapi_scrub_ip_filter_types:openapi_scrub_ip_filter_types(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_scrub_ip_filter_types(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/scrub_ips/filter_types"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get ScrubIp Invoices
%% Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
-spec get_scrub_ip_invoices(ctx:ctx(), integer()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_scrub_ip_invoices(Ctx, Id) ->
    get_scrub_ip_invoices(Ctx, Id, #{}).

-spec get_scrub_ip_invoices(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_scrub_ip_invoices(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/scrub_ips/", Id, "/invoices"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Scrub IP Logs
%% Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
-spec get_scrub_ip_logs(ctx:ctx(), binary()) -> {ok, [openapi_scrub_ips_log_row_schema:openapi_scrub_ips_log_row_schema()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_scrub_ip_logs(Ctx, Id) ->
    get_scrub_ip_logs(Ctx, Id, #{}).

-spec get_scrub_ip_logs(ctx:ctx(), binary(), maps:map()) -> {ok, [openapi_scrub_ips_log_row_schema:openapi_scrub_ips_log_row_schema()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_scrub_ip_logs(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/scrub_ips/", Id, "/logs"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Scrub IP Services
%% Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
-spec get_scrub_ips_list(ctx:ctx()) -> {ok, [openapi_scrub_ips_row_schema:openapi_scrub_ips_row_schema()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_scrub_ips_list(Ctx) ->
    get_scrub_ips_list(Ctx, #{}).

-spec get_scrub_ips_list(ctx:ctx(), maps:map()) -> {ok, [openapi_scrub_ips_row_schema:openapi_scrub_ips_row_schema()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_scrub_ips_list(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/scrub_ips"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Place Scrub IP Order
%% Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
-spec place_scrub_order(ctx:ctx(), openapi_scrub_ip_place_order:openapi_scrub_ip_place_order()) -> {ok, openapi_place_scrub_order_201_response:openapi_place_scrub_order_201_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
place_scrub_order(Ctx, OpenapiScrubIpPlaceOrder) ->
    place_scrub_order(Ctx, OpenapiScrubIpPlaceOrder, #{}).

-spec place_scrub_order(ctx:ctx(), openapi_scrub_ip_place_order:openapi_scrub_ip_place_order(), maps:map()) -> {ok, openapi_place_scrub_order_201_response:openapi_place_scrub_order_201_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
place_scrub_order(Ctx, OpenapiScrubIpPlaceOrder, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/scrub_ips/order"],
    QS = [],
    Headers = [],
    Body1 = OpenapiScrubIpPlaceOrder,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Delete Geo Firewall Rule
%% Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
-spec scrub_ips_delete_geo_rule(ctx:ctx(), integer(), openapi_delete_geo_firewall_rule:openapi_delete_geo_firewall_rule()) -> {ok, openapi_scrub_ips_delete_rule_200_response:openapi_scrub_ips_delete_rule_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
scrub_ips_delete_geo_rule(Ctx, Id, OpenapiDeleteGeoFirewallRule) ->
    scrub_ips_delete_geo_rule(Ctx, Id, OpenapiDeleteGeoFirewallRule, #{}).

-spec scrub_ips_delete_geo_rule(ctx:ctx(), integer(), openapi_delete_geo_firewall_rule:openapi_delete_geo_firewall_rule(), maps:map()) -> {ok, openapi_scrub_ips_delete_rule_200_response:openapi_scrub_ips_delete_rule_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
scrub_ips_delete_geo_rule(Ctx, Id, OpenapiDeleteGeoFirewallRule, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/scrub_ips/", Id, "/delete_geo_rule"],
    QS = [],
    Headers = [],
    Body1 = OpenapiDeleteGeoFirewallRule,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Delete Firewall Rule
%% Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
-spec scrub_ips_delete_rule(ctx:ctx(), integer(), openapi_delete_firewall_rule:openapi_delete_firewall_rule()) -> {ok, openapi_scrub_ips_delete_rule_200_response:openapi_scrub_ips_delete_rule_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
scrub_ips_delete_rule(Ctx, Id, OpenapiDeleteFirewallRule) ->
    scrub_ips_delete_rule(Ctx, Id, OpenapiDeleteFirewallRule, #{}).

-spec scrub_ips_delete_rule(ctx:ctx(), integer(), openapi_delete_firewall_rule:openapi_delete_firewall_rule(), maps:map()) -> {ok, openapi_scrub_ips_delete_rule_200_response:openapi_scrub_ips_delete_rule_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
scrub_ips_delete_rule(Ctx, Id, OpenapiDeleteFirewallRule, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/scrub_ips/", Id, "/delete_rule"],
    QS = [],
    Headers = [],
    Body1 = OpenapiDeleteFirewallRule,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


