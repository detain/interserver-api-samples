-module(openapi_billing_api).

-export([add_account_credit_card/1, add_account_credit_card/2,
         add_billing_credit_card/2, add_billing_credit_card/3,
         add_billing_prepay/2, add_billing_prepay/3,
         delete_account_credit_card/2, delete_account_credit_card/3,
         delete_billing_credit_card/2, delete_billing_credit_card/3,
         delete_billing_invoice/2, delete_billing_invoice/3,
         delete_billing_prepay/2, delete_billing_prepay/3,
         get_affiliate_banners/1, get_affiliate_banners/2,
         get_affiliate_rich_report/1, get_affiliate_rich_report/2,
         get_affiliate_sales_graph/1, get_affiliate_sales_graph/2,
         get_affiliate_sales_report/1, get_affiliate_sales_report/2,
         get_affiliate_traffic_graph/1, get_affiliate_traffic_graph/2,
         get_affiliate_web_traffic/1, get_affiliate_web_traffic/2,
         get_billing_cart/1, get_billing_cart/2,
         get_billing_credit_card_verify/2, get_billing_credit_card_verify/3,
         get_billing_invoice/2, get_billing_invoice/3,
         get_billing_invoices/1, get_billing_invoices/2,
         get_billing_pre_pays/1, get_billing_pre_pays/2,
         get_invoices/1, get_invoices/2,
         initiate_payment/3, initiate_payment/4,
         post_billing_credit_card_verify/3, post_billing_credit_card_verify/4,
         update_account_credit_card/2, update_account_credit_card/3,
         update_affiliate_dock_setup/1, update_affiliate_dock_setup/2,
         update_affiliate_landing_page/1, update_affiliate_landing_page/2,
         update_affiliate_payment_setup/1, update_affiliate_payment_setup/2,
         update_billing_credit_card/2, update_billing_credit_card/3,
         update_billing_payment_method/2, update_billing_payment_method/3]).

-define(BASE_URL, <<"/apiv2">>).

