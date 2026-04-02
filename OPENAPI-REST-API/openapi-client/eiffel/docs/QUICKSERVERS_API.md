# QUICKSERVERS_API

All URIs are relative to *https://my.interserver.net/apiv2*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**add_qs**](QUICKSERVERS_API.md#add_qs) | **Post** /qs/order | Place QuickServer Order
[**delete_qs_backup**](QUICKSERVERS_API.md#delete_qs_backup) | **Delete** /qs/{id}/backups | Delete QuickServer Backup
[**do_qs_block_smtp**](QUICKSERVERS_API.md#do_qs_block_smtp) | **Get** /qs/{id}/block_smtp | Block QuickServer SMTP
[**do_qs_disable_cd**](QUICKSERVERS_API.md#do_qs_disable_cd) | **Get** /qs/{id}/disable_cd | Disable CD Drive
[**do_qs_disable_quota**](QUICKSERVERS_API.md#do_qs_disable_quota) | **Get** /qs/{id}/disable_quota | Disable Quotas
[**do_qs_eject_cd**](QUICKSERVERS_API.md#do_qs_eject_cd) | **Get** /qs/{id}/eject_cd | Eject CD Drive
[**do_qs_enable_quota**](QUICKSERVERS_API.md#do_qs_enable_quota) | **Get** /qs/{id}/enable_quota | Enable Quotas
[**do_qs_restart**](QUICKSERVERS_API.md#do_qs_restart) | **Get** /qs/{id}/restart | Restart QuickServer
[**do_qs_start**](QUICKSERVERS_API.md#do_qs_start) | **Get** /qs/{id}/start | Start QuickServer
[**do_qs_stop**](QUICKSERVERS_API.md#do_qs_stop) | **Get** /qs/{id}/stop | Stop QuickServer
[**download_qs_backup**](QUICKSERVERS_API.md#download_qs_backup) | **Patch** /qs/{id}/backups | Download QuickServer Backup
[**new_qs**](QUICKSERVERS_API.md#new_qs) | **Get** /qs/order | Get QuickServer Ordering Information
[**post_qs_backup**](QUICKSERVERS_API.md#post_qs_backup) | **Post** /qs/{id}/backup | Create QuickServer Backup
[**post_qs_change_hostname**](QUICKSERVERS_API.md#post_qs_change_hostname) | **Post** /qs/{id}/change_hostname | Update QuickServer Hostname
[**post_qs_change_root_password**](QUICKSERVERS_API.md#post_qs_change_root_password) | **Post** /qs/{id}/change_root_password | Change Root Password
[**post_qs_change_timezone**](QUICKSERVERS_API.md#post_qs_change_timezone) | **Post** /qs/{id}/change_timezone | Change QuickServer Timezone
[**post_qs_change_webuzo_password**](QUICKSERVERS_API.md#post_qs_change_webuzo_password) | **Post** /qs/{id}/change_webuzo_password | Change Webuzo Password
[**post_qs_insert_cd**](QUICKSERVERS_API.md#post_qs_insert_cd) | **Post** /qs/{id}/insert_cd | Insert CD in QuickServer
[**post_qs_reinstall_os**](QUICKSERVERS_API.md#post_qs_reinstall_os) | **Post** /qs/{id}/reinstall_os | Reinstall QuickServer OS
[**post_qs_reset_password**](QUICKSERVERS_API.md#post_qs_reset_password) | **Post** /qs/{id}/reset_password | Reset QuickServer Password
[**post_qs_reverse_dns**](QUICKSERVERS_API.md#post_qs_reverse_dns) | **Post** /qs/{id}/reverse_dns | Update Reverse DNS
[**post_qs_setup_vnc**](QUICKSERVERS_API.md#post_qs_setup_vnc) | **Post** /qs/{id}/setup_vnc | Setup VNC
[**post_qs_traffic_usage**](QUICKSERVERS_API.md#post_qs_traffic_usage) | **Post** /qs/{id}/traffic_usage | Search Traffic Usage
[**post_qs_view_desktop**](QUICKSERVERS_API.md#post_qs_view_desktop) | **Post** /qs/{id}/view_desktop | Update View Desktop
[**post_quick_server_restore**](QUICKSERVERS_API.md#post_quick_server_restore) | **Post** /qs/{id}/restore | Restore QuickServer from Backup
[**put_qs**](QUICKSERVERS_API.md#put_qs) | **Put** /qs/order | Validate QuickServer Order
[**qs_backups**](QUICKSERVERS_API.md#qs_backups) | **Get** /qs/{id}/backups | List QuickServer Backups
[**qs_change_hostname**](QUICKSERVERS_API.md#qs_change_hostname) | **Get** /qs/{id}/change_hostname | Get QuickServer Hostname
[**qs_change_root_password**](QUICKSERVERS_API.md#qs_change_root_password) | **Get** /qs/{id}/change_root_password | Get Change Root Password Info
[**qs_change_timezone**](QUICKSERVERS_API.md#qs_change_timezone) | **Get** /qs/{id}/change_timezone | Get Timezone Info
[**qs_change_webuzo_password**](QUICKSERVERS_API.md#qs_change_webuzo_password) | **Get** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info
[**qs_info**](QUICKSERVERS_API.md#qs_info) | **Get** /qs/{id} | Get QuickServer Order
[**qs_insert_cd**](QUICKSERVERS_API.md#qs_insert_cd) | **Get** /qs/{id}/insert_cd | Insert CD Information
[**qs_invoices**](QUICKSERVERS_API.md#qs_invoices) | **Get** /qs/{id}/invoices | Get QuickServer Invoices
[**qs_list**](QUICKSERVERS_API.md#qs_list) | **Get** /qs | List QuickServers
[**qs_reinstall_os**](QUICKSERVERS_API.md#qs_reinstall_os) | **Get** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options
[**qs_reset_password**](QUICKSERVERS_API.md#qs_reset_password) | **Get** /qs/{id}/reset_password | Reset QuickServer Password Info
[**qs_reverse_dns**](QUICKSERVERS_API.md#qs_reverse_dns) | **Get** /qs/{id}/reverse_dns | Reverse DNS Info
[**qs_setup_vnc**](QUICKSERVERS_API.md#qs_setup_vnc) | **Get** /qs/{id}/setup_vnc | VNC Setup Info
[**qs_traffic_usage**](QUICKSERVERS_API.md#qs_traffic_usage) | **Get** /qs/{id}/traffic_usage | Get Traffic Usage
[**qs_view_desktop**](QUICKSERVERS_API.md#qs_view_desktop) | **Get** /qs/{id}/view_desktop | Get View Desktop Info
[**qs_welcome_email**](QUICKSERVERS_API.md#qs_welcome_email) | **Get** /qs/{id}/welcome_email | Resend QuickServer Welcome Email
[**quickservers_cancel**](QUICKSERVERS_API.md#quickservers_cancel) | **Delete** /qs/{id} | Cancel QuickServer Order
[**update_qs_info**](QUICKSERVERS_API.md#update_qs_info) | **Post** /qs/{id} | Update QuickServer Order


# **add_qs**
> add_qs : detachable SERVICE_ORDER_POST_RESPONSE


Place QuickServer Order

Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.


### Parameters
This endpoint does not need any parameter.

### Return type

[**SERVICE_ORDER_POST_RESPONSE**](ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_qs_backup**
> delete_qs_backup (id: INTEGER_32 ; file: STRING_32 ; var_all:  detachable STRING_32 ): detachable SUCCESS_TEXT_RESPONSE


Delete QuickServer Backup

Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]
 **file** | **STRING_32**| The backup filename to delete. | [default to null]
 **var_all** | **STRING_32**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_qs_block_smtp**
> do_qs_block_smtp (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Block QuickServer SMTP

Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number. | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_qs_disable_cd**
> do_qs_disable_cd (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Disable CD Drive

Disables the virtual CD drive for the QuickServer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number. | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_qs_disable_quota**
> do_qs_disable_quota (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Disable Quotas

Disables disk quota enforcement for the QuickServer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number. | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_qs_eject_cd**
> do_qs_eject_cd (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Eject CD Drive

Ejects the virtual CD from the QuickServer's CD drive.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number. | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_qs_enable_quota**
> do_qs_enable_quota (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Enable Quotas

Enables disk quota enforcement for the QuickServer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number. | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_qs_restart**
> do_qs_restart (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Restart QuickServer

Restarts the QuickServer. The server will be shut down and started again.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number. | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_qs_start**
> do_qs_start (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Start QuickServer

Powers on the QuickServer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number. | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_qs_stop**
> do_qs_stop (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Stop QuickServer

Powers off the QuickServer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number. | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **download_qs_backup**
> download_qs_backup (id: INTEGER_32 ; download_qs_backup_request: DOWNLOAD_QS_BACKUP_REQUEST ; var_all:  detachable STRING_32 ): detachable DOWNLOAD_QS_BACKUP_200_RESPONSE


Download QuickServer Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]
 **download_qs_backup_request** | [**DOWNLOAD_QS_BACKUP_REQUEST**](DOWNLOAD_QS_BACKUP_REQUEST.md)|  | 
 **var_all** | **STRING_32**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] [default to null]

### Return type

[**DOWNLOAD_QS_BACKUP_200_RESPONSE**](downloadQsBackup_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **new_qs**
> new_qs : detachable QUICKSERVER_ORDER


Get QuickServer Ordering Information

Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.


### Parameters
This endpoint does not need any parameter.

### Return type

[**QUICKSERVER_ORDER**](QuickserverOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_qs_backup**
> post_qs_backup (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Create QuickServer Backup

Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_qs_change_hostname**
> post_qs_change_hostname (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Update QuickServer Hostname

Submits a hostname change request for the QuickServer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_qs_change_root_password**
> post_qs_change_root_password (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Change Root Password

Triggers a root password reset for the QuickServer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_qs_change_timezone**
> post_qs_change_timezone (id: INTEGER_32 ; timezone: STRING_32 ): detachable QUEUE_RESPONSE


Change QuickServer Timezone

Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]
 **timezone** | **STRING_32**| The time zone | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_qs_change_webuzo_password**
> post_qs_change_webuzo_password (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Change Webuzo Password

Resets the Webuzo control panel password for the QuickServer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_qs_insert_cd**
> post_qs_insert_cd (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Insert CD in QuickServer

Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_qs_reinstall_os**
> post_qs_reinstall_os (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Reinstall QuickServer OS

Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_qs_reset_password**
> post_qs_reset_password (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Reset QuickServer Password

Resets the root password on the QuickServer to a new randomly generated password.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_qs_reverse_dns**
> post_qs_reverse_dns (id: INTEGER_32 ; reverse_dns_entries: REVERSE_DNS_ENTRIES ): detachable TEXT_RESPONSE


Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]
 **reverse_dns_entries** | [**REVERSE_DNS_ENTRIES**](REVERSE_DNS_ENTRIES.md)|  | 

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_qs_setup_vnc**
> post_qs_setup_vnc (id: INTEGER_32 ): detachable QUEUE_RESPONSE


Setup VNC

Sets up or refreshes the VNC console connection for the QuickServer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_qs_traffic_usage**
> post_qs_traffic_usage (id: INTEGER_32 )


Search Traffic Usage

Searches and filters the QuickServer's bandwidth traffic usage data by date range.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_qs_view_desktop**
> post_qs_view_desktop (id: INTEGER_32 )


Update View Desktop

Updates or refreshes the remote desktop session for the QuickServer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_quick_server_restore**
> post_quick_server_restore (id: INTEGER_32 ; restore_request: RESTORE_REQUEST ): detachable QUEUE_RESPONSE


Restore QuickServer from Backup

Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]
 **restore_request** | [**RESTORE_REQUEST**](RESTORE_REQUEST.md)| QuickServer Restore request | 

### Return type

[**QUEUE_RESPONSE**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_qs**
> put_qs 


Validate QuickServer Order

Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.


### Parameters
This endpoint does not need any parameter.

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **qs_backups**
> qs_backups (id: INTEGER_32 ; var_all:  detachable STRING_32 ): detachable VPS_BACKUP_ROWS


List QuickServer Backups

Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]
 **var_all** | **STRING_32**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] [default to null]

### Return type

[**VPS_BACKUP_ROWS**](VpsBackupRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **qs_change_hostname**
> qs_change_hostname (id: INTEGER_32 )


Get QuickServer Hostname

Retrieves the current hostname and any validation requirements for changing it.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **qs_change_root_password**
> qs_change_root_password (id: INTEGER_32 )


Get Change Root Password Info

Retrieves instructions or metadata needed to reset the root password.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **qs_change_timezone**
> qs_change_timezone (id: INTEGER_32 ): detachable LIST [STRING_32]


Get Timezone Info

Returns the list of available timezones that can be set on the QuickServer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

[**LIST [STRING_32]**](STRING_32.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **qs_change_webuzo_password**
> qs_change_webuzo_password (id: INTEGER_32 )


Webuzo Change Pass Info

Retrieves instructions or metadata for changing the Webuzo control panel password.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **qs_info**
> qs_info (id: INTEGER_32 ): detachable QUICKSERVER


Get QuickServer Order

Returns detailed QuickServer information, including credentials, IPs, and available client actions.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number. | [default to null]

### Return type

[**QUICKSERVER**](Quickserver.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **qs_insert_cd**
> qs_insert_cd (id: INTEGER_32 )


Insert CD Information

Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **qs_invoices**
> qs_invoices (id: INTEGER_32 ): detachable CHARGE_INVOICE_ROWS


Get QuickServer Invoices

Returns the billing invoices associated with this QuickServer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

[**CHARGE_INVOICE_ROWS**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **qs_list**
> qs_list : detachable LIST [QUICKSERVER_ROW]


List QuickServers

Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.


### Parameters
This endpoint does not need any parameter.

### Return type

[**LIST [QUICKSERVER_ROW]**](QuickserverRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **qs_reinstall_os**
> qs_reinstall_os (id: INTEGER_32 ): detachable VPS_TEMPLATES_LIST


QuickServer Reinstall OS Options

Returns the list of available operating system templates for reinstalling the QuickServer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

[**VPS_TEMPLATES_LIST**](VpsTemplatesList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **qs_reset_password**
> qs_reset_password (id: INTEGER_32 )


Reset QuickServer Password Info

Returns information needed before resetting the QuickServer's root password.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **qs_reverse_dns**
> qs_reverse_dns (id: INTEGER_32 ): detachable REVERSE_DNS_ENTRIES


Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

[**REVERSE_DNS_ENTRIES**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **qs_setup_vnc**
> qs_setup_vnc (id: INTEGER_32 )


VNC Setup Info

Returns the current VNC connection information for the QuickServer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **qs_traffic_usage**
> qs_traffic_usage (id: INTEGER_32 )


Get Traffic Usage

Returns bandwidth traffic usage data for the QuickServer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **qs_view_desktop**
> qs_view_desktop (id: INTEGER_32 )


Get View Desktop Info

Returns remote desktop connection information for the QuickServer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **qs_welcome_email**
> qs_welcome_email (id: STRING_32 ): detachable TEXT_RESPONSE


Resend QuickServer Welcome Email

Resends the welcome email containing connection details and credentials for the QuickServer order.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| Quickserver ID | [default to null]

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **quickservers_cancel**
> quickservers_cancel (id: INTEGER_32 ): detachable QUICKSERVERS_CANCEL_200_RESPONSE


Cancel QuickServer Order

Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| QuickServer ID number | [default to null]

### Return type

[**QUICKSERVERS_CANCEL_200_RESPONSE**](quickserversCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_qs_info**
> update_qs_info (id: STRING_32 ): detachable SUCCESS_TEXT_RESPONSE


Update QuickServer Order

Updates QuickServer metadata or stored settings associated with the order.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| QuickServer ID number. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

