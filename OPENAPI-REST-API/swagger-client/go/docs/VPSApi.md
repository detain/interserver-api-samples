# {{classname}}

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddVps**](VPSApi.md#AddVps) | **Post** /vps/order | Place VPS Order
[**DeleteVpsBackup**](VPSApi.md#DeleteVpsBackup) | **Delete** /vps/{id}/backups | Delete VPS Backup
[**DoVpsBlockSmtp**](VPSApi.md#DoVpsBlockSmtp) | **Get** /vps/{id}/block_smtp | Blocks SMTP
[**DoVpsDisableCd**](VPSApi.md#DoVpsDisableCd) | **Get** /vps/{id}/disable_cd | Disable CD Drive
[**DoVpsDisableQuota**](VPSApi.md#DoVpsDisableQuota) | **Get** /vps/{id}/disable_quota | Disable Quotas
[**DoVpsEjectCd**](VPSApi.md#DoVpsEjectCd) | **Get** /vps/{id}/eject_cd | Eject CD Drive
[**DoVpsEnableQuota**](VPSApi.md#DoVpsEnableQuota) | **Get** /vps/{id}/enable_quota | Enable Quotas
[**DoVpsRestart**](VPSApi.md#DoVpsRestart) | **Get** /vps/{id}/restart | Restart VPS
[**DoVpsStart**](VPSApi.md#DoVpsStart) | **Get** /vps/{id}/start | Start VPS
[**DoVpsStop**](VPSApi.md#DoVpsStop) | **Get** /vps/{id}/stop | Stop VPS
[**DownloadVpsBackup**](VPSApi.md#DownloadVpsBackup) | **Patch** /vps/{id}/backups | Download VPS Backup
[**GetNewVps**](VPSApi.md#GetNewVps) | **Get** /vps/order | VPS Ordering Information
[**GetVpsBackups**](VPSApi.md#GetVpsBackups) | **Get** /vps/{id}/backups | Get VPS Backups List
[**GetVpsBuyHdSpace**](VPSApi.md#GetVpsBuyHdSpace) | **Get** /vps/{id}/buy_hd_space | HD Space Addon Info
[**GetVpsBuyIp**](VPSApi.md#GetVpsBuyIp) | **Get** /vps/{id}/buy_ip | Additional IP Addon Info
[**GetVpsChangeTimezone**](VPSApi.md#GetVpsChangeTimezone) | **Get** /vps/{id}/change_timezone | Get Timezone Info
[**GetVpsInfo**](VPSApi.md#GetVpsInfo) | **Get** /vps/{id} | Get VPS Order
[**GetVpsInvoices**](VPSApi.md#GetVpsInvoices) | **Get** /vps/{id}/invoices | Get VPS Invoices
[**GetVpsList**](VPSApi.md#GetVpsList) | **Get** /vps | List VPS Orders
[**GetVpsReinstallOs**](VPSApi.md#GetVpsReinstallOs) | **Get** /vps/{id}/reinstall_os | VPS Reinstall OS Options
[**GetVpsReverseDns**](VPSApi.md#GetVpsReverseDns) | **Get** /vps/{id}/reverse_dns | Reverse DNS Info
[**GetVpsSetupVnc**](VPSApi.md#GetVpsSetupVnc) | **Get** /vps/{id}/setup_vnc | VNC Setup Info
[**GetVpsSlices**](VPSApi.md#GetVpsSlices) | **Get** /vps/{id}/slices | Slice Upgrade Info
[**GetVpsTrafficUsage**](VPSApi.md#GetVpsTrafficUsage) | **Get** /vps/{id}/traffic_usage | Get Traffic Usage
[**GetVpsViewDesktop**](VPSApi.md#GetVpsViewDesktop) | **Get** /vps/{id}/view_desktop | Get View Desktop Info
[**GetVpsWelcomeEmail**](VPSApi.md#GetVpsWelcomeEmail) | **Get** /vps/{id}/welcome_email | Resend VPS Welcome Email
[**PostVpsBackup**](VPSApi.md#PostVpsBackup) | **Get** /vps/{id}/backup | Start a VPS Backup
[**PostVpsBuyHdSpace**](VPSApi.md#PostVpsBuyHdSpace) | **Post** /vps/{id}/buy_hd_space | Purchase HD Space Addon
[**PostVpsBuyIp**](VPSApi.md#PostVpsBuyIp) | **Post** /vps/{id}/buy_ip | Purchase Additional IP
[**PostVpsChangeHostname**](VPSApi.md#PostVpsChangeHostname) | **Post** /vps/{id}/change_hostname | Update VPS Hostname
[**PostVpsChangeRootPassword**](VPSApi.md#PostVpsChangeRootPassword) | **Post** /vps/{id}/change_root_password | Change VPS Root Password
[**PostVpsChangeTimezone**](VPSApi.md#PostVpsChangeTimezone) | **Post** /vps/{id}/change_timezone | Change VPS Timezone
[**PostVpsChangeWebuzoPassword**](VPSApi.md#PostVpsChangeWebuzoPassword) | **Post** /vps/{id}/change_webuzo_password | Change Webuzo Password
[**PostVpsInsertCd**](VPSApi.md#PostVpsInsertCd) | **Post** /vps/{id}/insert_cd | Insert CD in VPS
[**PostVpsReinstallOs**](VPSApi.md#PostVpsReinstallOs) | **Post** /vps/{id}/reinstall_os | Reinstall VPS OS
[**PostVpsResetPassword**](VPSApi.md#PostVpsResetPassword) | **Post** /vps/{id}/reset_password | Reset VPS Password
[**PostVpsRestore**](VPSApi.md#PostVpsRestore) | **Post** /vps/{id}/restore | Restore VPS from Backup
[**PostVpsReverseDns**](VPSApi.md#PostVpsReverseDns) | **Post** /vps/{id}/reverse_dns | Update Reverse DNS
[**PostVpsSetupVnc**](VPSApi.md#PostVpsSetupVnc) | **Post** /vps/{id}/setup_vnc | Setup VNC
[**PostVpsSlices**](VPSApi.md#PostVpsSlices) | **Post** /vps/{id}/slices | Purchase Slice Upgrade
[**PostVpsViewDesktop**](VPSApi.md#PostVpsViewDesktop) | **Post** /vps/{id}/view_desktop | Update View Desktop
[**PutVps**](VPSApi.md#PutVps) | **Put** /vps/order | Validate VPS Order
[**UpdateVpsInfo**](VPSApi.md#UpdateVpsInfo) | **Post** /vps/{id} | Update VPS Order
[**VPSCancel**](VPSApi.md#VPSCancel) | **Delete** /vps/{id} | Cancel VPS Service

# **AddVps**
> ServiceOrderPostResponse AddVps(ctx, optional)
Place VPS Order

Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***VPSApiAddVpsOpts** | optional parameters | nil if no parameters

### Optional Parameters
Optional parameters are passed through a pointer to a VPSApiAddVpsOpts struct
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**optional.Interface of VpsOrderPostRequest**](VpsOrderPostRequest.md)|  | 
 **osDistro** | **optional.**|  | 
 **slices** | **optional.**|  | 
 **vpsPlatform** | **optional.**|  | 
 **controlpanel** | **optional.**|  | 
 **period** | **optional.**|  | 
 **location** | **optional.**|  | 
 **osVersion** | **optional.**|  | 
 **hostname** | **optional.**|  | 
 **coupon** | **optional.**|  | 
 **rootpass** | **optional.**|  | 
 **comment** | **optional.**|  | 

### Return type

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeleteVpsBackup**
> SuccessTextResponse DeleteVpsBackup(ctx, id, file, optional)
Delete VPS Backup

Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 
  **file** | **string**| The backup filename to delete. | 
 **optional** | ***VPSApiDeleteVpsBackupOpts** | optional parameters | nil if no parameters

### Optional Parameters
Optional parameters are passed through a pointer to a VPSApiDeleteVpsBackupOpts struct
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


 **all** | **optional.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DoVpsBlockSmtp**
> QueueResponse DoVpsBlockSmtp(ctx, id)
Blocks SMTP

Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DoVpsDisableCd**
> QueueResponse DoVpsDisableCd(ctx, id)
Disable CD Drive

Disables the virtual CD drive on the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DoVpsDisableQuota**
> QueueResponse DoVpsDisableQuota(ctx, id)
Disable Quotas

Disables disk quota enforcement on the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DoVpsEjectCd**
> QueueResponse DoVpsEjectCd(ctx, id)
Eject CD Drive

Ejects the virtual CD from the VPS CD drive.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DoVpsEnableQuota**
> QueueResponse DoVpsEnableQuota(ctx, id)
Enable Quotas

Enables disk quota enforcement on the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DoVpsRestart**
> QueueResponse DoVpsRestart(ctx, id)
Restart VPS

Restarts the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DoVpsStart**
> QueueResponse DoVpsStart(ctx, id)
Start VPS

Powers on the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DoVpsStop**
> QueueResponse DoVpsStop(ctx, id)
Stop VPS

Powers off the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DownloadVpsBackup**
> InlineResponse20011 DownloadVpsBackup(ctx, body, file, id, optional)
Download VPS Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**IdBackupsBody2**](IdBackupsBody2.md)|  | 
  **file** | **string**|  | 
  **id** | **int32**| VPS ID number | 
 **optional** | ***VPSApiDownloadVpsBackupOpts** | optional parameters | nil if no parameters

### Optional Parameters
Optional parameters are passed through a pointer to a VPSApiDownloadVpsBackupOpts struct
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



 **all** | **optional.**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | 

### Return type

[**InlineResponse20011**](inline_response_200_11.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetNewVps**
> VpsOrder GetNewVps(ctx, )
VPS Ordering Information

Retrieves available VPS configurations, OS templates, and pricing for ordering.

### Required Parameters
This endpoint does not need any parameter.

### Return type

[**VpsOrder**](VpsOrder.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetVpsBackups**
> []VpsBackupRow GetVpsBackups(ctx, id, optional)
Get VPS Backups List

Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 
 **optional** | ***VPSApiGetVpsBackupsOpts** | optional parameters | nil if no parameters

### Optional Parameters
Optional parameters are passed through a pointer to a VPSApiGetVpsBackupsOpts struct
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **all** | **optional.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | 

### Return type

[**[]VpsBackupRow**](array.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetVpsBuyHdSpace**
> GetVpsBuyHdSpace(ctx, id)
HD Space Addon Info

Returns available hard drive space addon options and pricing for the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetVpsBuyIp**
> GetVpsBuyIp(ctx, id)
Additional IP Addon Info

Returns available additional IP address options and pricing for the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetVpsChangeTimezone**
> []string GetVpsChangeTimezone(ctx, id)
Get Timezone Info

Returns the list of available timezones that can be set on the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

**[]string**

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetVpsInfo**
> Vps GetVpsInfo(ctx, id)
Get VPS Order

Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

[**Vps**](Vps.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetVpsInvoices**
> ChargeInvoiceRows GetVpsInvoices(ctx, id)
Get VPS Invoices

Returns the billing invoices associated with this VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetVpsList**
> []VpsRow GetVpsList(ctx, )
List VPS Orders

Returns all VPS services on the account with their current status and configuration.

### Required Parameters
This endpoint does not need any parameter.

### Return type

[**[]VpsRow**](VpsRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetVpsReinstallOs**
> VpsTemplatesList GetVpsReinstallOs(ctx, id)
VPS Reinstall OS Options

Returns the list of available OS templates for reinstalling the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

[**VpsTemplatesList**](VpsTemplatesList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetVpsReverseDns**
> ReverseDnsEntries GetVpsReverseDns(ctx, id)
Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetVpsSetupVnc**
> GetVpsSetupVnc(ctx, id)
VNC Setup Info

Returns the current VNC connection information for the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetVpsSlices**
> GetVpsSlices(ctx, id)
Slice Upgrade Info

Returns available slice upgrade options and pricing for the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetVpsTrafficUsage**
> VpsTrafficResponse GetVpsTrafficUsage(ctx, id)
Get Traffic Usage

Returns bandwidth traffic usage data for the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

[**VpsTrafficResponse**](VpsTrafficResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetVpsViewDesktop**
> GetVpsViewDesktop(ctx, id)
Get View Desktop Info

Returns remote desktop connection information for the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetVpsWelcomeEmail**
> SuccessTextResponse GetVpsWelcomeEmail(ctx, id)
Resend VPS Welcome Email

Resends the welcome email containing connection details and credentials for the VPS order.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **string**| VPS ID | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostVpsBackup**
> QueueResponse PostVpsBackup(ctx, id)
Start a VPS Backup

Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostVpsBuyHdSpace**
> PostVpsBuyHdSpace(ctx, id)
Purchase HD Space Addon

Purchases additional hard drive space for the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostVpsBuyIp**
> PostVpsBuyIp(ctx, id)
Purchase Additional IP

Purchases an additional IP address for the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostVpsChangeHostname**
> QueueResponse PostVpsChangeHostname(ctx, hostname, body, id)
Update VPS Hostname

Changes the hostname of the VPS. This queues a background task to update the server.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **hostname** | **string**|  | 
  **body** | [**HostnameObject**](HostnameObject.md)|  | 
  **id** | **int32**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostVpsChangeRootPassword**
> QueueResponse PostVpsChangeRootPassword(ctx, password, body, id)
Change VPS Root Password

Changes the root password of the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **password** | **string**|  | 
  **body** | [**PasswordRequest**](PasswordRequest.md)|  | 
  **id** | **int32**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostVpsChangeTimezone**
> QueueResponse PostVpsChangeTimezone(ctx, timezone, body, id)
Change VPS Timezone

Changes the system timezone on the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **timezone** | **string**|  | 
  **body** | [**TimezoneUpdate**](TimezoneUpdate.md)|  | 
  **id** | **int32**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostVpsChangeWebuzoPassword**
> QueueResponse PostVpsChangeWebuzoPassword(ctx, password, body, id)
Change Webuzo Password

Changes the Webuzo control panel password on the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **password** | **string**|  | 
  **body** | [**PasswordRequest**](PasswordRequest.md)|  | 
  **id** | **int32**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostVpsInsertCd**
> QueueResponse PostVpsInsertCd(ctx, url, body, id)
Insert CD in VPS

Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **url** | **string**|  | 
  **body** | [**UrlRequest**](UrlRequest.md)|  | 
  **id** | **int32**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostVpsReinstallOs**
> QueueResponse PostVpsReinstallOs(ctx, template, password, localPassword, body, id)
Reinstall VPS OS

Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **template** | **string**|  | 
  **password** | [**string**](.md)|  | 
  **localPassword** | [**string**](.md)|  | 
  **body** | [**TemplateRequest**](TemplateRequest.md)|  | 
  **id** | **int32**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostVpsResetPassword**
> QueueResponse PostVpsResetPassword(ctx, id)
Reset VPS Password

Resets the root password on the VPS to a new randomly generated password.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostVpsRestore**
> QueueResponse PostVpsRestore(ctx, body, backup, password, id)
Restore VPS from Backup

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**RestoreRequest**](RestoreRequest.md)| VPS Restore request | 
  **backup** | **string**|  | 
  **password** | **string**|  | 
  **id** | **int32**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostVpsReverseDns**
> TextResponse PostVpsReverseDns(ctx, body, ips, id)
Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 
  **ips** | [**ModelMap**](interface{}.md)|  | 
  **id** | **int32**| VPS ID number | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostVpsSetupVnc**
> QueueResponse PostVpsSetupVnc(ctx, id)
Setup VNC

Sets up or refreshes the VNC console connection for the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostVpsSlices**
> PostVpsSlices(ctx, id)
Purchase Slice Upgrade

Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostVpsViewDesktop**
> PostVpsViewDesktop(ctx, id)
Update View Desktop

Updates or refreshes the remote desktop session for the VPS.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PutVps**
> VpsOrderPutResponse PutVps(ctx, optional)
Validate VPS Order

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***VPSApiPutVpsOpts** | optional parameters | nil if no parameters

### Optional Parameters
Optional parameters are passed through a pointer to a VPSApiPutVpsOpts struct
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**optional.Interface of VpsOrderPutRequest**](VpsOrderPutRequest.md)|  | 
 **osDistro** | **optional.**|  | 
 **slices** | **optional.**|  | 
 **vpsPlatform** | **optional.**|  | 
 **controlpanel** | **optional.**|  | 
 **period** | **optional.**|  | 
 **location** | **optional.**|  | 
 **osVersion** | **optional.**|  | 
 **hostname** | **optional.**|  | 
 **coupon** | **optional.**|  | 
 **rootpass** | **optional.**|  | 
 **comment** | **optional.**|  | 

### Return type

[**VpsOrderPutResponse**](VpsOrderPutResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UpdateVpsInfo**
> SuccessTextResponse UpdateVpsInfo(ctx, id)
Update VPS Order

Updates settings on a VPS order.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **string**| VPS ID number. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSCancel**
> InlineResponse20022 VPSCancel(ctx, id)
Cancel VPS Service

Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| VPS ID number | 

### Return type

[**InlineResponse20022**](inline_response_200_22.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

