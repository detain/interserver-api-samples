-module(openapi_domains_api).

-export([add_domain/1, add_domain/2,
         add_domain_dnssec/3, add_domain_dnssec/4,
         add_domain_nameserver/3, add_domain_nameserver/4,
         cancel_domain/2, cancel_domain/3,
         delete_domain_dnssec/3, delete_domain_dnssec/4,
         delete_domain_nameserver/3, delete_domain_nameserver/4,
         get_domain_contact/2, get_domain_contact/3,
         get_domain_dnssec/2, get_domain_dnssec/3,
         get_domain_info/2, get_domain_info/3,
         get_domain_invoices/2, get_domain_invoices/3,
         get_domain_lookup/2, get_domain_lookup/3,
         get_domain_nameservers/2, get_domain_nameservers/3,
         get_domain_order_fields/3, get_domain_order_fields/4,
         get_domain_order_search_results/2, get_domain_order_search_results/3,
         get_domain_renewal/2, get_domain_renewal/3,
         get_domain_search/2, get_domain_search/3,
         get_domain_transfer/2, get_domain_transfer/3,
         get_domain_whois_privacy/2, get_domain_whois_privacy/3,
         get_domains_list/1, get_domains_list/2,
         get_domains_welcome_email/2, get_domains_welcome_email/3,
         get_new_domain/1, get_new_domain/2,
         patch_domains/1, patch_domains/2,
         post_domain_renewal/2, post_domain_renewal/3,
         post_domain_transfer/2, post_domain_transfer/3,
         put_domains/1, put_domains/2,
         update_domain_contact/3, update_domain_contact/4,
         update_domain_info/2, update_domain_info/3,
         update_domain_nameservers/3, update_domain_nameservers/4,
         update_domain_whois_privacy/3, update_domain_whois_privacy/4]).

-define(BASE_URL, <<"/apiv2">>).

