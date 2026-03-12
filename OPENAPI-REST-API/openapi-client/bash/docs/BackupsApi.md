# BackupsApi

All URIs are relative to */apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addBackup**](BackupsApi.md#addBackup) | **POST** /backups/order | Place Backup Order
[**cancelBackup**](BackupsApi.md#cancelBackup) | **DELETE** /backups/{id} | Cancel Backup Service
[**getBackupInfo**](BackupsApi.md#getBackupInfo) | **GET** /backups/{id} | Get Backup Service Details
[**getBackupInvoices**](BackupsApi.md#getBackupInvoices) | **GET** /backups/{id}/invoices | Get Backup Order Invoices
[**getBackupLogin**](BackupsApi.md#getBackupLogin) | **GET** /backups/{id}/login | Get Backup Storage Panel Login
[**getBackupsList**](BackupsApi.md#getBackupsList) | **GET** /backups | List Backup Services
[**getBackupsWelcomeEmail**](BackupsApi.md#getBackupsWelcomeEmail) | **GET** /backups/{id}/welcome_email | Resend Backup Welcome Email
[**getNewBackup**](BackupsApi.md#getNewBackup) | **GET** /backups/order | Get Backup Order Form Data
[**updateBackupInfo**](BackupsApi.md#updateBackupInfo) | **POST** /backups/{id} | Update Backup Information
[**validateBackupOrder**](BackupsApi.md#validateBackupOrder) | **PUT** /backups/order | Validate Backup Order



## addBackup

Place Backup Order

Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with '/billing/invoices/{id}' to view the invoice or '/pay/{method}/{invoices}' to complete payment. The service is provisioned after payment is confirmed.

### Example

```bash
 addBackup
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **validateOnly** | **boolean** |  | [optional] [default to null]
 **serviceType** | **integer** |  | [optional] [default to null]
 **coupon** | **string** |  | [optional] [default to null]

### Return type

[**BackupOrderPostResponse**](BackupOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## cancelBackup

Cancel Backup Service

Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.

### Example

```bash
 cancelBackup id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The backup service ID. Use the 'backup_id' from 'GET /backups' to identify the service. | [default to null]

### Return type

[**CancelBackup200Response**](CancelBackup200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getBackupInfo

Get Backup Service Details

Returns detailed service information for the specified backup storage order, including 'backup_username', 'backup_ip', 'backup_status', and 'backup_quota' in 'serviceInfo'. Also returns 'client_links', 'billingDetails', 'extraInfoTables', 'package', and 'custCurrency'.

### Example

```bash
 getBackupInfo id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The backup service ID. Use the 'backup_id' from 'GET /backups' to identify the service. | [default to null]

### Return type

[**Backup**](Backup.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getBackupInvoices

Get Backup Order Invoices

Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.

### Example

```bash
 getBackupInvoices id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The backup service ID. Use the 'backup_id' from 'GET /backups' to identify the service. | [default to null]

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getBackupLogin

Get Backup Storage Panel Login

Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.

### Example

```bash
 getBackupLogin id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The backup service ID. Use the 'backup_id' from 'GET /backups' to identify the service. | [default to null]

### Return type

[**BackupLoginResponse**](BackupLoginResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getBackupsList

List Backup Services

Returns all backup storage services on your account. Each entry includes the 'backup_id', 'backup_username', 'backup_ip', 'backup_status', and 'backup_quota'. Use the 'backup_id' with '/backups/{id}' to retrieve full service details or '/backups/{id}/login' to obtain a storage panel session.

### Example

```bash
 getBackupsList
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**array[BackupRow]**](BackupRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getBackupsWelcomeEmail

Resend Backup Welcome Email

Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.

### Example

```bash
 getBackupsWelcomeEmail id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The backup service ID. Use the 'backup_id' from 'GET /backups' to identify the service. | [default to null]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getNewBackup

Get Backup Order Form Data

Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via 'PUT /backups/order' or placing an order via 'POST /backups/order'.

### Example

```bash
 getNewBackup
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**BackupsOrder**](BackupsOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## updateBackupInfo

Update Backup Information

Updates backup storage service metadata, such as stored credentials or settings for the order.

### Example

```bash
 updateBackupInfo id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The backup service ID. Use the 'backup_id' from 'GET /backups' to identify the service. | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## validateBackupOrder

Validate Backup Order

Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via 'POST /backups/order'.

### Example

```bash
 validateBackupOrder
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **validateOnly** | **boolean** |  | [optional] [default to null]
 **serviceType** | **integer** |  | [optional] [default to null]
 **coupon** | **string** |  | [optional] [default to null]

### Return type

[**BackupOrderPutResponse**](BackupOrderPutResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

