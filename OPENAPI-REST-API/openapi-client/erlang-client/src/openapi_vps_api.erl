-module(openapi_vps_api).

-export([add_vps/2, add_vps/3,
         delete_vps_backup/3, delete_vps_backup/4,
         do_vps_block_smtp/2, do_vps_block_smtp/3,
         do_vps_disable_cd/2, do_vps_disable_cd/3,
         do_vps_disable_quota/2, do_vps_disable_quota/3,
         do_vps_eject_cd/2, do_vps_eject_cd/3,
         do_vps_enable_quota/2, do_vps_enable_quota/3,
         do_vps_restart/2, do_vps_restart/3,
         do_vps_start/2, do_vps_start/3,
         do_vps_stop/2, do_vps_stop/3,
         download_vps_backup/3, download_vps_backup/4,
         get_new_vps/1, get_new_vps/2,
         get_vps_backups/2, get_vps_backups/3,
         get_vps_buy_hd_space/2, get_vps_buy_hd_space/3,
         get_vps_buy_ip/2, get_vps_buy_ip/3,
         get_vps_change_timezone/2, get_vps_change_timezone/3,
         get_vps_info/2, get_vps_info/3,
         get_vps_invoices/2, get_vps_invoices/3,
         get_vps_list/1, get_vps_list/2,
         get_vps_reinstall_os/2, get_vps_reinstall_os/3,
         get_vps_reverse_dns/2, get_vps_reverse_dns/3,
         get_vps_setup_vnc/2, get_vps_setup_vnc/3,
         get_vps_slices/2, get_vps_slices/3,
         get_vps_traffic_usage/2, get_vps_traffic_usage/3,
         get_vps_view_desktop/2, get_vps_view_desktop/3,
         get_vps_welcome_email/2, get_vps_welcome_email/3,
         post_vps_backup/2, post_vps_backup/3,
         post_vps_buy_hd_space/2, post_vps_buy_hd_space/3,
         post_vps_buy_ip/2, post_vps_buy_ip/3,
         post_vps_change_hostname/2, post_vps_change_hostname/3,
         post_vps_change_root_password/3, post_vps_change_root_password/4,
         post_vps_change_timezone/3, post_vps_change_timezone/4,
         post_vps_change_webuzo_password/3, post_vps_change_webuzo_password/4,
         post_vps_insert_cd/2, post_vps_insert_cd/3,
         post_vps_reinstall_os/4, post_vps_reinstall_os/5,
         post_vps_reset_password/2, post_vps_reset_password/3,
         post_vps_restore/3, post_vps_restore/4,
         post_vps_reverse_dns/3, post_vps_reverse_dns/4,
         post_vps_setup_vnc/2, post_vps_setup_vnc/3,
         post_vps_slices/2, post_vps_slices/3,
         post_vps_view_desktop/2, post_vps_view_desktop/3,
         put_vps/2, put_vps/3,
         update_vps_info/2, update_vps_info/3,
         v_ps_cancel/2, v_ps_cancel/3]).

-define(BASE_URL, <<"/apiv2">>).