%% @doc Place Domain Order
%% Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.
-spec add_domain(ctx:ctx()) -> {ok, openapi_service_order_post_response:openapi_service_order_post_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_domain(Ctx) ->
    add_domain(Ctx, #{}).

-spec add_domain(ctx:ctx(), maps:map()) -> {ok, openapi_service_order_post_response:openapi_service_order_post_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_domain(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/domains/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Add Domain DNSSEC Records
%% Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
-spec add_domain_dnssec(ctx:ctx(), integer(), openapi_domain_dnssec_request:openapi_domain_dnssec_request()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_domain_dnssec(Ctx, Id, OpenapiDomainDnssecRequest) ->
    add_domain_dnssec(Ctx, Id, OpenapiDomainDnssecRequest, #{}).

-spec add_domain_dnssec(ctx:ctx(), integer(), openapi_domain_dnssec_request:openapi_domain_dnssec_request(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_domain_dnssec(Ctx, Id, OpenapiDomainDnssecRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/domains/", Id, "/dnssec"],
    QS = [],
    Headers = [],
    Body1 = OpenapiDomainDnssecRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Add Registered Nameserver
%% Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
-spec add_domain_nameserver(ctx:ctx(), integer(), openapi_domain_nameserver_post_request:openapi_domain_nameserver_post_request()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_domain_nameserver(Ctx, Id, OpenapiDomainNameserverPostRequest) ->
    add_domain_nameserver(Ctx, Id, OpenapiDomainNameserverPostRequest, #{}).

-spec add_domain_nameserver(ctx:ctx(), integer(), openapi_domain_nameserver_post_request:openapi_domain_nameserver_post_request(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_domain_nameserver(Ctx, Id, OpenapiDomainNameserverPostRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/domains/", Id, "/nameservers"],
    QS = [],
    Headers = [],
    Body1 = OpenapiDomainNameserverPostRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Cancel Domain Order
%% Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
-spec cancel_domain(ctx:ctx(), integer()) -> {ok, openapi_cancel_domain_200_response:openapi_cancel_domain_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
cancel_domain(Ctx, Id) ->
    cancel_domain(Ctx, Id, #{}).

-spec cancel_domain(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_cancel_domain_200_response:openapi_cancel_domain_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
cancel_domain(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/domains/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Remove Domain DNSSEC Records
%% Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
-spec delete_domain_dnssec(ctx:ctx(), integer(), binary()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_domain_dnssec(Ctx, Id, Action) ->
    delete_domain_dnssec(Ctx, Id, Action, #{}).

-spec delete_domain_dnssec(ctx:ctx(), integer(), binary(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_domain_dnssec(Ctx, Id, Action, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/domains/", Id, "/dnssec"],
    QS = lists:flatten([{<<"action">>, Action}])++openapi_utils:optional_params([], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Delete Registered Nameserver
%% Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.
-spec delete_domain_nameserver(ctx:ctx(), integer(), integer()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_domain_nameserver(Ctx, Id, Index) ->
    delete_domain_nameserver(Ctx, Id, Index, #{}).

-spec delete_domain_nameserver(ctx:ctx(), integer(), integer(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_domain_nameserver(Ctx, Id, Index, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/domains/", Id, "/nameservers"],
    QS = lists:flatten([{<<"index">>, Index}])++openapi_utils:optional_params([], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Domain Contact Details
%% Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
-spec get_domain_contact(ctx:ctx(), integer()) -> {ok, openapi_domain_contact_details:openapi_domain_contact_details(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_contact(Ctx, Id) ->
    get_domain_contact(Ctx, Id, #{}).

-spec get_domain_contact(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_domain_contact_details:openapi_domain_contact_details(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_contact(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/domains/", Id, "/contact"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Domain DNSSEC Records
%% Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
-spec get_domain_dnssec(ctx:ctx(), integer()) -> {ok, openapi_domain_dnssec_records:openapi_domain_dnssec_records(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_dnssec(Ctx, Id) ->
    get_domain_dnssec(Ctx, Id, #{}).

-spec get_domain_dnssec(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_domain_dnssec_records:openapi_domain_dnssec_records(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_dnssec(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/domains/", Id, "/dnssec"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Domain Order
%% Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.
-spec get_domain_info(ctx:ctx(), integer()) -> {ok, openapi_domain:openapi_domain(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_info(Ctx, Id) ->
    get_domain_info(Ctx, Id, #{}).

-spec get_domain_info(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_domain:openapi_domain(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/domains/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Domain Invoices
%% Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
-spec get_domain_invoices(ctx:ctx(), integer()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_invoices(Ctx, Id) ->
    get_domain_invoices(Ctx, Id, #{}).

-spec get_domain_invoices(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_invoices(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/domains/", Id, "/invoices"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Lookup Domain Availability and Pricing
%% Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.
-spec get_domain_lookup(ctx:ctx(), binary()) -> {ok, openapi_domain_lookup_response:openapi_domain_lookup_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_lookup(Ctx, Name) ->
    get_domain_lookup(Ctx, Name, #{}).

-spec get_domain_lookup(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_domain_lookup_response:openapi_domain_lookup_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_lookup(Ctx, Name, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/domains/lookup/", Name, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Registered Nameservers
%% Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
-spec get_domain_nameservers(ctx:ctx(), integer()) -> {ok, openapi_domain_nameserver_get_response:openapi_domain_nameserver_get_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_nameservers(Ctx, Id) ->
    get_domain_nameservers(Ctx, Id, #{}).

-spec get_domain_nameservers(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_domain_nameserver_get_response:openapi_domain_nameserver_get_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_nameservers(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/domains/", Id, "/nameservers"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Domain Order Fields
%% Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.
-spec get_domain_order_fields(ctx:ctx(), binary(), binary()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_order_fields(Ctx, Domain, RegType) ->
    get_domain_order_fields(Ctx, Domain, RegType, #{}).

-spec get_domain_order_fields(ctx:ctx(), binary(), binary(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_order_fields(Ctx, Domain, RegType, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/domains/order/", Domain, "/", RegType, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Domain Order Search Results
%% Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
-spec get_domain_order_search_results(ctx:ctx(), binary()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_order_search_results(Ctx, Domain) ->
    get_domain_order_search_results(Ctx, Domain, #{}).

-spec get_domain_order_search_results(ctx:ctx(), binary(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_order_search_results(Ctx, Domain, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/domains/order/", Domain, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Start Domain Renewal Flow
%% Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
-spec get_domain_renewal(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_renewal(Ctx, Id) ->
    get_domain_renewal(Ctx, Id, #{}).

-spec get_domain_renewal(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_renewal(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/domains/", Id, "/renew"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Search Domain Suggestions
%% Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.
-spec get_domain_search(ctx:ctx(), binary()) -> {ok, openapi_domain_search_response:openapi_domain_search_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_search(Ctx, Name) ->
    get_domain_search(Ctx, Name, #{}).

-spec get_domain_search(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_domain_search_response:openapi_domain_search_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_search(Ctx, Name, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/domains/search/", Name, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Start Domain Transfer Flow
%% Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.
-spec get_domain_transfer(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_transfer(Ctx, Id) ->
    get_domain_transfer(Ctx, Id, #{}).

-spec get_domain_transfer(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_transfer(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/domains/", Id, "/transfer"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Whois Privacy Status
%% Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
-spec get_domain_whois_privacy(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_whois_privacy(Ctx, Id) ->
    get_domain_whois_privacy(Ctx, Id, #{}).

-spec get_domain_whois_privacy(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domain_whois_privacy(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/domains/", Id, "/whois"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Domain Orders
%% Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.
-spec get_domains_list(ctx:ctx()) -> {ok, [openapi_domain_row:openapi_domain_row()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domains_list(Ctx) ->
    get_domains_list(Ctx, #{}).

-spec get_domains_list(ctx:ctx(), maps:map()) -> {ok, [openapi_domain_row:openapi_domain_row()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domains_list(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/domains"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Resend Domain Welcome Email
%% Resends the welcome email for the domain service. The email contains registration details and management instructions.
-spec get_domains_welcome_email(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domains_welcome_email(Ctx, Id) ->
    get_domains_welcome_email(Ctx, Id, #{}).

-spec get_domains_welcome_email(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_domains_welcome_email(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/domains/", Id, "/welcome_email"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Domain Ordering Information
%% Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.
-spec get_new_domain(ctx:ctx()) -> {ok, openapi_domain_order:openapi_domain_order(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_domain(Ctx) ->
    get_new_domain(Ctx, #{}).

-spec get_new_domain(ctx:ctx(), maps:map()) -> {ok, openapi_domain_order:openapi_domain_order(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_domain(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/domains/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Validate Domain Order
%% Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).
-spec patch_domains(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
patch_domains(Ctx) ->
    patch_domains(Ctx, #{}).

-spec patch_domains(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
patch_domains(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = patch,
    Path = [?BASE_URL, "/domains/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Request Domain Renewal
%% Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.
-spec post_domain_renewal(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_domain_renewal(Ctx, Id) ->
    post_domain_renewal(Ctx, Id, #{}).

-spec post_domain_renewal(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_domain_renewal(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/domains/", Id, "/renew"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Request Domain Transfer
%% Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.
-spec post_domain_transfer(ctx:ctx(), integer()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_domain_transfer(Ctx, Id) ->
    post_domain_transfer(Ctx, Id, #{}).

-spec post_domain_transfer(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_domain_transfer(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/domains/", Id, "/transfer"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Domain Order Search
%% Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
-spec put_domains(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_domains(Ctx) ->
    put_domains(Ctx, #{}).

-spec put_domains(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_domains(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = put,
    Path = [?BASE_URL, "/domains/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Domain Contact Details
%% Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
-spec update_domain_contact(ctx:ctx(), integer(), openapi_domain_contact_details:openapi_domain_contact_details()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_domain_contact(Ctx, Id, OpenapiDomainContactDetails) ->
    update_domain_contact(Ctx, Id, OpenapiDomainContactDetails, #{}).

-spec update_domain_contact(ctx:ctx(), integer(), openapi_domain_contact_details:openapi_domain_contact_details(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_domain_contact(Ctx, Id, OpenapiDomainContactDetails, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/domains/", Id, "/contact"],
    QS = [],
    Headers = [],
    Body1 = OpenapiDomainContactDetails,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Domain Order
%% Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
-spec update_domain_info(ctx:ctx(), binary()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_domain_info(Ctx, Id) ->
    update_domain_info(Ctx, Id, #{}).

-spec update_domain_info(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_domain_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/domains/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Replace Nameserver Set
%% Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
-spec update_domain_nameservers(ctx:ctx(), integer(), openapi_domain_nameserver_put_request:openapi_domain_nameserver_put_request()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_domain_nameservers(Ctx, Id, OpenapiDomainNameserverPutRequest) ->
    update_domain_nameservers(Ctx, Id, OpenapiDomainNameserverPutRequest, #{}).

-spec update_domain_nameservers(ctx:ctx(), integer(), openapi_domain_nameserver_put_request:openapi_domain_nameserver_put_request(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_domain_nameservers(Ctx, Id, OpenapiDomainNameserverPutRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = put,
    Path = [?BASE_URL, "/domains/", Id, "/nameservers"],
    QS = [],
    Headers = [],
    Body1 = OpenapiDomainNameserverPutRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Whois Privacy
%% Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
-spec update_domain_whois_privacy(ctx:ctx(), integer(), openapi_domain_whois_privacy_request:openapi_domain_whois_privacy_request()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_domain_whois_privacy(Ctx, Id, OpenapiDomainWhoisPrivacyRequest) ->
    update_domain_whois_privacy(Ctx, Id, OpenapiDomainWhoisPrivacyRequest, #{}).

-spec update_domain_whois_privacy(ctx:ctx(), integer(), openapi_domain_whois_privacy_request:openapi_domain_whois_privacy_request(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_domain_whois_privacy(Ctx, Id, OpenapiDomainWhoisPrivacyRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/domains/", Id, "/whois"],
    QS = [],
    Headers = [],
    Body1 = OpenapiDomainWhoisPrivacyRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


