-module(openapi_webhosting_api).

-export([add_website/1, add_website/2,
         get_new_website/1, get_new_website/2,
         get_website_buy_ip/2, get_website_buy_ip/3,
         get_website_info/2, get_website_info/3,
         get_website_invoices/2, get_website_invoices/3,
         get_website_list/1, get_website_list/2,
         get_websites_backups/2, get_websites_backups/3,
         get_websites_login/2, get_websites_login/3,
         get_websites_welcome_email/2, get_websites_welcome_email/3,
         gett_website_reverse_dns/2, gett_website_reverse_dns/3,
         post_website_buy_ip/3, post_website_buy_ip/4,
         post_website_migration/3, post_website_migration/4,
         post_websites_reverse_dns/3, post_websites_reverse_dns/4,
         put_websites/1, put_websites/2,
         update_website_info/2, update_website_info/3,
         webhosting_cancel/2, webhosting_cancel/3]).

-define(BASE_URL, <<"/apiv2">>).

%% @doc Place Website Order
%% Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
-spec add_website(ctx:ctx()) -> {ok, openapi_service_order_post_response:openapi_service_order_post_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_website(Ctx) ->
    add_website(Ctx, #{}).

-spec add_website(ctx:ctx(), maps:map()) -> {ok, openapi_service_order_post_response:openapi_service_order_post_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_website(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/websites/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Website Ordering Information
%% Retrieves available webhosting plans and pricing for ordering.
-spec get_new_website(ctx:ctx()) -> {ok, openapi_websites_order:openapi_websites_order(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_website(Ctx) ->
    get_new_website(Ctx, #{}).

-spec get_new_website(ctx:ctx(), maps:map()) -> {ok, openapi_websites_order:openapi_websites_order(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_website(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/websites/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Website IP Information
%% Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
-spec get_website_buy_ip(ctx:ctx(), integer()) -> {ok, openapi_get_website_buy_ip_200_response:openapi_get_website_buy_ip_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_website_buy_ip(Ctx, Id) ->
    get_website_buy_ip(Ctx, Id, #{}).

-spec get_website_buy_ip(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_get_website_buy_ip_200_response:openapi_get_website_buy_ip_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_website_buy_ip(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/websites/", Id, "/buy_ip"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Website Order
%% Returns detailed information about a specific webhosting order including its domain, plan, and status.
-spec get_website_info(ctx:ctx(), integer()) -> {ok, openapi_website:openapi_website(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_website_info(Ctx, Id) ->
    get_website_info(Ctx, Id, #{}).

-spec get_website_info(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_website:openapi_website(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_website_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/websites/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Website Invoices
%% Returns the billing invoices associated with this webhosting service.
-spec get_website_invoices(ctx:ctx(), integer()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_website_invoices(Ctx, Id) ->
    get_website_invoices(Ctx, Id, #{}).

-spec get_website_invoices(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_website_invoices(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/websites/", Id, "/invoices"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Website Listing
%% Gets a listing of your webhosting orders and service details.
-spec get_website_list(ctx:ctx()) -> {ok, [openapi_website_row:openapi_website_row()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_website_list(Ctx) ->
    get_website_list(Ctx, #{}).

-spec get_website_list(ctx:ctx(), maps:map()) -> {ok, [openapi_website_row:openapi_website_row()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_website_list(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/websites"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Website Backups
%% Gets a list of the backups that exist for a website and their sizes.
-spec get_websites_backups(ctx:ctx(), integer()) -> {ok, openapi_website_backups:openapi_website_backups(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_websites_backups(Ctx, Id) ->
    get_websites_backups(Ctx, Id, #{}).

-spec get_websites_backups(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_website_backups:openapi_website_backups(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_websites_backups(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/websites/", Id, "/backups"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Hosting Panel Auto Login
%% Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
-spec get_websites_login(ctx:ctx(), integer()) -> {ok, openapi_website_login_response:openapi_website_login_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_websites_login(Ctx, Id) ->
    get_websites_login(Ctx, Id, #{}).

-spec get_websites_login(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_website_login_response:openapi_website_login_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_websites_login(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/websites/", Id, "/login"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Resend Website Welcome Email
%% Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
-spec get_websites_welcome_email(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_websites_welcome_email(Ctx, Id) ->
    get_websites_welcome_email(Ctx, Id, #{}).

-spec get_websites_welcome_email(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_websites_welcome_email(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/websites/", Id, "/welcome_email"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Website Reverse DNS
%% Returns the current reverse DNS (PTR record) entries for the website's IP addresses.
-spec gett_website_reverse_dns(ctx:ctx(), integer()) -> {ok, openapi_reverse_dns_entries:openapi_reverse_dns_entries(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
gett_website_reverse_dns(Ctx, Id) ->
    gett_website_reverse_dns(Ctx, Id, #{}).

-spec gett_website_reverse_dns(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_reverse_dns_entries:openapi_reverse_dns_entries(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
gett_website_reverse_dns(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/websites/", Id, "/reverse_dns"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Website IP DNS
%% Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
-spec post_website_buy_ip(ctx:ctx(), integer(), openapi_post_website_buy_ip_request:openapi_post_website_buy_ip_request()) -> {ok, openapi_post_website_buy_ip_200_response:openapi_post_website_buy_ip_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_website_buy_ip(Ctx, Id, OpenapiPostWebsiteBuyIpRequest) ->
    post_website_buy_ip(Ctx, Id, OpenapiPostWebsiteBuyIpRequest, #{}).

-spec post_website_buy_ip(ctx:ctx(), integer(), openapi_post_website_buy_ip_request:openapi_post_website_buy_ip_request(), maps:map()) -> {ok, openapi_post_website_buy_ip_200_response:openapi_post_website_buy_ip_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_website_buy_ip(Ctx, Id, OpenapiPostWebsiteBuyIpRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/websites/", Id, "/buy_ip"],
    QS = [],
    Headers = [],
    Body1 = OpenapiPostWebsiteBuyIpRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Request Website Migration
%% Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
-spec post_website_migration(ctx:ctx(), integer(), openapi_post_website_migration_request:openapi_post_website_migration_request()) -> {ok, openapi_post_website_migration_200_response:openapi_post_website_migration_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_website_migration(Ctx, Id, OpenapiPostWebsiteMigrationRequest) ->
    post_website_migration(Ctx, Id, OpenapiPostWebsiteMigrationRequest, #{}).

-spec post_website_migration(ctx:ctx(), integer(), openapi_post_website_migration_request:openapi_post_website_migration_request(), maps:map()) -> {ok, openapi_post_website_migration_200_response:openapi_post_website_migration_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_website_migration(Ctx, Id, OpenapiPostWebsiteMigrationRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/websites/", Id, "/migration"],
    QS = [],
    Headers = [],
    Body1 = OpenapiPostWebsiteMigrationRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Website Reverse DNS
%% Updates the reverse DNS entries for each of the IP addresses for the website.
-spec post_websites_reverse_dns(ctx:ctx(), integer(), openapi_reverse_dns_entries:openapi_reverse_dns_entries()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_websites_reverse_dns(Ctx, Id, OpenapiReverseDnsEntries) ->
    post_websites_reverse_dns(Ctx, Id, OpenapiReverseDnsEntries, #{}).

-spec post_websites_reverse_dns(ctx:ctx(), integer(), openapi_reverse_dns_entries:openapi_reverse_dns_entries(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_websites_reverse_dns(Ctx, Id, OpenapiReverseDnsEntries, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/websites/", Id, "/reverse_dns"],
    QS = [],
    Headers = [],
    Body1 = OpenapiReverseDnsEntries,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Validate Webhosting Order
%% Validates a webhosting order before placing it.
-spec put_websites(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_websites(Ctx) ->
    put_websites(Ctx, #{}).

-spec put_websites(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_websites(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = put,
    Path = [?BASE_URL, "/websites/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Website Order
%% Updates settings on a webhosting order.
-spec update_website_info(ctx:ctx(), binary()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_website_info(Ctx, Id) ->
    update_website_info(Ctx, Id, #{}).

-spec update_website_info(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_website_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/websites/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Cancel Website
%% Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
-spec webhosting_cancel(ctx:ctx(), binary()) -> {ok, openapi_webhosting_cancel_200_response:openapi_webhosting_cancel_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
webhosting_cancel(Ctx, Id) ->
    webhosting_cancel(Ctx, Id, #{}).

-spec webhosting_cancel(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_webhosting_cancel_200_response:openapi_webhosting_cancel_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
webhosting_cancel(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/websites/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


