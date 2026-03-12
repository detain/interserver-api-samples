# {{classname}}

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddQs**](QuickServersApi.md#AddQs) | **Post** /qs/order | Place QuickServer Order
[**DeleteQsBackup**](QuickServersApi.md#DeleteQsBackup) | **Delete** /qs/{id}/backups | Delete QuickServer Backup
[**DoQsBlockSmtp**](QuickServersApi.md#DoQsBlockSmtp) | **Get** /qs/{id}/block_smtp | Block QuickServer SMTP
[**DoQsDisableCd**](QuickServersApi.md#DoQsDisableCd) | **Get** /qs/{id}/disable_cd | Disable CD Drive
[**DoQsDisableQuota**](QuickServersApi.md#DoQsDisableQuota) | **Get** /qs/{id}/disable_quota | Disable Quotas
[**DoQsEjectCd**](QuickServersApi.md#DoQsEjectCd) | **Get** /qs/{id}/eject_cd | Eject CD Drive
[**DoQsEnableQuota**](QuickServersApi.md#DoQsEnableQuota) | **Get** /qs/{id}/enable_quota | Enable Quotas
[**DoQsRestart**](QuickServersApi.md#DoQsRestart) | **Get** /qs/{id}/restart | Restart QuickServer
[**DoQsStart**](QuickServersApi.md#DoQsStart) | **Get** /qs/{id}/start | Start QuickServer
[**DoQsStop**](QuickServersApi.md#DoQsStop) | **Get** /qs/{id}/stop | Stop QuickServer
[**DownloadQsBackup**](QuickServersApi.md#DownloadQsBackup) | **Patch** /qs/{id}/backups | Download QuickServer Backup
[**GetNewQs**](QuickServersApi.md#GetNewQs) | **Get** /qs/order | Get QuickServer Ordering Information
[**GetQsBackups**](QuickServersApi.md#GetQsBackups) | **Get** /qs/{id}/backups | List QuickServer Backups
[**GetQsChangeHostname**](QuickServersApi.md#GetQsChangeHostname) | **Get** /qs/{id}/change_hostname | Get QuickServer Hostname
[**GetQsChangeRootPassword**](QuickServersApi.md#GetQsChangeRootPassword) | **Get** /qs/{id}/change_root_password | Get Change Root Password Info
[**GetQsChangeTimezone**](QuickServersApi.md#GetQsChangeTimezone) | **Get** /qs/{id}/change_timezone | Get Timezone Info
[**GetQsChangeWebuzoPassword**](QuickServersApi.md#GetQsChangeWebuzoPassword) | **Get** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info
[**GetQsInfo**](QuickServersApi.md#GetQsInfo) | **Get** /qs/{id} | Get QuickServer Order
[**GetQsInsertCd**](QuickServersApi.md#GetQsInsertCd) | **Get** /qs/{id}/insert_cd | Insert CD Information
[**GetQsInvoices**](QuickServersApi.md#GetQsInvoices) | **Get** /qs/{id}/invoices | Get QuickServer Invoices
[**GetQsList**](QuickServersApi.md#GetQsList) | **Get** /qs | List QuickServers
[**GetQsReinstallOs**](QuickServersApi.md#GetQsReinstallOs) | **Get** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options
[**GetQsResetPassword**](QuickServersApi.md#GetQsResetPassword) | **Get** /qs/{id}/reset_password | Reset QuickServer Password Info
[**GetQsReverseDns**](QuickServersApi.md#GetQsReverseDns) | **Get** /qs/{id}/reverse_dns | Reverse DNS Info
[**GetQsSetupVnc**](QuickServersApi.md#GetQsSetupVnc) | **Get** /qs/{id}/setup_vnc | VNC Setup Info
[**GetQsTrafficUsage**](QuickServersApi.md#GetQsTrafficUsage) | **Get** /qs/{id}/traffic_usage | Get Traffic Usage
[**GetQsViewDesktop**](QuickServersApi.md#GetQsViewDesktop) | **Get** /qs/{id}/view_desktop | Get View Desktop Info
[**GetQsWelcomeEmail**](QuickServersApi.md#GetQsWelcomeEmail) | **Get** /qs/{id}/welcome_email | Resend QuickServer Welcome Email
[**PostQsBackup**](QuickServersApi.md#PostQsBackup) | **Post** /qs/{id}/backup | Create QuickServer Backup
[**PostQsChangeHostname**](QuickServersApi.md#PostQsChangeHostname) | **Post** /qs/{id}/change_hostname | Update QuickServer Hostname
[**PostQsChangeRootPassword**](QuickServersApi.md#PostQsChangeRootPassword) | **Post** /qs/{id}/change_root_password | Change Root Password
[**PostQsChangeTimezone**](QuickServersApi.md#PostQsChangeTimezone) | **Post** /qs/{id}/change_timezone | Change QuickServer Timezone
[**PostQsChangeWebuzoPassword**](QuickServersApi.md#PostQsChangeWebuzoPassword) | **Post** /qs/{id}/change_webuzo_password | Change Webuzo Password
[**PostQsInsertCd**](QuickServersApi.md#PostQsInsertCd) | **Post** /qs/{id}/insert_cd | Insert CD in QuickServer
[**PostQsReinstallOs**](QuickServersApi.md#PostQsReinstallOs) | **Post** /qs/{id}/reinstall_os | Reinstall QuickServer OS
[**PostQsResetPassword**](QuickServersApi.md#PostQsResetPassword) | **Post** /qs/{id}/reset_password | Reset QuickServer Password
[**PostQsReverseDns**](QuickServersApi.md#PostQsReverseDns) | **Post** /qs/{id}/reverse_dns | Update Reverse DNS
[**PostQsSetupVnc**](QuickServersApi.md#PostQsSetupVnc) | **Post** /qs/{id}/setup_vnc | Setup VNC
[**PostQsTrafficUsage**](QuickServersApi.md#PostQsTrafficUsage) | **Post** /qs/{id}/traffic_usage | Search Traffic Usage
[**PostQsViewDesktop**](QuickServersApi.md#PostQsViewDesktop) | **Post** /qs/{id}/view_desktop | Update View Desktop
[**PostQuickServerRestore**](QuickServersApi.md#PostQuickServerRestore) | **Post** /qs/{id}/restore | Restore QuickServer from Backup
[**PutQs**](QuickServersApi.md#PutQs) | **Put** /qs/order | Validate QuickServer Order
[**QuickserversCancel**](QuickServersApi.md#QuickserversCancel) | **Delete** /qs/{id} | Cancel QuickServer Order
[**UpdateQsInfo**](QuickServersApi.md#UpdateQsInfo) | **Post** /qs/{id} | Update QuickServer Order

# **AddQs**
> AddQs(ctx, )
Place QuickServer Order

Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.

### Required Parameters
This endpoint does not need any parameter.

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeleteQsBackup**
> SuccessTextResponse DeleteQsBackup(ctx, id, file, optional)
Delete QuickServer Backup

Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 
  **file** | **string**| The backup filename to delete. | 
 **optional** | ***QuickServersApiDeleteQsBackupOpts** | optional parameters | nil if no parameters

### Optional Parameters
Optional parameters are passed through a pointer to a QuickServersApiDeleteQsBackupOpts struct
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


 **all** | **optional.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DoQsBlockSmtp**
> QueueResponse DoQsBlockSmtp(ctx, id)
Block QuickServer SMTP

Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DoQsDisableCd**
> QueueResponse DoQsDisableCd(ctx, id)
Disable CD Drive

Disables the virtual CD drive for the QuickServer.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DoQsDisableQuota**
> QueueResponse DoQsDisableQuota(ctx, id)
Disable Quotas

Disables disk quota enforcement for the QuickServer.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DoQsEjectCd**
> QueueResponse DoQsEjectCd(ctx, id)
Eject CD Drive

Ejects the virtual CD from the QuickServer's CD drive.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DoQsEnableQuota**
> QueueResponse DoQsEnableQuota(ctx, id)
Enable Quotas

Enables disk quota enforcement for the QuickServer.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DoQsRestart**
> QueueResponse DoQsRestart(ctx, id)
Restart QuickServer

Restarts the QuickServer. The server will be shut down and started again.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DoQsStart**
> QueueResponse DoQsStart(ctx, id)
Start QuickServer

Powers on the QuickServer.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DoQsStop**
> QueueResponse DoQsStop(ctx, id)
Stop QuickServer

Powers off the QuickServer.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DownloadQsBackup**
> InlineResponse20011 DownloadQsBackup(ctx, body, file, id, optional)
Download QuickServer Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**IdBackupsBody**](IdBackupsBody.md)|  | 
  **file** | **string**|  | 
  **id** | **int32**| QuickServer ID number | 
 **optional** | ***QuickServersApiDownloadQsBackupOpts** | optional parameters | nil if no parameters

### Optional Parameters
Optional parameters are passed through a pointer to a QuickServersApiDownloadQsBackupOpts struct
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **all** | **optional.**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | 

### Return type

[**InlineResponse20011**](inline_response_200_11.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetNewQs**
> QuickserverOrder GetNewQs(ctx, )
Get QuickServer Ordering Information

Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.

### Required Parameters
This endpoint does not need any parameter.

### Return type

[**QuickserverOrder**](QuickserverOrder.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetQsBackups**
> []VpsBackupRow GetQsBackups(ctx, id, optional)
List QuickServer Backups

Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 
 **optional** | ***QuickServersApiGetQsBackupsOpts** | optional parameters | nil if no parameters

### Optional Parameters
Optional parameters are passed through a pointer to a QuickServersApiGetQsBackupsOpts struct
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **all** | **optional.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | 

### Return type

[**[]VpsBackupRow**](array.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetQsChangeHostname**
> GetQsChangeHostname(ctx, id)
Get QuickServer Hostname

Retrieves the current hostname and any validation requirements for changing it.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetQsChangeRootPassword**
> GetQsChangeRootPassword(ctx, id)
Get Change Root Password Info

Retrieves instructions or metadata needed to reset the root password.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetQsChangeTimezone**
> []string GetQsChangeTimezone(ctx, id)
Get Timezone Info

Returns the list of available timezones that can be set on the QuickServer.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

**[]string**

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetQsChangeWebuzoPassword**
> GetQsChangeWebuzoPassword(ctx, id)
Webuzo Change Pass Info

Retrieves instructions or metadata for changing the Webuzo control panel password.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetQsInfo**
> Quickserver GetQsInfo(ctx, id)
Get QuickServer Order

Returns detailed QuickServer information, including credentials, IPs, and available client actions.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number. | 

### Return type

[**Quickserver**](Quickserver.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetQsInsertCd**
> GetQsInsertCd(ctx, id)
Insert CD Information

Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetQsInvoices**
> ChargeInvoiceRows GetQsInvoices(ctx, id)
Get QuickServer Invoices

Returns the billing invoices associated with this QuickServer.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetQsList**
> []QuickserverRow GetQsList(ctx, )
List QuickServers

Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.

### Required Parameters
This endpoint does not need any parameter.

### Return type

[**[]QuickserverRow**](QuickserverRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetQsReinstallOs**
> VpsTemplatesList GetQsReinstallOs(ctx, id)
QuickServer Reinstall OS Options

Returns the list of available operating system templates for reinstalling the QuickServer.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

[**VpsTemplatesList**](VpsTemplatesList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetQsResetPassword**
> GetQsResetPassword(ctx, id)
Reset QuickServer Password Info

Returns information needed before resetting the QuickServer's root password.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetQsReverseDns**
> ReverseDnsEntries GetQsReverseDns(ctx, id)
Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetQsSetupVnc**
> GetQsSetupVnc(ctx, id)
VNC Setup Info

Returns the current VNC connection information for the QuickServer.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetQsTrafficUsage**
> GetQsTrafficUsage(ctx, id)
Get Traffic Usage

Returns bandwidth traffic usage data for the QuickServer.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetQsViewDesktop**
> GetQsViewDesktop(ctx, id)
Get View Desktop Info

Returns remote desktop connection information for the QuickServer.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetQsWelcomeEmail**
> TextResponse GetQsWelcomeEmail(ctx, id)
Resend QuickServer Welcome Email

Resends the welcome email containing connection details and credentials for the QuickServer order.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **string**| Quickserver ID | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostQsBackup**
> QueueResponse PostQsBackup(ctx, id)
Create QuickServer Backup

Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostQsChangeHostname**
> QueueResponse PostQsChangeHostname(ctx, id)
Update QuickServer Hostname

Submits a hostname change request for the QuickServer.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostQsChangeRootPassword**
> QueueResponse PostQsChangeRootPassword(ctx, id)
Change Root Password

Triggers a root password reset for the QuickServer.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostQsChangeTimezone**
> QueueResponse PostQsChangeTimezone(ctx, timezone, body, id)
Change QuickServer Timezone

Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **timezone** | **string**|  | 
  **body** | [**TimezoneUpdate**](TimezoneUpdate.md)|  | 
  **id** | **int32**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostQsChangeWebuzoPassword**
> QueueResponse PostQsChangeWebuzoPassword(ctx, id)
Change Webuzo Password

Resets the Webuzo control panel password for the QuickServer.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostQsInsertCd**
> QueueResponse PostQsInsertCd(ctx, id)
Insert CD in QuickServer

Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostQsReinstallOs**
> QueueResponse PostQsReinstallOs(ctx, id)
Reinstall QuickServer OS

Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostQsResetPassword**
> QueueResponse PostQsResetPassword(ctx, id)
Reset QuickServer Password

Resets the root password on the QuickServer to a new randomly generated password.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostQsReverseDns**
> TextResponse PostQsReverseDns(ctx, body, ips, id)
Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 
  **ips** | [**ModelMap**](interface{}.md)|  | 
  **id** | **int32**| QuickServer ID number | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostQsSetupVnc**
> QueueResponse PostQsSetupVnc(ctx, id)
Setup VNC

Sets up or refreshes the VNC console connection for the QuickServer.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostQsTrafficUsage**
> PostQsTrafficUsage(ctx, id)
Search Traffic Usage

Searches and filters the QuickServer's bandwidth traffic usage data by date range.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostQsViewDesktop**
> PostQsViewDesktop(ctx, id)
Update View Desktop

Updates or refreshes the remote desktop session for the QuickServer.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostQuickServerRestore**
> QueueResponse PostQuickServerRestore(ctx, body, backup, password, id)
Restore QuickServer from Backup

Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**RestoreRequest**](RestoreRequest.md)| QuickServer Restore request | 
  **backup** | **string**|  | 
  **password** | **string**|  | 
  **id** | **int32**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PutQs**
> PutQs(ctx, )
Validate QuickServer Order

Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.

### Required Parameters
This endpoint does not need any parameter.

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickserversCancel**
> InlineResponse20010 QuickserversCancel(ctx, id)
Cancel QuickServer Order

Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| QuickServer ID number | 

### Return type

[**InlineResponse20010**](inline_response_200_10.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UpdateQsInfo**
> UpdateQsInfo(ctx, id)
Update QuickServer Order

Updates QuickServer metadata or stored settings associated with the order.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **string**| QuickServer ID number. | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

