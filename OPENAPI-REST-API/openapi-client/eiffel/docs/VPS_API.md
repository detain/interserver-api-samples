# VPS_API

All URIs are relative to *https://my.interserver.net/apiv2*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**add_vps**](VPS_API.md#add_vps) | **Post** /vps/order | Place VPS Order
[**delete_vps_backup**](VPS_API.md#delete_vps_backup) | **Delete** /vps/{id}/backups | Delete VPS Backup
[**do_vps_block_smtp**](VPS_API.md#do_vps_block_smtp) | **Get** /vps/{id}/block_smtp | Blocks SMTP
[**do_vps_disable_cd**](VPS_API.md#do_vps_disable_cd) | **Get** /vps/{id}/disable_cd | Disable CD Drive
[**do_vps_disable_quota**](VPS_API.md#do_vps_disable_quota) | **Get** /vps/{id}/disable_quota | Disable Quotas
[**do_vps_eject_cd**](VPS_API.md#do_vps_eject_cd) | **Get** /vps/{id}/eject_cd | Eject CD Drive
[**do_vps_enable_quota**](VPS_API.md#do_vps_enable_quota) | **Get** /vps/{id}/enable_quota | Enable Quotas
[**do_vps_restart**](VPS_API.md#do_vps_restart) | **Get** /vps/{id}/restart | Restart VPS
[**do_vps_start**](VPS_API.md#do_vps_start) | **Get** /vps/{id}/start | Start VPS
[**do_vps_stop**](VPS_API.md#do_vps_stop) | **Get** /vps/{id}/stop | Stop VPS
[**download_vps_backup**](VPS_API.md#download_vps_backup) | **Patch** /vps/{id}/backups | Download VPS Backup
[**new_vps**](VPS_API.md#new_vps) | **Get** /vps/order | VPS Ordering Information
[**post_vps_backup**](VPS_API.md#post_vps_backup) | **Get** /vps/{id}/backup | Start a VPS Backup
[**post_vps_buy_hd_space**](VPS_API.md#post_vps_buy_hd_space) | **Post** /vps/{id}/buy_hd_space | Purchase HD Space Addon
[**post_vps_buy_ip**](VPS_API.md#post_vps_buy_ip) | **Post** /vps/{id}/buy_ip | Purchase Additional IP
[**post_vps_change_hostname**](VPS_API.md#post_vps_change_hostname) | **Post** /vps/{id}/change_hostname | Update VPS Hostname
[**post_vps_change_root_password**](VPS_API.md#post_vps_change_root_password) | **Post** /vps/{id}/change_root_password | Change VPS Root Password
[**post_vps_change_timezone**](VPS_API.md#post_vps_change_timezone) | **Post** /vps/{id}/change_timezone | Change VPS Timezone
[**post_vps_change_webuzo_password**](VPS_API.md#post_vps_change_webuzo_password) | **Post** /vps/{id}/change_webuzo_password | Change Webuzo Password
[**post_vps_insert_cd**](VPS_API.md#post_vps_insert_cd) | **Post** /vps/{id}/insert_cd | Insert CD in VPS
[**post_vps_reinstall_os**](VPS_API.md#post_vps_reinstall_os) | **Post** /vps/{id}/reinstall_os | Reinstall VPS OS
[**post_vps_reset_password**](VPS_API.md#post_vps_reset_password) | **Post** /vps/{id}/reset_password | Reset VPS Password
[**post_vps_restore**](VPS_API.md#post_vps_restore) | **Post** /vps/{id}/restore | Restore VPS from Backup
[**post_vps_reverse_dns**](VPS_API.md#post_vps_reverse_dns) | **Post** /vps/{id}/reverse_dns | Update Reverse DNS
[**post_vps_setup_vnc**](VPS_API.md#post_vps_setup_vnc) | **Post** /vps/{id}/setup_vnc | Setup VNC
[**post_vps_slices**](VPS_API.md#post_vps_slices) | **Post** /vps/{id}/slices | Purchase Slice Upgrade
[**post_vps_view_desktop**](VPS_API.md#post_vps_view_desktop) | **Post** /vps/{id}/view_desktop | Update View Desktop
[**put_vps**](VPS_API.md#put_vps) | **Put** /vps/order | Validate VPS Order
[**update_vps_info**](VPS_API.md#update_vps_info) | **Post** /vps/{id} | Update VPS Order
[**v_ps_cancel**](VPS_API.md#v_ps_cancel) | **Delete** /vps/{id} | Cancel VPS Service
[**vps_backups**](VPS_API.md#vps_backups) | **Get** /vps/{id}/backups | Get VPS Backups List
[**vps_buy_hd_space**](VPS_API.md#vps_buy_hd_space) | **Get** /vps/{id}/buy_hd_space | HD Space Addon Info
[**vps_buy_ip**](VPS_API.md#vps_buy_ip) | **Get** /vps/{id}/buy_ip | Additional IP Addon Info
[**vps_change_timezone**](VPS_API.md#vps_change_timezone) | **Get** /vps/{id}/change_timezone | Get Timezone Info
[**vps_info**](VPS_API.md#vps_info) | **Get** /vps/{id} | Get VPS Order
[**vps_invoices**](VPS_API.md#vps_invoices) | **Get** /vps/{id}/invoices | Get VPS Invoices
[**vps_list**](VPS_API.md#vps_list) | **Get** /vps | List VPS Orders
[**vps_reinstall_os**](VPS_API.md#vps_reinstall_os) | **Get** /vps/{id}/reinstall_os | VPS Reinstall OS Options
[**vps_reverse_dns**](VPS_API.md#vps_reverse_dns) | **Get** /vps/{id}/reverse_dns | Reverse DNS Info
[**vps_setup_vnc**](VPS_API.md#vps_setup_vnc) | **Get** /vps/{id}/setup_vnc | VNC Setup Info
[**vps_slices**](VPS_API.md#vps_slices) | **Get** /vps/{id}/slices | Slice Upgrade Info
[**vps_traffic_usage**](VPS_API.md#vps_traffic_usage) | **Get** /vps/{id}/traffic_usage | Get Traffic Usage
[**vps_view_desktop**](VPS_API.md#vps_view_desktop) | **Get** /vps/{id}/view_desktop | Get View Desktop Info
[**vps_welcome_email**](VPS_API.md#vps_welcome_email) | **Get** /vps/{id}/welcome_email | Resend VPS Welcome Email


# **add_vps**
> add_vps (vps_order_post_request:  detachable VPS_ORDER_POST_REQUEST )


Place VPS Order

Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vps_order_post_request** | [**VPS_ORDER_POST_REQUEST**](VPS_ORDER_POST_REQUEST.md)|  | [optional] 

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_vps_backup**
> delete_vps_backup (id: INTEGER_32 ; file: STRING_32 ; var_all:  detachable STRING_32 ): detachable SUCCESS_TEXT_RESPONSE


Delete VPS Backup

Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]
 **file** | **STRING_32**| The backup filename to delete. | [default to null]
 **var_all** | **STRING_32**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_vps_block_smtp**
> do_vps_block_smtp (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Blocks SMTP

Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number. | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_vps_disable_cd**
> do_vps_disable_cd (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Disable CD Drive

Disables the virtual CD drive on the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number. | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_vps_disable_quota**
> do_vps_disable_quota (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Disable Quotas

Disables disk quota enforcement on the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number. | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_vps_eject_cd**
> do_vps_eject_cd (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Eject CD Drive

Ejects the virtual CD from the VPS CD drive.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number. | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_vps_enable_quota**
> do_vps_enable_quota (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Enable Quotas

Enables disk quota enforcement on the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number. | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_vps_restart**
> do_vps_restart (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Restart VPS

Restarts the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number. | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_vps_start**
> do_vps_start (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Start VPS

Powers on the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number. | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_vps_stop**
> do_vps_stop (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Stop VPS

Powers off the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number. | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **download_vps_backup**
> download_vps_backup (id: INTEGER_32 ; download_qs_backup_request: DOWNLOAD_QS_BACKUP_REQUEST ; var_all:  detachable STRING_32 ): detachable DOWNLOAD_QS_BACKUP_200_RESPONSE


Download VPS Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]
 **download_qs_backup_request** | [**DOWNLOAD_QS_BACKUP_REQUEST**](DOWNLOAD_QS_BACKUP_REQUEST.md)|  | 
 **var_all** | **STRING_32**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [default to null]

### Return type

[**DOWNLOAD_QS_BACKUP_200_RESPONSE**](downloadQsBackup_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **new_vps**
> new_vps : detachable VPS_ORDER


VPS Ordering Information

Retrieves available VPS configurations, OS templates, and pricing for ordering.


### Parameters
This endpoint does not need any parameter.

### Return type

[**VPS_ORDER**](VpsOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_backup**
> post_vps_backup (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Start a VPS Backup

Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_buy_hd_space**
> post_vps_buy_hd_space (id: INTEGER_32 )


Purchase HD Space Addon

Purchases additional hard drive space for the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_buy_ip**
> post_vps_buy_ip (id: INTEGER_32 )


Purchase Additional IP

Purchases an additional IP address for the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_change_hostname**
> post_vps_change_hostname (id: INTEGER_32 ; hostname:  detachable STRING_32 ): detachable QUEUE_RESPONSE


Update VPS Hostname

Changes the hostname of the VPS. This queues a background task to update the server.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]
 **hostname** | **STRING_32**|  | [optional] [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_change_root_password**
> post_vps_change_root_password (id: INTEGER_32 ; password: STRING_32 ): detachable QUEUE_RESPONSE


Change VPS Root Password

Changes the root password of the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]
 **password** | **STRING_32**|  | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_change_timezone**
> post_vps_change_timezone (id: INTEGER_32 ; timezone: STRING_32 ): detachable QUEUE_RESPONSE


Change VPS Timezone

Changes the system timezone on the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]
 **timezone** | **STRING_32**| The time zone | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_change_webuzo_password**
> post_vps_change_webuzo_password (id: INTEGER_32 ; password: STRING_32 ): detachable QUEUE_RESPONSE


Change Webuzo Password

Changes the Webuzo control panel password on the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]
 **password** | **STRING_32**|  | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_insert_cd**
> post_vps_insert_cd (id: INTEGER_32 ; url:  detachable STRING_32 ): detachable QUEUE_RESPONSE


Insert CD in VPS

Mounts an ISO image in the VPS virtual CD drive from the given URL.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]
 **url** | **STRING_32**|  | [optional] [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_reinstall_os**
> post_vps_reinstall_os (id: INTEGER_32 ; template: STRING_32 ; local_password: STRING ; password:  detachable STRING ): detachable QUEUE_RESPONSE


Reinstall VPS OS

Reinstalls the operating system on the VPS. Warning - all data will be erased.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]
 **template** | **STRING_32**| OS Template Filename | [default to null]
 **local_password** | **STRING**| Password for this account. | [default to null]
 **password** | **STRING**| Password for Root / Administrator Account. | [optional] [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_reset_password**
> post_vps_reset_password (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Reset VPS Password

Resets the root password on the VPS to a new randomly generated password.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_restore**
> post_vps_restore (id: INTEGER_32 ; restore_request: RESTORE_REQUEST ): detachable QUEUE_RESPONSE


Restore VPS from Backup

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]
 **restore_request** | [**RESTORE_REQUEST**](RESTORE_REQUEST.md)| VPS Restore request | 

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_reverse_dns**
> post_vps_reverse_dns (id: INTEGER_32 ; reverse_dns_entries: REVERSE_DNS_ENTRIES ): detachable TEXT_RESPONSE


Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]
 **reverse_dns_entries** | [**REVERSE_DNS_ENTRIES**](REVERSE_DNS_ENTRIES.md)|  | 

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_setup_vnc**
> post_vps_setup_vnc (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Setup VNC

Sets up or refreshes the VNC console connection for the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_slices**
> post_vps_slices (id: INTEGER_32 )


Purchase Slice Upgrade

Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_view_desktop**
> post_vps_view_desktop (id: INTEGER_32 )


Update View Desktop

Updates or refreshes the remote desktop session for the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_vps**
> put_vps (vps_order_put_request:  detachable VPS_ORDER_PUT_REQUEST ): detachable VPS_ORDER_PUT_RESPONSE


Validate VPS Order

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vps_order_put_request** | [**VPS_ORDER_PUT_REQUEST**](VPS_ORDER_PUT_REQUEST.md)|  | [optional] 

### Return type

[**VPS_ORDER_PUT_RESPONSE**](VpsOrderPutResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_vps_info**
> update_vps_info (id: STRING_32 )


Update VPS Order

Updates settings on a VPS order.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| VPS ID number. | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v_ps_cancel**
> v_ps_cancel (id: INTEGER_32 ): detachable VPS_CANCEL_200_RESPONSE


Cancel VPS Service

Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

[**VPS_CANCEL_200_RESPONSE**](VPSCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vps_backups**
> vps_backups (id: INTEGER_32 ; var_all:  detachable STRING_32 ): detachable VPS_BACKUP_ROWS


Get VPS Backups List

Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]
 **var_all** | **STRING_32**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [default to null]

### Return type

[**VPS_BACKUP_ROWS**](VpsBackupRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vps_buy_hd_space**
> vps_buy_hd_space (id: INTEGER_32 )


HD Space Addon Info

Returns available hard drive space addon options and pricing for the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vps_buy_ip**
> vps_buy_ip (id: INTEGER_32 )


Additional IP Addon Info

Returns available additional IP address options and pricing for the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vps_change_timezone**
> vps_change_timezone (id: INTEGER_32 ): detachable LIST [STRING_32]


Get Timezone Info

Returns the list of available timezones that can be set on the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

[**LIST [STRING_32]**](STRING_32.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vps_info**
> vps_info (id: INTEGER_32 ): detachable VPS


Get VPS Order

Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

[**VPS**](Vps.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vps_invoices**
> vps_invoices (id: INTEGER_32 ): detachable CHARGE_INVOICE_ROWS


Get VPS Invoices

Returns the billing invoices associated with this VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

[**CHARGE_INVOICE_ROWS**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vps_list**
> vps_list : detachable LIST [VPS_ROW]


List VPS Orders

Returns all VPS services on the account with their current status and configuration.


### Parameters
This endpoint does not need any parameter.

### Return type

[**LIST [VPS_ROW]**](VpsRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vps_reinstall_os**
> vps_reinstall_os (id: INTEGER_32 ): detachable VPS_TEMPLATES_LIST


VPS Reinstall OS Options

Returns the list of available OS templates for reinstalling the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

[**VPS_TEMPLATES_LIST**](VpsTemplatesList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vps_reverse_dns**
> vps_reverse_dns (id: INTEGER_32 ): detachable REVERSE_DNS_ENTRIES


Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

[**REVERSE_DNS_ENTRIES**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vps_setup_vnc**
> vps_setup_vnc (id: INTEGER_32 )


VNC Setup Info

Returns the current VNC connection information for the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vps_slices**
> vps_slices (id: INTEGER_32 )


Slice Upgrade Info

Returns available slice upgrade options and pricing for the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vps_traffic_usage**
> vps_traffic_usage (id: INTEGER_32 ): detachable VPS_TRAFFIC_RESPONSE


Get Traffic Usage

Returns bandwidth traffic usage data for the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

[**VPS_TRAFFIC_RESPONSE**](VpsTrafficResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vps_view_desktop**
> vps_view_desktop (id: INTEGER_32 )


Get View Desktop Info

Returns remote desktop connection information for the VPS.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| VPS ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vps_welcome_email**
> vps_welcome_email (id: STRING_32 ): detachable SUCCESS_TEXT_RESPONSE


Resend VPS Welcome Email

Resends the welcome email containing connection details and credentials for the VPS order.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| VPS ID | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

