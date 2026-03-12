# QuickServersAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**QuickServersAPI_addQs**](QuickServersAPI.md#QuickServersAPI_addQs) | **POST** /qs/order | Place QuickServer Order
[**QuickServersAPI_deleteQsBackup**](QuickServersAPI.md#QuickServersAPI_deleteQsBackup) | **DELETE** /qs/{id}/backups | Delete QuickServer Backup
[**QuickServersAPI_doQsBlockSmtp**](QuickServersAPI.md#QuickServersAPI_doQsBlockSmtp) | **GET** /qs/{id}/block_smtp | Block QuickServer SMTP
[**QuickServersAPI_doQsDisableCd**](QuickServersAPI.md#QuickServersAPI_doQsDisableCd) | **GET** /qs/{id}/disable_cd | Disable CD Drive
[**QuickServersAPI_doQsDisableQuota**](QuickServersAPI.md#QuickServersAPI_doQsDisableQuota) | **GET** /qs/{id}/disable_quota | Disable Quotas
[**QuickServersAPI_doQsEjectCd**](QuickServersAPI.md#QuickServersAPI_doQsEjectCd) | **GET** /qs/{id}/eject_cd | Eject CD Drive
[**QuickServersAPI_doQsEnableQuota**](QuickServersAPI.md#QuickServersAPI_doQsEnableQuota) | **GET** /qs/{id}/enable_quota | Enable Quotas
[**QuickServersAPI_doQsRestart**](QuickServersAPI.md#QuickServersAPI_doQsRestart) | **GET** /qs/{id}/restart | Restart QuickServer
[**QuickServersAPI_doQsStart**](QuickServersAPI.md#QuickServersAPI_doQsStart) | **GET** /qs/{id}/start | Start QuickServer
[**QuickServersAPI_doQsStop**](QuickServersAPI.md#QuickServersAPI_doQsStop) | **GET** /qs/{id}/stop | Stop QuickServer
[**QuickServersAPI_downloadQsBackup**](QuickServersAPI.md#QuickServersAPI_downloadQsBackup) | **PATCH** /qs/{id}/backups | Download QuickServer Backup
[**QuickServersAPI_getNewQs**](QuickServersAPI.md#QuickServersAPI_getNewQs) | **GET** /qs/order | Get QuickServer Ordering Information
[**QuickServersAPI_getQsBackups**](QuickServersAPI.md#QuickServersAPI_getQsBackups) | **GET** /qs/{id}/backups | List QuickServer Backups
[**QuickServersAPI_getQsChangeHostname**](QuickServersAPI.md#QuickServersAPI_getQsChangeHostname) | **GET** /qs/{id}/change_hostname | Get QuickServer Hostname
[**QuickServersAPI_getQsChangeRootPassword**](QuickServersAPI.md#QuickServersAPI_getQsChangeRootPassword) | **GET** /qs/{id}/change_root_password | Get Change Root Password Info
[**QuickServersAPI_getQsChangeTimezone**](QuickServersAPI.md#QuickServersAPI_getQsChangeTimezone) | **GET** /qs/{id}/change_timezone | Get Timezone Info
[**QuickServersAPI_getQsChangeWebuzoPassword**](QuickServersAPI.md#QuickServersAPI_getQsChangeWebuzoPassword) | **GET** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info
[**QuickServersAPI_getQsInfo**](QuickServersAPI.md#QuickServersAPI_getQsInfo) | **GET** /qs/{id} | Get QuickServer Order
[**QuickServersAPI_getQsInsertCd**](QuickServersAPI.md#QuickServersAPI_getQsInsertCd) | **GET** /qs/{id}/insert_cd | Insert CD Information
[**QuickServersAPI_getQsInvoices**](QuickServersAPI.md#QuickServersAPI_getQsInvoices) | **GET** /qs/{id}/invoices | Get QuickServer Invoices
[**QuickServersAPI_getQsList**](QuickServersAPI.md#QuickServersAPI_getQsList) | **GET** /qs | List QuickServers
[**QuickServersAPI_getQsReinstallOs**](QuickServersAPI.md#QuickServersAPI_getQsReinstallOs) | **GET** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options
[**QuickServersAPI_getQsResetPassword**](QuickServersAPI.md#QuickServersAPI_getQsResetPassword) | **GET** /qs/{id}/reset_password | Reset QuickServer Password Info
[**QuickServersAPI_getQsReverseDns**](QuickServersAPI.md#QuickServersAPI_getQsReverseDns) | **GET** /qs/{id}/reverse_dns | Reverse DNS Info
[**QuickServersAPI_getQsSetupVnc**](QuickServersAPI.md#QuickServersAPI_getQsSetupVnc) | **GET** /qs/{id}/setup_vnc | VNC Setup Info
[**QuickServersAPI_getQsTrafficUsage**](QuickServersAPI.md#QuickServersAPI_getQsTrafficUsage) | **GET** /qs/{id}/traffic_usage | Get Traffic Usage
[**QuickServersAPI_getQsViewDesktop**](QuickServersAPI.md#QuickServersAPI_getQsViewDesktop) | **GET** /qs/{id}/view_desktop | Get View Desktop Info
[**QuickServersAPI_getQsWelcomeEmail**](QuickServersAPI.md#QuickServersAPI_getQsWelcomeEmail) | **GET** /qs/{id}/welcome_email | Resend QuickServer Welcome Email
[**QuickServersAPI_postQsBackup**](QuickServersAPI.md#QuickServersAPI_postQsBackup) | **POST** /qs/{id}/backup | Create QuickServer Backup
[**QuickServersAPI_postQsChangeHostname**](QuickServersAPI.md#QuickServersAPI_postQsChangeHostname) | **POST** /qs/{id}/change_hostname | Update QuickServer Hostname
[**QuickServersAPI_postQsChangeRootPassword**](QuickServersAPI.md#QuickServersAPI_postQsChangeRootPassword) | **POST** /qs/{id}/change_root_password | Change Root Password
[**QuickServersAPI_postQsChangeTimezone**](QuickServersAPI.md#QuickServersAPI_postQsChangeTimezone) | **POST** /qs/{id}/change_timezone | Change QuickServer Timezone
[**QuickServersAPI_postQsChangeWebuzoPassword**](QuickServersAPI.md#QuickServersAPI_postQsChangeWebuzoPassword) | **POST** /qs/{id}/change_webuzo_password | Change Webuzo Password
[**QuickServersAPI_postQsInsertCd**](QuickServersAPI.md#QuickServersAPI_postQsInsertCd) | **POST** /qs/{id}/insert_cd | Insert CD in QuickServer
[**QuickServersAPI_postQsReinstallOs**](QuickServersAPI.md#QuickServersAPI_postQsReinstallOs) | **POST** /qs/{id}/reinstall_os | Reinstall QuickServer OS
[**QuickServersAPI_postQsResetPassword**](QuickServersAPI.md#QuickServersAPI_postQsResetPassword) | **POST** /qs/{id}/reset_password | Reset QuickServer Password
[**QuickServersAPI_postQsReverseDns**](QuickServersAPI.md#QuickServersAPI_postQsReverseDns) | **POST** /qs/{id}/reverse_dns | Update Reverse DNS
[**QuickServersAPI_postQsSetupVnc**](QuickServersAPI.md#QuickServersAPI_postQsSetupVnc) | **POST** /qs/{id}/setup_vnc | Setup VNC
[**QuickServersAPI_postQsTrafficUsage**](QuickServersAPI.md#QuickServersAPI_postQsTrafficUsage) | **POST** /qs/{id}/traffic_usage | Search Traffic Usage
[**QuickServersAPI_postQsViewDesktop**](QuickServersAPI.md#QuickServersAPI_postQsViewDesktop) | **POST** /qs/{id}/view_desktop | Update View Desktop
[**QuickServersAPI_postQuickServerRestore**](QuickServersAPI.md#QuickServersAPI_postQuickServerRestore) | **POST** /qs/{id}/restore | Restore QuickServer from Backup
[**QuickServersAPI_putQs**](QuickServersAPI.md#QuickServersAPI_putQs) | **PUT** /qs/order | Validate QuickServer Order
[**QuickServersAPI_quickserversCancel**](QuickServersAPI.md#QuickServersAPI_quickserversCancel) | **DELETE** /qs/{id} | Cancel QuickServer Order
[**QuickServersAPI_updateQsInfo**](QuickServersAPI.md#QuickServersAPI_updateQsInfo) | **POST** /qs/{id} | Update QuickServer Order


# **QuickServersAPI_addQs**
```c
// Place QuickServer Order
//
// Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
//
void QuickServersAPI_addQs(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_deleteQsBackup**
```c
// Delete QuickServer Backup
//
// Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.
//
success_text_response_t* QuickServersAPI_deleteQsBackup(apiClient_t *apiClient, int *id, char *file, interserver_management_api_deleteQsBackup_all_e all);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 
**file** | **char \*** | The backup filename to delete. | 
**all** | **interserver_management_api_deleteQsBackup_all_e** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_doQsBlockSmtp**
```c
// Block QuickServer SMTP
//
// Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
//
queue_response_t* QuickServersAPI_doQsBlockSmtp(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number. | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_doQsDisableCd**
```c
// Disable CD Drive
//
// Disables the virtual CD drive for the QuickServer.
//
queue_response_t* QuickServersAPI_doQsDisableCd(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number. | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_doQsDisableQuota**
```c
// Disable Quotas
//
// Disables disk quota enforcement for the QuickServer.
//
queue_response_t* QuickServersAPI_doQsDisableQuota(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number. | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_doQsEjectCd**
```c
// Eject CD Drive
//
// Ejects the virtual CD from the QuickServer's CD drive.
//
queue_response_t* QuickServersAPI_doQsEjectCd(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number. | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_doQsEnableQuota**
```c
// Enable Quotas
//
// Enables disk quota enforcement for the QuickServer.
//
queue_response_t* QuickServersAPI_doQsEnableQuota(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number. | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_doQsRestart**
```c
// Restart QuickServer
//
// Restarts the QuickServer. The server will be shut down and started again.
//
queue_response_t* QuickServersAPI_doQsRestart(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number. | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_doQsStart**
```c
// Start QuickServer
//
// Powers on the QuickServer.
//
queue_response_t* QuickServersAPI_doQsStart(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number. | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_doQsStop**
```c
// Stop QuickServer
//
// Powers off the QuickServer.
//
queue_response_t* QuickServersAPI_doQsStop(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number. | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_downloadQsBackup**
```c
// Download QuickServer Backup
//
// Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
//
download_qs_backup_200_response_t* QuickServersAPI_downloadQsBackup(apiClient_t *apiClient, int *id, download_qs_backup_request_t *download_qs_backup_request, interserver_management_api_downloadQsBackup_all_e all);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 
**download_qs_backup_request** | **[download_qs_backup_request_t](download_qs_backup_request.md) \*** |  | 
**all** | **interserver_management_api_downloadQsBackup_all_e** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] 

### Return type

[download_qs_backup_200_response_t](download_qs_backup_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getNewQs**
```c
// Get QuickServer Ordering Information
//
// Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
//
quickserver_order_t* QuickServersAPI_getNewQs(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[quickserver_order_t](quickserver_order.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getQsBackups**
```c
// List QuickServer Backups
//
// Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.
//
vps_backup_rows_t* QuickServersAPI_getQsBackups(apiClient_t *apiClient, int *id, interserver_management_api_getQsBackups_all_e all);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 
**all** | **interserver_management_api_getQsBackups_all_e** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] 

### Return type

[vps_backup_rows_t](vps_backup_rows.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getQsChangeHostname**
```c
// Get QuickServer Hostname
//
// Retrieves the current hostname and any validation requirements for changing it.
//
void QuickServersAPI_getQsChangeHostname(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getQsChangeRootPassword**
```c
// Get Change Root Password Info
//
// Retrieves instructions or metadata needed to reset the root password.
//
void QuickServersAPI_getQsChangeRootPassword(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getQsChangeTimezone**
```c
// Get Timezone Info
//
// Returns the list of available timezones that can be set on the QuickServer.
//
list_t* QuickServersAPI_getQsChangeTimezone(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type


[list_t](char.md) *




### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getQsChangeWebuzoPassword**
```c
// Webuzo Change Pass Info
//
// Retrieves instructions or metadata for changing the Webuzo control panel password.
//
void QuickServersAPI_getQsChangeWebuzoPassword(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getQsInfo**
```c
// Get QuickServer Order
//
// Returns detailed QuickServer information, including credentials, IPs, and available client actions.
//
quickserver_t* QuickServersAPI_getQsInfo(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number. | 

### Return type

[quickserver_t](quickserver.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getQsInsertCd**
```c
// Insert CD Information
//
// Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.
//
void QuickServersAPI_getQsInsertCd(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getQsInvoices**
```c
// Get QuickServer Invoices
//
// Returns the billing invoices associated with this QuickServer.
//
charge_invoice_rows_t* QuickServersAPI_getQsInvoices(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

[charge_invoice_rows_t](charge_invoice_rows.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getQsList**
```c
// List QuickServers
//
// Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.
//
list_t* QuickServersAPI_getQsList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](quickserver_row.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getQsReinstallOs**
```c
// QuickServer Reinstall OS Options
//
// Returns the list of available operating system templates for reinstalling the QuickServer.
//
vps_templates_list_t* QuickServersAPI_getQsReinstallOs(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

[vps_templates_list_t](vps_templates_list.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getQsResetPassword**
```c
// Reset QuickServer Password Info
//
// Returns information needed before resetting the QuickServer's root password.
//
void QuickServersAPI_getQsResetPassword(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getQsReverseDns**
```c
// Reverse DNS Info
//
// Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.
//
reverse_dns_entries_t* QuickServersAPI_getQsReverseDns(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

[reverse_dns_entries_t](reverse_dns_entries.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getQsSetupVnc**
```c
// VNC Setup Info
//
// Returns the current VNC connection information for the QuickServer.
//
void QuickServersAPI_getQsSetupVnc(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getQsTrafficUsage**
```c
// Get Traffic Usage
//
// Returns bandwidth traffic usage data for the QuickServer.
//
void QuickServersAPI_getQsTrafficUsage(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getQsViewDesktop**
```c
// Get View Desktop Info
//
// Returns remote desktop connection information for the QuickServer.
//
void QuickServersAPI_getQsViewDesktop(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_getQsWelcomeEmail**
```c
// Resend QuickServer Welcome Email
//
// Resends the welcome email containing connection details and credentials for the QuickServer order.
//
text_response_t* QuickServersAPI_getQsWelcomeEmail(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Quickserver ID | 

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_postQsBackup**
```c
// Create QuickServer Backup
//
// Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
//
queue_response_t* QuickServersAPI_postQsBackup(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_postQsChangeHostname**
```c
// Update QuickServer Hostname
//
// Submits a hostname change request for the QuickServer.
//
queue_response_t* QuickServersAPI_postQsChangeHostname(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_postQsChangeRootPassword**
```c
// Change Root Password
//
// Triggers a root password reset for the QuickServer.
//
queue_response_t* QuickServersAPI_postQsChangeRootPassword(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_postQsChangeTimezone**
```c
// Change QuickServer Timezone
//
// Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
//
queue_response_t* QuickServersAPI_postQsChangeTimezone(apiClient_t *apiClient, int *id, char *timezone);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 
**timezone** | **char \*** | The time zone | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_postQsChangeWebuzoPassword**
```c
// Change Webuzo Password
//
// Resets the Webuzo control panel password for the QuickServer.
//
queue_response_t* QuickServersAPI_postQsChangeWebuzoPassword(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_postQsInsertCd**
```c
// Insert CD in QuickServer
//
// Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.
//
queue_response_t* QuickServersAPI_postQsInsertCd(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_postQsReinstallOs**
```c
// Reinstall QuickServer OS
//
// Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
//
queue_response_t* QuickServersAPI_postQsReinstallOs(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_postQsResetPassword**
```c
// Reset QuickServer Password
//
// Resets the root password on the QuickServer to a new randomly generated password.
//
queue_response_t* QuickServersAPI_postQsResetPassword(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_postQsReverseDns**
```c
// Update Reverse DNS
//
// Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.
//
text_response_t* QuickServersAPI_postQsReverseDns(apiClient_t *apiClient, int *id, reverse_dns_entries_t *reverse_dns_entries);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 
**reverse_dns_entries** | **[reverse_dns_entries_t](reverse_dns_entries.md) \*** |  | 

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_postQsSetupVnc**
```c
// Setup VNC
//
// Sets up or refreshes the VNC console connection for the QuickServer.
//
queue_response_t* QuickServersAPI_postQsSetupVnc(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_postQsTrafficUsage**
```c
// Search Traffic Usage
//
// Searches and filters the QuickServer's bandwidth traffic usage data by date range.
//
void QuickServersAPI_postQsTrafficUsage(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_postQsViewDesktop**
```c
// Update View Desktop
//
// Updates or refreshes the remote desktop session for the QuickServer.
//
void QuickServersAPI_postQsViewDesktop(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_postQuickServerRestore**
```c
// Restore QuickServer from Backup
//
// Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
//
queue_response_t* QuickServersAPI_postQuickServerRestore(apiClient_t *apiClient, int *id, restore_request_t *restore_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 
**restore_request** | **[restore_request_t](restore_request.md) \*** | QuickServer Restore request | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_putQs**
```c
// Validate QuickServer Order
//
// Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
//
void QuickServersAPI_putQs(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_quickserversCancel**
```c
// Cancel QuickServer Order
//
// Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
//
quickservers_cancel_200_response_t* QuickServersAPI_quickserversCancel(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | QuickServer ID number | 

### Return type

[quickservers_cancel_200_response_t](quickservers_cancel_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickServersAPI_updateQsInfo**
```c
// Update QuickServer Order
//
// Updates QuickServer metadata or stored settings associated with the order.
//
void QuickServersAPI_updateQsInfo(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | QuickServer ID number. | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