%% @doc Add Credit Card to Account
%% Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
-spec add_account_credit_card(ctx:ctx()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_account_credit_card(Ctx) ->
    add_account_credit_card(Ctx, #{}).

-spec add_account_credit_card(ctx:ctx(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_account_credit_card(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/account/creditcards"],
    QS = [],
    Headers = [],
    Body1 = {form, []++openapi_utils:optional_params(['name', 'address', 'city', 'state', 'country', 'zip', 'cc', 'cc_exp', 'cc_ccv2'], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Add Credit Card for Billing
%% Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
-spec add_billing_credit_card(ctx:ctx(), openapi_billing_add_cc_request:openapi_billing_add_cc_request()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_billing_credit_card(Ctx, OpenapiBillingAddCcRequest) ->
    add_billing_credit_card(Ctx, OpenapiBillingAddCcRequest, #{}).

-spec add_billing_credit_card(ctx:ctx(), openapi_billing_add_cc_request:openapi_billing_add_cc_request(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_billing_credit_card(Ctx, OpenapiBillingAddCcRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/billing/creditcards"],
    QS = [],
    Headers = [],
    Body1 = OpenapiBillingAddCcRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Create Prepay Deposit
%% Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
-spec add_billing_prepay(ctx:ctx(), openapi_billing_prepay_request:openapi_billing_prepay_request()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_billing_prepay(Ctx, OpenapiBillingPrepayRequest) ->
    add_billing_prepay(Ctx, OpenapiBillingPrepayRequest, #{}).

-spec add_billing_prepay(ctx:ctx(), openapi_billing_prepay_request:openapi_billing_prepay_request(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_billing_prepay(Ctx, OpenapiBillingPrepayRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/billing/prepays"],
    QS = [],
    Headers = [],
    Body1 = OpenapiBillingPrepayRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Remove Credit Card
%% Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
-spec delete_account_credit_card(ctx:ctx(), binary()) -> {ok, binary(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_account_credit_card(Ctx, Id) ->
    delete_account_credit_card(Ctx, Id, #{}).

-spec delete_account_credit_card(ctx:ctx(), binary(), maps:map()) -> {ok, binary(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_account_credit_card(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/account/creditcards/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Delete Credit Card
%% Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
-spec delete_billing_credit_card(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_billing_credit_card(Ctx, Id) ->
    delete_billing_credit_card(Ctx, Id, #{}).

-spec delete_billing_credit_card(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_billing_credit_card(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/billing/creditcards/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Delete Invoice
%% Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
-spec delete_billing_invoice(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_billing_invoice(Ctx, Id) ->
    delete_billing_invoice(Ctx, Id, #{}).

-spec delete_billing_invoice(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_billing_invoice(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/billing/invoices/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Delete Prepay Balance
%% Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
-spec delete_billing_prepay(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_billing_prepay(Ctx, Id) ->
    delete_billing_prepay(Ctx, Id, #{}).

-spec delete_billing_prepay(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_billing_prepay(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/billing/prepays/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Affiliate Banner Assets
%% Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
-spec get_affiliate_banners(ctx:ctx()) -> {ok, [openapi_affiliate_banner_row:openapi_affiliate_banner_row()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_affiliate_banners(Ctx) ->
    get_affiliate_banners(Ctx, #{}).

-spec get_affiliate_banners(ctx:ctx(), maps:map()) -> {ok, [openapi_affiliate_banner_row:openapi_affiliate_banner_row()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_affiliate_banners(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/affiliate/banners"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Affiliate Performance Report
%% Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
-spec get_affiliate_rich_report(ctx:ctx()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_affiliate_rich_report(Ctx) ->
    get_affiliate_rich_report(Ctx, #{}).

-spec get_affiliate_rich_report(ctx:ctx(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_affiliate_rich_report(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/affiliate/rich_report"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Affiliate Sales Graph Data
%% Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
-spec get_affiliate_sales_graph(ctx:ctx()) -> {ok, openapi_status_monthly_breakdown:openapi_status_monthly_breakdown(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_affiliate_sales_graph(Ctx) ->
    get_affiliate_sales_graph(Ctx, #{}).

-spec get_affiliate_sales_graph(ctx:ctx(), maps:map()) -> {ok, openapi_status_monthly_breakdown:openapi_status_monthly_breakdown(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_affiliate_sales_graph(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/affiliate/sales_graph"],
    QS = lists:flatten([])++openapi_utils:optional_params(['days'], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Affiliate Sales Report
%% Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
-spec get_affiliate_sales_report(ctx:ctx()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_affiliate_sales_report(Ctx) ->
    get_affiliate_sales_report(Ctx, #{}).

-spec get_affiliate_sales_report(ctx:ctx(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_affiliate_sales_report(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/affiliate/sales_report"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Affiliate Traffic Graph Data
%% Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
-spec get_affiliate_traffic_graph(ctx:ctx()) -> {ok, openapi_monthly_counts:openapi_monthly_counts(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_affiliate_traffic_graph(Ctx) ->
    get_affiliate_traffic_graph(Ctx, #{}).

-spec get_affiliate_traffic_graph(ctx:ctx(), maps:map()) -> {ok, openapi_monthly_counts:openapi_monthly_counts(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_affiliate_traffic_graph(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/affiliate/traffic_graph"],
    QS = lists:flatten([])++openapi_utils:optional_params(['days'], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Affiliate Web Traffic Entries
%% Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
-spec get_affiliate_web_traffic(ctx:ctx()) -> {ok, [openapi_affiliate_traffic_row:openapi_affiliate_traffic_row()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_affiliate_web_traffic(Ctx) ->
    get_affiliate_web_traffic(Ctx, #{}).

-spec get_affiliate_web_traffic(ctx:ctx(), maps:map()) -> {ok, [openapi_affiliate_traffic_row:openapi_affiliate_traffic_row()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_affiliate_web_traffic(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/affiliate/web_traffic"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Shopping Cart Contents
%% Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
-spec get_billing_cart(ctx:ctx()) -> {ok, maps:map(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_billing_cart(Ctx) ->
    get_billing_cart(Ctx, #{}).

-spec get_billing_cart(ctx:ctx(), maps:map()) -> {ok, maps:map(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_billing_cart(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/billing/cart"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Credit Card Verification Requirements
%% Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
-spec get_billing_credit_card_verify(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_billing_credit_card_verify(Ctx, Id) ->
    get_billing_credit_card_verify(Ctx, Id, #{}).

-spec get_billing_credit_card_verify(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_billing_credit_card_verify(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/billing/creditcards/", Id, "/verify"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Invoice Details
%% Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
-spec get_billing_invoice(ctx:ctx(), integer()) -> {ok, openapi_billing_invoice_detail:openapi_billing_invoice_detail(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_billing_invoice(Ctx, Id) ->
    get_billing_invoice(Ctx, Id, #{}).

-spec get_billing_invoice(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_billing_invoice_detail:openapi_billing_invoice_detail(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_billing_invoice(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/billing/invoices/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Account Invoices
%% Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
-spec get_billing_invoices(ctx:ctx()) -> {ok, openapi_billing_invoice_list:openapi_billing_invoice_list(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_billing_invoices(Ctx) ->
    get_billing_invoices(Ctx, #{}).

-spec get_billing_invoices(ctx:ctx(), maps:map()) -> {ok, openapi_billing_invoice_list:openapi_billing_invoice_list(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_billing_invoices(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/billing/invoices"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Prepay Balances
%% Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
-spec get_billing_pre_pays(ctx:ctx()) -> {ok, maps:map(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_billing_pre_pays(Ctx) ->
    get_billing_pre_pays(Ctx, #{}).

-spec get_billing_pre_pays(ctx:ctx(), maps:map()) -> {ok, maps:map(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_billing_pre_pays(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/billing/prepays"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Invoices
%% Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
-spec get_invoices(ctx:ctx()) -> {ok, [openapi_invoice:openapi_invoice()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_invoices(Ctx) ->
    get_invoices(Ctx, #{}).

-spec get_invoices(ctx:ctx(), maps:map()) -> {ok, [openapi_invoice:openapi_invoice()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_invoices(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/invoices"],
    QS = lists:flatten([])++openapi_utils:optional_params(['searchString', 'skip', 'limit'], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Initiate Payment
%% Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
-spec initiate_payment(ctx:ctx(), binary(), binary()) -> {ok, openapi_initiate_payment_200_response:openapi_initiate_payment_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
initiate_payment(Ctx, Method, Invoices) ->
    initiate_payment(Ctx, Method, Invoices, #{}).

-spec initiate_payment(ctx:ctx(), binary(), binary(), maps:map()) -> {ok, openapi_initiate_payment_200_response:openapi_initiate_payment_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
initiate_payment(Ctx, Method, Invoices, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/pay/", Method, "/", Invoices, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Submit Credit Card Verification
%% Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
-spec post_billing_credit_card_verify(ctx:ctx(), integer(), openapi_billing_verify_cc_request:openapi_billing_verify_cc_request()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_billing_credit_card_verify(Ctx, Id, OpenapiBillingVerifyCcRequest) ->
    post_billing_credit_card_verify(Ctx, Id, OpenapiBillingVerifyCcRequest, #{}).

-spec post_billing_credit_card_verify(ctx:ctx(), integer(), openapi_billing_verify_cc_request:openapi_billing_verify_cc_request(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_billing_credit_card_verify(Ctx, Id, OpenapiBillingVerifyCcRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/billing/creditcards/", Id, "/verify"],
    QS = [],
    Headers = [],
    Body1 = OpenapiBillingVerifyCcRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Credit Card
%% Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
-spec update_account_credit_card(ctx:ctx(), integer()) -> {ok, binary(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_account_credit_card(Ctx, Id) ->
    update_account_credit_card(Ctx, Id, #{}).

-spec update_account_credit_card(ctx:ctx(), integer(), maps:map()) -> {ok, binary(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_account_credit_card(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/account/creditcards/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Configure Affiliate Dock Settings
%% Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
-spec update_affiliate_dock_setup(ctx:ctx()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_affiliate_dock_setup(Ctx) ->
    update_affiliate_dock_setup(Ctx, #{}).

-spec update_affiliate_dock_setup(ctx:ctx(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_affiliate_dock_setup(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/affiliate/dock_setup"],
    QS = [],
    Headers = [],
    Body1 = {form, []++openapi_utils:optional_params(['affiliate_dock_title', 'affiliate_dock_description', 'referrer_coupon'], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Configure Affiliate Landing Page
%% Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
-spec update_affiliate_landing_page(ctx:ctx()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_affiliate_landing_page(Ctx) ->
    update_affiliate_landing_page(Ctx, #{}).

-spec update_affiliate_landing_page(ctx:ctx(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_affiliate_landing_page(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/affiliate/landing_pg"],
    QS = [],
    Headers = [],
    Body1 = {form, []++openapi_utils:optional_params(['affiliate_dock_title', 'affiliate_dock_description', 'referrer_coupon'], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Configure Affiliate Payout Preferences
%% Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
-spec update_affiliate_payment_setup(ctx:ctx()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_affiliate_payment_setup(Ctx) ->
    update_affiliate_payment_setup(Ctx, #{}).

-spec update_affiliate_payment_setup(ctx:ctx(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_affiliate_payment_setup(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/affiliate/payment_setup"],
    QS = [],
    Headers = [],
    Body1 = {form, []++openapi_utils:optional_params(['affiliate_paypal', 'affiliate_payment_method'], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Credit Card Details
%% Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
-spec update_billing_credit_card(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_billing_credit_card(Ctx, Id) ->
    update_billing_credit_card(Ctx, Id, #{}).

-spec update_billing_credit_card(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_billing_credit_card(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/billing/creditcards/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Default Payment Method
%% Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
-spec update_billing_payment_method(ctx:ctx(), openapi_billing_payment_method_request:openapi_billing_payment_method_request()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_billing_payment_method(Ctx, OpenapiBillingPaymentMethodRequest) ->
    update_billing_payment_method(Ctx, OpenapiBillingPaymentMethodRequest, #{}).

-spec update_billing_payment_method(ctx:ctx(), openapi_billing_payment_method_request:openapi_billing_payment_method_request(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_billing_payment_method(Ctx, OpenapiBillingPaymentMethodRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/billing/payment_method"],
    QS = [],
    Headers = [],
    Body1 = OpenapiBillingPaymentMethodRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


