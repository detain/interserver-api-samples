# BackupsAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BackupsAPI_addBackup**](BackupsAPI.md#BackupsAPI_addBackup) | **POST** /backups/order | Place Backup Order
[**BackupsAPI_cancelBackup**](BackupsAPI.md#BackupsAPI_cancelBackup) | **DELETE** /backups/{id} | Cancel Backup Service
[**BackupsAPI_getBackupInfo**](BackupsAPI.md#BackupsAPI_getBackupInfo) | **GET** /backups/{id} | Get Backup Service Details
[**BackupsAPI_getBackupInvoices**](BackupsAPI.md#BackupsAPI_getBackupInvoices) | **GET** /backups/{id}/invoices | Get Backup Order Invoices
[**BackupsAPI_getBackupLogin**](BackupsAPI.md#BackupsAPI_getBackupLogin) | **GET** /backups/{id}/login | Get Backup Storage Panel Login
[**BackupsAPI_getBackupsList**](BackupsAPI.md#BackupsAPI_getBackupsList) | **GET** /backups | List Backup Services
[**BackupsAPI_getBackupsWelcomeEmail**](BackupsAPI.md#BackupsAPI_getBackupsWelcomeEmail) | **GET** /backups/{id}/welcome_email | Resend Backup Welcome Email
[**BackupsAPI_getNewBackup**](BackupsAPI.md#BackupsAPI_getNewBackup) | **GET** /backups/order | Get Backup Order Form Data
[**BackupsAPI_updateBackupInfo**](BackupsAPI.md#BackupsAPI_updateBackupInfo) | **POST** /backups/{id} | Update Backup Information
[**BackupsAPI_validateBackupOrder**](BackupsAPI.md#BackupsAPI_validateBackupOrder) | **PUT** /backups/order | Validate Backup Order


# **BackupsAPI_addBackup**
```c
// Place Backup Order
//
// Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.
//
backup_order_post_response_t* BackupsAPI_addBackup(apiClient_t *apiClient, int *validateOnly, int *serviceType, char *coupon);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**validateOnly** | **int \*** |  | [optional] 
**serviceType** | **int \*** |  | [optional] 
**coupon** | **char \*** |  | [optional] 

### Return type

[backup_order_post_response_t](backup_order_post_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BackupsAPI_cancelBackup**
```c
// Cancel Backup Service
//
// Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
//
cancel_backup_200_response_t* BackupsAPI_cancelBackup(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Return type

[cancel_backup_200_response_t](cancel_backup_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BackupsAPI_getBackupInfo**
```c
// Get Backup Service Details
//
// Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.
//
backup_t* BackupsAPI_getBackupInfo(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Return type

[backup_t](backup.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BackupsAPI_getBackupInvoices**
```c
// Get Backup Order Invoices
//
// Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
//
charge_invoice_rows_t* BackupsAPI_getBackupInvoices(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Return type

[charge_invoice_rows_t](charge_invoice_rows.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BackupsAPI_getBackupLogin**
```c
// Get Backup Storage Panel Login
//
// Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
//
backup_login_response_t* BackupsAPI_getBackupLogin(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Return type

[backup_login_response_t](backup_login_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BackupsAPI_getBackupsList**
```c
// List Backup Services
//
// Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.
//
list_t* BackupsAPI_getBackupsList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](backup_row.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BackupsAPI_getBackupsWelcomeEmail**
```c
// Resend Backup Welcome Email
//
// Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
//
success_text_response_t* BackupsAPI_getBackupsWelcomeEmail(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BackupsAPI_getNewBackup**
```c
// Get Backup Order Form Data
//
// Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.
//
backups_order_t* BackupsAPI_getNewBackup(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[backups_order_t](backups_order.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BackupsAPI_updateBackupInfo**
```c
// Update Backup Information
//
// Updates backup storage service metadata, such as stored credentials or settings for the order.
//
void BackupsAPI_updateBackupInfo(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BackupsAPI_validateBackupOrder**
```c
// Validate Backup Order
//
// Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.
//
backup_order_put_response_t* BackupsAPI_validateBackupOrder(apiClient_t *apiClient, int *validateOnly, int *serviceType, char *coupon);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**validateOnly** | **int \*** |  | [optional] 
**serviceType** | **int \*** |  | [optional] 
**coupon** | **char \*** |  | [optional] 

### Return type

[backup_order_put_response_t](backup_order_put_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

