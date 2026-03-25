# VPSApi

All URIs are relative to *https://my.interserver.net/apiv2*

|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|[**addVps**](#addvps) | **POST** /vps/order | Place VPS Order|
|[**deleteVpsBackup**](#deletevpsbackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup|
|[**doVpsBlockSmtp**](#dovpsblocksmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP|
|[**doVpsDisableCd**](#dovpsdisablecd) | **GET** /vps/{id}/disable_cd | Disable CD Drive|
|[**doVpsDisableQuota**](#dovpsdisablequota) | **GET** /vps/{id}/disable_quota | Disable Quotas|
|[**doVpsEjectCd**](#dovpsejectcd) | **GET** /vps/{id}/eject_cd | Eject CD Drive|
|[**doVpsEnableQuota**](#dovpsenablequota) | **GET** /vps/{id}/enable_quota | Enable Quotas|
|[**doVpsRestart**](#dovpsrestart) | **GET** /vps/{id}/restart | Restart VPS|
|[**doVpsStart**](#dovpsstart) | **GET** /vps/{id}/start | Start VPS|
|[**doVpsStop**](#dovpsstop) | **GET** /vps/{id}/stop | Stop VPS|
|[**downloadVpsBackup**](#downloadvpsbackup) | **PATCH** /vps/{id}/backups | Download VPS Backup|
|[**getNewVps**](#getnewvps) | **GET** /vps/order | VPS Ordering Information|
|[**getVpsBackups**](#getvpsbackups) | **GET** /vps/{id}/backups | Get VPS Backups List|
|[**getVpsBuyHdSpace**](#getvpsbuyhdspace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info|
|[**getVpsBuyIp**](#getvpsbuyip) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info|
|[**getVpsChangeTimezone**](#getvpschangetimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info|
|[**getVpsInfo**](#getvpsinfo) | **GET** /vps/{id} | Get VPS Order|
|[**getVpsInvoices**](#getvpsinvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices|
|[**getVpsList**](#getvpslist) | **GET** /vps | List VPS Orders|
|[**getVpsReinstallOs**](#getvpsreinstallos) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options|
|[**getVpsReverseDns**](#getvpsreversedns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info|
|[**getVpsSetupVnc**](#getvpssetupvnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info|
|[**getVpsSlices**](#getvpsslices) | **GET** /vps/{id}/slices | Slice Upgrade Info|
|[**getVpsTrafficUsage**](#getvpstrafficusage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage|
|[**getVpsViewDesktop**](#getvpsviewdesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info|
|[**getVpsWelcomeEmail**](#getvpswelcomeemail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email|
|[**postVpsBackup**](#postvpsbackup) | **GET** /vps/{id}/backup | Start a VPS Backup|
|[**postVpsBuyHdSpace**](#postvpsbuyhdspace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon|
|[**postVpsBuyIp**](#postvpsbuyip) | **POST** /vps/{id}/buy_ip | Purchase Additional IP|
|[**postVpsChangeHostname**](#postvpschangehostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname|
|[**postVpsChangeRootPassword**](#postvpschangerootpassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password|
|[**postVpsChangeTimezone**](#postvpschangetimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone|
|[**postVpsChangeWebuzoPassword**](#postvpschangewebuzopassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password|
|[**postVpsInsertCd**](#postvpsinsertcd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS|
|[**postVpsReinstallOs**](#postvpsreinstallos) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS|
|[**postVpsResetPassword**](#postvpsresetpassword) | **POST** /vps/{id}/reset_password | Reset VPS Password|
|[**postVpsRestore**](#postvpsrestore) | **POST** /vps/{id}/restore | Restore VPS from Backup|
|[**postVpsReverseDns**](#postvpsreversedns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS|
|[**postVpsSetupVnc**](#postvpssetupvnc) | **POST** /vps/{id}/setup_vnc | Setup VNC|
|[**postVpsSlices**](#postvpsslices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade|
|[**postVpsViewDesktop**](#postvpsviewdesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop|
|[**putVps**](#putvps) | **PUT** /vps/order | Validate VPS Order|
|[**updateVpsInfo**](#updatevpsinfo) | **POST** /vps/{id} | Update VPS Order|
|[**vPSCancel**](#vpscancel) | **DELETE** /vps/{id} | Cancel VPS Service|

# **addVps**
> addVps()

Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.

### Example

```typescript
import {
    VPSApi,
    Configuration,
    VpsOrderPostRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let vpsOrderPostRequest: VpsOrderPostRequest; // (optional)

const { status, data } = await apiInstance.addVps(
    vpsOrderPostRequest
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **vpsOrderPostRequest** | **VpsOrderPostRequest**|  | |


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
|**401** | Unauthorized |  -  |
|**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVpsBackup**
> SuccessTextResponse deleteVpsBackup()

Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)
let file: string; //The backup filename to delete. (default to undefined)
let all: '0' | '1'; //Set to `1` to list all backups across all services, not just the ones for the given VPS. (optional) (default to undefined)

const { status, data } = await apiInstance.deleteVpsBackup(
    id,
    file,
    all
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|
| **file** | [**string**] | The backup filename to delete. | defaults to undefined|
| **all** | [**&#39;0&#39; | &#39;1&#39;**]**Array<&#39;0&#39; &#124; &#39;1&#39;>** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | (optional) defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doVpsBlockSmtp**
> QueueResponse doVpsBlockSmtp()

Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number. (default to undefined)

const { status, data } = await apiInstance.doVpsBlockSmtp(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number. | defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doVpsDisableCd**
> QueueResponse doVpsDisableCd()

Disables the virtual CD drive on the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number. (default to undefined)

const { status, data } = await apiInstance.doVpsDisableCd(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number. | defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doVpsDisableQuota**
> QueueResponse doVpsDisableQuota()

Disables disk quota enforcement on the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number. (default to undefined)

const { status, data } = await apiInstance.doVpsDisableQuota(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number. | defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doVpsEjectCd**
> QueueResponse doVpsEjectCd()

Ejects the virtual CD from the VPS CD drive.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number. (default to undefined)

const { status, data } = await apiInstance.doVpsEjectCd(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number. | defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doVpsEnableQuota**
> QueueResponse doVpsEnableQuota()

Enables disk quota enforcement on the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number. (default to undefined)

const { status, data } = await apiInstance.doVpsEnableQuota(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number. | defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doVpsRestart**
> QueueResponse doVpsRestart()

Restarts the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number. (default to undefined)

const { status, data } = await apiInstance.doVpsRestart(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number. | defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doVpsStart**
> QueueResponse doVpsStart()

Powers on the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number. (default to undefined)

const { status, data } = await apiInstance.doVpsStart(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number. | defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **doVpsStop**
> QueueResponse doVpsStop()

Powers off the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number. (default to undefined)

const { status, data } = await apiInstance.doVpsStop(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number. | defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **downloadVpsBackup**
> DownloadQsBackup200Response downloadVpsBackup(downloadQsBackupRequest)

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.

### Example

```typescript
import {
    VPSApi,
    Configuration,
    DownloadQsBackupRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)
let downloadQsBackupRequest: DownloadQsBackupRequest; //
let all: '0' | '1'; //Set to `1` to list all backups across all services, not just the ones for the given VPS. (optional) (default to undefined)

const { status, data } = await apiInstance.downloadVpsBackup(
    id,
    downloadQsBackupRequest,
    all
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **downloadQsBackupRequest** | **DownloadQsBackupRequest**|  | |
| **id** | [**number**] | VPS ID number | defaults to undefined|
| **all** | [**&#39;0&#39; | &#39;1&#39;**]**Array<&#39;0&#39; &#124; &#39;1&#39;>** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | (optional) defaults to undefined|


### Return type

**DownloadQsBackup200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Download URL for the backup file. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getNewVps**
> VpsOrder getNewVps()

Retrieves available VPS configurations, OS templates, and pricing for ordering.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

const { status, data } = await apiInstance.getNewVps();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**VpsOrder**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | VPS Order information |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsBackups**
> VpsBackupRows getVpsBackups()

Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)
let all: '0' | '1'; //Set to `1` to list all backups across all services, not just the ones for the given VPS. (optional) (default to undefined)

const { status, data } = await apiInstance.getVpsBackups(
    id,
    all
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|
| **all** | [**&#39;0&#39; | &#39;1&#39;**]**Array<&#39;0&#39; &#124; &#39;1&#39;>** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | (optional) defaults to undefined|


### Return type

**VpsBackupRows**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | The listing of the available backups |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsBuyHdSpace**
> getVpsBuyHdSpace()

Returns available hard drive space addon options and pricing for the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.getVpsBuyHdSpace(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


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
|**200** | Get VPS Buy HD Space information |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsBuyIp**
> getVpsBuyIp()

Returns available additional IP address options and pricing for the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.getVpsBuyIp(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


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
|**200** | VPS Buy IP information |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsChangeTimezone**
> Array<string> getVpsChangeTimezone()

Returns the list of available timezones that can be set on the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.getVpsChangeTimezone(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


### Return type

**Array<string>**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | VPS Change Timezone info response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsInfo**
> Vps getVpsInfo()

Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.getVpsInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


### Return type

**Vps**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | The VPS Information |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsInvoices**
> ChargeInvoiceRows getVpsInvoices()

Returns the billing invoices associated with this VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.getVpsInvoices(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


### Return type

**ChargeInvoiceRows**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Get VPS Invoices response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsList**
> Array<VpsRow> getVpsList()

Returns all VPS services on the account with their current status and configuration.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

const { status, data } = await apiInstance.getVpsList();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**Array<VpsRow>**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | The listing of &#x60;Vps&#x60; services on your account. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsReinstallOs**
> VpsTemplatesList getVpsReinstallOs()

Returns the list of available OS templates for reinstalling the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.getVpsReinstallOs(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


### Return type

**VpsTemplatesList**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | VPS Reinstall OS info response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsReverseDns**
> ReverseDnsEntries getVpsReverseDns()

Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.getVpsReverseDns(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


### Return type

**ReverseDnsEntries**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | VPS Reverse DNS info response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsSetupVnc**
> getVpsSetupVnc()

Returns the current VNC connection information for the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.getVpsSetupVnc(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


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
|**200** | Get VPS Setup VNC Information |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsSlices**
> getVpsSlices()

Returns available slice upgrade options and pricing for the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.getVpsSlices(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


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
|**200** | VPS Slices information |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsTrafficUsage**
> VpsTrafficResponse getVpsTrafficUsage()

Returns bandwidth traffic usage data for the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.getVpsTrafficUsage(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


### Return type

**VpsTrafficResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Get VPS Traffic usage |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsViewDesktop**
> getVpsViewDesktop()

Returns remote desktop connection information for the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.getVpsViewDesktop(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


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
|**200** | Get VPS View Desktop Information |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVpsWelcomeEmail**
> SuccessTextResponse getVpsWelcomeEmail()

Resends the welcome email containing connection details and credentials for the VPS order.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: string; //VPS ID (default to undefined)

const { status, data } = await apiInstance.getVpsWelcomeEmail(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**string**] | VPS ID | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsBackup**
> QueueResponse postVpsBackup()

Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.postVpsBackup(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsBuyHdSpace**
> postVpsBuyHdSpace()

Purchases additional hard drive space for the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.postVpsBuyHdSpace(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


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
|**200** | Post Buy HD Space for VPS response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsBuyIp**
> postVpsBuyIp()

Purchases an additional IP address for the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.postVpsBuyIp(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


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
|**200** | Submit VPS Buy IP form response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsChangeHostname**
> QueueResponse postVpsChangeHostname()

Changes the hostname of the VPS. This queues a background task to update the server.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)
let hostname: string; // (optional) (default to undefined)

const { status, data } = await apiInstance.postVpsChangeHostname(
    id,
    hostname
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|
| **hostname** | [**string**] |  | (optional) defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsChangeRootPassword**
> QueueResponse postVpsChangeRootPassword()

Changes the root password of the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)
let password: string; // (default to undefined)

const { status, data } = await apiInstance.postVpsChangeRootPassword(
    id,
    password
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|
| **password** | [**string**] |  | defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsChangeTimezone**
> QueueResponse postVpsChangeTimezone()

Changes the system timezone on the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)
let timezone: string; //The time zone (default to undefined)

const { status, data } = await apiInstance.postVpsChangeTimezone(
    id,
    timezone
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|
| **timezone** | [**string**] | The time zone | defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsChangeWebuzoPassword**
> QueueResponse postVpsChangeWebuzoPassword()

Changes the Webuzo control panel password on the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)
let password: string; // (default to undefined)

const { status, data } = await apiInstance.postVpsChangeWebuzoPassword(
    id,
    password
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|
| **password** | [**string**] |  | defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsInsertCd**
> QueueResponse postVpsInsertCd()

Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)
let url: string; // (optional) (default to undefined)

const { status, data } = await apiInstance.postVpsInsertCd(
    id,
    url
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|
| **url** | [**string**] |  | (optional) defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsReinstallOs**
> QueueResponse postVpsReinstallOs()

Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)
let template: string; //OS Template Filename (default to undefined)
let localPassword: string; //Password for this account. (default to undefined)
let password: string; //Password for Root / Administrator Account. (optional) (default to undefined)

const { status, data } = await apiInstance.postVpsReinstallOs(
    id,
    template,
    localPassword,
    password
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|
| **template** | [**string**] | OS Template Filename | defaults to undefined|
| **localPassword** | [**string**] | Password for this account. | defaults to undefined|
| **password** | [**string**] | Password for Root / Administrator Account. | (optional) defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsResetPassword**
> QueueResponse postVpsResetPassword()

Resets the root password on the VPS to a new randomly generated password.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.postVpsResetPassword(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsRestore**
> QueueResponse postVpsRestore(restoreRequest)

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.

### Example

```typescript
import {
    VPSApi,
    Configuration,
    RestoreRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)
let restoreRequest: RestoreRequest; //VPS Restore request

const { status, data } = await apiInstance.postVpsRestore(
    id,
    restoreRequest
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **restoreRequest** | **RestoreRequest**| VPS Restore request | |
| **id** | [**number**] | VPS ID number | defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**400** | Response with a text message field. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsReverseDns**
> TextResponse postVpsReverseDns(reverseDnsEntries)

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Example

```typescript
import {
    VPSApi,
    Configuration,
    ReverseDnsEntries
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)
let reverseDnsEntries: ReverseDnsEntries; //

const { status, data } = await apiInstance.postVpsReverseDns(
    id,
    reverseDnsEntries
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **reverseDnsEntries** | **ReverseDnsEntries**|  | |
| **id** | [**number**] | VPS ID number | defaults to undefined|


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Update VPS Reverse DNS response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsSetupVnc**
> QueueResponse postVpsSetupVnc()

Sets up or refreshes the VNC console connection for the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.postVpsSetupVnc(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


### Return type

**QueueResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response message from sending a service queue. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsSlices**
> postVpsSlices()

Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.postVpsSlices(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


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
|**200** | Update VPS slices response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postVpsViewDesktop**
> postVpsViewDesktop()

Updates or refreshes the remote desktop session for the VPS.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.postVpsViewDesktop(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


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
|**200** | Submit VPS View Desktop Information |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **putVps**
> VpsOrderPutResponse putVps()

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Example

```typescript
import {
    VPSApi,
    Configuration,
    VpsOrderPutRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let vpsOrderPutRequest: VpsOrderPutRequest; // (optional)

const { status, data } = await apiInstance.putVps(
    vpsOrderPutRequest
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **vpsOrderPutRequest** | **VpsOrderPutRequest**|  | |


### Return type

**VpsOrderPutResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Validate VPS order response. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateVpsInfo**
> updateVpsInfo()

Updates settings on a VPS order.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: string; //VPS ID number. (default to undefined)

const { status, data } = await apiInstance.updateVpsInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**string**] | VPS ID number. | defaults to undefined|


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
|**401** | Unauthorized |  -  |
|**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vPSCancel**
> VPSCancel200Response vPSCancel()

Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example

```typescript
import {
    VPSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new VPSApi(configuration);

let id: number; //VPS ID number (default to undefined)

const { status, data } = await apiInstance.vPSCancel(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | VPS ID number | defaults to undefined|


### Return type

**VPSCancel200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | VPS Cancel |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

