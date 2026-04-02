-module(openapi_quick_servers_api).

-export([add_qs/1, add_qs/2,
         delete_qs_backup/3, delete_qs_backup/4,
         do_qs_block_smtp/2, do_qs_block_smtp/3,
         do_qs_disable_cd/2, do_qs_disable_cd/3,
         do_qs_disable_quota/2, do_qs_disable_quota/3,
         do_qs_eject_cd/2, do_qs_eject_cd/3,
         do_qs_enable_quota/2, do_qs_enable_quota/3,
         do_qs_restart/2, do_qs_restart/3,
         do_qs_start/2, do_qs_start/3,
         do_qs_stop/2, do_qs_stop/3,
         download_qs_backup/3, download_qs_backup/4,
         get_new_qs/1, get_new_qs/2,
         get_qs_backups/2, get_qs_backups/3,
         get_qs_change_hostname/2, get_qs_change_hostname/3,
         get_qs_change_root_password/2, get_qs_change_root_password/3,
         get_qs_change_timezone/2, get_qs_change_timezone/3,
         get_qs_change_webuzo_password/2, get_qs_change_webuzo_password/3,
         get_qs_info/2, get_qs_info/3,
         get_qs_insert_cd/2, get_qs_insert_cd/3,
         get_qs_invoices/2, get_qs_invoices/3,
         get_qs_list/1, get_qs_list/2,
         get_qs_reinstall_os/2, get_qs_reinstall_os/3,
         get_qs_reset_password/2, get_qs_reset_password/3,
         get_qs_reverse_dns/2, get_qs_reverse_dns/3,
         get_qs_setup_vnc/2, get_qs_setup_vnc/3,
         get_qs_traffic_usage/2, get_qs_traffic_usage/3,
         get_qs_view_desktop/2, get_qs_view_desktop/3,
         get_qs_welcome_email/2, get_qs_welcome_email/3,
         post_qs_backup/2, post_qs_backup/3,
         post_qs_change_hostname/2, post_qs_change_hostname/3,
         post_qs_change_root_password/2, post_qs_change_root_password/3,
         post_qs_change_timezone/3, post_qs_change_timezone/4,
         post_qs_change_webuzo_password/2, post_qs_change_webuzo_password/3,
         post_qs_insert_cd/2, post_qs_insert_cd/3,
         post_qs_reinstall_os/2, post_qs_reinstall_os/3,
         post_qs_reset_password/2, post_qs_reset_password/3,
         post_qs_reverse_dns/3, post_qs_reverse_dns/4,
         post_qs_setup_vnc/2, post_qs_setup_vnc/3,
         post_qs_traffic_usage/2, post_qs_traffic_usage/3,
         post_qs_view_desktop/2, post_qs_view_desktop/3,
         post_quick_server_restore/3, post_quick_server_restore/4,
         put_qs/1, put_qs/2,
         quickservers_cancel/2, quickservers_cancel/3,
         update_qs_info/2, update_qs_info/3]).

-define(BASE_URL, <<"/apiv2">>).

