# .BackupsApi

All URIs are relative to *https://my.interserver.net/apiv2*

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


# **addBackup**
> BackupOrderPostResponse addBackup()

Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.

### Example


```typescript
import { createConfiguration, BackupsApi } from '';
import type { BackupsApiAddBackupRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BackupsApi(configuration);

const request: BackupsApiAddBackupRequest = {
  
  validateOnly: true,
  
  serviceType: 1,
  
  coupon: "coupon_example",
};

const data = await apiInstance.addBackup(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **validateOnly** | [**boolean**] |  | (optional) defaults to undefined
 **serviceType** | [**number**] |  | (optional) defaults to undefined
 **coupon** | [**string**] |  | (optional) defaults to undefined


### Return type

**BackupOrderPostResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response from the backup order call including invoice IDs for payment. |  -  |
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **cancelBackup**
> CancelBackup200Response cancelBackup()

Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.

### Example


```typescript
import { createConfiguration, BackupsApi } from '';
import type { BackupsApiCancelBackupRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BackupsApi(configuration);

const request: BackupsApiCancelBackupRequest = {
    // The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  id: 1,
};

const data = await apiInstance.cancelBackup(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | defaults to undefined


### Return type

**CancelBackup200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Backups Cancel |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getBackupInfo**
> Backup getBackupInfo()

Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.

### Example


```typescript
import { createConfiguration, BackupsApi } from '';
import type { BackupsApiGetBackupInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BackupsApi(configuration);

const request: BackupsApiGetBackupInfoRequest = {
    // The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  id: 1,
};

const data = await apiInstance.getBackupInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | defaults to undefined


### Return type

**Backup**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Full backup service details including serviceInfo, billingDetails, and client_links. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getBackupInvoices**
> ChargeInvoiceRows getBackupInvoices()

Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.

### Example


```typescript
import { createConfiguration, BackupsApi } from '';
import type { BackupsApiGetBackupInvoicesRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BackupsApi(configuration);

const request: BackupsApiGetBackupInvoicesRequest = {
    // The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  id: 1,
};

const data = await apiInstance.getBackupInvoices(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | defaults to undefined


### Return type

**ChargeInvoiceRows**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Get Invoices response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getBackupLogin**
> BackupLoginResponse getBackupLogin()

Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.

### Example


```typescript
import { createConfiguration, BackupsApi } from '';
import type { BackupsApiGetBackupLoginRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BackupsApi(configuration);

const request: BackupsApiGetBackupLoginRequest = {
    // The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  id: 1,
};

const data = await apiInstance.getBackupLogin(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | defaults to undefined


### Return type

**BackupLoginResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Login session details for the backup storage service. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getBackupsList**
> Array<BackupRow> getBackupsList()

Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.

### Example


```typescript
import { createConfiguration, BackupsApi } from '';

const configuration = createConfiguration();
const apiInstance = new BackupsApi(configuration);

const request = {};

const data = await apiInstance.getBackupsList(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**Array<BackupRow>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The listing of backup storage services on your account. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getBackupsWelcomeEmail**
> SuccessTextResponse getBackupsWelcomeEmail()

Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.

### Example


```typescript
import { createConfiguration, BackupsApi } from '';
import type { BackupsApiGetBackupsWelcomeEmailRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BackupsApi(configuration);

const request: BackupsApiGetBackupsWelcomeEmailRequest = {
    // The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  id: 1,
};

const data = await apiInstance.getBackupsWelcomeEmail(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getNewBackup**
> BackupsOrder getNewBackup()

Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.

### Example


```typescript
import { createConfiguration, BackupsApi } from '';

const configuration = createConfiguration();
const apiInstance = new BackupsApi(configuration);

const request = {};

const data = await apiInstance.getNewBackup(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**BackupsOrder**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Information needed to generate an order form. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateBackupInfo**
> updateBackupInfo()

Updates backup storage service metadata, such as stored credentials or settings for the order.

### Example


```typescript
import { createConfiguration, BackupsApi } from '';
import type { BackupsApiUpdateBackupInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BackupsApi(configuration);

const request: BackupsApiUpdateBackupInfoRequest = {
    // The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  id: 1,
};

const data = await apiInstance.updateBackupInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | defaults to undefined


### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **validateBackupOrder**
> BackupOrderPutResponse validateBackupOrder()

Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.

### Example


```typescript
import { createConfiguration, BackupsApi } from '';
import type { BackupsApiValidateBackupOrderRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BackupsApi(configuration);

const request: BackupsApiValidateBackupOrderRequest = {
  
  validateOnly: true,
  
  serviceType: 1,
  
  coupon: "coupon_example",
};

const data = await apiInstance.validateBackupOrder(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **validateOnly** | [**boolean**] |  | (optional) defaults to undefined
 **serviceType** | [**number**] |  | (optional) defaults to undefined
 **coupon** | [**string**] |  | (optional) defaults to undefined


### Return type

**BackupOrderPutResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Validate Backup Order Response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)


