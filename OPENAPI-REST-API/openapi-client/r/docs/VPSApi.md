# VPSApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddVps**](VPSApi.md#AddVps) | **POST** /vps/order | Place VPS Order
[**DeleteVpsBackup**](VPSApi.md#DeleteVpsBackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup
[**DoVpsBlockSmtp**](VPSApi.md#DoVpsBlockSmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP
[**DoVpsDisableCd**](VPSApi.md#DoVpsDisableCd) | **GET** /vps/{id}/disable_cd | Disable CD Drive
[**DoVpsDisableQuota**](VPSApi.md#DoVpsDisableQuota) | **GET** /vps/{id}/disable_quota | Disable Quotas
[**DoVpsEjectCd**](VPSApi.md#DoVpsEjectCd) | **GET** /vps/{id}/eject_cd | Eject CD Drive
[**DoVpsEnableQuota**](VPSApi.md#DoVpsEnableQuota) | **GET** /vps/{id}/enable_quota | Enable Quotas
[**DoVpsRestart**](VPSApi.md#DoVpsRestart) | **GET** /vps/{id}/restart | Restart VPS
[**DoVpsStart**](VPSApi.md#DoVpsStart) | **GET** /vps/{id}/start | Start VPS
[**DoVpsStop**](VPSApi.md#DoVpsStop) | **GET** /vps/{id}/stop | Stop VPS
[**DownloadVpsBackup**](VPSApi.md#DownloadVpsBackup) | **PATCH** /vps/{id}/backups | Download VPS Backup
[**GetNewVps**](VPSApi.md#GetNewVps) | **GET** /vps/order | VPS Ordering Information
[**GetVpsBackups**](VPSApi.md#GetVpsBackups) | **GET** /vps/{id}/backups | Get VPS Backups List
[**GetVpsBuyHdSpace**](VPSApi.md#GetVpsBuyHdSpace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info
[**GetVpsBuyIp**](VPSApi.md#GetVpsBuyIp) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info
[**GetVpsChangeTimezone**](VPSApi.md#GetVpsChangeTimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info
[**GetVpsInfo**](VPSApi.md#GetVpsInfo) | **GET** /vps/{id} | Get VPS Order
[**GetVpsInvoices**](VPSApi.md#GetVpsInvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices
[**GetVpsList**](VPSApi.md#GetVpsList) | **GET** /vps | List VPS Orders
[**GetVpsReinstallOs**](VPSApi.md#GetVpsReinstallOs) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options
[**GetVpsReverseDns**](VPSApi.md#GetVpsReverseDns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info
[**GetVpsSetupVnc**](VPSApi.md#GetVpsSetupVnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info
[**GetVpsSlices**](VPSApi.md#GetVpsSlices) | **GET** /vps/{id}/slices | Slice Upgrade Info
[**GetVpsTrafficUsage**](VPSApi.md#GetVpsTrafficUsage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage
[**GetVpsViewDesktop**](VPSApi.md#GetVpsViewDesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info
[**GetVpsWelcomeEmail**](VPSApi.md#GetVpsWelcomeEmail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email
[**PostVpsBackup**](VPSApi.md#PostVpsBackup) | **GET** /vps/{id}/backup | Start a VPS Backup
[**PostVpsBuyHdSpace**](VPSApi.md#PostVpsBuyHdSpace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon
[**PostVpsBuyIp**](VPSApi.md#PostVpsBuyIp) | **POST** /vps/{id}/buy_ip | Purchase Additional IP
[**PostVpsChangeHostname**](VPSApi.md#PostVpsChangeHostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname
[**PostVpsChangeRootPassword**](VPSApi.md#PostVpsChangeRootPassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password
[**PostVpsChangeTimezone**](VPSApi.md#PostVpsChangeTimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone
[**PostVpsChangeWebuzoPassword**](VPSApi.md#PostVpsChangeWebuzoPassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password
[**PostVpsInsertCd**](VPSApi.md#PostVpsInsertCd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS
[**PostVpsReinstallOs**](VPSApi.md#PostVpsReinstallOs) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS
[**PostVpsResetPassword**](VPSApi.md#PostVpsResetPassword) | **POST** /vps/{id}/reset_password | Reset VPS Password
[**PostVpsRestore**](VPSApi.md#PostVpsRestore) | **POST** /vps/{id}/restore | Restore VPS from Backup
[**PostVpsReverseDns**](VPSApi.md#PostVpsReverseDns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS
[**PostVpsSetupVnc**](VPSApi.md#PostVpsSetupVnc) | **POST** /vps/{id}/setup_vnc | Setup VNC
[**PostVpsSlices**](VPSApi.md#PostVpsSlices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade
[**PostVpsViewDesktop**](VPSApi.md#PostVpsViewDesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop
[**PutVps**](VPSApi.md#PutVps) | **PUT** /vps/order | Validate VPS Order
[**UpdateVpsInfo**](VPSApi.md#UpdateVpsInfo) | **POST** /vps/{id} | Update VPS Order
[**VPSCancel**](VPSApi.md#VPSCancel) | **DELETE** /vps/{id} | Cancel VPS Service


# **AddVps**
> AddVps(vps_order_post_request = var.vps_order_post_request)

Place VPS Order

Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.

### Example
```R
library(openapi)

# Place VPS Order
#
# prepare function argument(s)
var_vps_order_post_request <- VpsOrderPostRequest$new("osDistro_example", 123, "kvm", 123, 123, "osVersion_example", "hostname_example", "rootpass_example", "none", "coupon_example", "comment_example") # VpsOrderPostRequest |  (Optional)

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$AddVps(vps_order_post_request = var_vps_order_post_request)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vps_order_post_request** | [**VpsOrderPostRequest**](VpsOrderPostRequest.md)|  | [optional] 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **DeleteVpsBackup**
> SuccessTextResponse DeleteVpsBackup(id, file, all = var.all)

Delete VPS Backup

Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.

### Example
```R
library(openapi)

# Delete VPS Backup
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number
var_file <- "file_example" # character | The backup filename to delete.
var_all <- "all_example" # character | Set to `1` to list all backups across all services, not just the ones for the given VPS. (Optional)

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DeleteVpsBackup(var_id, var_file, all = var_alldata_file = "result.txt")
result <- api_instance$DeleteVpsBackup(var_id, var_file, all = var_all)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 
 **file** | **character**| The backup filename to delete. | 
 **all** | Enum [0, 1] | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] 

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

# **DoVpsBlockSmtp**
> QueueResponse DoVpsBlockSmtp(id)

Blocks SMTP

Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.

### Example
```R
library(openapi)

# Blocks SMTP
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number.

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DoVpsBlockSmtp(var_iddata_file = "result.txt")
result <- api_instance$DoVpsBlockSmtp(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number. | 

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

# **DoVpsDisableCd**
> QueueResponse DoVpsDisableCd(id)

Disable CD Drive

Disables the virtual CD drive on the VPS.

### Example
```R
library(openapi)

# Disable CD Drive
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number.

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DoVpsDisableCd(var_iddata_file = "result.txt")
result <- api_instance$DoVpsDisableCd(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number. | 

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

# **DoVpsDisableQuota**
> QueueResponse DoVpsDisableQuota(id)

Disable Quotas

Disables disk quota enforcement on the VPS.

### Example
```R
library(openapi)

# Disable Quotas
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number.

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DoVpsDisableQuota(var_iddata_file = "result.txt")
result <- api_instance$DoVpsDisableQuota(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number. | 

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

# **DoVpsEjectCd**
> QueueResponse DoVpsEjectCd(id)

Eject CD Drive

Ejects the virtual CD from the VPS CD drive.

### Example
```R
library(openapi)

# Eject CD Drive
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number.

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DoVpsEjectCd(var_iddata_file = "result.txt")
result <- api_instance$DoVpsEjectCd(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number. | 

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

# **DoVpsEnableQuota**
> QueueResponse DoVpsEnableQuota(id)

Enable Quotas

Enables disk quota enforcement on the VPS.

### Example
```R
library(openapi)

# Enable Quotas
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number.

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DoVpsEnableQuota(var_iddata_file = "result.txt")
result <- api_instance$DoVpsEnableQuota(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number. | 

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

# **DoVpsRestart**
> QueueResponse DoVpsRestart(id)

Restart VPS

Restarts the VPS.

### Example
```R
library(openapi)

# Restart VPS
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number.

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DoVpsRestart(var_iddata_file = "result.txt")
result <- api_instance$DoVpsRestart(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number. | 

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

# **DoVpsStart**
> QueueResponse DoVpsStart(id)

Start VPS

Powers on the VPS.

### Example
```R
library(openapi)

# Start VPS
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number.

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DoVpsStart(var_iddata_file = "result.txt")
result <- api_instance$DoVpsStart(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number. | 

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

# **DoVpsStop**
> QueueResponse DoVpsStop(id)

Stop VPS

Powers off the VPS.

### Example
```R
library(openapi)

# Stop VPS
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number.

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DoVpsStop(var_iddata_file = "result.txt")
result <- api_instance$DoVpsStop(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number. | 

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

# **DownloadVpsBackup**
> DownloadQsBackup200Response DownloadVpsBackup(id, download_qs_backup_request, all = var.all)

Download VPS Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.

### Example
```R
library(openapi)

# Download VPS Backup
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number
var_download_qs_backup_request <- downloadQsBackup_request$new("file_example") # DownloadQsBackupRequest | 
var_all <- "all_example" # character | Set to `1` to list all backups across all services, not just the ones for the given VPS. (Optional)

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DownloadVpsBackup(var_id, var_download_qs_backup_request, all = var_alldata_file = "result.txt")
result <- api_instance$DownloadVpsBackup(var_id, var_download_qs_backup_request, all = var_all)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 
 **download_qs_backup_request** | [**DownloadQsBackupRequest**](DownloadQsBackupRequest.md)|  | 
 **all** | Enum [0, 1] | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] 

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

# **GetNewVps**
> VpsOrder GetNewVps()

VPS Ordering Information

Retrieves available VPS configurations, OS templates, and pricing for ordering.

### Example
```R
library(openapi)

# VPS Ordering Information
#

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetNewVps(data_file = "result.txt")
result <- api_instance$GetNewVps()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**VpsOrder**](VpsOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | VPS Order information |  -  |
| **401** | Unauthorized |  -  |

# **GetVpsBackups**
> VpsBackupRows GetVpsBackups(id, all = var.all)

Get VPS Backups List

Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.

### Example
```R
library(openapi)

# Get VPS Backups List
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number
var_all <- "all_example" # character | Set to `1` to list all backups across all services, not just the ones for the given VPS. (Optional)

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetVpsBackups(var_id, all = var_alldata_file = "result.txt")
result <- api_instance$GetVpsBackups(var_id, all = var_all)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 
 **all** | Enum [0, 1] | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] 

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
| **200** | The listing of the available backups |  -  |
| **401** | Unauthorized |  -  |

# **GetVpsBuyHdSpace**
> GetVpsBuyHdSpace(id)

HD Space Addon Info

Returns available hard drive space addon options and pricing for the VPS.

### Example
```R
library(openapi)

# HD Space Addon Info
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetVpsBuyHdSpace(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

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
| **200** | Get VPS Buy HD Space information |  -  |
| **401** | Unauthorized |  -  |

# **GetVpsBuyIp**
> GetVpsBuyIp(id)

Additional IP Addon Info

Returns available additional IP address options and pricing for the VPS.

### Example
```R
library(openapi)

# Additional IP Addon Info
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetVpsBuyIp(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

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
| **200** | VPS Buy IP information |  -  |
| **401** | Unauthorized |  -  |

# **GetVpsChangeTimezone**
> array[character] GetVpsChangeTimezone(id)

Get Timezone Info

Returns the list of available timezones that can be set on the VPS.

### Example
```R
library(openapi)

# Get Timezone Info
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetVpsChangeTimezone(var_iddata_file = "result.txt")
result <- api_instance$GetVpsChangeTimezone(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

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
| **200** | VPS Change Timezone info response |  -  |
| **401** | Unauthorized |  -  |

# **GetVpsInfo**
> Vps GetVpsInfo(id)

Get VPS Order

Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.

### Example
```R
library(openapi)

# Get VPS Order
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetVpsInfo(var_iddata_file = "result.txt")
result <- api_instance$GetVpsInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

### Return type

[**Vps**](Vps.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The VPS Information |  -  |
| **401** | Unauthorized |  -  |

# **GetVpsInvoices**
> ChargeInvoiceRows GetVpsInvoices(id)

Get VPS Invoices

Returns the billing invoices associated with this VPS.

### Example
```R
library(openapi)

# Get VPS Invoices
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetVpsInvoices(var_iddata_file = "result.txt")
result <- api_instance$GetVpsInvoices(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

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
| **200** | Get VPS Invoices response |  -  |
| **401** | Unauthorized |  -  |

# **GetVpsList**
> array[VpsRow] GetVpsList()

List VPS Orders

Returns all VPS services on the account with their current status and configuration.

### Example
```R
library(openapi)

# List VPS Orders
#

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetVpsList(data_file = "result.txt")
result <- api_instance$GetVpsList()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**array[VpsRow]**](VpsRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Vps&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |

# **GetVpsReinstallOs**
> VpsTemplatesList GetVpsReinstallOs(id)

VPS Reinstall OS Options

Returns the list of available OS templates for reinstalling the VPS.

### Example
```R
library(openapi)

# VPS Reinstall OS Options
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetVpsReinstallOs(var_iddata_file = "result.txt")
result <- api_instance$GetVpsReinstallOs(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

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
| **200** | VPS Reinstall OS info response |  -  |
| **401** | Unauthorized |  -  |

# **GetVpsReverseDns**
> ReverseDnsEntries GetVpsReverseDns(id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.

### Example
```R
library(openapi)

# Reverse DNS Info
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetVpsReverseDns(var_iddata_file = "result.txt")
result <- api_instance$GetVpsReverseDns(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

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
| **200** | VPS Reverse DNS info response |  -  |
| **401** | Unauthorized |  -  |

# **GetVpsSetupVnc**
> GetVpsSetupVnc(id)

VNC Setup Info

Returns the current VNC connection information for the VPS.

### Example
```R
library(openapi)

# VNC Setup Info
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetVpsSetupVnc(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

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
| **200** | Get VPS Setup VNC Information |  -  |
| **401** | Unauthorized |  -  |

# **GetVpsSlices**
> GetVpsSlices(id)

Slice Upgrade Info

Returns available slice upgrade options and pricing for the VPS.

### Example
```R
library(openapi)

# Slice Upgrade Info
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetVpsSlices(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

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
| **200** | VPS Slices information |  -  |
| **401** | Unauthorized |  -  |

# **GetVpsTrafficUsage**
> VpsTrafficResponse GetVpsTrafficUsage(id)

Get Traffic Usage

Returns bandwidth traffic usage data for the VPS.

### Example
```R
library(openapi)

# Get Traffic Usage
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetVpsTrafficUsage(var_iddata_file = "result.txt")
result <- api_instance$GetVpsTrafficUsage(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

### Return type

[**VpsTrafficResponse**](VpsTrafficResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get VPS Traffic usage |  -  |
| **401** | Unauthorized |  -  |

# **GetVpsViewDesktop**
> GetVpsViewDesktop(id)

Get View Desktop Info

Returns remote desktop connection information for the VPS.

### Example
```R
library(openapi)

# Get View Desktop Info
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetVpsViewDesktop(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

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
| **200** | Get VPS View Desktop Information |  -  |
| **401** | Unauthorized |  -  |

# **GetVpsWelcomeEmail**
> SuccessTextResponse GetVpsWelcomeEmail(id)

Resend VPS Welcome Email

Resends the welcome email containing connection details and credentials for the VPS order.

### Example
```R
library(openapi)

# Resend VPS Welcome Email
#
# prepare function argument(s)
var_id <- "4813" # character | VPS ID

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetVpsWelcomeEmail(var_iddata_file = "result.txt")
result <- api_instance$GetVpsWelcomeEmail(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| VPS ID | 

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

# **PostVpsBackup**
> QueueResponse PostVpsBackup(id)

Start a VPS Backup

Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.

### Example
```R
library(openapi)

# Start a VPS Backup
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostVpsBackup(var_iddata_file = "result.txt")
result <- api_instance$PostVpsBackup(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

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

# **PostVpsBuyHdSpace**
> PostVpsBuyHdSpace(id)

Purchase HD Space Addon

Purchases additional hard drive space for the VPS.

### Example
```R
library(openapi)

# Purchase HD Space Addon
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$PostVpsBuyHdSpace(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

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
| **200** | Post Buy HD Space for VPS response |  -  |
| **401** | Unauthorized |  -  |

# **PostVpsBuyIp**
> PostVpsBuyIp(id)

Purchase Additional IP

Purchases an additional IP address for the VPS.

### Example
```R
library(openapi)

# Purchase Additional IP
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$PostVpsBuyIp(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

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
| **200** | Submit VPS Buy IP form response |  -  |
| **401** | Unauthorized |  -  |

# **PostVpsChangeHostname**
> QueueResponse PostVpsChangeHostname(id, hostname = var.hostname)

Update VPS Hostname

Changes the hostname of the VPS. This queues a background task to update the server.

### Example
```R
library(openapi)

# Update VPS Hostname
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number
var_hostname <- "hostname_example" # character |  (Optional)

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostVpsChangeHostname(var_id, hostname = var_hostnamedata_file = "result.txt")
result <- api_instance$PostVpsChangeHostname(var_id, hostname = var_hostname)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 
 **hostname** | **character**|  | [optional] 

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

# **PostVpsChangeRootPassword**
> QueueResponse PostVpsChangeRootPassword(id, password)

Change VPS Root Password

Changes the root password of the VPS.

### Example
```R
library(openapi)

# Change VPS Root Password
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number
var_password <- "password_example" # character | 

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostVpsChangeRootPassword(var_id, var_passworddata_file = "result.txt")
result <- api_instance$PostVpsChangeRootPassword(var_id, var_password)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 
 **password** | **character**|  | 

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

# **PostVpsChangeTimezone**
> QueueResponse PostVpsChangeTimezone(id, timezone)

Change VPS Timezone

Changes the system timezone on the VPS.

### Example
```R
library(openapi)

# Change VPS Timezone
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number
var_timezone <- "timezone_example" # character | The time zone

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostVpsChangeTimezone(var_id, var_timezonedata_file = "result.txt")
result <- api_instance$PostVpsChangeTimezone(var_id, var_timezone)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 
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

# **PostVpsChangeWebuzoPassword**
> QueueResponse PostVpsChangeWebuzoPassword(id, password)

Change Webuzo Password

Changes the Webuzo control panel password on the VPS.

### Example
```R
library(openapi)

# Change Webuzo Password
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number
var_password <- "password_example" # character | 

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostVpsChangeWebuzoPassword(var_id, var_passworddata_file = "result.txt")
result <- api_instance$PostVpsChangeWebuzoPassword(var_id, var_password)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 
 **password** | **character**|  | 

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

# **PostVpsInsertCd**
> QueueResponse PostVpsInsertCd(id, url = var.url)

Insert CD in VPS

Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Example
```R
library(openapi)

# Insert CD in VPS
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number
var_url <- "url_example" # character |  (Optional)

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostVpsInsertCd(var_id, url = var_urldata_file = "result.txt")
result <- api_instance$PostVpsInsertCd(var_id, url = var_url)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 
 **url** | **character**|  | [optional] 

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

# **PostVpsReinstallOs**
> QueueResponse PostVpsReinstallOs(id, template, local_password, password = var.password)

Reinstall VPS OS

Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Example
```R
library(openapi)

# Reinstall VPS OS
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number
var_template <- "template_example" # character | OS Template Filename
var_local_password <- "local_password_example" # character | Password for this account.
var_password <- "password_example" # character | Password for Root / Administrator Account. (Optional)

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostVpsReinstallOs(var_id, var_template, var_local_password, password = var_passworddata_file = "result.txt")
result <- api_instance$PostVpsReinstallOs(var_id, var_template, var_local_password, password = var_password)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 
 **template** | **character**| OS Template Filename | 
 **local_password** | **character**| Password for this account. | 
 **password** | **character**| Password for Root / Administrator Account. | [optional] 

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

# **PostVpsResetPassword**
> QueueResponse PostVpsResetPassword(id)

Reset VPS Password

Resets the root password on the VPS to a new randomly generated password.

### Example
```R
library(openapi)

# Reset VPS Password
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostVpsResetPassword(var_iddata_file = "result.txt")
result <- api_instance$PostVpsResetPassword(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

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

# **PostVpsRestore**
> QueueResponse PostVpsRestore(id, restore_request)

Restore VPS from Backup

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.

### Example
```R
library(openapi)

# Restore VPS from Backup
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number
var_restore_request <- RestoreRequest$new("backup_example", "password_example") # RestoreRequest | VPS Restore request

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostVpsRestore(var_id, var_restore_requestdata_file = "result.txt")
result <- api_instance$PostVpsRestore(var_id, var_restore_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 
 **restore_request** | [**RestoreRequest**](RestoreRequest.md)| VPS Restore request | 

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

# **PostVpsReverseDns**
> TextResponse PostVpsReverseDns(id, reverse_dns_entries)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Example
```R
library(openapi)

# Update Reverse DNS
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number
var_reverse_dns_entries <- ReverseDnsEntries$new(c(key = TODO)) # ReverseDnsEntries | 

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostVpsReverseDns(var_id, var_reverse_dns_entriesdata_file = "result.txt")
result <- api_instance$PostVpsReverseDns(var_id, var_reverse_dns_entries)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 
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
| **200** | Update VPS Reverse DNS response |  -  |
| **401** | Unauthorized |  -  |

# **PostVpsSetupVnc**
> QueueResponse PostVpsSetupVnc(id)

Setup VNC

Sets up or refreshes the VNC console connection for the VPS.

### Example
```R
library(openapi)

# Setup VNC
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostVpsSetupVnc(var_iddata_file = "result.txt")
result <- api_instance$PostVpsSetupVnc(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

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

# **PostVpsSlices**
> PostVpsSlices(id)

Purchase Slice Upgrade

Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.

### Example
```R
library(openapi)

# Purchase Slice Upgrade
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$PostVpsSlices(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

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
| **200** | Update VPS slices response |  -  |
| **401** | Unauthorized |  -  |

# **PostVpsViewDesktop**
> PostVpsViewDesktop(id)

Update View Desktop

Updates or refreshes the remote desktop session for the VPS.

### Example
```R
library(openapi)

# Update View Desktop
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$PostVpsViewDesktop(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

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
| **200** | Submit VPS View Desktop Information |  -  |
| **401** | Unauthorized |  -  |

# **PutVps**
> VpsOrderPutResponse PutVps(vps_order_put_request = var.vps_order_put_request)

Validate VPS Order

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Example
```R
library(openapi)

# Validate VPS Order
#
# prepare function argument(s)
var_vps_order_put_request <- VpsOrderPutRequest$new("osDistro_example", 123, "kvm", 123, 123, "osVersion_example", "hostname_example", "rootpass_example", "none", "coupon_example", "comment_example") # VpsOrderPutRequest |  (Optional)

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PutVps(vps_order_put_request = var_vps_order_put_requestdata_file = "result.txt")
result <- api_instance$PutVps(vps_order_put_request = var_vps_order_put_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vps_order_put_request** | [**VpsOrderPutRequest**](VpsOrderPutRequest.md)|  | [optional] 

### Return type

[**VpsOrderPutResponse**](VpsOrderPutResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Validate VPS order response. |  -  |
| **401** | Unauthorized |  -  |

# **UpdateVpsInfo**
> UpdateVpsInfo(id)

Update VPS Order

Updates settings on a VPS order.

### Example
```R
library(openapi)

# Update VPS Order
#
# prepare function argument(s)
var_id <- "id_example" # character | VPS ID number.

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$UpdateVpsInfo(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| VPS ID number. | 

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

# **VPSCancel**
> VPSCancel200Response VPSCancel(id)

Cancel VPS Service

Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```R
library(openapi)

# Cancel VPS Service
#
# prepare function argument(s)
var_id <- 56 # integer | VPS ID number

api_instance <- VPSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$VPSCancel(var_iddata_file = "result.txt")
result <- api_instance$VPSCancel(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| VPS ID number | 

### Return type

[**VPSCancel200Response**](VPSCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | VPS Cancel |  -  |
| **401** | Unauthorized |  -  |

