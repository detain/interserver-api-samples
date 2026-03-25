# QuickServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|[**addQs**](#addqs) | **POST** /qs/order | Place QuickServer Order|
|[**deleteQsBackup**](#deleteqsbackup) | **DELETE** /qs/{id}/backups | Delete QuickServer Backup|
|[**doQsBlockSmtp**](#doqsblocksmtp) | **GET** /qs/{id}/block_smtp | Block QuickServer SMTP|
|[**doQsDisableCd**](#doqsdisablecd) | **GET** /qs/{id}/disable_cd | Disable CD Drive|
|[**doQsDisableQuota**](#doqsdisablequota) | **GET** /qs/{id}/disable_quota | Disable Quotas|
|[**doQsEjectCd**](#doqsejectcd) | **GET** /qs/{id}/eject_cd | Eject CD Drive|
|[**doQsEnableQuota**](#doqsenablequota) | **GET** /qs/{id}/enable_quota | Enable Quotas|
|[**doQsRestart**](#doqsrestart) | **GET** /qs/{id}/restart | Restart QuickServer|
|[**doQsStart**](#doqsstart) | **GET** /qs/{id}/start | Start QuickServer|
|[**doQsStop**](#doqsstop) | **GET** /qs/{id}/stop | Stop QuickServer|
|[**downloadQsBackup**](#downloadqsbackup) | **PATCH** /qs/{id}/backups | Download QuickServer Backup|
|[**getNewQs**](#getnewqs) | **GET** /qs/order | Get QuickServer Ordering Information|
|[**getQsBackups**](#getqsbackups) | **GET** /qs/{id}/backups | List QuickServer Backups|
|[**getQsChangeHostname**](#getqschangehostname) | **GET** /qs/{id}/change_hostname | Get QuickServer Hostname|
|[**getQsChangeRootPassword**](#getqschangerootpassword) | **GET** /qs/{id}/change_root_password | Get Change Root Password Info|
|[**getQsChangeTimezone**](#getqschangetimezone) | **GET** /qs/{id}/change_timezone | Get Timezone Info|
|[**getQsChangeWebuzoPassword**](#getqschangewebuzopassword) | **GET** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info|
|[**getQsInfo**](#getqsinfo) | **GET** /qs/{id} | Get QuickServer Order|
|[**getQsInsertCd**](#getqsinsertcd) | **GET** /qs/{id}/insert_cd | Insert CD Information|
|[**getQsInvoices**](#getqsinvoices) | **GET** /qs/{id}/invoices | Get QuickServer Invoices|
|[**getQsList**](#getqslist) | **GET** /qs | List QuickServers|
|[**getQsReinstallOs**](#getqsreinstallos) | **GET** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options|
|[**getQsResetPassword**](#getqsresetpassword) | **GET** /qs/{id}/reset_password | Reset QuickServer Password Info|
|[**getQsReverseDns**](#getqsreversedns) | **GET** /qs/{id}/reverse_dns | Reverse DNS Info|
|[**getQsSetupVnc**](#getqssetupvnc) | **GET** /qs/{id}/setup_vnc | VNC Setup Info|
|[**getQsTrafficUsage**](#getqstrafficusage) | **GET** /qs/{id}/traffic_usage | Get Traffic Usage|
|[**getQsViewDesktop**](#getqsviewdesktop) | **GET** /qs/{id}/view_desktop | Get View Desktop Info|
|[**getQsWelcomeEmail**](#getqswelcomeemail) | **GET** /qs/{id}/welcome_email | Resend QuickServer Welcome Email|
|[**postQsBackup**](#postqsbackup) | **POST** /qs/{id}/backup | Create QuickServer Backup|
|[**postQsChangeHostname**](#postqschangehostname) | **POST** /qs/{id}/change_hostname | Update QuickServer Hostname|
|[**postQsChangeRootPassword**](#postqschangerootpassword) | **POST** /qs/{id}/change_root_password | Change Root Password|
|[**postQsChangeTimezone**](#postqschangetimezone) | **POST** /qs/{id}/change_timezone | Change QuickServer Timezone|
|[**postQsChangeWebuzoPassword**](#postqschangewebuzopassword) | **POST** /qs/{id}/change_webuzo_password | Change Webuzo Password|
|[**postQsInsertCd**](#postqsinsertcd) | **POST** /qs/{id}/insert_cd | Insert CD in QuickServer|
|[**postQsReinstallOs**](#postqsreinstallos) | **POST** /qs/{id}/reinstall_os | Reinstall QuickServer OS|
|[**postQsResetPassword**](#postqsresetpassword) | **POST** /qs/{id}/reset_password | Reset QuickServer Password|
|[**postQsReverseDns**](#postqsreversedns) | **POST** /qs/{id}/reverse_dns | Update Reverse DNS|
|[**postQsSetupVnc**](#postqssetupvnc) | **POST** /qs/{id}/setup_vnc | Setup VNC|
|[**postQsTrafficUsage**](#postqstrafficusage) | **POST** /qs/{id}/traffic_usage | Search Traffic Usage|
|[**postQsViewDesktop**](#postqsviewdesktop) | **POST** /qs/{id}/view_desktop | Update View Desktop|
|[**postQuickServerRestore**](#postquickserverrestore) | **POST** /qs/{id}/restore | Restore QuickServer from Backup|
|[**putQs**](#putqs) | **PUT** /qs/order | Validate QuickServer Order|
|[**quickserversCancel**](#quickserverscancel) | **DELETE** /qs/{id} | Cancel QuickServer Order|
|[**updateQsInfo**](#updateqsinfo) | **POST** /qs/{id} | Update QuickServer Order|

# **addQs**
> addQs()

Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

const { status, data } = await apiInstance.addQs();
```

### Parameters
This endpoint does not have any parameters.


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

# **deleteQsBackup**
> SuccessTextResponse deleteQsBackup()

Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)
let file: string; //The backup filename to delete. (default to undefined)
let all: '0' | '1'; //Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (optional) (default to undefined)

const { status, data } = await apiInstance.deleteQsBackup(
    id,
    file,
    all
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|
| **file** | [**string**] | The backup filename to delete. | defaults to undefined|
| **all** | [**&#39;0&#39; | &#39;1&#39;**]**Array<&#39;0&#39; &#124; &#39;1&#39;>** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | (optional) defaults to undefined|


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

# **doQsBlockSmtp**
> QueueResponse doQsBlockSmtp()

Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number. (default to undefined)

const { status, data } = await apiInstance.doQsBlockSmtp(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number. | defaults to undefined|


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

# **doQsDisableCd**
> QueueResponse doQsDisableCd()

Disables the virtual CD drive for the QuickServer.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number. (default to undefined)

const { status, data } = await apiInstance.doQsDisableCd(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number. | defaults to undefined|


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

# **doQsDisableQuota**
> QueueResponse doQsDisableQuota()

Disables disk quota enforcement for the QuickServer.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number. (default to undefined)

const { status, data } = await apiInstance.doQsDisableQuota(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number. | defaults to undefined|


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

# **doQsEjectCd**
> QueueResponse doQsEjectCd()

Ejects the virtual CD from the QuickServer\'s CD drive.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number. (default to undefined)

const { status, data } = await apiInstance.doQsEjectCd(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number. | defaults to undefined|


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

# **doQsEnableQuota**
> QueueResponse doQsEnableQuota()

Enables disk quota enforcement for the QuickServer.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number. (default to undefined)

const { status, data } = await apiInstance.doQsEnableQuota(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number. | defaults to undefined|


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

# **doQsRestart**
> QueueResponse doQsRestart()

Restarts the QuickServer. The server will be shut down and started again.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number. (default to undefined)

const { status, data } = await apiInstance.doQsRestart(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number. | defaults to undefined|


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

# **doQsStart**
> QueueResponse doQsStart()

Powers on the QuickServer.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number. (default to undefined)

const { status, data } = await apiInstance.doQsStart(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number. | defaults to undefined|


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

# **doQsStop**
> QueueResponse doQsStop()

Powers off the QuickServer.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number. (default to undefined)

const { status, data } = await apiInstance.doQsStop(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number. | defaults to undefined|


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

# **downloadQsBackup**
> DownloadQsBackup200Response downloadQsBackup(downloadQsBackupRequest)

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.

### Example

```typescript
import {
    QuickServersApi,
    Configuration,
    DownloadQsBackupRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)
let downloadQsBackupRequest: DownloadQsBackupRequest; //
let all: '0' | '1'; //Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (optional) (default to undefined)

const { status, data } = await apiInstance.downloadQsBackup(
    id,
    downloadQsBackupRequest,
    all
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **downloadQsBackupRequest** | **DownloadQsBackupRequest**|  | |
| **id** | [**number**] | QuickServer ID number | defaults to undefined|
| **all** | [**&#39;0&#39; | &#39;1&#39;**]**Array<&#39;0&#39; &#124; &#39;1&#39;>** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | (optional) defaults to undefined|


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

# **getNewQs**
> QuickserverOrder getNewQs()

Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

const { status, data } = await apiInstance.getNewQs();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**QuickserverOrder**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Quickserver Ordering information. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsBackups**
> VpsBackupRows getQsBackups()

Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)
let all: '0' | '1'; //Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (optional) (default to undefined)

const { status, data } = await apiInstance.getQsBackups(
    id,
    all
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|
| **all** | [**&#39;0&#39; | &#39;1&#39;**]**Array<&#39;0&#39; &#124; &#39;1&#39;>** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | (optional) defaults to undefined|


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
|**200** | The listing of available backups for the QuickServer. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsChangeHostname**
> getQsChangeHostname()

Retrieves the current hostname and any validation requirements for changing it.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.getQsChangeHostname(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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
|**200** | QuickServer Change Hostname info response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsChangeRootPassword**
> getQsChangeRootPassword()

Retrieves instructions or metadata needed to reset the root password.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.getQsChangeRootPassword(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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
|**200** | QuickServer Change Root Password response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsChangeTimezone**
> Array<string> getQsChangeTimezone()

Returns the list of available timezones that can be set on the QuickServer.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.getQsChangeTimezone(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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
|**200** | QuickServer Change Timezone info response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsChangeWebuzoPassword**
> getQsChangeWebuzoPassword()

Retrieves instructions or metadata for changing the Webuzo control panel password.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.getQsChangeWebuzoPassword(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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
|**200** | QuickServer Change Webuzo Password info response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsInfo**
> Quickserver getQsInfo()

Returns detailed QuickServer information, including credentials, IPs, and available client actions.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number. (default to undefined)

const { status, data } = await apiInstance.getQsInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number. | defaults to undefined|


### Return type

**Quickserver**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Quickserver details |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsInsertCd**
> getQsInsertCd()

Returns available ISO images that can be mounted in the QuickServer\'s virtual CD drive.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.getQsInsertCd(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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
|**200** | QuickServer Insert CD info response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsInvoices**
> ChargeInvoiceRows getQsInvoices()

Returns the billing invoices associated with this QuickServer.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.getQsInvoices(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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
|**200** | Get Invoices response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsList**
> Array<QuickserverRow> getQsList()

Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

const { status, data } = await apiInstance.getQsList();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**Array<QuickserverRow>**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | The listing of &#x60;Quickservers&#x60; services on your account. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsReinstallOs**
> VpsTemplatesList getQsReinstallOs()

Returns the list of available operating system templates for reinstalling the QuickServer.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.getQsReinstallOs(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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
|**200** | QuickServer Reinstall OS info response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsResetPassword**
> getQsResetPassword()

Returns information needed before resetting the QuickServer\'s root password.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.getQsResetPassword(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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
|**200** | QuickServer Reset password info |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsReverseDns**
> ReverseDnsEntries getQsReverseDns()

Returns the current reverse DNS (PTR record) entries for the QuickServer\'s IP addresses.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.getQsReverseDns(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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
|**200** | QuickServer Reverse DNS info response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsSetupVnc**
> getQsSetupVnc()

Returns the current VNC connection information for the QuickServer.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.getQsSetupVnc(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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
|**200** | Get QuickServer Setup VNC Information |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsTrafficUsage**
> getQsTrafficUsage()

Returns bandwidth traffic usage data for the QuickServer.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.getQsTrafficUsage(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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
|**200** | Get QuickServer Traffic usage |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsViewDesktop**
> getQsViewDesktop()

Returns remote desktop connection information for the QuickServer.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.getQsViewDesktop(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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
|**200** | Get QuickServer View Desktop Information |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQsWelcomeEmail**
> TextResponse getQsWelcomeEmail()

Resends the welcome email containing connection details and credentials for the QuickServer order.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: string; //Quickserver ID (default to undefined)

const { status, data } = await apiInstance.getQsWelcomeEmail(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**string**] | Quickserver ID | defaults to undefined|


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response with a text message field. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQsBackup**
> QueueResponse postQsBackup()

Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.postQsBackup(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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

# **postQsChangeHostname**
> QueueResponse postQsChangeHostname()

Submits a hostname change request for the QuickServer.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.postQsChangeHostname(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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

# **postQsChangeRootPassword**
> QueueResponse postQsChangeRootPassword()

Triggers a root password reset for the QuickServer.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.postQsChangeRootPassword(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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

# **postQsChangeTimezone**
> QueueResponse postQsChangeTimezone()

Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)
let timezone: string; //The time zone (default to undefined)

const { status, data } = await apiInstance.postQsChangeTimezone(
    id,
    timezone
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|
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

# **postQsChangeWebuzoPassword**
> QueueResponse postQsChangeWebuzoPassword()

Resets the Webuzo control panel password for the QuickServer.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.postQsChangeWebuzoPassword(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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

# **postQsInsertCd**
> QueueResponse postQsInsertCd()

Mounts an ISO image in the QuickServer\'s virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.postQsInsertCd(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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

# **postQsReinstallOs**
> QueueResponse postQsReinstallOs()

Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.postQsReinstallOs(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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

# **postQsResetPassword**
> QueueResponse postQsResetPassword()

Resets the root password on the QuickServer to a new randomly generated password.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.postQsResetPassword(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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

# **postQsReverseDns**
> TextResponse postQsReverseDns(reverseDnsEntries)

Updates the reverse DNS (PTR record) entries for the QuickServer\'s IP addresses.

### Example

```typescript
import {
    QuickServersApi,
    Configuration,
    ReverseDnsEntries
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)
let reverseDnsEntries: ReverseDnsEntries; //

const { status, data } = await apiInstance.postQsReverseDns(
    id,
    reverseDnsEntries
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **reverseDnsEntries** | **ReverseDnsEntries**|  | |
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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
|**200** | Update QuickServer Reverse DNS response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQsSetupVnc**
> QueueResponse postQsSetupVnc()

Sets up or refreshes the VNC console connection for the QuickServer.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.postQsSetupVnc(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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

# **postQsTrafficUsage**
> postQsTrafficUsage()

Searches and filters the QuickServer\'s bandwidth traffic usage data by date range.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.postQsTrafficUsage(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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
|**200** | Submit QuickServer Traffic Usage |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQsViewDesktop**
> postQsViewDesktop()

Updates or refreshes the remote desktop session for the QuickServer.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.postQsViewDesktop(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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
|**200** | Submit QuickServer View Desktop Information |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postQuickServerRestore**
> QueueResponse postQuickServerRestore(restoreRequest)

Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.

### Example

```typescript
import {
    QuickServersApi,
    Configuration,
    RestoreRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)
let restoreRequest: RestoreRequest; //QuickServer Restore request

const { status, data } = await apiInstance.postQuickServerRestore(
    id,
    restoreRequest
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **restoreRequest** | **RestoreRequest**| QuickServer Restore request | |
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


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

# **putQs**
> putQs()

Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

const { status, data } = await apiInstance.putQs();
```

### Parameters
This endpoint does not have any parameters.


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
|**200** | Validate QuickServer Order response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **quickserversCancel**
> QuickserversCancel200Response quickserversCancel()

Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: number; //QuickServer ID number (default to undefined)

const { status, data } = await apiInstance.quickserversCancel(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | QuickServer ID number | defaults to undefined|


### Return type

**QuickserversCancel200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Rapid Deploy Servers Cancel |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateQsInfo**
> updateQsInfo()

Updates QuickServer metadata or stored settings associated with the order.

### Example

```typescript
import {
    QuickServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new QuickServersApi(configuration);

let id: string; //QuickServer ID number. (default to undefined)

const { status, data } = await apiInstance.updateQsInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**string**] | QuickServer ID number. | defaults to undefined|


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

