# VPSAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**VPSAPI_addVps**](VPSAPI.md#VPSAPI_addVps) | **POST** /vps/order | Place VPS Order
[**VPSAPI_deleteVpsBackup**](VPSAPI.md#VPSAPI_deleteVpsBackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup
[**VPSAPI_doVpsBlockSmtp**](VPSAPI.md#VPSAPI_doVpsBlockSmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP
[**VPSAPI_doVpsDisableCd**](VPSAPI.md#VPSAPI_doVpsDisableCd) | **GET** /vps/{id}/disable_cd | Disable CD Drive
[**VPSAPI_doVpsDisableQuota**](VPSAPI.md#VPSAPI_doVpsDisableQuota) | **GET** /vps/{id}/disable_quota | Disable Quotas
[**VPSAPI_doVpsEjectCd**](VPSAPI.md#VPSAPI_doVpsEjectCd) | **GET** /vps/{id}/eject_cd | Eject CD Drive
[**VPSAPI_doVpsEnableQuota**](VPSAPI.md#VPSAPI_doVpsEnableQuota) | **GET** /vps/{id}/enable_quota | Enable Quotas
[**VPSAPI_doVpsRestart**](VPSAPI.md#VPSAPI_doVpsRestart) | **GET** /vps/{id}/restart | Restart VPS
[**VPSAPI_doVpsStart**](VPSAPI.md#VPSAPI_doVpsStart) | **GET** /vps/{id}/start | Start VPS
[**VPSAPI_doVpsStop**](VPSAPI.md#VPSAPI_doVpsStop) | **GET** /vps/{id}/stop | Stop VPS
[**VPSAPI_downloadVpsBackup**](VPSAPI.md#VPSAPI_downloadVpsBackup) | **PATCH** /vps/{id}/backups | Download VPS Backup
[**VPSAPI_getNewVps**](VPSAPI.md#VPSAPI_getNewVps) | **GET** /vps/order | VPS Ordering Information
[**VPSAPI_getVpsBackups**](VPSAPI.md#VPSAPI_getVpsBackups) | **GET** /vps/{id}/backups | Get VPS Backups List
[**VPSAPI_getVpsBuyHdSpace**](VPSAPI.md#VPSAPI_getVpsBuyHdSpace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info
[**VPSAPI_getVpsBuyIp**](VPSAPI.md#VPSAPI_getVpsBuyIp) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info
[**VPSAPI_getVpsChangeTimezone**](VPSAPI.md#VPSAPI_getVpsChangeTimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info
[**VPSAPI_getVpsInfo**](VPSAPI.md#VPSAPI_getVpsInfo) | **GET** /vps/{id} | Get VPS Order
[**VPSAPI_getVpsInvoices**](VPSAPI.md#VPSAPI_getVpsInvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices
[**VPSAPI_getVpsList**](VPSAPI.md#VPSAPI_getVpsList) | **GET** /vps | List VPS Orders
[**VPSAPI_getVpsReinstallOs**](VPSAPI.md#VPSAPI_getVpsReinstallOs) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options
[**VPSAPI_getVpsReverseDns**](VPSAPI.md#VPSAPI_getVpsReverseDns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info
[**VPSAPI_getVpsSetupVnc**](VPSAPI.md#VPSAPI_getVpsSetupVnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info
[**VPSAPI_getVpsSlices**](VPSAPI.md#VPSAPI_getVpsSlices) | **GET** /vps/{id}/slices | Slice Upgrade Info
[**VPSAPI_getVpsTrafficUsage**](VPSAPI.md#VPSAPI_getVpsTrafficUsage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage
[**VPSAPI_getVpsViewDesktop**](VPSAPI.md#VPSAPI_getVpsViewDesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info
[**VPSAPI_getVpsWelcomeEmail**](VPSAPI.md#VPSAPI_getVpsWelcomeEmail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email
[**VPSAPI_postVpsBackup**](VPSAPI.md#VPSAPI_postVpsBackup) | **GET** /vps/{id}/backup | Start a VPS Backup
[**VPSAPI_postVpsBuyHdSpace**](VPSAPI.md#VPSAPI_postVpsBuyHdSpace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon
[**VPSAPI_postVpsBuyIp**](VPSAPI.md#VPSAPI_postVpsBuyIp) | **POST** /vps/{id}/buy_ip | Purchase Additional IP
[**VPSAPI_postVpsChangeHostname**](VPSAPI.md#VPSAPI_postVpsChangeHostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname
[**VPSAPI_postVpsChangeRootPassword**](VPSAPI.md#VPSAPI_postVpsChangeRootPassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password
[**VPSAPI_postVpsChangeTimezone**](VPSAPI.md#VPSAPI_postVpsChangeTimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone
[**VPSAPI_postVpsChangeWebuzoPassword**](VPSAPI.md#VPSAPI_postVpsChangeWebuzoPassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password
[**VPSAPI_postVpsInsertCd**](VPSAPI.md#VPSAPI_postVpsInsertCd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS
[**VPSAPI_postVpsReinstallOs**](VPSAPI.md#VPSAPI_postVpsReinstallOs) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS
[**VPSAPI_postVpsResetPassword**](VPSAPI.md#VPSAPI_postVpsResetPassword) | **POST** /vps/{id}/reset_password | Reset VPS Password
[**VPSAPI_postVpsRestore**](VPSAPI.md#VPSAPI_postVpsRestore) | **POST** /vps/{id}/restore | Restore VPS from Backup
[**VPSAPI_postVpsReverseDns**](VPSAPI.md#VPSAPI_postVpsReverseDns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS
[**VPSAPI_postVpsSetupVnc**](VPSAPI.md#VPSAPI_postVpsSetupVnc) | **POST** /vps/{id}/setup_vnc | Setup VNC
[**VPSAPI_postVpsSlices**](VPSAPI.md#VPSAPI_postVpsSlices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade
[**VPSAPI_postVpsViewDesktop**](VPSAPI.md#VPSAPI_postVpsViewDesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop
[**VPSAPI_putVps**](VPSAPI.md#VPSAPI_putVps) | **PUT** /vps/order | Validate VPS Order
[**VPSAPI_updateVpsInfo**](VPSAPI.md#VPSAPI_updateVpsInfo) | **POST** /vps/{id} | Update VPS Order
[**VPSAPI_vPSCancel**](VPSAPI.md#VPSAPI_vPSCancel) | **DELETE** /vps/{id} | Cancel VPS Service


# **VPSAPI_addVps**
```c
// Place VPS Order
//
// Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
//
service_order_post_response_t* VPSAPI_addVps(apiClient_t *apiClient, vps_order_post_request_t *vps_order_post_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**vps_order_post_request** | **[vps_order_post_request_t](vps_order_post_request.md) \*** |  | [optional] 

### Return type

[service_order_post_response_t](service_order_post_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_deleteVpsBackup**
```c
// Delete VPS Backup
//
// Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.
//
success_text_response_t* VPSAPI_deleteVpsBackup(apiClient_t *apiClient, int *id, char *file, interserver_management_api_deleteVpsBackup_all_e all);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 
**file** | **char \*** | The backup filename to delete. | 
**all** | **interserver_management_api_deleteVpsBackup_all_e** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_doVpsBlockSmtp**
```c
// Blocks SMTP
//
// Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
//
queue_response_t* VPSAPI_doVpsBlockSmtp(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number. | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_doVpsDisableCd**
```c
// Disable CD Drive
//
// Disables the virtual CD drive on the VPS.
//
queue_response_t* VPSAPI_doVpsDisableCd(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number. | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_doVpsDisableQuota**
```c
// Disable Quotas
//
// Disables disk quota enforcement on the VPS.
//
queue_response_t* VPSAPI_doVpsDisableQuota(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number. | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_doVpsEjectCd**
```c
// Eject CD Drive
//
// Ejects the virtual CD from the VPS CD drive.
//
queue_response_t* VPSAPI_doVpsEjectCd(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number. | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_doVpsEnableQuota**
```c
// Enable Quotas
//
// Enables disk quota enforcement on the VPS.
//
queue_response_t* VPSAPI_doVpsEnableQuota(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number. | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_doVpsRestart**
```c
// Restart VPS
//
// Restarts the VPS.
//
queue_response_t* VPSAPI_doVpsRestart(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number. | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_doVpsStart**
```c
// Start VPS
//
// Powers on the VPS.
//
queue_response_t* VPSAPI_doVpsStart(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number. | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_doVpsStop**
```c
// Stop VPS
//
// Powers off the VPS.
//
queue_response_t* VPSAPI_doVpsStop(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number. | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_downloadVpsBackup**
```c
// Download VPS Backup
//
// Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
//
download_qs_backup_200_response_t* VPSAPI_downloadVpsBackup(apiClient_t *apiClient, int *id, download_qs_backup_request_t *download_qs_backup_request, interserver_management_api_downloadVpsBackup_all_e all);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 
**download_qs_backup_request** | **[download_qs_backup_request_t](download_qs_backup_request.md) \*** |  | 
**all** | **interserver_management_api_downloadVpsBackup_all_e** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] 

### Return type

[download_qs_backup_200_response_t](download_qs_backup_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_getNewVps**
```c
// VPS Ordering Information
//
// Retrieves available VPS configurations, OS templates, and pricing for ordering.
//
vps_order_t* VPSAPI_getNewVps(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[vps_order_t](vps_order.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_getVpsBackups**
```c
// Get VPS Backups List
//
// Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.
//
vps_backup_rows_t* VPSAPI_getVpsBackups(apiClient_t *apiClient, int *id, interserver_management_api_getVpsBackups_all_e all);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 
**all** | **interserver_management_api_getVpsBackups_all_e** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] 

### Return type

[vps_backup_rows_t](vps_backup_rows.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_getVpsBuyHdSpace**
```c
// HD Space Addon Info
//
// Returns available hard drive space addon options and pricing for the VPS.
//
void VPSAPI_getVpsBuyHdSpace(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_getVpsBuyIp**
```c
// Additional IP Addon Info
//
// Returns available additional IP address options and pricing for the VPS.
//
void VPSAPI_getVpsBuyIp(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_getVpsChangeTimezone**
```c
// Get Timezone Info
//
// Returns the list of available timezones that can be set on the VPS.
//
list_t* VPSAPI_getVpsChangeTimezone(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type


[list_t](char.md) *




### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_getVpsInfo**
```c
// Get VPS Order
//
// Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
//
vps_t* VPSAPI_getVpsInfo(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

[vps_t](vps.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_getVpsInvoices**
```c
// Get VPS Invoices
//
// Returns the billing invoices associated with this VPS.
//
charge_invoice_rows_t* VPSAPI_getVpsInvoices(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

[charge_invoice_rows_t](charge_invoice_rows.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_getVpsList**
```c
// List VPS Orders
//
// Returns all VPS services on the account with their current status and configuration.
//
list_t* VPSAPI_getVpsList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](vps_row.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_getVpsReinstallOs**
```c
// VPS Reinstall OS Options
//
// Returns the list of available OS templates for reinstalling the VPS.
//
vps_templates_list_t* VPSAPI_getVpsReinstallOs(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

[vps_templates_list_t](vps_templates_list.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_getVpsReverseDns**
```c
// Reverse DNS Info
//
// Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
//
reverse_dns_entries_t* VPSAPI_getVpsReverseDns(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

[reverse_dns_entries_t](reverse_dns_entries.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_getVpsSetupVnc**
```c
// VNC Setup Info
//
// Returns the current VNC connection information for the VPS.
//
void VPSAPI_getVpsSetupVnc(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_getVpsSlices**
```c
// Slice Upgrade Info
//
// Returns available slice upgrade options and pricing for the VPS.
//
void VPSAPI_getVpsSlices(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_getVpsTrafficUsage**
```c
// Get Traffic Usage
//
// Returns bandwidth traffic usage data for the VPS.
//
vps_traffic_response_t* VPSAPI_getVpsTrafficUsage(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

[vps_traffic_response_t](vps_traffic_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_getVpsViewDesktop**
```c
// Get View Desktop Info
//
// Returns remote desktop connection information for the VPS.
//
void VPSAPI_getVpsViewDesktop(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_getVpsWelcomeEmail**
```c
// Resend VPS Welcome Email
//
// Resends the welcome email containing connection details and credentials for the VPS order.
//
success_text_response_t* VPSAPI_getVpsWelcomeEmail(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | VPS ID | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_postVpsBackup**
```c
// Start a VPS Backup
//
// Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
//
queue_response_t* VPSAPI_postVpsBackup(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_postVpsBuyHdSpace**
```c
// Purchase HD Space Addon
//
// Purchases additional hard drive space for the VPS.
//
void VPSAPI_postVpsBuyHdSpace(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_postVpsBuyIp**
```c
// Purchase Additional IP
//
// Purchases an additional IP address for the VPS.
//
void VPSAPI_postVpsBuyIp(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_postVpsChangeHostname**
```c
// Update VPS Hostname
//
// Changes the hostname of the VPS. This queues a background task to update the server.
//
queue_response_t* VPSAPI_postVpsChangeHostname(apiClient_t *apiClient, int *id, char *hostname);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 
**hostname** | **char \*** |  | [optional] 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_postVpsChangeRootPassword**
```c
// Change VPS Root Password
//
// Changes the root password of the VPS.
//
queue_response_t* VPSAPI_postVpsChangeRootPassword(apiClient_t *apiClient, int *id, char *password);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 
**password** | **char \*** |  | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_postVpsChangeTimezone**
```c
// Change VPS Timezone
//
// Changes the system timezone on the VPS.
//
queue_response_t* VPSAPI_postVpsChangeTimezone(apiClient_t *apiClient, int *id, char *timezone);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 
**timezone** | **char \*** | The time zone | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_postVpsChangeWebuzoPassword**
```c
// Change Webuzo Password
//
// Changes the Webuzo control panel password on the VPS.
//
queue_response_t* VPSAPI_postVpsChangeWebuzoPassword(apiClient_t *apiClient, int *id, char *password);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 
**password** | **char \*** |  | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_postVpsInsertCd**
```c
// Insert CD in VPS
//
// Mounts an ISO image in the VPS virtual CD drive from the given URL.
//
queue_response_t* VPSAPI_postVpsInsertCd(apiClient_t *apiClient, int *id, char *url);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 
**url** | **char \*** |  | [optional] 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_postVpsReinstallOs**
```c
// Reinstall VPS OS
//
// Reinstalls the operating system on the VPS. Warning - all data will be erased.
//
queue_response_t* VPSAPI_postVpsReinstallOs(apiClient_t *apiClient, int *id, char *_template, char *localPassword, char *password);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 
**_template** | **char \*** | OS Template Filename | 
**localPassword** | **char \*** | Password for this account. | 
**password** | **char \*** | Password for Root / Administrator Account. | [optional] 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_postVpsResetPassword**
```c
// Reset VPS Password
//
// Resets the root password on the VPS to a new randomly generated password.
//
queue_response_t* VPSAPI_postVpsResetPassword(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_postVpsRestore**
```c
// Restore VPS from Backup
//
// Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
//
queue_response_t* VPSAPI_postVpsRestore(apiClient_t *apiClient, int *id, restore_request_t *restore_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 
**restore_request** | **[restore_request_t](restore_request.md) \*** | VPS Restore request | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_postVpsReverseDns**
```c
// Update Reverse DNS
//
// Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
//
text_response_t* VPSAPI_postVpsReverseDns(apiClient_t *apiClient, int *id, reverse_dns_entries_t *reverse_dns_entries);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 
**reverse_dns_entries** | **[reverse_dns_entries_t](reverse_dns_entries.md) \*** |  | 

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_postVpsSetupVnc**
```c
// Setup VNC
//
// Sets up or refreshes the VNC console connection for the VPS.
//
queue_response_t* VPSAPI_postVpsSetupVnc(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

[queue_response_t](queue_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_postVpsSlices**
```c
// Purchase Slice Upgrade
//
// Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
//
void VPSAPI_postVpsSlices(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_postVpsViewDesktop**
```c
// Update View Desktop
//
// Updates or refreshes the remote desktop session for the VPS.
//
void VPSAPI_postVpsViewDesktop(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_putVps**
```c
// Validate VPS Order
//
// Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
//
vps_order_put_response_t* VPSAPI_putVps(apiClient_t *apiClient, vps_order_put_request_t *vps_order_put_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**vps_order_put_request** | **[vps_order_put_request_t](vps_order_put_request.md) \*** |  | [optional] 

### Return type

[vps_order_put_response_t](vps_order_put_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_updateVpsInfo**
```c
// Update VPS Order
//
// Updates settings on a VPS order.
//
success_text_response_t* VPSAPI_updateVpsInfo(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | VPS ID number. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VPSAPI_vPSCancel**
```c
// Cancel VPS Service
//
// Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
//
vps_cancel_200_response_t* VPSAPI_vPSCancel(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | VPS ID number | 

### Return type

[vps_cancel_200_response_t](vps_cancel_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