%% @doc Place VPS Order
%% Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
-spec add_vps(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_vps(Ctx) ->
    add_vps(Ctx, #{}).

-spec add_vps(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
add_vps(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/vps/order"],
    QS = [],
    Headers = [],
    Body1 = OpenapiVpsOrderPostRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Delete VPS Backup
%% Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.
-spec delete_vps_backup(ctx:ctx(), integer(), binary()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_vps_backup(Ctx, Id, File) ->
    delete_vps_backup(Ctx, Id, File, #{}).

-spec delete_vps_backup(ctx:ctx(), integer(), binary(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
delete_vps_backup(Ctx, Id, File, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/vps/", Id, "/backups"],
    QS = lists:flatten([{<<"file">>, File}])++openapi_utils:optional_params(['all'], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Blocks SMTP
%% Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
-spec do_vps_block_smtp(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_vps_block_smtp(Ctx, Id) ->
    do_vps_block_smtp(Ctx, Id, #{}).

-spec do_vps_block_smtp(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_vps_block_smtp(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/block_smtp"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Disable CD Drive
%% Disables the virtual CD drive on the VPS.
-spec do_vps_disable_cd(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_vps_disable_cd(Ctx, Id) ->
    do_vps_disable_cd(Ctx, Id, #{}).

-spec do_vps_disable_cd(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_vps_disable_cd(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/disable_cd"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Disable Quotas
%% Disables disk quota enforcement on the VPS.
-spec do_vps_disable_quota(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_vps_disable_quota(Ctx, Id) ->
    do_vps_disable_quota(Ctx, Id, #{}).

-spec do_vps_disable_quota(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_vps_disable_quota(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/disable_quota"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Eject CD Drive
%% Ejects the virtual CD from the VPS CD drive.
-spec do_vps_eject_cd(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_vps_eject_cd(Ctx, Id) ->
    do_vps_eject_cd(Ctx, Id, #{}).

-spec do_vps_eject_cd(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_vps_eject_cd(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/eject_cd"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Enable Quotas
%% Enables disk quota enforcement on the VPS.
-spec do_vps_enable_quota(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_vps_enable_quota(Ctx, Id) ->
    do_vps_enable_quota(Ctx, Id, #{}).

-spec do_vps_enable_quota(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_vps_enable_quota(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/enable_quota"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Restart VPS
%% Restarts the VPS.
-spec do_vps_restart(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_vps_restart(Ctx, Id) ->
    do_vps_restart(Ctx, Id, #{}).

-spec do_vps_restart(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_vps_restart(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/restart"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Start VPS
%% Powers on the VPS.
-spec do_vps_start(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_vps_start(Ctx, Id) ->
    do_vps_start(Ctx, Id, #{}).

-spec do_vps_start(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_vps_start(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/start"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Stop VPS
%% Powers off the VPS.
-spec do_vps_stop(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_vps_stop(Ctx, Id) ->
    do_vps_stop(Ctx, Id, #{}).

-spec do_vps_stop(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
do_vps_stop(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/stop"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Download VPS Backup
%% Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
-spec download_vps_backup(ctx:ctx(), integer(), openapi_download_qs_backup_request:openapi_download_qs_backup_request()) -> {ok, openapi_download_qs_backup_200_response:openapi_download_qs_backup_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
download_vps_backup(Ctx, Id, OpenapiDownloadQsBackupRequest) ->
    download_vps_backup(Ctx, Id, OpenapiDownloadQsBackupRequest, #{}).

-spec download_vps_backup(ctx:ctx(), integer(), openapi_download_qs_backup_request:openapi_download_qs_backup_request(), maps:map()) -> {ok, openapi_download_qs_backup_200_response:openapi_download_qs_backup_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
download_vps_backup(Ctx, Id, OpenapiDownloadQsBackupRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = patch,
    Path = [?BASE_URL, "/vps/", Id, "/backups"],
    QS = lists:flatten([])++openapi_utils:optional_params(['all'], _OptionalParams),
    Headers = [],
    Body1 = OpenapiDownloadQsBackupRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc VPS Ordering Information
%% Retrieves available VPS configurations, OS templates, and pricing for ordering.
-spec get_new_vps(ctx:ctx()) -> {ok, openapi_vps_order:openapi_vps_order(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_vps(Ctx) ->
    get_new_vps(Ctx, #{}).

-spec get_new_vps(ctx:ctx(), maps:map()) -> {ok, openapi_vps_order:openapi_vps_order(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_new_vps(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/order"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get VPS Backups List
%% Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.
-spec get_vps_backups(ctx:ctx(), integer()) -> {ok, openapi_vps_backup_rows:openapi_vps_backup_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_backups(Ctx, Id) ->
    get_vps_backups(Ctx, Id, #{}).

-spec get_vps_backups(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_vps_backup_rows:openapi_vps_backup_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_backups(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/backups"],
    QS = lists:flatten([])++openapi_utils:optional_params(['all'], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc HD Space Addon Info
%% Returns available hard drive space addon options and pricing for the VPS.
-spec get_vps_buy_hd_space(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_buy_hd_space(Ctx, Id) ->
    get_vps_buy_hd_space(Ctx, Id, #{}).

-spec get_vps_buy_hd_space(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_buy_hd_space(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/buy_hd_space"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Additional IP Addon Info
%% Returns available additional IP address options and pricing for the VPS.
-spec get_vps_buy_ip(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_buy_ip(Ctx, Id) ->
    get_vps_buy_ip(Ctx, Id, #{}).

-spec get_vps_buy_ip(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_buy_ip(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/buy_ip"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Timezone Info
%% Returns the list of available timezones that can be set on the VPS.
-spec get_vps_change_timezone(ctx:ctx(), integer()) -> {ok, [binary()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_change_timezone(Ctx, Id) ->
    get_vps_change_timezone(Ctx, Id, #{}).

-spec get_vps_change_timezone(ctx:ctx(), integer(), maps:map()) -> {ok, [binary()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_change_timezone(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/change_timezone"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get VPS Order
%% Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
-spec get_vps_info(ctx:ctx(), integer()) -> {ok, openapi_vps:openapi_vps(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_info(Ctx, Id) ->
    get_vps_info(Ctx, Id, #{}).

-spec get_vps_info(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_vps:openapi_vps(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get VPS Invoices
%% Returns the billing invoices associated with this VPS.
-spec get_vps_invoices(ctx:ctx(), integer()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_invoices(Ctx, Id) ->
    get_vps_invoices(Ctx, Id, #{}).

-spec get_vps_invoices(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_charge_invoice_rows:openapi_charge_invoice_rows(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_invoices(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/invoices"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc List VPS Orders
%% Returns all VPS services on the account with their current status and configuration.
-spec get_vps_list(ctx:ctx()) -> {ok, [openapi_vps_row:openapi_vps_row()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_list(Ctx) ->
    get_vps_list(Ctx, #{}).

-spec get_vps_list(ctx:ctx(), maps:map()) -> {ok, [openapi_vps_row:openapi_vps_row()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_list(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc VPS Reinstall OS Options
%% Returns the list of available OS templates for reinstalling the VPS.
-spec get_vps_reinstall_os(ctx:ctx(), integer()) -> {ok, openapi_vps_templates_list:openapi_vps_templates_list(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_reinstall_os(Ctx, Id) ->
    get_vps_reinstall_os(Ctx, Id, #{}).

-spec get_vps_reinstall_os(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_vps_templates_list:openapi_vps_templates_list(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_reinstall_os(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/reinstall_os"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Reverse DNS Info
%% Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
-spec get_vps_reverse_dns(ctx:ctx(), integer()) -> {ok, openapi_reverse_dns_entries:openapi_reverse_dns_entries(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_reverse_dns(Ctx, Id) ->
    get_vps_reverse_dns(Ctx, Id, #{}).

-spec get_vps_reverse_dns(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_reverse_dns_entries:openapi_reverse_dns_entries(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_reverse_dns(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/reverse_dns"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc VNC Setup Info
%% Returns the current VNC connection information for the VPS.
-spec get_vps_setup_vnc(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_setup_vnc(Ctx, Id) ->
    get_vps_setup_vnc(Ctx, Id, #{}).

-spec get_vps_setup_vnc(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_setup_vnc(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/setup_vnc"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Slice Upgrade Info
%% Returns available slice upgrade options and pricing for the VPS.
-spec get_vps_slices(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_slices(Ctx, Id) ->
    get_vps_slices(Ctx, Id, #{}).

-spec get_vps_slices(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_slices(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/slices"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get Traffic Usage
%% Returns bandwidth traffic usage data for the VPS.
-spec get_vps_traffic_usage(ctx:ctx(), integer()) -> {ok, openapi_vps_traffic_response:openapi_vps_traffic_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_traffic_usage(Ctx, Id) ->
    get_vps_traffic_usage(Ctx, Id, #{}).

-spec get_vps_traffic_usage(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_vps_traffic_response:openapi_vps_traffic_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_traffic_usage(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/traffic_usage"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get View Desktop Info
%% Returns remote desktop connection information for the VPS.
-spec get_vps_view_desktop(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_view_desktop(Ctx, Id) ->
    get_vps_view_desktop(Ctx, Id, #{}).

-spec get_vps_view_desktop(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_view_desktop(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/view_desktop"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Resend VPS Welcome Email
%% Resends the welcome email containing connection details and credentials for the VPS order.
-spec get_vps_welcome_email(ctx:ctx(), binary()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_welcome_email(Ctx, Id) ->
    get_vps_welcome_email(Ctx, Id, #{}).

-spec get_vps_welcome_email(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_success_text_response:openapi_success_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
get_vps_welcome_email(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/welcome_email"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Start a VPS Backup
%% Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
-spec post_vps_backup(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_backup(Ctx, Id) ->
    post_vps_backup(Ctx, Id, #{}).

-spec post_vps_backup(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_backup(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/vps/", Id, "/backup"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Purchase HD Space Addon
%% Purchases additional hard drive space for the VPS.
-spec post_vps_buy_hd_space(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_buy_hd_space(Ctx, Id) ->
    post_vps_buy_hd_space(Ctx, Id, #{}).

-spec post_vps_buy_hd_space(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_buy_hd_space(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/vps/", Id, "/buy_hd_space"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Purchase Additional IP
%% Purchases an additional IP address for the VPS.
-spec post_vps_buy_ip(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_buy_ip(Ctx, Id) ->
    post_vps_buy_ip(Ctx, Id, #{}).

-spec post_vps_buy_ip(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_buy_ip(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/vps/", Id, "/buy_ip"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update VPS Hostname
%% Changes the hostname of the VPS. This queues a background task to update the server.
-spec post_vps_change_hostname(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_change_hostname(Ctx, Id) ->
    post_vps_change_hostname(Ctx, Id, #{}).

-spec post_vps_change_hostname(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_change_hostname(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/vps/", Id, "/change_hostname"],
    QS = [],
    Headers = [],
    Body1 = {form, []++openapi_utils:optional_params(['hostname'], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Change VPS Root Password
%% Changes the root password of the VPS.
-spec post_vps_change_root_password(ctx:ctx(), integer(), binary()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_change_root_password(Ctx, Id, Password) ->
    post_vps_change_root_password(Ctx, Id, Password, #{}).

-spec post_vps_change_root_password(ctx:ctx(), integer(), binary(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_change_root_password(Ctx, Id, Password, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/vps/", Id, "/change_root_password"],
    QS = [],
    Headers = [],
    Body1 = {form, [{<<"password">>, Password}]++openapi_utils:optional_params([], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Change VPS Timezone
%% Changes the system timezone on the VPS.
-spec post_vps_change_timezone(ctx:ctx(), integer(), binary()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_change_timezone(Ctx, Id, Timezone) ->
    post_vps_change_timezone(Ctx, Id, Timezone, #{}).

-spec post_vps_change_timezone(ctx:ctx(), integer(), binary(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_change_timezone(Ctx, Id, Timezone, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/vps/", Id, "/change_timezone"],
    QS = [],
    Headers = [],
    Body1 = {form, [{<<"timezone">>, Timezone}]++openapi_utils:optional_params([], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Change Webuzo Password
%% Changes the Webuzo control panel password on the VPS.
-spec post_vps_change_webuzo_password(ctx:ctx(), integer(), binary()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_change_webuzo_password(Ctx, Id, Password) ->
    post_vps_change_webuzo_password(Ctx, Id, Password, #{}).

-spec post_vps_change_webuzo_password(ctx:ctx(), integer(), binary(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_change_webuzo_password(Ctx, Id, Password, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/vps/", Id, "/change_webuzo_password"],
    QS = [],
    Headers = [],
    Body1 = {form, [{<<"password">>, Password}]++openapi_utils:optional_params([], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Insert CD in VPS
%% Mounts an ISO image in the VPS virtual CD drive from the given URL.
-spec post_vps_insert_cd(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_insert_cd(Ctx, Id) ->
    post_vps_insert_cd(Ctx, Id, #{}).

-spec post_vps_insert_cd(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_insert_cd(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/vps/", Id, "/insert_cd"],
    QS = [],
    Headers = [],
    Body1 = {form, []++openapi_utils:optional_params(['url'], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Reinstall VPS OS
%% Reinstalls the operating system on the VPS. Warning - all data will be erased.
-spec post_vps_reinstall_os(ctx:ctx(), integer(), binary(), binary()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_reinstall_os(Ctx, Id, Template, LocalPassword) ->
    post_vps_reinstall_os(Ctx, Id, Template, LocalPassword, #{}).

-spec post_vps_reinstall_os(ctx:ctx(), integer(), binary(), binary(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_reinstall_os(Ctx, Id, Template, LocalPassword, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/vps/", Id, "/reinstall_os"],
    QS = [],
    Headers = [],
    Body1 = {form, [{<<"template">>, Template}, {<<"localPassword">>, LocalPassword}]++openapi_utils:optional_params(['password'], _OptionalParams)},
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"multipart/form-data">>, <<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Reset VPS Password
%% Resets the root password on the VPS to a new randomly generated password.
-spec post_vps_reset_password(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_reset_password(Ctx, Id) ->
    post_vps_reset_password(Ctx, Id, #{}).

-spec post_vps_reset_password(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_reset_password(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/vps/", Id, "/reset_password"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Restore VPS from Backup
%% Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
-spec post_vps_restore(ctx:ctx(), integer(), openapi_restore_request:openapi_restore_request()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_restore(Ctx, Id, OpenapiRestoreRequest) ->
    post_vps_restore(Ctx, Id, OpenapiRestoreRequest, #{}).

-spec post_vps_restore(ctx:ctx(), integer(), openapi_restore_request:openapi_restore_request(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_restore(Ctx, Id, OpenapiRestoreRequest, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/vps/", Id, "/restore"],
    QS = [],
    Headers = [],
    Body1 = OpenapiRestoreRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update Reverse DNS
%% Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
-spec post_vps_reverse_dns(ctx:ctx(), integer(), openapi_reverse_dns_entries:openapi_reverse_dns_entries()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_reverse_dns(Ctx, Id, OpenapiReverseDnsEntries) ->
    post_vps_reverse_dns(Ctx, Id, OpenapiReverseDnsEntries, #{}).

-spec post_vps_reverse_dns(ctx:ctx(), integer(), openapi_reverse_dns_entries:openapi_reverse_dns_entries(), maps:map()) -> {ok, openapi_text_response:openapi_text_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_reverse_dns(Ctx, Id, OpenapiReverseDnsEntries, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/vps/", Id, "/reverse_dns"],
    QS = [],
    Headers = [],
    Body1 = OpenapiReverseDnsEntries,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Setup VNC
%% Sets up or refreshes the VNC console connection for the VPS.
-spec post_vps_setup_vnc(ctx:ctx(), integer()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_setup_vnc(Ctx, Id) ->
    post_vps_setup_vnc(Ctx, Id, #{}).

-spec post_vps_setup_vnc(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_queue_response:openapi_queue_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_setup_vnc(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/vps/", Id, "/setup_vnc"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Purchase Slice Upgrade
%% Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
-spec post_vps_slices(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_slices(Ctx, Id) ->
    post_vps_slices(Ctx, Id, #{}).

-spec post_vps_slices(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_slices(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/vps/", Id, "/slices"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update View Desktop
%% Updates or refreshes the remote desktop session for the VPS.
-spec post_vps_view_desktop(ctx:ctx(), integer()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_view_desktop(Ctx, Id) ->
    post_vps_view_desktop(Ctx, Id, #{}).

-spec post_vps_view_desktop(ctx:ctx(), integer(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
post_vps_view_desktop(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/vps/", Id, "/view_desktop"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Validate VPS Order
%% Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
-spec put_vps(ctx:ctx()) -> {ok, openapi_vps_order_put_response:openapi_vps_order_put_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_vps(Ctx) ->
    put_vps(Ctx, #{}).

-spec put_vps(ctx:ctx(), maps:map()) -> {ok, openapi_vps_order_put_response:openapi_vps_order_put_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
put_vps(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = put,
    Path = [?BASE_URL, "/vps/order"],
    QS = [],
    Headers = [],
    Body1 = OpenapiVpsOrderPutRequest,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>, <<"multipart/form-data">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Update VPS Order
%% Updates settings on a VPS order.
-spec update_vps_info(ctx:ctx(), binary()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_vps_info(Ctx, Id) ->
    update_vps_info(Ctx, Id, #{}).

-spec update_vps_info(ctx:ctx(), binary(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
update_vps_info(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = post,
    Path = [?BASE_URL, "/vps/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Cancel VPS Service
%% Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
-spec v_ps_cancel(ctx:ctx(), integer()) -> {ok, openapi_v_ps_cancel_200_response:openapi_v_ps_cancel_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
v_ps_cancel(Ctx, Id) ->
    v_ps_cancel(Ctx, Id, #{}).

-spec v_ps_cancel(ctx:ctx(), integer(), maps:map()) -> {ok, openapi_v_ps_cancel_200_response:openapi_v_ps_cancel_200_response(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
v_ps_cancel(Ctx, Id, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = delete,
    Path = [?BASE_URL, "/vps/", Id, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


