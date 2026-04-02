-module(openapi_mail_api).

-export([add_mail/1, add_mail/2,
         add_rule/3, add_rule/4,
         create_mail_alert/3, create_mail_alert/4,
         delete_mail_alert/3, delete_mail_alert/4,
         delete_rule/3, delete_rule/4,
         delist_block/2, delist_block/3,
         get_mail_alerts/2, get_mail_alerts/3,
         get_mail_blocks/2, get_mail_blocks/3,
         get_mail_delist/2, get_mail_delist/3,
         get_mail_deliverability/2, get_mail_deliverability/3,
         get_mail_info/2, get_mail_info/3,
         get_mail_invoices/2, get_mail_invoices/3,
         get_mail_list/1, get_mail_list/2,
         get_mail_welcome_email/2, get_mail_welcome_email/3,
         get_new_mail/1, get_new_mail/2,
         get_rules/2, get_rules/3,
         get_stats/2, get_stats/3,
         mail_cancel/2, mail_cancel/3,
         post_mail_delist/3, post_mail_delist/4,
         put_mail/1, put_mail/2,
         reset_mail_password/2, reset_mail_password/3,
         send_adv_mail/3, send_adv_mail/4,
         send_mail/3, send_mail/4,
         update_mail_alert/3, update_mail_alert/4,
         update_mail_info/2, update_mail_info/3,
         view_mail_log/2, view_mail_log/3]).

-define(BASE_URL, <<"/apiv2">>).

