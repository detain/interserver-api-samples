# QuickServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddQs**](QuickServersApi.md#AddQs) | **POST** /qs/order | Place QuickServer Order
[**DeleteQsBackup**](QuickServersApi.md#DeleteQsBackup) | **DELETE** /qs/{id}/backups | Delete QuickServer Backup
[**DoQsBlockSmtp**](QuickServersApi.md#DoQsBlockSmtp) | **GET** /qs/{id}/block_smtp | Block QuickServer SMTP
[**DoQsDisableCd**](QuickServersApi.md#DoQsDisableCd) | **GET** /qs/{id}/disable_cd | Disable CD Drive
[**DoQsDisableQuota**](QuickServersApi.md#DoQsDisableQuota) | **GET** /qs/{id}/disable_quota | Disable Quotas
[**DoQsEjectCd**](QuickServersApi.md#DoQsEjectCd) | **GET** /qs/{id}/eject_cd | Eject CD Drive
[**DoQsEnableQuota**](QuickServersApi.md#DoQsEnableQuota) | **GET** /qs/{id}/enable_quota | Enable Quotas
[**DoQsRestart**](QuickServersApi.md#DoQsRestart) | **GET** /qs/{id}/restart | Restart QuickServer
[**DoQsStart**](QuickServersApi.md#DoQsStart) | **GET** /qs/{id}/start | Start QuickServer
[**DoQsStop**](QuickServersApi.md#DoQsStop) | **GET** /qs/{id}/stop | Stop QuickServer
[**DownloadQsBackup**](QuickServersApi.md#DownloadQsBackup) | **PATCH** /qs/{id}/backups | Download QuickServer Backup
[**GetNewQs**](QuickServersApi.md#GetNewQs) | **GET** /qs/order | Get QuickServer Ordering Information
[**GetQsBackups**](QuickServersApi.md#GetQsBackups) | **GET** /qs/{id}/backups | List QuickServer Backups
[**GetQsChangeHostname**](QuickServersApi.md#GetQsChangeHostname) | **GET** /qs/{id}/change_hostname | Get QuickServer Hostname
[**GetQsChangeRootPassword**](QuickServersApi.md#GetQsChangeRootPassword) | **GET** /qs/{id}/change_root_password | Get Change Root Password Info
[**GetQsChangeTimezone**](QuickServersApi.md#GetQsChangeTimezone) | **GET** /qs/{id}/change_timezone | Get Timezone Info
[**GetQsChangeWebuzoPassword**](QuickServersApi.md#GetQsChangeWebuzoPassword) | **GET** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info
[**GetQsInfo**](QuickServersApi.md#GetQsInfo) | **GET** /qs/{id} | Get QuickServer Order
[**GetQsInsertCd**](QuickServersApi.md#GetQsInsertCd) | **GET** /qs/{id}/insert_cd | Insert CD Information
[**GetQsInvoices**](QuickServersApi.md#GetQsInvoices) | **GET** /qs/{id}/invoices | Get QuickServer Invoices
[**GetQsList**](QuickServersApi.md#GetQsList) | **GET** /qs | List QuickServers
[**GetQsReinstallOs**](QuickServersApi.md#GetQsReinstallOs) | **GET** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options
[**GetQsResetPassword**](QuickServersApi.md#GetQsResetPassword) | **GET** /qs/{id}/reset_password | Reset QuickServer Password Info
[**GetQsReverseDns**](QuickServersApi.md#GetQsReverseDns) | **GET** /qs/{id}/reverse_dns | Reverse DNS Info
[**GetQsSetupVnc**](QuickServersApi.md#GetQsSetupVnc) | **GET** /qs/{id}/setup_vnc | VNC Setup Info
[**GetQsTrafficUsage**](QuickServersApi.md#GetQsTrafficUsage) | **GET** /qs/{id}/traffic_usage | Get Traffic Usage
[**GetQsViewDesktop**](QuickServersApi.md#GetQsViewDesktop) | **GET** /qs/{id}/view_desktop | Get View Desktop Info
[**GetQsWelcomeEmail**](QuickServersApi.md#GetQsWelcomeEmail) | **GET** /qs/{id}/welcome_email | Resend QuickServer Welcome Email
[**PostQsBackup**](QuickServersApi.md#PostQsBackup) | **POST** /qs/{id}/backup | Create QuickServer Backup
[**PostQsChangeHostname**](QuickServersApi.md#PostQsChangeHostname) | **POST** /qs/{id}/change_hostname | Update QuickServer Hostname
[**PostQsChangeRootPassword**](QuickServersApi.md#PostQsChangeRootPassword) | **POST** /qs/{id}/change_root_password | Change Root Password
[**PostQsChangeTimezone**](QuickServersApi.md#PostQsChangeTimezone) | **POST** /qs/{id}/change_timezone | Change QuickServer Timezone
[**PostQsChangeWebuzoPassword**](QuickServersApi.md#PostQsChangeWebuzoPassword) | **POST** /qs/{id}/change_webuzo_password | Change Webuzo Password
[**PostQsInsertCd**](QuickServersApi.md#PostQsInsertCd) | **POST** /qs/{id}/insert_cd | Insert CD in QuickServer
[**PostQsReinstallOs**](QuickServersApi.md#PostQsReinstallOs) | **POST** /qs/{id}/reinstall_os | Reinstall QuickServer OS
[**PostQsResetPassword**](QuickServersApi.md#PostQsResetPassword) | **POST** /qs/{id}/reset_password | Reset QuickServer Password
[**PostQsReverseDns**](QuickServersApi.md#PostQsReverseDns) | **POST** /qs/{id}/reverse_dns | Update Reverse DNS
[**PostQsSetupVnc**](QuickServersApi.md#PostQsSetupVnc) | **POST** /qs/{id}/setup_vnc | Setup VNC
[**PostQsTrafficUsage**](QuickServersApi.md#PostQsTrafficUsage) | **POST** /qs/{id}/traffic_usage | Search Traffic Usage
[**PostQsViewDesktop**](QuickServersApi.md#PostQsViewDesktop) | **POST** /qs/{id}/view_desktop | Update View Desktop
[**PostQuickServerRestore**](QuickServersApi.md#PostQuickServerRestore) | **POST** /qs/{id}/restore | Restore QuickServer from Backup
[**PutQs**](QuickServersApi.md#PutQs) | **PUT** /qs/order | Validate QuickServer Order
[**QuickserversCancel**](QuickServersApi.md#QuickserversCancel) | **DELETE** /qs/{id} | Cancel QuickServer Order
[**UpdateQsInfo**](QuickServersApi.md#UpdateQsInfo) | **POST** /qs/{id} | Update QuickServer Order


# **AddQs**
> ServiceOrderPostResponse AddQs()

Place QuickServer Order

Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.

### Example
```R
library(openapi)

# Place QuickServer Order
#

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$AddQs(data_file = "result.txt")
result <- api_instance$AddQs()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Order placed successfully. Use the invoice ID to proceed to payment via &#x60;/pay/{method}/{invoices}&#x60; or view the invoice at &#x60;/billing/invoices/{id}&#x60;. |  -  |
| **401** | Unauthorized |  -  |

# **DeleteQsBackup**
> SuccessTextResponse DeleteQsBackup(id, file, all = var.all)

Delete QuickServer Backup

Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.

### Example
```R
library(openapi)

# Delete QuickServer Backup
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number
var_file <- "file_example" # character | The backup filename to delete.
var_all <- "all_example" # character | Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (Optional)

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DeleteQsBackup(var_id, var_file, all = var_alldata_file = "result.txt")
result <- api_instance$DeleteQsBackup(var_id, var_file, all = var_all)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 
 **file** | **character**| The backup filename to delete. | 
 **all** | Enum [0, 1] | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] 

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

# **DoQsBlockSmtp**
> QueueResponse DoQsBlockSmtp(id)

Block QuickServer SMTP

Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.

### Example
```R
library(openapi)

# Block QuickServer SMTP
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number.

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DoQsBlockSmtp(var_iddata_file = "result.txt")
result <- api_instance$DoQsBlockSmtp(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **DoQsDisableCd**
> QueueResponse DoQsDisableCd(id)

Disable CD Drive

Disables the virtual CD drive for the QuickServer.

### Example
```R
library(openapi)

# Disable CD Drive
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number.

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DoQsDisableCd(var_iddata_file = "result.txt")
result <- api_instance$DoQsDisableCd(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **DoQsDisableQuota**
> QueueResponse DoQsDisableQuota(id)

Disable Quotas

Disables disk quota enforcement for the QuickServer.

### Example
```R
library(openapi)

# Disable Quotas
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number.

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DoQsDisableQuota(var_iddata_file = "result.txt")
result <- api_instance$DoQsDisableQuota(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **DoQsEjectCd**
> QueueResponse DoQsEjectCd(id)

Eject CD Drive

Ejects the virtual CD from the QuickServer's CD drive.

### Example
```R
library(openapi)

# Eject CD Drive
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number.

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DoQsEjectCd(var_iddata_file = "result.txt")
result <- api_instance$DoQsEjectCd(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **DoQsEnableQuota**
> QueueResponse DoQsEnableQuota(id)

Enable Quotas

Enables disk quota enforcement for the QuickServer.

### Example
```R
library(openapi)

# Enable Quotas
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number.

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DoQsEnableQuota(var_iddata_file = "result.txt")
result <- api_instance$DoQsEnableQuota(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **DoQsRestart**
> QueueResponse DoQsRestart(id)

Restart QuickServer

Restarts the QuickServer. The server will be shut down and started again.

### Example
```R
library(openapi)

# Restart QuickServer
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number.

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DoQsRestart(var_iddata_file = "result.txt")
result <- api_instance$DoQsRestart(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **DoQsStart**
> QueueResponse DoQsStart(id)

Start QuickServer

Powers on the QuickServer.

### Example
```R
library(openapi)

# Start QuickServer
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number.

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DoQsStart(var_iddata_file = "result.txt")
result <- api_instance$DoQsStart(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **DoQsStop**
> QueueResponse DoQsStop(id)

Stop QuickServer

Powers off the QuickServer.

### Example
```R
library(openapi)

# Stop QuickServer
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number.

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DoQsStop(var_iddata_file = "result.txt")
result <- api_instance$DoQsStop(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **DownloadQsBackup**
> DownloadQsBackup200Response DownloadQsBackup(id, download_qs_backup_request, all = var.all)

Download QuickServer Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.

### Example
```R
library(openapi)

# Download QuickServer Backup
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number
var_download_qs_backup_request <- downloadQsBackup_request$new("file_example") # DownloadQsBackupRequest | 
var_all <- "all_example" # character | Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (Optional)

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DownloadQsBackup(var_id, var_download_qs_backup_request, all = var_alldata_file = "result.txt")
result <- api_instance$DownloadQsBackup(var_id, var_download_qs_backup_request, all = var_all)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 
 **download_qs_backup_request** | [**DownloadQsBackupRequest**](DownloadQsBackupRequest.md)|  | 
 **all** | Enum [0, 1] | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] 

### Return type

[**DownloadQsBackup200Response**](downloadQsBackup_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Download URL for the backup file. |  -  |
| **401** | Unauthorized |  -  |

# **GetNewQs**
> QuickserverOrder GetNewQs()

Get QuickServer Ordering Information

Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.

### Example
```R
library(openapi)

# Get QuickServer Ordering Information
#

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetNewQs(data_file = "result.txt")
result <- api_instance$GetNewQs()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**QuickserverOrder**](QuickserverOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Quickserver Ordering information. |  -  |
| **401** | Unauthorized |  -  |

# **GetQsBackups**
> VpsBackupRows GetQsBackups(id, all = var.all)

List QuickServer Backups

Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.

### Example
```R
library(openapi)

# List QuickServer Backups
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number
var_all <- "all_example" # character | Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (Optional)

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetQsBackups(var_id, all = var_alldata_file = "result.txt")
result <- api_instance$GetQsBackups(var_id, all = var_all)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 
 **all** | Enum [0, 1] | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] 

### Return type

[**VpsBackupRows**](VpsBackupRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of available backups for the QuickServer. |  -  |
| **401** | Unauthorized |  -  |

# **GetQsChangeHostname**
> GetQsChangeHostname(id)

Get QuickServer Hostname

Retrieves the current hostname and any validation requirements for changing it.

### Example
```R
library(openapi)

# Get QuickServer Hostname
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetQsChangeHostname(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

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
| **200** | QuickServer Change Hostname info response |  -  |
| **401** | Unauthorized |  -  |

# **GetQsChangeRootPassword**
> GetQsChangeRootPassword(id)

Get Change Root Password Info

Retrieves instructions or metadata needed to reset the root password.

### Example
```R
library(openapi)

# Get Change Root Password Info
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetQsChangeRootPassword(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

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
| **200** | QuickServer Change Root Password response |  -  |
| **401** | Unauthorized |  -  |

# **GetQsChangeTimezone**
> array[character] GetQsChangeTimezone(id)

Get Timezone Info

Returns the list of available timezones that can be set on the QuickServer.

### Example
```R
library(openapi)

# Get Timezone Info
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetQsChangeTimezone(var_iddata_file = "result.txt")
result <- api_instance$GetQsChangeTimezone(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

### Return type

**array[character]**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | QuickServer Change Timezone info response |  -  |
| **401** | Unauthorized |  -  |

# **GetQsChangeWebuzoPassword**
> GetQsChangeWebuzoPassword(id)

Webuzo Change Pass Info

Retrieves instructions or metadata for changing the Webuzo control panel password.

### Example
```R
library(openapi)

# Webuzo Change Pass Info
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetQsChangeWebuzoPassword(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

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
| **200** | QuickServer Change Webuzo Password info response |  -  |
| **401** | Unauthorized |  -  |

# **GetQsInfo**
> Quickserver GetQsInfo(id)

Get QuickServer Order

Returns detailed QuickServer information, including credentials, IPs, and available client actions.

### Example
```R
library(openapi)

# Get QuickServer Order
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number.

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetQsInfo(var_iddata_file = "result.txt")
result <- api_instance$GetQsInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number. | 

### Return type

[**Quickserver**](Quickserver.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Quickserver details |  -  |
| **401** | Unauthorized |  -  |

# **GetQsInsertCd**
> GetQsInsertCd(id)

Insert CD Information

Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.

### Example
```R
library(openapi)

# Insert CD Information
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetQsInsertCd(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

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
| **200** | QuickServer Insert CD info response |  -  |
| **401** | Unauthorized |  -  |

# **GetQsInvoices**
> ChargeInvoiceRows GetQsInvoices(id)

Get QuickServer Invoices

Returns the billing invoices associated with this QuickServer.

### Example
```R
library(openapi)

# Get QuickServer Invoices
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetQsInvoices(var_iddata_file = "result.txt")
result <- api_instance$GetQsInvoices(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

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

# **GetQsList**
> array[QuickserverRow] GetQsList()

List QuickServers

Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.

### Example
```R
library(openapi)

# List QuickServers
#

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetQsList(data_file = "result.txt")
result <- api_instance$GetQsList()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**array[QuickserverRow]**](QuickserverRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Quickservers&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |

# **GetQsReinstallOs**
> VpsTemplatesList GetQsReinstallOs(id)

QuickServer Reinstall OS Options

Returns the list of available operating system templates for reinstalling the QuickServer.

### Example
```R
library(openapi)

# QuickServer Reinstall OS Options
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetQsReinstallOs(var_iddata_file = "result.txt")
result <- api_instance$GetQsReinstallOs(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

### Return type

[**VpsTemplatesList**](VpsTemplatesList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | QuickServer Reinstall OS info response |  -  |
| **401** | Unauthorized |  -  |

# **GetQsResetPassword**
> GetQsResetPassword(id)

Reset QuickServer Password Info

Returns information needed before resetting the QuickServer's root password.

### Example
```R
library(openapi)

# Reset QuickServer Password Info
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetQsResetPassword(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

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
| **200** | QuickServer Reset password info |  -  |
| **401** | Unauthorized |  -  |

# **GetQsReverseDns**
> ReverseDnsEntries GetQsReverseDns(id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.

### Example
```R
library(openapi)

# Reverse DNS Info
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetQsReverseDns(var_iddata_file = "result.txt")
result <- api_instance$GetQsReverseDns(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | QuickServer Reverse DNS info response |  -  |
| **401** | Unauthorized |  -  |

# **GetQsSetupVnc**
> GetQsSetupVnc(id)

VNC Setup Info

Returns the current VNC connection information for the QuickServer.

### Example
```R
library(openapi)

# VNC Setup Info
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetQsSetupVnc(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

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
| **200** | Get QuickServer Setup VNC Information |  -  |
| **401** | Unauthorized |  -  |

# **GetQsTrafficUsage**
> GetQsTrafficUsage(id)

Get Traffic Usage

Returns bandwidth traffic usage data for the QuickServer.

### Example
```R
library(openapi)

# Get Traffic Usage
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetQsTrafficUsage(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

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
| **200** | Get QuickServer Traffic usage |  -  |
| **401** | Unauthorized |  -  |

# **GetQsViewDesktop**
> GetQsViewDesktop(id)

Get View Desktop Info

Returns remote desktop connection information for the QuickServer.

### Example
```R
library(openapi)

# Get View Desktop Info
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetQsViewDesktop(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

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
| **200** | Get QuickServer View Desktop Information |  -  |
| **401** | Unauthorized |  -  |

# **GetQsWelcomeEmail**
> TextResponse GetQsWelcomeEmail(id)

Resend QuickServer Welcome Email

Resends the welcome email containing connection details and credentials for the QuickServer order.

### Example
```R
library(openapi)

# Resend QuickServer Welcome Email
#
# prepare function argument(s)
var_id <- "133123" # character | Quickserver ID

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetQsWelcomeEmail(var_iddata_file = "result.txt")
result <- api_instance$GetQsWelcomeEmail(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| Quickserver ID | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

# **PostQsBackup**
> QueueResponse PostQsBackup(id)

Create QuickServer Backup

Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.

### Example
```R
library(openapi)

# Create QuickServer Backup
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostQsBackup(var_iddata_file = "result.txt")
result <- api_instance$PostQsBackup(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **PostQsChangeHostname**
> QueueResponse PostQsChangeHostname(id)

Update QuickServer Hostname

Submits a hostname change request for the QuickServer.

### Example
```R
library(openapi)

# Update QuickServer Hostname
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostQsChangeHostname(var_iddata_file = "result.txt")
result <- api_instance$PostQsChangeHostname(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **PostQsChangeRootPassword**
> QueueResponse PostQsChangeRootPassword(id)

Change Root Password

Triggers a root password reset for the QuickServer.

### Example
```R
library(openapi)

# Change Root Password
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostQsChangeRootPassword(var_iddata_file = "result.txt")
result <- api_instance$PostQsChangeRootPassword(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **PostQsChangeTimezone**
> QueueResponse PostQsChangeTimezone(id, timezone)

Change QuickServer Timezone

Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.

### Example
```R
library(openapi)

# Change QuickServer Timezone
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number
var_timezone <- "timezone_example" # character | The time zone

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostQsChangeTimezone(var_id, var_timezonedata_file = "result.txt")
result <- api_instance$PostQsChangeTimezone(var_id, var_timezone)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 
 **timezone** | **character**| The time zone | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **PostQsChangeWebuzoPassword**
> QueueResponse PostQsChangeWebuzoPassword(id)

Change Webuzo Password

Resets the Webuzo control panel password for the QuickServer.

### Example
```R
library(openapi)

# Change Webuzo Password
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostQsChangeWebuzoPassword(var_iddata_file = "result.txt")
result <- api_instance$PostQsChangeWebuzoPassword(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **PostQsInsertCd**
> QueueResponse PostQsInsertCd(id)

Insert CD in QuickServer

Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.

### Example
```R
library(openapi)

# Insert CD in QuickServer
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostQsInsertCd(var_iddata_file = "result.txt")
result <- api_instance$PostQsInsertCd(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **PostQsReinstallOs**
> QueueResponse PostQsReinstallOs(id)

Reinstall QuickServer OS

Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.

### Example
```R
library(openapi)

# Reinstall QuickServer OS
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostQsReinstallOs(var_iddata_file = "result.txt")
result <- api_instance$PostQsReinstallOs(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **PostQsResetPassword**
> QueueResponse PostQsResetPassword(id)

Reset QuickServer Password

Resets the root password on the QuickServer to a new randomly generated password.

### Example
```R
library(openapi)

# Reset QuickServer Password
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostQsResetPassword(var_iddata_file = "result.txt")
result <- api_instance$PostQsResetPassword(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **PostQsReverseDns**
> TextResponse PostQsReverseDns(id, reverse_dns_entries)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.

### Example
```R
library(openapi)

# Update Reverse DNS
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number
var_reverse_dns_entries <- ReverseDnsEntries$new(c(key = TODO)) # ReverseDnsEntries | 

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostQsReverseDns(var_id, var_reverse_dns_entriesdata_file = "result.txt")
result <- api_instance$PostQsReverseDns(var_id, var_reverse_dns_entries)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 
 **reverse_dns_entries** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Update QuickServer Reverse DNS response |  -  |
| **401** | Unauthorized |  -  |

# **PostQsSetupVnc**
> QueueResponse PostQsSetupVnc(id)

Setup VNC

Sets up or refreshes the VNC console connection for the QuickServer.

### Example
```R
library(openapi)

# Setup VNC
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostQsSetupVnc(var_iddata_file = "result.txt")
result <- api_instance$PostQsSetupVnc(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

# **PostQsTrafficUsage**
> PostQsTrafficUsage(id)

Search Traffic Usage

Searches and filters the QuickServer's bandwidth traffic usage data by date range.

### Example
```R
library(openapi)

# Search Traffic Usage
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$PostQsTrafficUsage(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

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
| **200** | Submit QuickServer Traffic Usage |  -  |
| **401** | Unauthorized |  -  |

# **PostQsViewDesktop**
> PostQsViewDesktop(id)

Update View Desktop

Updates or refreshes the remote desktop session for the QuickServer.

### Example
```R
library(openapi)

# Update View Desktop
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$PostQsViewDesktop(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

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
| **200** | Submit QuickServer View Desktop Information |  -  |
| **401** | Unauthorized |  -  |

# **PostQuickServerRestore**
> QueueResponse PostQuickServerRestore(id, restore_request)

Restore QuickServer from Backup

Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.

### Example
```R
library(openapi)

# Restore QuickServer from Backup
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number
var_restore_request <- RestoreRequest$new("backup_example", "password_example") # RestoreRequest | QuickServer Restore request

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostQuickServerRestore(var_id, var_restore_requestdata_file = "result.txt")
result <- api_instance$PostQuickServerRestore(var_id, var_restore_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 
 **restore_request** | [**RestoreRequest**](RestoreRequest.md)| QuickServer Restore request | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **400** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

# **PutQs**
> PutQs()

Validate QuickServer Order

Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.

### Example
```R
library(openapi)

# Validate QuickServer Order
#

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$PutQs()
```

### Parameters
This endpoint does not need any parameter.

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
| **200** | Validate QuickServer Order response |  -  |
| **401** | Unauthorized |  -  |

# **QuickserversCancel**
> QuickserversCancel200Response QuickserversCancel(id)

Cancel QuickServer Order

Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```R
library(openapi)

# Cancel QuickServer Order
#
# prepare function argument(s)
var_id <- 56 # integer | QuickServer ID number

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$QuickserversCancel(var_iddata_file = "result.txt")
result <- api_instance$QuickserversCancel(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| QuickServer ID number | 

### Return type

[**QuickserversCancel200Response**](quickserversCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Rapid Deploy Servers Cancel |  -  |
| **401** | Unauthorized |  -  |

# **UpdateQsInfo**
> SuccessTextResponse UpdateQsInfo(id)

Update QuickServer Order

Updates QuickServer metadata or stored settings associated with the order.

### Example
```R
library(openapi)

# Update QuickServer Order
#
# prepare function argument(s)
var_id <- "id_example" # character | QuickServer ID number.

api_instance <- QuickServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateQsInfo(var_iddata_file = "result.txt")
result <- api_instance$UpdateQsInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| QuickServer ID number. | 

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

