# VPSApi

All URIs are relative to */apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addVps**](VPSApi.md#addVps) | **POST** /vps/order | Place VPS Order
[**deleteVpsBackup**](VPSApi.md#deleteVpsBackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup
[**doVpsBlockSmtp**](VPSApi.md#doVpsBlockSmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP
[**doVpsDisableCd**](VPSApi.md#doVpsDisableCd) | **GET** /vps/{id}/disable_cd | Disable CD Drive
[**doVpsDisableQuota**](VPSApi.md#doVpsDisableQuota) | **GET** /vps/{id}/disable_quota | Disable Quotas
[**doVpsEjectCd**](VPSApi.md#doVpsEjectCd) | **GET** /vps/{id}/eject_cd | Eject CD Drive
[**doVpsEnableQuota**](VPSApi.md#doVpsEnableQuota) | **GET** /vps/{id}/enable_quota | Enable Quotas
[**doVpsRestart**](VPSApi.md#doVpsRestart) | **GET** /vps/{id}/restart | Restart VPS
[**doVpsStart**](VPSApi.md#doVpsStart) | **GET** /vps/{id}/start | Start VPS
[**doVpsStop**](VPSApi.md#doVpsStop) | **GET** /vps/{id}/stop | Stop VPS
[**downloadVpsBackup**](VPSApi.md#downloadVpsBackup) | **PATCH** /vps/{id}/backups | Download VPS Backup
[**getNewVps**](VPSApi.md#getNewVps) | **GET** /vps/order | VPS Ordering Information
[**getVpsBackups**](VPSApi.md#getVpsBackups) | **GET** /vps/{id}/backups | Get VPS Backups List
[**getVpsBuyHdSpace**](VPSApi.md#getVpsBuyHdSpace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info
[**getVpsBuyIp**](VPSApi.md#getVpsBuyIp) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info
[**getVpsChangeTimezone**](VPSApi.md#getVpsChangeTimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info
[**getVpsInfo**](VPSApi.md#getVpsInfo) | **GET** /vps/{id} | Get VPS Order
[**getVpsInvoices**](VPSApi.md#getVpsInvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices
[**getVpsList**](VPSApi.md#getVpsList) | **GET** /vps | List VPS Orders
[**getVpsReinstallOs**](VPSApi.md#getVpsReinstallOs) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options
[**getVpsReverseDns**](VPSApi.md#getVpsReverseDns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info
[**getVpsSetupVnc**](VPSApi.md#getVpsSetupVnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info
[**getVpsSlices**](VPSApi.md#getVpsSlices) | **GET** /vps/{id}/slices | Slice Upgrade Info
[**getVpsTrafficUsage**](VPSApi.md#getVpsTrafficUsage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage
[**getVpsViewDesktop**](VPSApi.md#getVpsViewDesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info
[**getVpsWelcomeEmail**](VPSApi.md#getVpsWelcomeEmail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email
[**postVpsBackup**](VPSApi.md#postVpsBackup) | **GET** /vps/{id}/backup | Start a VPS Backup
[**postVpsBuyHdSpace**](VPSApi.md#postVpsBuyHdSpace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon
[**postVpsBuyIp**](VPSApi.md#postVpsBuyIp) | **POST** /vps/{id}/buy_ip | Purchase Additional IP
[**postVpsChangeHostname**](VPSApi.md#postVpsChangeHostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname
[**postVpsChangeRootPassword**](VPSApi.md#postVpsChangeRootPassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password
[**postVpsChangeTimezone**](VPSApi.md#postVpsChangeTimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone
[**postVpsChangeWebuzoPassword**](VPSApi.md#postVpsChangeWebuzoPassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password
[**postVpsInsertCd**](VPSApi.md#postVpsInsertCd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS
[**postVpsReinstallOs**](VPSApi.md#postVpsReinstallOs) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS
[**postVpsResetPassword**](VPSApi.md#postVpsResetPassword) | **POST** /vps/{id}/reset_password | Reset VPS Password
[**postVpsRestore**](VPSApi.md#postVpsRestore) | **POST** /vps/{id}/restore | Restore VPS from Backup
[**postVpsReverseDns**](VPSApi.md#postVpsReverseDns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS
[**postVpsSetupVnc**](VPSApi.md#postVpsSetupVnc) | **POST** /vps/{id}/setup_vnc | Setup VNC
[**postVpsSlices**](VPSApi.md#postVpsSlices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade
[**postVpsViewDesktop**](VPSApi.md#postVpsViewDesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop
[**putVps**](VPSApi.md#putVps) | **PUT** /vps/order | Validate VPS Order
[**updateVpsInfo**](VPSApi.md#updateVpsInfo) | **POST** /vps/{id} | Update VPS Order
[**vPSCancel**](VPSApi.md#vPSCancel) | **DELETE** /vps/{id} | Cancel VPS Service



## addVps

Place VPS Order

Places an order for a new VPS. Use 'PUT /vps/order' to validate the order first.

### Example

```bash
 addVps
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vpsOrderPostRequest** | [**VpsOrderPostRequest**](VpsOrderPostRequest.md) |  | [optional]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## deleteVpsBackup

Delete VPS Backup

Permanently removes the specified backup file from storage. Use 'GET /vps/{id}/backups' to list available backup filenames before deleting.

### Example

```bash
 deleteVpsBackup id=value  file=value  all=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]
 **file** | **string** | The backup filename to delete. | [default to null]
 **all** | **string** | Set to '1' to list all backups across all services, not just the ones for the given VPS. | [optional] [default to null]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## doVpsBlockSmtp

Blocks SMTP

Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.

### Example

```bash
 doVpsBlockSmtp id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number. | [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## doVpsDisableCd

Disable CD Drive

Disables the virtual CD drive on the VPS.

### Example

```bash
 doVpsDisableCd id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number. | [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## doVpsDisableQuota

Disable Quotas

Disables disk quota enforcement on the VPS.

### Example

```bash
 doVpsDisableQuota id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number. | [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## doVpsEjectCd

Eject CD Drive

Ejects the virtual CD from the VPS CD drive.

### Example

```bash
 doVpsEjectCd id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number. | [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## doVpsEnableQuota

Enable Quotas

Enables disk quota enforcement on the VPS.

### Example

```bash
 doVpsEnableQuota id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number. | [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## doVpsRestart

Restart VPS

Restarts the VPS.

### Example

```bash
 doVpsRestart id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number. | [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## doVpsStart

Start VPS

Powers on the VPS.

### Example

```bash
 doVpsStart id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number. | [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## doVpsStop

Stop VPS

Powers off the VPS.

### Example

```bash
 doVpsStop id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number. | [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## downloadVpsBackup

Download VPS Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use 'GET /vps/{id}/backups' to list available backup filenames.

### Example

```bash
 downloadVpsBackup id=value  all=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]
 **downloadQsBackupRequest** | [**DownloadQsBackupRequest**](DownloadQsBackupRequest.md) |  |
 **all** | **string** | Set to '1' to list all backups across all services, not just the ones for the given VPS. | [optional] [default to null]

### Return type

[**DownloadQsBackup200Response**](DownloadQsBackup200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getNewVps

VPS Ordering Information

Retrieves available VPS configurations, OS templates, and pricing for ordering.

### Example

```bash
 getNewVps
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**VpsOrder**](VpsOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getVpsBackups

Get VPS Backups List

Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup 'name' value with 'PATCH /vps/{id}/backups' to download or 'DELETE /vps/{id}/backups' to remove a backup. Use 'POST /vps/{id}/restore' to restore from a backup.

### Example

```bash
 getVpsBackups id=value  all=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]
 **all** | **string** | Set to '1' to list all backups across all services, not just the ones for the given VPS. | [optional] [default to null]

### Return type

[**VpsBackupRows**](VpsBackupRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getVpsBuyHdSpace

HD Space Addon Info

Returns available hard drive space addon options and pricing for the VPS.

### Example

```bash
 getVpsBuyHdSpace id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getVpsBuyIp

Additional IP Addon Info

Returns available additional IP address options and pricing for the VPS.

### Example

```bash
 getVpsBuyIp id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getVpsChangeTimezone

Get Timezone Info

Returns the list of available timezones that can be set on the VPS.

### Example

```bash
 getVpsChangeTimezone id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

**array[string]**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getVpsInfo

Get VPS Order

Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.

### Example

```bash
 getVpsInfo id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

[**Vps**](Vps.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getVpsInvoices

Get VPS Invoices

Returns the billing invoices associated with this VPS.

### Example

```bash
 getVpsInvoices id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getVpsList

List VPS Orders

Returns all VPS services on the account with their current status and configuration.

### Example

```bash
 getVpsList
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**array[VpsRow]**](VpsRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getVpsReinstallOs

VPS Reinstall OS Options

Returns the list of available OS templates for reinstalling the VPS.

### Example

```bash
 getVpsReinstallOs id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

[**VpsTemplatesList**](VpsTemplatesList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getVpsReverseDns

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.

### Example

```bash
 getVpsReverseDns id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getVpsSetupVnc

VNC Setup Info

Returns the current VNC connection information for the VPS.

### Example

```bash
 getVpsSetupVnc id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getVpsSlices

Slice Upgrade Info

Returns available slice upgrade options and pricing for the VPS.

### Example

```bash
 getVpsSlices id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getVpsTrafficUsage

Get Traffic Usage

Returns bandwidth traffic usage data for the VPS.

### Example

```bash
 getVpsTrafficUsage id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

[**VpsTrafficResponse**](VpsTrafficResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getVpsViewDesktop

Get View Desktop Info

Returns remote desktop connection information for the VPS.

### Example

```bash
 getVpsViewDesktop id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getVpsWelcomeEmail

Resend VPS Welcome Email

Resends the welcome email containing connection details and credentials for the VPS order.

### Example

```bash
 getVpsWelcomeEmail id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string** | VPS ID | [default to null]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postVpsBackup

Start a VPS Backup

Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.

### Example

```bash
 postVpsBackup id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postVpsBuyHdSpace

Purchase HD Space Addon

Purchases additional hard drive space for the VPS.

### Example

```bash
 postVpsBuyHdSpace id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postVpsBuyIp

Purchase Additional IP

Purchases an additional IP address for the VPS.

### Example

```bash
 postVpsBuyIp id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postVpsChangeHostname

Update VPS Hostname

Changes the hostname of the VPS. This queues a background task to update the server.

### Example

```bash
 postVpsChangeHostname id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]
 **hostname** | **string** |  | [optional] [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postVpsChangeRootPassword

Change VPS Root Password

Changes the root password of the VPS.

### Example

```bash
 postVpsChangeRootPassword id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]
 **password** | **string** |  | [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postVpsChangeTimezone

Change VPS Timezone

Changes the system timezone on the VPS.

### Example

```bash
 postVpsChangeTimezone id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]
 **timezone** | **string** | The time zone | [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postVpsChangeWebuzoPassword

Change Webuzo Password

Changes the Webuzo control panel password on the VPS.

### Example

```bash
 postVpsChangeWebuzoPassword id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]
 **password** | **string** |  | [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postVpsInsertCd

Insert CD in VPS

Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Example

```bash
 postVpsInsertCd id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]
 **url** | **string** |  | [optional] [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postVpsReinstallOs

Reinstall VPS OS

Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Example

```bash
 postVpsReinstallOs id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]
 **template** | **string** | OS Template Filename | [default to null]
 **localPassword** | **string** | Password for this account. | [default to null]
 **password** | **string** | Password for Root / Administrator Account. | [optional] [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postVpsResetPassword

Reset VPS Password

Resets the root password on the VPS to a new randomly generated password.

### Example

```bash
 postVpsResetPassword id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postVpsRestore

Restore VPS from Backup

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use 'GET /vps/{id}/backups' to retrieve available backup names.

### Example

```bash
 postVpsRestore id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]
 **restoreRequest** | [**RestoreRequest**](RestoreRequest.md) | VPS Restore request |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postVpsReverseDns

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Example

```bash
 postVpsReverseDns id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]
 **reverseDnsEntries** | [**ReverseDnsEntries**](ReverseDnsEntries.md) |  |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postVpsSetupVnc

Setup VNC

Sets up or refreshes the VNC console connection for the VPS.

### Example

```bash
 postVpsSetupVnc id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postVpsSlices

Purchase Slice Upgrade

Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.

### Example

```bash
 postVpsSlices id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postVpsViewDesktop

Update View Desktop

Updates or refreshes the remote desktop session for the VPS.

### Example

```bash
 postVpsViewDesktop id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## putVps

Validate VPS Order

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Example

```bash
 putVps
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vpsOrderPutRequest** | [**VpsOrderPutRequest**](VpsOrderPutRequest.md) |  | [optional]

### Return type

[**VpsOrderPutResponse**](VpsOrderPutResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## updateVpsInfo

Update VPS Order

Updates settings on a VPS order.

### Example

```bash
 updateVpsInfo id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string** | VPS ID number. | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## vPSCancel

Cancel VPS Service

Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example

```bash
 vPSCancel id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | VPS ID number | [default to null]

### Return type

[**VPSCancel200Response**](VPSCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

