# .VPSApi

All URIs are relative to *https://my.interserver.net/apiv2*

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


# **addVps**
> ServiceOrderPostResponse addVps()

Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiAddVpsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiAddVpsRequest = {
  
  vpsOrderPostRequest: {
    osDistro: "osDistro_example",
    slices: 1,
    vpsPlatform: "kvm",
    controlpanel: "none",
    period: 1,
    location: 1,
    osVersion: "osVersion_example",
    hostname: "",
    coupon: "",
    rootpass: "rootpass_example",
    comment: "",
  },
};

const data = await apiInstance.addVps(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vpsOrderPostRequest** | **VpsOrderPostRequest**|  |


### Return type

**ServiceOrderPostResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Order placed successfully. Use the invoice ID to proceed to payment via &#x60;/pay/{method}/{invoices}&#x60; or view the invoice at &#x60;/billing/invoices/{id}&#x60;. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **deleteVpsBackup**
> SuccessTextResponse deleteVpsBackup()

Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiDeleteVpsBackupRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiDeleteVpsBackupRequest = {
    // VPS ID number
  id: 1,
    // The backup filename to delete.
  file: "file_example",
    // Set to `1` to list all backups across all services, not just the ones for the given VPS. (optional)
  all: "0",
};

const data = await apiInstance.deleteVpsBackup(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined
 **file** | [**string**] | The backup filename to delete. | defaults to undefined
 **all** | [**&#39;0&#39; | &#39;1&#39;**]**Array<&#39;0&#39; &#124; &#39;1&#39;>** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | (optional) defaults to undefined


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

# **doVpsBlockSmtp**
> QueueResponse doVpsBlockSmtp()

Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiDoVpsBlockSmtpRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiDoVpsBlockSmtpRequest = {
    // VPS ID number.
  id: 1,
};

const data = await apiInstance.doVpsBlockSmtp(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number. | defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **doVpsDisableCd**
> QueueResponse doVpsDisableCd()

Disables the virtual CD drive on the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiDoVpsDisableCdRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiDoVpsDisableCdRequest = {
    // VPS ID number.
  id: 1,
};

const data = await apiInstance.doVpsDisableCd(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number. | defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **doVpsDisableQuota**
> QueueResponse doVpsDisableQuota()

Disables disk quota enforcement on the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiDoVpsDisableQuotaRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiDoVpsDisableQuotaRequest = {
    // VPS ID number.
  id: 1,
};

const data = await apiInstance.doVpsDisableQuota(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number. | defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **doVpsEjectCd**
> QueueResponse doVpsEjectCd()

Ejects the virtual CD from the VPS CD drive.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiDoVpsEjectCdRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiDoVpsEjectCdRequest = {
    // VPS ID number.
  id: 1,
};

const data = await apiInstance.doVpsEjectCd(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number. | defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **doVpsEnableQuota**
> QueueResponse doVpsEnableQuota()

Enables disk quota enforcement on the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiDoVpsEnableQuotaRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiDoVpsEnableQuotaRequest = {
    // VPS ID number.
  id: 1,
};

const data = await apiInstance.doVpsEnableQuota(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number. | defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **doVpsRestart**
> QueueResponse doVpsRestart()

Restarts the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiDoVpsRestartRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiDoVpsRestartRequest = {
    // VPS ID number.
  id: 1,
};

const data = await apiInstance.doVpsRestart(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number. | defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **doVpsStart**
> QueueResponse doVpsStart()

Powers on the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiDoVpsStartRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiDoVpsStartRequest = {
    // VPS ID number.
  id: 1,
};

const data = await apiInstance.doVpsStart(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number. | defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **doVpsStop**
> QueueResponse doVpsStop()

Powers off the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiDoVpsStopRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiDoVpsStopRequest = {
    // VPS ID number.
  id: 1,
};

const data = await apiInstance.doVpsStop(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number. | defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **downloadVpsBackup**
> DownloadQsBackup200Response downloadVpsBackup(downloadQsBackupRequest)

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiDownloadVpsBackupRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiDownloadVpsBackupRequest = {
    // VPS ID number
  id: 1,
  
  downloadQsBackupRequest: {
    file: "file_example",
  },
    // Set to `1` to list all backups across all services, not just the ones for the given VPS. (optional)
  all: "0",
};

const data = await apiInstance.downloadVpsBackup(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **downloadQsBackupRequest** | **DownloadQsBackupRequest**|  |
 **id** | [**number**] | VPS ID number | defaults to undefined
 **all** | [**&#39;0&#39; | &#39;1&#39;**]**Array<&#39;0&#39; &#124; &#39;1&#39;>** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | (optional) defaults to undefined


### Return type

**DownloadQsBackup200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Download URL for the backup file. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getNewVps**
> VpsOrder getNewVps()

Retrieves available VPS configurations, OS templates, and pricing for ordering.

### Example


```typescript
import { createConfiguration, VPSApi } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request = {};

const data = await apiInstance.getNewVps(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**VpsOrder**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | VPS Order information |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getVpsBackups**
> VpsBackupRows getVpsBackups()

Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiGetVpsBackupsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiGetVpsBackupsRequest = {
    // VPS ID number
  id: 1,
    // Set to `1` to list all backups across all services, not just the ones for the given VPS. (optional)
  all: "0",
};

const data = await apiInstance.getVpsBackups(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined
 **all** | [**&#39;0&#39; | &#39;1&#39;**]**Array<&#39;0&#39; &#124; &#39;1&#39;>** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | (optional) defaults to undefined


### Return type

**VpsBackupRows**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The listing of the available backups |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getVpsBuyHdSpace**
> void getVpsBuyHdSpace()

Returns available hard drive space addon options and pricing for the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiGetVpsBuyHdSpaceRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiGetVpsBuyHdSpaceRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.getVpsBuyHdSpace(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Get VPS Buy HD Space information |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getVpsBuyIp**
> void getVpsBuyIp()

Returns available additional IP address options and pricing for the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiGetVpsBuyIpRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiGetVpsBuyIpRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.getVpsBuyIp(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | VPS Buy IP information |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getVpsChangeTimezone**
> Array<string> getVpsChangeTimezone()

Returns the list of available timezones that can be set on the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiGetVpsChangeTimezoneRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiGetVpsChangeTimezoneRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.getVpsChangeTimezone(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**Array<string>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | VPS Change Timezone info response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getVpsInfo**
> Vps getVpsInfo()

Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiGetVpsInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiGetVpsInfoRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.getVpsInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**Vps**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The VPS Information |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getVpsInvoices**
> ChargeInvoiceRows getVpsInvoices()

Returns the billing invoices associated with this VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiGetVpsInvoicesRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiGetVpsInvoicesRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.getVpsInvoices(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


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
**200** | Get VPS Invoices response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getVpsList**
> Array<VpsRow> getVpsList()

Returns all VPS services on the account with their current status and configuration.

### Example


```typescript
import { createConfiguration, VPSApi } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request = {};

const data = await apiInstance.getVpsList(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**Array<VpsRow>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The listing of &#x60;Vps&#x60; services on your account. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getVpsReinstallOs**
> VpsTemplatesList getVpsReinstallOs()

Returns the list of available OS templates for reinstalling the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiGetVpsReinstallOsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiGetVpsReinstallOsRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.getVpsReinstallOs(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**VpsTemplatesList**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | VPS Reinstall OS info response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getVpsReverseDns**
> ReverseDnsEntries getVpsReverseDns()

Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiGetVpsReverseDnsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiGetVpsReverseDnsRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.getVpsReverseDns(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**ReverseDnsEntries**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | VPS Reverse DNS info response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getVpsSetupVnc**
> void getVpsSetupVnc()

Returns the current VNC connection information for the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiGetVpsSetupVncRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiGetVpsSetupVncRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.getVpsSetupVnc(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Get VPS Setup VNC Information |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getVpsSlices**
> void getVpsSlices()

Returns available slice upgrade options and pricing for the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiGetVpsSlicesRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiGetVpsSlicesRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.getVpsSlices(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | VPS Slices information |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getVpsTrafficUsage**
> VpsTrafficResponse getVpsTrafficUsage()

Returns bandwidth traffic usage data for the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiGetVpsTrafficUsageRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiGetVpsTrafficUsageRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.getVpsTrafficUsage(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**VpsTrafficResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Get VPS Traffic usage |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getVpsViewDesktop**
> void getVpsViewDesktop()

Returns remote desktop connection information for the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiGetVpsViewDesktopRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiGetVpsViewDesktopRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.getVpsViewDesktop(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Get VPS View Desktop Information |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getVpsWelcomeEmail**
> SuccessTextResponse getVpsWelcomeEmail()

Resends the welcome email containing connection details and credentials for the VPS order.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiGetVpsWelcomeEmailRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiGetVpsWelcomeEmailRequest = {
    // VPS ID
  id: "4813",
};

const data = await apiInstance.getVpsWelcomeEmail(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**string**] | VPS ID | defaults to undefined


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

# **postVpsBackup**
> QueueResponse postVpsBackup()

Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiPostVpsBackupRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiPostVpsBackupRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.postVpsBackup(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postVpsBuyHdSpace**
> void postVpsBuyHdSpace()

Purchases additional hard drive space for the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiPostVpsBuyHdSpaceRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiPostVpsBuyHdSpaceRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.postVpsBuyHdSpace(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Post Buy HD Space for VPS response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postVpsBuyIp**
> void postVpsBuyIp()

Purchases an additional IP address for the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiPostVpsBuyIpRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiPostVpsBuyIpRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.postVpsBuyIp(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Submit VPS Buy IP form response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postVpsChangeHostname**
> QueueResponse postVpsChangeHostname()

Changes the hostname of the VPS. This queues a background task to update the server.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiPostVpsChangeHostnameRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiPostVpsChangeHostnameRequest = {
    // VPS ID number
  id: 1,
  
  hostname: "hostname_example",
};

const data = await apiInstance.postVpsChangeHostname(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined
 **hostname** | [**string**] |  | (optional) defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postVpsChangeRootPassword**
> QueueResponse postVpsChangeRootPassword()

Changes the root password of the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiPostVpsChangeRootPasswordRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiPostVpsChangeRootPasswordRequest = {
    // VPS ID number
  id: 1,
  
  password: "password_example",
};

const data = await apiInstance.postVpsChangeRootPassword(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined
 **password** | [**string**] |  | defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postVpsChangeTimezone**
> QueueResponse postVpsChangeTimezone()

Changes the system timezone on the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiPostVpsChangeTimezoneRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiPostVpsChangeTimezoneRequest = {
    // VPS ID number
  id: 1,
    // The time zone
  timezone: "America/New_York",
};

const data = await apiInstance.postVpsChangeTimezone(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined
 **timezone** | [**string**] | The time zone | defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postVpsChangeWebuzoPassword**
> QueueResponse postVpsChangeWebuzoPassword()

Changes the Webuzo control panel password on the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiPostVpsChangeWebuzoPasswordRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiPostVpsChangeWebuzoPasswordRequest = {
    // VPS ID number
  id: 1,
  
  password: "password_example",
};

const data = await apiInstance.postVpsChangeWebuzoPassword(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined
 **password** | [**string**] |  | defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postVpsInsertCd**
> QueueResponse postVpsInsertCd()

Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiPostVpsInsertCdRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiPostVpsInsertCdRequest = {
    // VPS ID number
  id: 1,
  
  url: "url_example",
};

const data = await apiInstance.postVpsInsertCd(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined
 **url** | [**string**] |  | (optional) defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postVpsReinstallOs**
> QueueResponse postVpsReinstallOs()

Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiPostVpsReinstallOsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiPostVpsReinstallOsRequest = {
    // VPS ID number
  id: 1,
    // OS Template Filename
  template: "ubuntu24",
    // Password for this account.
  localPassword: "localPassword_example",
    // Password for Root / Administrator Account. (optional)
  password: "myUserPassword",
};

const data = await apiInstance.postVpsReinstallOs(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined
 **template** | [**string**] | OS Template Filename | defaults to undefined
 **localPassword** | [**string**] | Password for this account. | defaults to undefined
 **password** | [**string**] | Password for Root / Administrator Account. | (optional) defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postVpsResetPassword**
> QueueResponse postVpsResetPassword()

Resets the root password on the VPS to a new randomly generated password.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiPostVpsResetPasswordRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiPostVpsResetPasswordRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.postVpsResetPassword(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postVpsRestore**
> QueueResponse postVpsRestore(restoreRequest)

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiPostVpsRestoreRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiPostVpsRestoreRequest = {
    // VPS ID number
  id: 1,
    // VPS Restore request
  restoreRequest: {
    backup: "backup_example",
    password: "password_example",
  },
};

const data = await apiInstance.postVpsRestore(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **restoreRequest** | **RestoreRequest**| VPS Restore request |
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**400** | Response with a text message field. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postVpsReverseDns**
> TextResponse postVpsReverseDns(reverseDnsEntries)

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiPostVpsReverseDnsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiPostVpsReverseDnsRequest = {
    // VPS ID number
  id: 1,
  
  reverseDnsEntries: {
    ips: {},
  },
};

const data = await apiInstance.postVpsReverseDns(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **reverseDnsEntries** | **ReverseDnsEntries**|  |
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Update VPS Reverse DNS response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postVpsSetupVnc**
> QueueResponse postVpsSetupVnc()

Sets up or refreshes the VNC console connection for the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiPostVpsSetupVncRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiPostVpsSetupVncRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.postVpsSetupVnc(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response message from sending a service queue. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postVpsSlices**
> void postVpsSlices()

Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiPostVpsSlicesRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiPostVpsSlicesRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.postVpsSlices(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Update VPS slices response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postVpsViewDesktop**
> void postVpsViewDesktop()

Updates or refreshes the remote desktop session for the VPS.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiPostVpsViewDesktopRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiPostVpsViewDesktopRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.postVpsViewDesktop(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Submit VPS View Desktop Information |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **putVps**
> VpsOrderPutResponse putVps()

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiPutVpsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiPutVpsRequest = {
  
  vpsOrderPutRequest: {
    osDistro: "osDistro_example",
    slices: 1,
    vpsPlatform: "kvm",
    controlpanel: "none",
    period: 1,
    location: 1,
    osVersion: "osVersion_example",
    hostname: "",
    coupon: "",
    rootpass: "rootpass_example",
    comment: "",
  },
};

const data = await apiInstance.putVps(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vpsOrderPutRequest** | **VpsOrderPutRequest**|  |


### Return type

**VpsOrderPutResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Validate VPS order response. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateVpsInfo**
> SuccessTextResponse updateVpsInfo()

Updates settings on a VPS order.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiUpdateVpsInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiUpdateVpsInfoRequest = {
    // VPS ID number.
  id: "id_example",
};

const data = await apiInstance.updateVpsInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**string**] | VPS ID number. | defaults to undefined


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

# **vPSCancel**
> VPSCancel200Response vPSCancel()

Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example


```typescript
import { createConfiguration, VPSApi } from '';
import type { VPSApiVPSCancelRequest } from '';

const configuration = createConfiguration();
const apiInstance = new VPSApi(configuration);

const request: VPSApiVPSCancelRequest = {
    // VPS ID number
  id: 1,
};

const data = await apiInstance.vPSCancel(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | VPS ID number | defaults to undefined


### Return type

**VPSCancel200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | VPS Cancel |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)


