# BackupsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddBackup**](BackupsApi.md#AddBackup) | **POST** /backups/order | Place Backup Order
[**CancelBackup**](BackupsApi.md#CancelBackup) | **DELETE** /backups/{id} | Cancel Backup Service
[**GetBackupInfo**](BackupsApi.md#GetBackupInfo) | **GET** /backups/{id} | Get Backup Service Details
[**GetBackupInvoices**](BackupsApi.md#GetBackupInvoices) | **GET** /backups/{id}/invoices | Get Backup Order Invoices
[**GetBackupLogin**](BackupsApi.md#GetBackupLogin) | **GET** /backups/{id}/login | Get Backup Storage Panel Login
[**GetBackupsList**](BackupsApi.md#GetBackupsList) | **GET** /backups | List Backup Services
[**GetBackupsWelcomeEmail**](BackupsApi.md#GetBackupsWelcomeEmail) | **GET** /backups/{id}/welcome_email | Resend Backup Welcome Email
[**GetNewBackup**](BackupsApi.md#GetNewBackup) | **GET** /backups/order | Get Backup Order Form Data
[**UpdateBackupInfo**](BackupsApi.md#UpdateBackupInfo) | **POST** /backups/{id} | Update Backup Information
[**ValidateBackupOrder**](BackupsApi.md#ValidateBackupOrder) | **PUT** /backups/order | Validate Backup Order


# **AddBackup**
> BackupOrderPostResponse AddBackup(validate_only = var.validate_only, service_type = var.service_type, coupon = var.coupon)

Place Backup Order

Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.

### Example
```R
library(openapi)

# Place Backup Order
#
# prepare function argument(s)
var_validate_only <- "validate_only_example" # character |  (Optional)
var_service_type <- 56 # integer |  (Optional)
var_coupon <- "coupon_example" # character |  (Optional)

api_instance <- BackupsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$AddBackup(validate_only = var_validate_only, service_type = var_service_type, coupon = var_coupondata_file = "result.txt")
result <- api_instance$AddBackup(validate_only = var_validate_only, service_type = var_service_type, coupon = var_coupon)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **validate_only** | **character**|  | [optional] 
 **service_type** | **integer**|  | [optional] 
 **coupon** | **character**|  | [optional] 

### Return type

[**BackupOrderPostResponse**](BackupOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response from the backup order call including invoice IDs for payment. |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **CancelBackup**
> CancelBackup200Response CancelBackup(id)

Cancel Backup Service

Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.

### Example
```R
library(openapi)

# Cancel Backup Service
#
# prepare function argument(s)
var_id <- 56 # integer | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

api_instance <- BackupsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$CancelBackup(var_iddata_file = "result.txt")
result <- api_instance$CancelBackup(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Return type

[**CancelBackup200Response**](cancelBackup_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Backups Cancel |  -  |
| **401** | Unauthorized |  -  |

# **GetBackupInfo**
> Backup GetBackupInfo(id)

Get Backup Service Details

Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.

### Example
```R
library(openapi)

# Get Backup Service Details
#
# prepare function argument(s)
var_id <- 56 # integer | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

api_instance <- BackupsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetBackupInfo(var_iddata_file = "result.txt")
result <- api_instance$GetBackupInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Return type

[**Backup**](Backup.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Full backup service details including serviceInfo, billingDetails, and client_links. |  -  |
| **401** | Unauthorized |  -  |

# **GetBackupInvoices**
> ChargeInvoiceRows GetBackupInvoices(id)

Get Backup Order Invoices

Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.

### Example
```R
library(openapi)

# Get Backup Order Invoices
#
# prepare function argument(s)
var_id <- 56 # integer | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

api_instance <- BackupsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetBackupInvoices(var_iddata_file = "result.txt")
result <- api_instance$GetBackupInvoices(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get Invoices response |  -  |
| **401** | Unauthorized |  -  |

# **GetBackupLogin**
> BackupLoginResponse GetBackupLogin(id)

Get Backup Storage Panel Login

Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.

### Example
```R
library(openapi)

# Get Backup Storage Panel Login
#
# prepare function argument(s)
var_id <- 56 # integer | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

api_instance <- BackupsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetBackupLogin(var_iddata_file = "result.txt")
result <- api_instance$GetBackupLogin(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Return type

[**BackupLoginResponse**](BackupLoginResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Login session details for the backup storage service. |  -  |
| **401** | Unauthorized |  -  |

# **GetBackupsList**
> array[BackupRow] GetBackupsList()

List Backup Services

Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.

### Example
```R
library(openapi)

# List Backup Services
#

api_instance <- BackupsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetBackupsList(data_file = "result.txt")
result <- api_instance$GetBackupsList()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**array[BackupRow]**](BackupRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of backup storage services on your account. |  -  |
| **401** | Unauthorized |  -  |

# **GetBackupsWelcomeEmail**
> SuccessTextResponse GetBackupsWelcomeEmail(id)

Resend Backup Welcome Email

Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.

### Example
```R
library(openapi)

# Resend Backup Welcome Email
#
# prepare function argument(s)
var_id <- 56 # integer | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

api_instance <- BackupsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetBackupsWelcomeEmail(var_iddata_file = "result.txt")
result <- api_instance$GetBackupsWelcomeEmail(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **GetNewBackup**
> BackupsOrder GetNewBackup()

Get Backup Order Form Data

Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.

### Example
```R
library(openapi)

# Get Backup Order Form Data
#

api_instance <- BackupsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetNewBackup(data_file = "result.txt")
result <- api_instance$GetNewBackup()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BackupsOrder**](BackupsOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Information needed to generate an order form. |  -  |
| **401** | Unauthorized |  -  |

# **UpdateBackupInfo**
> UpdateBackupInfo(id)

Update Backup Information

Updates backup storage service metadata, such as stored credentials or settings for the order.

### Example
```R
library(openapi)

# Update Backup Information
#
# prepare function argument(s)
var_id <- 56 # integer | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

api_instance <- BackupsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$UpdateBackupInfo(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **ValidateBackupOrder**
> BackupOrderPutResponse ValidateBackupOrder(validate_only = var.validate_only, service_type = var.service_type, coupon = var.coupon)

Validate Backup Order

Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.

### Example
```R
library(openapi)

# Validate Backup Order
#
# prepare function argument(s)
var_validate_only <- "validate_only_example" # character |  (Optional)
var_service_type <- 56 # integer |  (Optional)
var_coupon <- "coupon_example" # character |  (Optional)

api_instance <- BackupsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$ValidateBackupOrder(validate_only = var_validate_only, service_type = var_service_type, coupon = var_coupondata_file = "result.txt")
result <- api_instance$ValidateBackupOrder(validate_only = var_validate_only, service_type = var_service_type, coupon = var_coupon)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **validate_only** | **character**|  | [optional] 
 **service_type** | **integer**|  | [optional] 
 **coupon** | **character**|  | [optional] 

### Return type

[**BackupOrderPutResponse**](BackupOrderPutResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Validate Backup Order Response |  -  |
| **401** | Unauthorized |  -  |