%% @doc Place QuickServer Order
%% Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
-spec add_qs(ctx:ctx()) -> {ok, openapi_service_order_post_response:openapi_service_order_post_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_qs(Ctx) ->
    add_qs(Ctx, #{}).

-spec add_qs(ctx:ctx(), maps:map()) -> {ok, openapi_service_order_post_response:openapi_service_order_post_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_qs(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/qs/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Delete QuickServer Backup
%% Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.
-spec delete_qs_backup(ctx:ctx(), integer(), binary()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_qs_backup(Ctx, Id, File) ->
    delete_qs_backup(Ctx, Id, File, #{}).

-spec delete_qs_backup(ctx:ctx(), integer(), binary(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_qs_backup(Ctx, Id, File, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/qs/", Id, "/backups"],
    QS = lists:flatten([{<<"file">>, File}])++openapi_utils:optional_params(['all'], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Block QuickServer SMTP
%% Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
-spec do_qs_block_smtp(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_qs_block_smtp(Ctx, Id) ->
    do_qs_block_smtp(Ctx, Id, #{}).

-spec do_qs_block_smtp(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_qs_block_smtp(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/block_smtp"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Disable CD Drive
%% Disables the virtual CD drive for the QuickServer.
-spec do_qs_disable_cd(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_qs_disable_cd(Ctx, Id) ->
    do_qs_disable_cd(Ctx, Id, #{}).

-spec do_qs_disable_cd(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_qs_disable_cd(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/disable_cd"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Disable Quotas
%% Disables disk quota enforcement for the QuickServer.
-spec do_qs_disable_quota(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_qs_disable_quota(Ctx, Id) ->
    do_qs_disable_quota(Ctx, Id, #{}).

-spec do_qs_disable_quota(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_qs_disable_quota(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/disable_quota"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Eject CD Drive
%% Ejects the virtual CD from the QuickServer's CD drive.
-spec do_qs_eject_cd(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_qs_eject_cd(Ctx, Id) ->
    do_qs_eject_cd(Ctx, Id, #{}).

-spec do_qs_eject_cd(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_qs_eject_cd(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/eject_cd"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Enable Quotas
%% Enables disk quota enforcement for the QuickServer.
-spec do_qs_enable_quota(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_qs_enable_quota(Ctx, Id) ->
    do_qs_enable_quota(Ctx, Id, #{}).

-spec do_qs_enable_quota(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_qs_enable_quota(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/enable_quota"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Restart QuickServer
%% Restarts the QuickServer. The server will be shut down and started again.
-spec do_qs_restart(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_qs_restart(Ctx, Id) ->
    do_qs_restart(Ctx, Id, #{}).

-spec do_qs_restart(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_qs_restart(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/restart"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Start QuickServer
%% Powers on the QuickServer.
-spec do_qs_start(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_qs_start(Ctx, Id) ->
    do_qs_start(Ctx, Id, #{}).

-spec do_qs_start(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_qs_start(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/start"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Stop QuickServer
%% Powers off the QuickServer.
-spec do_qs_stop(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_qs_stop(Ctx, Id) ->
    do_qs_stop(Ctx, Id, #{}).

-spec do_qs_stop(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_qs_stop(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/stop"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Download QuickServer Backup
%% Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
-spec download_qs_backup(ctx:ctx(), integer(), openapi_download_qs_backup_request:openapi_download_qs_backup_request()) -> {ok, openapi_download_qs_backup_200_response:openapi_download_qs_backup_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
download_qs_backup(Ctx, Id, OpenapiDownloadQsBackupRequest) ->
    download_qs_backup(Ctx, Id, OpenapiDownloadQsBackupRequest, #{}).

-spec download_qs_backup(ctx:ctx(), integer(), openapi_download_qs_backup_request:openapi_download_qs_backup_request(), maps:map()) -> {ok, openapi_download_qs_backup_200_response:openapi_download_qs_backup_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
download_qs_backup(Ctx, Id, OpenapiDownloadQsBackupRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = patch,
    Path = [?BASE_URL, "/qs/", Id, "/backups"],
    QS = lists:flatten([])++openapi_utils:optional_params(['all'], _OptionalParams),
    Headers = [],
    Body1 = OpenapiDownloadQsBackupRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get QuickServer Ordering Information
%% Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
-spec get_new_qs(ctx:ctx()) -> {ok, openapi_quickserver_order:openapi_quickserver_order(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_qs(Ctx) ->
    get_new_qs(Ctx, #{}).

-spec get_new_qs(ctx:ctx(), maps:map()) -> {ok, openapi_quickserver_order:openapi_quickserver_order(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_qs(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List QuickServer Backups
%% Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.
-spec get_qs_backups(ctx:ctx(), integer()) -> {ok, openapi_vps_backup_rows:openapi_vps_backup_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_backups(Ctx, Id) ->
    get_qs_backups(Ctx, Id, #{}).

-spec get_qs_backups(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_vps_backup_rows:openapi_vps_backup_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_backups(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/backups"],
    QS = lists:flatten([])++openapi_utils:optional_params(['all'], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get QuickServer Hostname
%% Retrieves the current hostname and any validation requirements for changing it.
-spec get_qs_change_hostname(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_change_hostname(Ctx, Id) ->
    get_qs_change_hostname(Ctx, Id, #{}).

-spec get_qs_change_hostname(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_change_hostname(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/change_hostname"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Change Root Password Info
%% Retrieves instructions or metadata needed to reset the root password.
-spec get_qs_change_root_password(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_change_root_password(Ctx, Id) ->
    get_qs_change_root_password(Ctx, Id, #{}).

-spec get_qs_change_root_password(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_change_root_password(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/change_root_password"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Timezone Info
%% Returns the list of available timezones that can be set on the QuickServer.
-spec get_qs_change_timezone(ctx:ctx(), integer()) -> {ok, [binary()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_change_timezone(Ctx, Id) ->
    get_qs_change_timezone(Ctx, Id, #{}).

-spec get_qs_change_timezone(ctx:ctx(), integer(), maps:map()) -> {ok, [binary()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_change_timezone(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/change_timezone"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Webuzo Change Pass Info
%% Retrieves instructions or metadata for changing the Webuzo control panel password.
-spec get_qs_change_webuzo_password(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_change_webuzo_password(Ctx, Id) ->
    get_qs_change_webuzo_password(Ctx, Id, #{}).

-spec get_qs_change_webuzo_password(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_change_webuzo_password(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/change_webuzo_password"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get QuickServer Order
%% Returns detailed QuickServer information, including credentials, IPs, and available client actions.
-spec get_qs_info(ctx:ctx(), integer()) -> {ok, openapi_quickserver:openapi_quickserver(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_info(Ctx, Id) ->
    get_qs_info(Ctx, Id, #{}).

-spec get_qs_info(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_quickserver:openapi_quickserver(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Insert CD Information
%% Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.
-spec get_qs_insert_cd(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_insert_cd(Ctx, Id) ->
    get_qs_insert_cd(Ctx, Id, #{}).

-spec get_qs_insert_cd(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_insert_cd(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/insert_cd"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get QuickServer Invoices
%% Returns the billing invoices associated with this QuickServer.
-spec get_qs_invoices(ctx:ctx(), integer()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_invoices(Ctx, Id) ->
    get_qs_invoices(Ctx, Id, #{}).

-spec get_qs_invoices(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_invoices(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/invoices"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List QuickServers
%% Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.
-spec get_qs_list(ctx:ctx()) -> {ok, [openapi_quickserver_row:openapi_quickserver_row()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_list(Ctx) ->
    get_qs_list(Ctx, #{}).

-spec get_qs_list(ctx:ctx(), maps:map()) -> {ok, [openapi_quickserver_row:openapi_quickserver_row()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_list(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc QuickServer Reinstall OS Options
%% Returns the list of available operating system templates for reinstalling the QuickServer.
-spec get_qs_reinstall_os(ctx:ctx(), integer()) -> {ok, openapi_vps_templates_list:openapi_vps_templates_list(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_reinstall_os(Ctx, Id) ->
    get_qs_reinstall_os(Ctx, Id, #{}).

-spec get_qs_reinstall_os(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_vps_templates_list:openapi_vps_templates_list(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_reinstall_os(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/reinstall_os"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Reset QuickServer Password Info
%% Returns information needed before resetting the QuickServer's root password.
-spec get_qs_reset_password(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_reset_password(Ctx, Id) ->
    get_qs_reset_password(Ctx, Id, #{}).

-spec get_qs_reset_password(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_reset_password(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/reset_password"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Reverse DNS Info
%% Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.
-spec get_qs_reverse_dns(ctx:ctx(), integer()) -> {ok, openapi_reverse_dns_entries:openapi_reverse_dns_entries(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_reverse_dns(Ctx, Id) ->
    get_qs_reverse_dns(Ctx, Id, #{}).

-spec get_qs_reverse_dns(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_reverse_dns_entries:openapi_reverse_dns_entries(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_reverse_dns(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/reverse_dns"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc VNC Setup Info
%% Returns the current VNC connection information for the QuickServer.
-spec get_qs_setup_vnc(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_setup_vnc(Ctx, Id) ->
    get_qs_setup_vnc(Ctx, Id, #{}).

-spec get_qs_setup_vnc(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_setup_vnc(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/setup_vnc"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Traffic Usage
%% Returns bandwidth traffic usage data for the QuickServer.
-spec get_qs_traffic_usage(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_traffic_usage(Ctx, Id) ->
    get_qs_traffic_usage(Ctx, Id, #{}).

-spec get_qs_traffic_usage(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_traffic_usage(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/traffic_usage"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get View Desktop Info
%% Returns remote desktop connection information for the QuickServer.
-spec get_qs_view_desktop(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_view_desktop(Ctx, Id) ->
    get_qs_view_desktop(Ctx, Id, #{}).

-spec get_qs_view_desktop(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_view_desktop(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/view_desktop"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Resend QuickServer Welcome Email
%% Resends the welcome email containing connection details and credentials for the QuickServer order.
-spec get_qs_welcome_email(ctx:ctx(), binary()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_welcome_email(Ctx, Id) ->
    get_qs_welcome_email(Ctx, Id, #{}).

-spec get_qs_welcome_email(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_qs_welcome_email(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/qs/", Id, "/welcome_email"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Create QuickServer Backup
%% Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
-spec post_qs_backup(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_backup(Ctx, Id) ->
    post_qs_backup(Ctx, Id, #{}).

-spec post_qs_backup(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_backup(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/qs/", Id, "/backup"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update QuickServer Hostname
%% Submits a hostname change request for the QuickServer.
-spec post_qs_change_hostname(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_change_hostname(Ctx, Id) ->
    post_qs_change_hostname(Ctx, Id, #{}).

-spec post_qs_change_hostname(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_change_hostname(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/qs/", Id, "/change_hostname"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Change Root Password
%% Triggers a root password reset for the QuickServer.
-spec post_qs_change_root_password(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_change_root_password(Ctx, Id) ->
    post_qs_change_root_password(Ctx, Id, #{}).

-spec post_qs_change_root_password(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_change_root_password(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/qs/", Id, "/change_root_password"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Change QuickServer Timezone
%% Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
-spec post_qs_change_timezone(ctx:ctx(), integer(), binary()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_change_timezone(Ctx, Id, Timezone) ->
    post_qs_change_timezone(Ctx, Id, Timezone, #{}).

-spec post_qs_change_timezone(ctx:ctx(), integer(), binary(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_change_timezone(Ctx, Id, Timezone, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/qs/", Id, "/change_timezone"],
    QS = [],
    Headers = [],
    Body1 = {form, [{<<"timezone">>, Timezone}]++openapi_utils:optional_params([], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Change Webuzo Password
%% Resets the Webuzo control panel password for the QuickServer.
-spec post_qs_change_webuzo_password(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_change_webuzo_password(Ctx, Id) ->
    post_qs_change_webuzo_password(Ctx, Id, #{}).

-spec post_qs_change_webuzo_password(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_change_webuzo_password(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/qs/", Id, "/change_webuzo_password"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Insert CD in QuickServer
%% Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.
-spec post_qs_insert_cd(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_insert_cd(Ctx, Id) ->
    post_qs_insert_cd(Ctx, Id, #{}).

-spec post_qs_insert_cd(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_insert_cd(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/qs/", Id, "/insert_cd"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Reinstall QuickServer OS
%% Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
-spec post_qs_reinstall_os(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_reinstall_os(Ctx, Id) ->
    post_qs_reinstall_os(Ctx, Id, #{}).

-spec post_qs_reinstall_os(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_reinstall_os(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/qs/", Id, "/reinstall_os"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Reset QuickServer Password
%% Resets the root password on the QuickServer to a new randomly generated password.
-spec post_qs_reset_password(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_reset_password(Ctx, Id) ->
    post_qs_reset_password(Ctx, Id, #{}).

-spec post_qs_reset_password(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_reset_password(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/qs/", Id, "/reset_password"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Reverse DNS
%% Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.
-spec post_qs_reverse_dns(ctx:ctx(), integer(), openapi_reverse_dns_entries:openapi_reverse_dns_entries()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_reverse_dns(Ctx, Id, OpenapiReverseDnsEntries) ->
    post_qs_reverse_dns(Ctx, Id, OpenapiReverseDnsEntries, #{}).

-spec post_qs_reverse_dns(ctx:ctx(), integer(), openapi_reverse_dns_entries:openapi_reverse_dns_entries(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_reverse_dns(Ctx, Id, OpenapiReverseDnsEntries, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/qs/", Id, "/reverse_dns"],
    QS = [],
    Headers = [],
    Body1 = OpenapiReverseDnsEntries,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Setup VNC
%% Sets up or refreshes the VNC console connection for the QuickServer.
-spec post_qs_setup_vnc(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_setup_vnc(Ctx, Id) ->
    post_qs_setup_vnc(Ctx, Id, #{}).

-spec post_qs_setup_vnc(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_setup_vnc(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/qs/", Id, "/setup_vnc"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Search Traffic Usage
%% Searches and filters the QuickServer's bandwidth traffic usage data by date range.
-spec post_qs_traffic_usage(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_traffic_usage(Ctx, Id) ->
    post_qs_traffic_usage(Ctx, Id, #{}).

-spec post_qs_traffic_usage(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_traffic_usage(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/qs/", Id, "/traffic_usage"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update View Desktop
%% Updates or refreshes the remote desktop session for the QuickServer.
-spec post_qs_view_desktop(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_view_desktop(Ctx, Id) ->
    post_qs_view_desktop(Ctx, Id, #{}).

-spec post_qs_view_desktop(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_qs_view_desktop(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/qs/", Id, "/view_desktop"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Restore QuickServer from Backup
%% Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
-spec post_quick_server_restore(ctx:ctx(), integer(), openapi_restore_request:openapi_restore_request()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_quick_server_restore(Ctx, Id, OpenapiRestoreRequest) ->
    post_quick_server_restore(Ctx, Id, OpenapiRestoreRequest, #{}).

-spec post_quick_server_restore(ctx:ctx(), integer(), openapi_restore_request:openapi_restore_request(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_quick_server_restore(Ctx, Id, OpenapiRestoreRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/qs/", Id, "/restore"],
    QS = [],
    Headers = [],
    Body1 = OpenapiRestoreRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Validate QuickServer Order
%% Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
-spec put_qs(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_qs(Ctx) ->
    put_qs(Ctx, #{}).

-spec put_qs(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_qs(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = put,
    Path = [?BASE_URL, "/qs/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Cancel QuickServer Order
%% Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
-spec quickservers_cancel(ctx:ctx(), integer()) -> {ok, openapi_quickservers_cancel_200_response:openapi_quickservers_cancel_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
quickservers_cancel(Ctx, Id) ->
    quickservers_cancel(Ctx, Id, #{}).

-spec quickservers_cancel(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_quickservers_cancel_200_response:openapi_quickservers_cancel_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
quickservers_cancel(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/qs/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update QuickServer Order
%% Updates QuickServer metadata or stored settings associated with the order.
-spec update_qs_info(ctx:ctx(), binary()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_qs_info(Ctx, Id) ->
    update_qs_info(Ctx, Id, #{}).

-spec update_qs_info(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_qs_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/qs/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


