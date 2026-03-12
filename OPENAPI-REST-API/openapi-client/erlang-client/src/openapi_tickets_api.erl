-module(openapi_tickets_api).

-export([add_new_ticket/2, add_new_ticket/3,
         close_ticket/2, close_ticket/3,
         delete_ticket_info/2, delete_ticket_info/3,
         get_new_ticket/1, get_new_ticket/2,
         get_ticket_info/2, get_ticket_info/3,
         get_tickets_list/1, get_tickets_list/2,
         post_ticket_info/2, post_ticket_info/3,
         post_tickets_list/1, post_tickets_list/2,
         put_ticket_info/2, put_ticket_info/3,
         reply_ticket/3, reply_ticket/4,
         update_ticket_info/3, update_ticket_info/4]).

-define(BASE_URL, <<"/apiv2">>).

%% @doc Create New Ticket
%% Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
-spec add_new_ticket(ctx:ctx(), openapi_ticket_new:openapi_ticket_new()) -> {ok, openapi_ticket_new_response:openapi_ticket_new_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_new_ticket(Ctx, OpenapiTicketNew) ->
    add_new_ticket(Ctx, OpenapiTicketNew, #{}).

-spec add_new_ticket(ctx:ctx(), openapi_ticket_new:openapi_ticket_new(), maps:map()) -> {ok, openapi_ticket_new_response:openapi_ticket_new_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_new_ticket(Ctx, OpenapiTicketNew, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/tickets/new"],
    QS = [],
    Headers = [],
    Body1 = OpenapiTicketNew,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Close Ticket
%% Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
-spec close_ticket(ctx:ctx(), binary()) -> {ok, openapi_close_ticket_response_schema:openapi_close_ticket_response_schema(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
close_ticket(Ctx, Id) ->
    close_ticket(Ctx, Id, #{}).

-spec close_ticket(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_close_ticket_response_schema:openapi_close_ticket_response_schema(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
close_ticket(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/tickets/", Id, "/close"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Close Ticket
%% Closes the support ticket.
-spec delete_ticket_info(ctx:ctx(), integer()) -> {ok, openapi_view_ticket_response:openapi_view_ticket_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_ticket_info(Ctx, Id) ->
    delete_ticket_info(Ctx, Id, #{}).

-spec delete_ticket_info(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_view_ticket_response:openapi_view_ticket_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_ticket_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/tickets/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Gets Information for creating a new ticket.
%% Returns the form data needed to create a new support ticket, such as available departments and service categories.
-spec get_new_ticket(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_ticket(Ctx) ->
    get_new_ticket(Ctx, #{}).

-spec get_new_ticket(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_ticket(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/tickets/new"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Ticket Information
%% Returns the full details of a support ticket including its history of replies.
-spec get_ticket_info(ctx:ctx(), integer()) -> {ok, openapi_view_ticket_response:openapi_view_ticket_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_ticket_info(Ctx, Id) ->
    get_ticket_info(Ctx, Id, #{}).

-spec get_ticket_info(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_view_ticket_response:openapi_view_ticket_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_ticket_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/tickets/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List Support Tickets
%% Returns a paginated list of support tickets on the account. Filter by status and time period.
-spec get_tickets_list(ctx:ctx()) -> {ok, openapi_tickets:openapi_tickets(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_tickets_list(Ctx) ->
    get_tickets_list(Ctx, #{}).

-spec get_tickets_list(ctx:ctx(), maps:map()) -> {ok, openapi_tickets:openapi_tickets(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_tickets_list(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/tickets"],
    QS = lists:flatten([])++openapi_utils:optional_params(['page', 'period', 'view'], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Reply To Ticket
%% Adds a reply to an existing support ticket.
-spec post_ticket_info(ctx:ctx(), integer()) -> {ok, openapi_view_ticket_response:openapi_view_ticket_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_ticket_info(Ctx, Id) ->
    post_ticket_info(Ctx, Id, #{}).

-spec post_ticket_info(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_view_ticket_response:openapi_view_ticket_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_ticket_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/tickets/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Search Support Tickets
%% Searches support tickets by email, subject, or ticket mask ID.
-spec post_tickets_list(ctx:ctx()) -> {ok, openapi_tickets:openapi_tickets(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_tickets_list(Ctx) ->
    post_tickets_list(Ctx, #{}).

-spec post_tickets_list(ctx:ctx(), maps:map()) -> {ok, openapi_tickets:openapi_tickets(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_tickets_list(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/tickets"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Ticket
%% Updates a support ticket's properties such as subject or status.
-spec put_ticket_info(ctx:ctx(), integer()) -> {ok, openapi_view_ticket_response:openapi_view_ticket_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_ticket_info(Ctx, Id) ->
    put_ticket_info(Ctx, Id, #{}).

-spec put_ticket_info(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_view_ticket_response:openapi_view_ticket_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_ticket_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = put,
    Path = [?BASE_URL, "/tickets/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Reply Ticket
%% Posts a reply to an existing support ticket thread.
-spec reply_ticket(ctx:ctx(), integer()) -> {ok, openapi_reply_ticket_response_schema:openapi_reply_ticket_response_schema(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
reply_ticket(Ctx, Id) ->
    reply_ticket(Ctx, Id, #{}).

-spec reply_ticket(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_reply_ticket_response_schema:openapi_reply_ticket_response_schema(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
reply_ticket(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/tickets/", Id, "/reply"],
    QS = [],
    Headers = [],
    Body1 = OpenapiReplyTicketRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Ticket
%% Updates a support ticket's subject or body content.
-spec update_ticket_info(ctx:ctx(), integer()) -> {ok, openapi_update_ticket_response_schema:openapi_update_ticket_response_schema(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_ticket_info(Ctx, Id) ->
    update_ticket_info(Ctx, Id, #{}).

-spec update_ticket_info(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_update_ticket_response_schema:openapi_update_ticket_response_schema(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_ticket_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/tickets/", Id, "/update"],
    QS = [],
    Headers = [],
    Body1 = OpenapiUpdateTicket,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