%% @doc Place Mail Order
%% Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
-spec add_mail(ctx:ctx()) -> {ok, openapi_service_order_post_response:openapi_service_order_post_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_mail(Ctx) ->
    add_mail(Ctx, #{}).

-spec add_mail(ctx:ctx(), maps:map()) -> {ok, openapi_service_order_post_response:openapi_service_order_post_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_mail(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/mail/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Create Deny Rule
%% Adds a new deny rule to automatically block emails that match the specified criteria.
-spec add_rule(ctx:ctx(), integer(), openapi_deny_rule_new:openapi_deny_rule_new()) -> {ok, openapi_generic_response:openapi_generic_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_rule(Ctx, Id, OpenapiDenyRuleNew) ->
    add_rule(Ctx, Id, OpenapiDenyRuleNew, #{}).

-spec add_rule(ctx:ctx(), integer(), openapi_deny_rule_new:openapi_deny_rule_new(), maps:map()) -> {ok, openapi_generic_response:openapi_generic_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_rule(Ctx, Id, OpenapiDenyRuleNew, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/mail/", Id, "/rules"],
    QS = [],
    Headers = [],
    Body1 = OpenapiDenyRuleNew,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"application/x-www-form-urlencoded">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Create Mail Alert
%% Creates a new alert for the mail service, such as delivery or quota notifications.
-spec create_mail_alert(ctx:ctx(), integer(), openapi_mail_alert_request:openapi_mail_alert_request()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
create_mail_alert(Ctx, Id, OpenapiMailAlertRequest) ->
    create_mail_alert(Ctx, Id, OpenapiMailAlertRequest, #{}).

-spec create_mail_alert(ctx:ctx(), integer(), openapi_mail_alert_request:openapi_mail_alert_request(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
create_mail_alert(Ctx, Id, OpenapiMailAlertRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/mail/", Id, "/alerts"],
    QS = [],
    Headers = [],
    Body1 = OpenapiMailAlertRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Delete Mail Alert
%% Deletes an existing alert definition for the mail service.
-spec delete_mail_alert(ctx:ctx(), integer(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_mail_alert(Ctx, Id, AlertId) ->
    delete_mail_alert(Ctx, Id, AlertId, #{}).

-spec delete_mail_alert(ctx:ctx(), integer(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_mail_alert(Ctx, Id, AlertId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/mail/", Id, "/alerts"],
    QS = lists:flatten([{<<"alert_id">>, AlertId}])++openapi_utils:optional_params([], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Delete Deny Rule
%% Removes a deny rule from the mail service.
-spec delete_rule(ctx:ctx(), integer(), binary()) -> {ok, openapi_generic_response:openapi_generic_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_rule(Ctx, Id, Rule) ->
    delete_rule(Ctx, Id, Rule, #{}).

-spec delete_rule(ctx:ctx(), integer(), binary(), maps:map()) -> {ok, openapi_generic_response:openapi_generic_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_rule(Ctx, Id, Rule, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/mail/", Id, "/rules/", Rule, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Remove Email Address from Block List
%% Removes an email address from the mail service's block lists.
-spec delist_block(ctx:ctx(), integer()) -> {ok, openapi_generic_response:openapi_generic_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delist_block(Ctx, Id) ->
    delist_block(Ctx, Id, #{}).

-spec delist_block(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_generic_response:openapi_generic_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delist_block(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/mail/", Id, "/blocks/delete"],
    QS = [],
    Headers = [],
    Body1 = {form, []++openapi_utils:optional_params(['email'], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Mail Alerts
%% Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
-spec get_mail_alerts(ctx:ctx(), integer()) -> {ok, openapi_mail_alerts_response:openapi_mail_alerts_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mail_alerts(Ctx, Id) ->
    get_mail_alerts(Ctx, Id, #{}).

-spec get_mail_alerts(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_mail_alerts_response:openapi_mail_alerts_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mail_alerts(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/mail/", Id, "/alerts"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Blocked Email Addresses
%% Displays a listing of the blocked email addresses
-spec get_mail_blocks(ctx:ctx(), integer()) -> {ok, openapi_mail_blocks:openapi_mail_blocks(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mail_blocks(Ctx, Id) ->
    get_mail_blocks(Ctx, Id, #{}).

-spec get_mail_blocks(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_mail_blocks:openapi_mail_blocks(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mail_blocks(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/mail/", Id, "/blocks"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Delist Status
%% Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
-spec get_mail_delist(ctx:ctx(), integer()) -> {ok, openapi_mail_delist_response:openapi_mail_delist_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mail_delist(Ctx, Id) ->
    get_mail_delist(Ctx, Id, #{}).

-spec get_mail_delist(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_mail_delist_response:openapi_mail_delist_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mail_delist(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/mail/", Id, "/delist"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Deliverability Metrics
%% Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
-spec get_mail_deliverability(ctx:ctx(), integer()) -> {ok, openapi_mail_deliverability_response:openapi_mail_deliverability_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mail_deliverability(Ctx, Id) ->
    get_mail_deliverability(Ctx, Id, #{}).

-spec get_mail_deliverability(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_mail_deliverability_response:openapi_mail_deliverability_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mail_deliverability(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/mail/", Id, "/deliverability"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Mail Order
%% Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
-spec get_mail_info(ctx:ctx(), integer()) -> {ok, openapi_mail_schema:openapi_mail_schema(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mail_info(Ctx, Id) ->
    get_mail_info(Ctx, Id, #{}).

-spec get_mail_info(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_mail_schema:openapi_mail_schema(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mail_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/mail/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Mail Invoices
%% Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
-spec get_mail_invoices(ctx:ctx(), integer()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mail_invoices(Ctx, Id) ->
    get_mail_invoices(Ctx, Id, #{}).

-spec get_mail_invoices(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mail_invoices(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/mail/", Id, "/invoices"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Mail Orders
%% Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
-spec get_mail_list(ctx:ctx()) -> {ok, [openapi_mail_row:openapi_mail_row()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mail_list(Ctx) ->
    get_mail_list(Ctx, #{}).

-spec get_mail_list(ctx:ctx(), maps:map()) -> {ok, [openapi_mail_row:openapi_mail_row()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mail_list(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/mail"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Resend Mail Welcome Email
%% Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
-spec get_mail_welcome_email(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mail_welcome_email(Ctx, Id) ->
    get_mail_welcome_email(Ctx, Id, #{}).

-spec get_mail_welcome_email(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_mail_welcome_email(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/mail/", Id, "/welcome_email"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Mail Ordering Information
%% Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
-spec get_new_mail(ctx:ctx()) -> {ok, openapi_mail_order:openapi_mail_order(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_mail(Ctx) ->
    get_new_mail(Ctx, #{}).

-spec get_new_mail(ctx:ctx(), maps:map()) -> {ok, openapi_mail_order:openapi_mail_order(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_mail(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/mail/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Deny Rules
%% Returns a listing of all the deny block rules configured for this mail service.
-spec get_rules(ctx:ctx(), integer()) -> {ok, [openapi_deny_rule_record:openapi_deny_rule_record()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_rules(Ctx, Id) ->
    get_rules(Ctx, Id, #{}).

-spec get_rules(ctx:ctx(), integer(), maps:map()) -> {ok, [openapi_deny_rule_record:openapi_deny_rule_record()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_rules(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/mail/", Id, "/rules"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Mail Usage Statistics
%% Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
-spec get_stats(ctx:ctx(), integer()) -> {ok, openapi_mail_stats_type:openapi_mail_stats_type(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_stats(Ctx, Id) ->
    get_stats(Ctx, Id, #{}).

-spec get_stats(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_mail_stats_type:openapi_mail_stats_type(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_stats(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/mail/", Id, "/stats"],
    QS = lists:flatten([])++openapi_utils:optional_params(['time'], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Cancel Mail
%% Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
-spec mail_cancel(ctx:ctx(), integer()) -> {ok, openapi_mail_cancel_200_response:openapi_mail_cancel_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
mail_cancel(Ctx, Id) ->
    mail_cancel(Ctx, Id, #{}).

-spec mail_cancel(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_mail_cancel_200_response:openapi_mail_cancel_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
mail_cancel(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/mail/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Delist a Blocked Sender
%% Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
-spec post_mail_delist(ctx:ctx(), integer(), openapi_mail_delist_request:openapi_mail_delist_request()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_mail_delist(Ctx, Id, OpenapiMailDelistRequest) ->
    post_mail_delist(Ctx, Id, OpenapiMailDelistRequest, #{}).

-spec post_mail_delist(ctx:ctx(), integer(), openapi_mail_delist_request:openapi_mail_delist_request(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_mail_delist(Ctx, Id, OpenapiMailDelistRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/mail/", Id, "/delist"],
    QS = [],
    Headers = [],
    Body1 = OpenapiMailDelistRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Validate Mail Order
%% Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
-spec put_mail(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_mail(Ctx) ->
    put_mail(Ctx, #{}).

-spec put_mail(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_mail(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = put,
    Path = [?BASE_URL, "/mail/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Reset Mail Password
%% Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
-spec reset_mail_password(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
reset_mail_password(Ctx, Id) ->
    reset_mail_password(Ctx, Id, #{}).

-spec reset_mail_password(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
reset_mail_password(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/mail/", Id, "/reset_password"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Send Email with Advanced Options
%% Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
-spec send_adv_mail(ctx:ctx(), integer(), openapi_send_mail_adv:openapi_send_mail_adv()) -> {ok, openapi_generic_response:openapi_generic_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
send_adv_mail(Ctx, Id, OpenapiSendMailAdv) ->
    send_adv_mail(Ctx, Id, OpenapiSendMailAdv, #{}).

-spec send_adv_mail(ctx:ctx(), integer(), openapi_send_mail_adv:openapi_send_mail_adv(), maps:map()) -> {ok, openapi_generic_response:openapi_generic_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
send_adv_mail(Ctx, Id, OpenapiSendMailAdv, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/mail/", Id, "/advsend"],
    QS = [],
    Headers = [],
    Body1 = OpenapiSendMailAdv,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"application/x-www-form-urlencoded">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Send Email
%% Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
-spec send_mail(ctx:ctx(), integer(), openapi_send_mail:openapi_send_mail()) -> {ok, openapi_generic_response:openapi_generic_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
send_mail(Ctx, Id, OpenapiSendMail) ->
    send_mail(Ctx, Id, OpenapiSendMail, #{}).

-spec send_mail(ctx:ctx(), integer(), openapi_send_mail:openapi_send_mail(), maps:map()) -> {ok, openapi_generic_response:openapi_generic_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
send_mail(Ctx, Id, OpenapiSendMail, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/mail/", Id, "/send"],
    QS = [],
    Headers = [],
    Body1 = OpenapiSendMail,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"application/x-www-form-urlencoded">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Mail Alert
%% Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
-spec update_mail_alert(ctx:ctx(), integer(), openapi_mail_alert_update_request:openapi_mail_alert_update_request()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_mail_alert(Ctx, Id, OpenapiMailAlertUpdateRequest) ->
    update_mail_alert(Ctx, Id, OpenapiMailAlertUpdateRequest, #{}).

-spec update_mail_alert(ctx:ctx(), integer(), openapi_mail_alert_update_request:openapi_mail_alert_update_request(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_mail_alert(Ctx, Id, OpenapiMailAlertUpdateRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = put,
    Path = [?BASE_URL, "/mail/", Id, "/alerts"],
    QS = [],
    Headers = [],
    Body1 = OpenapiMailAlertUpdateRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Mail Order
%% Updates mail service metadata for the order, such as stored settings or account details.
-spec update_mail_info(ctx:ctx(), binary()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_mail_info(Ctx, Id) ->
    update_mail_info(Ctx, Id, #{}).

-spec update_mail_info(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_mail_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/mail/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc View Mail Log
%% Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.  **Row grouping** is controlled by the `groupby` parameter.  By default (`groupby=recipient`), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and `mxHostname` values.  Set `groupby=message` to collapse to one row per message (delivery fields will reflect one arbitrary recipient).  **Pagination** is controlled by `skip` and `limit`.  The `total` in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.  **Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP `strtotime()` such as `2024-01-15`, `last monday`, or `2024-01-01 00:00:00`.  Examples: `startDate=1704067200&endDate=1706745599` or `startDate=2024-01-01&endDate=2024-01-31`.  **Sorting** is controlled by `sort` and `dir`.  Currently the only sort key is `time` (default), which orders by internal row ID.  **Delivery status** can be filtered with the `delivered` parameter: `delivered=1` returns only successfully delivered messages; `delivered=0` returns messages still in queue or that failed.  **Address filtering** distinguishes between the SMTP envelope address (`from`, `to`) and message headers (`headerfrom` for the `From:` header, `replyto` for `Reply-To:`). These may differ when a message is sent on behalf of another address.  The `mailid` parameter corresponds to the `id` field in the returned `MailLogEntry` objects, **not** the `_id` field.  It also matches the transaction ID returned in the `text` field of a successful send response.  The `messageId` parameter searches the `Message-ID` email header (case-insensitive substring match). 
-spec view_mail_log(ctx:ctx(), integer()) -> {ok, openapi_mail_log:openapi_mail_log(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
view_mail_log(Ctx, Id) ->
    view_mail_log(Ctx, Id, #{}).

-spec view_mail_log(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_mail_log:openapi_mail_log(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
view_mail_log(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/mail/", Id, "/log"],
    QS = lists:flatten([])++openapi_utils:optional_params(['id', 'origin', 'mx', 'from', 'to', 'subject', 'mailid', 'messageId', 'replyto', 'headerfrom', 'delivered', 'skip', 'limit', 'startDate', 'endDate', 'sort', 'dir', 'groupby'], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


