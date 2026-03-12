-module(openapi_dns_api).

-export([add_dns_domain/3, add_dns_domain/4,
         add_dns_record/5, add_dns_record/6,
         delete_dns_domain/2, delete_dns_domain/3,
         delete_dns_record/3, delete_dns_record/4,
         get_dns_domain/2, get_dns_domain/3,
         get_dns_list/1, get_dns_list/2,
         update_dns_record/3, update_dns_record/4]).

-define(BASE_URL, <<"/apiv2">>).

%% @doc Create DNS Domain
%% Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.
-spec add_dns_domain(ctx:ctx(), binary(), binary()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_dns_domain(Ctx, Domain, Ip) ->
    add_dns_domain(Ctx, Domain, Ip, #{}).

-spec add_dns_domain(ctx:ctx(), binary(), binary(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_dns_domain(Ctx, Domain, Ip, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/dns"],
    QS = [],
    Headers = [],
    Body1 = {form, [{<<"domain">>, Domain}, {<<"ip">>, Ip}]++openapi_utils:optional_params([], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Add DNS Record to Domain
%% Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
-spec add_dns_record(ctx:ctx(), binary(), binary(), openapi_dns_record_type:openapi_dns_record_type(), binary()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_dns_record(Ctx, Id, Name, Type, Content) ->
    add_dns_record(Ctx, Id, Name, Type, Content, #{}).

-spec add_dns_record(ctx:ctx(), binary(), binary(), openapi_dns_record_type:openapi_dns_record_type(), binary(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_dns_record(Ctx, Id, Name, Type, Content, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/dns/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = {form, [{<<"name">>, Name}, {<<"type">>, Type}, {<<"content">>, Content}]++openapi_utils:optional_params(['ttl', 'prio'], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Delete DNS Domain
%% Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
-spec delete_dns_domain(ctx:ctx(), binary()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_dns_domain(Ctx, Id) ->
    delete_dns_domain(Ctx, Id, #{}).

-spec delete_dns_domain(ctx:ctx(), binary(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_dns_domain(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/dns/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Delete DNS Record
%% Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
-spec delete_dns_record(ctx:ctx(), integer(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_dns_record(Ctx, DomainId, RecordId) ->
    delete_dns_record(Ctx, DomainId, RecordId, #{}).

-spec delete_dns_record(ctx:ctx(), integer(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_dns_record(Ctx, DomainId, RecordId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/dns/", DomainId, "/", RecordId, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Domain DNS Records
%% Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
-spec get_dns_domain(ctx:ctx(), integer()) -> {ok, [openapi_dns_record:openapi_dns_record()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_dns_domain(Ctx, Id) ->
    get_dns_domain(Ctx, Id, #{}).

-spec get_dns_domain(ctx:ctx(), integer(), maps:map()) -> {ok, [openapi_dns_record:openapi_dns_record()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_dns_domain(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/dns/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List DNS Domains
%% Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
-spec get_dns_list(ctx:ctx()) -> {ok, [openapi_dns_list_item:openapi_dns_list_item()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_dns_list(Ctx) ->
    get_dns_list(Ctx, #{}).

-spec get_dns_list(ctx:ctx(), maps:map()) -> {ok, [openapi_dns_list_item:openapi_dns_list_item()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_dns_list(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/dns"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update DNS Record
%% Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
-spec update_dns_record(ctx:ctx(), integer(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_dns_record(Ctx, DomainId, RecordId) ->
    update_dns_record(Ctx, DomainId, RecordId, #{}).

-spec update_dns_record(ctx:ctx(), integer(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_dns_record(Ctx, DomainId, RecordId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/dns/", DomainId, "/", RecordId, ""],
    QS = [],
    Headers = [],
    Body1 = {form, []++openapi_utils:optional_params(['name', 'type', 'content', 'ttl', 'prio', 'disabled', 'ordername', 'auth'], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


