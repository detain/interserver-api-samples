# .QuickServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addQs**](QuickServersApi.md#addQs) | **POST** /qs/order | Place QuickServer Order
[**deleteQsBackup**](QuickServersApi.md#deleteQsBackup) | **DELETE** /qs/{id}/backups | Delete QuickServer Backup
[**doQsBlockSmtp**](QuickServersApi.md#doQsBlockSmtp) | **GET** /qs/{id}/block_smtp | Block QuickServer SMTP
[**doQsDisableCd**](QuickServersApi.md#doQsDisableCd) | **GET** /qs/{id}/disable_cd | Disable CD Drive
[**doQsDisableQuota**](QuickServersApi.md#doQsDisableQuota) | **GET** /qs/{id}/disable_quota | Disable Quotas
[**doQsEjectCd**](QuickServersApi.md#doQsEjectCd) | **GET** /qs/{id}/eject_cd | Eject CD Drive
[**doQsEnableQuota**](QuickServersApi.md#doQsEnableQuota) | **GET** /qs/{id}/enable_quota | Enable Quotas
[**doQsRestart**](QuickServersApi.md#doQsRestart) | **GET** /qs/{id}/restart | Restart QuickServer
[**doQsStart**](QuickServersApi.md#doQsStart) | **GET** /qs/{id}/start | Start QuickServer
[**doQsStop**](QuickServersApi.md#doQsStop) | **GET** /qs/{id}/stop | Stop QuickServer
[**downloadQsBackup**](QuickServersApi.md#downloadQsBackup) | **PATCH** /qs/{id}/backups | Download QuickServer Backup
[**getNewQs**](QuickServersApi.md#getNewQs) | **GET** /qs/order | Get QuickServer Ordering Information
[**getQsBackups**](QuickServersApi.md#getQsBackups) | **GET** /qs/{id}/backups | List QuickServer Backups
[**getQsChangeHostname**](QuickServersApi.md#getQsChangeHostname) | **GET** /qs/{id}/change_hostname | Get QuickServer Hostname
[**getQsChangeRootPassword**](QuickServersApi.md#getQsChangeRootPassword) | **GET** /qs/{id}/change_root_password | Get Change Root Password Info
[**getQsChangeTimezone**](QuickServersApi.md#getQsChangeTimezone) | **GET** /qs/{id}/change_timezone | Get Timezone Info
[**getQsChangeWebuzoPassword**](QuickServersApi.md#getQsChangeWebuzoPassword) | **GET** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info
[**getQsInfo**](QuickServersApi.md#getQsInfo) | **GET** /qs/{id} | Get QuickServer Order
[**getQsInsertCd**](QuickServersApi.md#getQsInsertCd) | **GET** /qs/{id}/insert_cd | Insert CD Information
[**getQsInvoices**](QuickServersApi.md#getQsInvoices) | **GET** /qs/{id}/invoices | Get QuickServer Invoices
[**getQsList**](QuickServersApi.md#getQsList) | **GET** /qs | List QuickServers
[**getQsReinstallOs**](QuickServersApi.md#getQsReinstallOs) | **GET** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options
[**getQsResetPassword**](QuickServersApi.md#getQsResetPassword) | **GET** /qs/{id}/reset_password | Reset QuickServer Password Info
[**getQsReverseDns**](QuickServersApi.md#getQsReverseDns) | **GET** /qs/{id}/reverse_dns | Reverse DNS Info
[**getQsSetupVnc**](QuickServersApi.md#getQsSetupVnc) | **GET** /qs/{id}/setup_vnc | VNC Setup Info
[**getQsTrafficUsage**](QuickServersApi.md#getQsTrafficUsage) | **GET** /qs/{id}/traffic_usage | Get Traffic Usage
[**getQsViewDesktop**](QuickServersApi.md#getQsViewDesktop) | **GET** /qs/{id}/view_desktop | Get View Desktop Info
[**getQsWelcomeEmail**](QuickServersApi.md#getQsWelcomeEmail) | **GET** /qs/{id}/welcome_email | Resend QuickServer Welcome Email
[**postQsBackup**](QuickServersApi.md#postQsBackup) | **POST** /qs/{id}/backup | Create QuickServer Backup
[**postQsChangeHostname**](QuickServersApi.md#postQsChangeHostname) | **POST** /qs/{id}/change_hostname | Update QuickServer Hostname
[**postQsChangeRootPassword**](QuickServersApi.md#postQsChangeRootPassword) | **POST** /qs/{id}/change_root_password | Change Root Password
[**postQsChangeTimezone**](QuickServersApi.md#postQsChangeTimezone) | **POST** /qs/{id}/change_timezone | Change QuickServer Timezone
[**postQsChangeWebuzoPassword**](QuickServersApi.md#postQsChangeWebuzoPassword) | **POST** /qs/{id}/change_webuzo_password | Change Webuzo Password
[**postQsInsertCd**](QuickServersApi.md#postQsInsertCd) | **POST** /qs/{id}/insert_cd | Insert CD in QuickServer
[**postQsReinstallOs**](QuickServersApi.md#postQsReinstallOs) | **POST** /qs/{id}/reinstall_os | Reinstall QuickServer OS
[**postQsResetPassword**](QuickServersApi.md#postQsResetPassword) | **POST** /qs/{id}/reset_password | Reset QuickServer Password
[**postQsReverseDns**](QuickServersApi.md#postQsReverseDns) | **POST** /qs/{id}/reverse_dns | Update Reverse DNS
[**postQsSetupVnc**](QuickServersApi.md#postQsSetupVnc) | **POST** /qs/{id}/setup_vnc | Setup VNC
[**postQsTrafficUsage**](QuickServersApi.md#postQsTrafficUsage) | **POST** /qs/{id}/traffic_usage | Search Traffic Usage
[**postQsViewDesktop**](QuickServersApi.md#postQsViewDesktop) | **POST** /qs/{id}/view_desktop | Update View Desktop
[**postQuickServerRestore**](QuickServersApi.md#postQuickServerRestore) | **POST** /qs/{id}/restore | Restore QuickServer from Backup
[**putQs**](QuickServersApi.md#putQs) | **PUT** /qs/order | Validate QuickServer Order
[**quickserversCancel**](QuickServersApi.md#quickserversCancel) | **DELETE** /qs/{id} | Cancel QuickServer Order
[**updateQsInfo**](QuickServersApi.md#updateQsInfo) | **POST** /qs/{id} | Update QuickServer Order


# **addQs**
> addQs()

Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request = {};

const data = await apiInstance.addQs(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


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

# **deleteQsBackup**
> SuccessTextResponse deleteQsBackup()

Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiDeleteQsBackupRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiDeleteQsBackupRequest = {
    // QuickServer ID number
  id: 1,
    // The backup filename to delete.
  file: "file_example",
    // Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (optional)
  all: "0",
};

const data = await apiInstance.deleteQsBackup(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined
 **file** | [**string**] | The backup filename to delete. | defaults to undefined
 **all** | [**&#39;0&#39; | &#39;1&#39;**]**Array<&#39;0&#39; &#124; &#39;1&#39;>** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | (optional) defaults to undefined


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

# **doQsBlockSmtp**
> QueueResponse doQsBlockSmtp()

Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiDoQsBlockSmtpRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiDoQsBlockSmtpRequest = {
    // QuickServer ID number.
  id: 1,
};

const data = await apiInstance.doQsBlockSmtp(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number. | defaults to undefined


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

# **doQsDisableCd**
> QueueResponse doQsDisableCd()

Disables the virtual CD drive for the QuickServer.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiDoQsDisableCdRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiDoQsDisableCdRequest = {
    // QuickServer ID number.
  id: 1,
};

const data = await apiInstance.doQsDisableCd(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number. | defaults to undefined


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

# **doQsDisableQuota**
> QueueResponse doQsDisableQuota()

Disables disk quota enforcement for the QuickServer.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiDoQsDisableQuotaRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiDoQsDisableQuotaRequest = {
    // QuickServer ID number.
  id: 1,
};

const data = await apiInstance.doQsDisableQuota(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number. | defaults to undefined


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

# **doQsEjectCd**
> QueueResponse doQsEjectCd()

Ejects the virtual CD from the QuickServer\'s CD drive.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiDoQsEjectCdRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiDoQsEjectCdRequest = {
    // QuickServer ID number.
  id: 1,
};

const data = await apiInstance.doQsEjectCd(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number. | defaults to undefined


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

# **doQsEnableQuota**
> QueueResponse doQsEnableQuota()

Enables disk quota enforcement for the QuickServer.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiDoQsEnableQuotaRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiDoQsEnableQuotaRequest = {
    // QuickServer ID number.
  id: 1,
};

const data = await apiInstance.doQsEnableQuota(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number. | defaults to undefined


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

# **doQsRestart**
> QueueResponse doQsRestart()

Restarts the QuickServer. The server will be shut down and started again.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiDoQsRestartRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiDoQsRestartRequest = {
    // QuickServer ID number.
  id: 1,
};

const data = await apiInstance.doQsRestart(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number. | defaults to undefined


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

# **doQsStart**
> QueueResponse doQsStart()

Powers on the QuickServer.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiDoQsStartRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiDoQsStartRequest = {
    // QuickServer ID number.
  id: 1,
};

const data = await apiInstance.doQsStart(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number. | defaults to undefined


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

# **doQsStop**
> QueueResponse doQsStop()

Powers off the QuickServer.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiDoQsStopRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiDoQsStopRequest = {
    // QuickServer ID number.
  id: 1,
};

const data = await apiInstance.doQsStop(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number. | defaults to undefined


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

# **downloadQsBackup**
> DownloadQsBackup200Response downloadQsBackup(downloadQsBackupRequest)

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiDownloadQsBackupRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiDownloadQsBackupRequest = {
    // QuickServer ID number
  id: 1,
  
  downloadQsBackupRequest: {
    file: "file_example",
  },
    // Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (optional)
  all: "0",
};

const data = await apiInstance.downloadQsBackup(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **downloadQsBackupRequest** | **DownloadQsBackupRequest**|  |
 **id** | [**number**] | QuickServer ID number | defaults to undefined
 **all** | [**&#39;0&#39; | &#39;1&#39;**]**Array<&#39;0&#39; &#124; &#39;1&#39;>** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | (optional) defaults to undefined


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

# **getNewQs**
> QuickserverOrder getNewQs()

Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request = {};

const data = await apiInstance.getNewQs(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**QuickserverOrder**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Quickserver Ordering information. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getQsBackups**
> VpsBackupRows getQsBackups()

Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiGetQsBackupsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiGetQsBackupsRequest = {
    // QuickServer ID number
  id: 1,
    // Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (optional)
  all: "0",
};

const data = await apiInstance.getQsBackups(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined
 **all** | [**&#39;0&#39; | &#39;1&#39;**]**Array<&#39;0&#39; &#124; &#39;1&#39;>** | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | (optional) defaults to undefined


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
**200** | The listing of available backups for the QuickServer. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getQsChangeHostname**
> void getQsChangeHostname()

Retrieves the current hostname and any validation requirements for changing it.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiGetQsChangeHostnameRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiGetQsChangeHostnameRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.getQsChangeHostname(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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
**200** | QuickServer Change Hostname info response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getQsChangeRootPassword**
> void getQsChangeRootPassword()

Retrieves instructions or metadata needed to reset the root password.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiGetQsChangeRootPasswordRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiGetQsChangeRootPasswordRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.getQsChangeRootPassword(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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
**200** | QuickServer Change Root Password response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getQsChangeTimezone**
> Array<string> getQsChangeTimezone()

Returns the list of available timezones that can be set on the QuickServer.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiGetQsChangeTimezoneRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiGetQsChangeTimezoneRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.getQsChangeTimezone(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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
**200** | QuickServer Change Timezone info response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getQsChangeWebuzoPassword**
> void getQsChangeWebuzoPassword()

Retrieves instructions or metadata for changing the Webuzo control panel password.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiGetQsChangeWebuzoPasswordRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiGetQsChangeWebuzoPasswordRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.getQsChangeWebuzoPassword(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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
**200** | QuickServer Change Webuzo Password info response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getQsInfo**
> Quickserver getQsInfo()

Returns detailed QuickServer information, including credentials, IPs, and available client actions.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiGetQsInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiGetQsInfoRequest = {
    // QuickServer ID number.
  id: 1,
};

const data = await apiInstance.getQsInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number. | defaults to undefined


### Return type

**Quickserver**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Quickserver details |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getQsInsertCd**
> void getQsInsertCd()

Returns available ISO images that can be mounted in the QuickServer\'s virtual CD drive.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiGetQsInsertCdRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiGetQsInsertCdRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.getQsInsertCd(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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
**200** | QuickServer Insert CD info response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getQsInvoices**
> ChargeInvoiceRows getQsInvoices()

Returns the billing invoices associated with this QuickServer.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiGetQsInvoicesRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiGetQsInvoicesRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.getQsInvoices(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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

# **getQsList**
> Array<QuickserverRow> getQsList()

Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request = {};

const data = await apiInstance.getQsList(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**Array<QuickserverRow>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The listing of &#x60;Quickservers&#x60; services on your account. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getQsReinstallOs**
> VpsTemplatesList getQsReinstallOs()

Returns the list of available operating system templates for reinstalling the QuickServer.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiGetQsReinstallOsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiGetQsReinstallOsRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.getQsReinstallOs(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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
**200** | QuickServer Reinstall OS info response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getQsResetPassword**
> void getQsResetPassword()

Returns information needed before resetting the QuickServer\'s root password.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiGetQsResetPasswordRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiGetQsResetPasswordRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.getQsResetPassword(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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
**200** | QuickServer Reset password info |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getQsReverseDns**
> ReverseDnsEntries getQsReverseDns()

Returns the current reverse DNS (PTR record) entries for the QuickServer\'s IP addresses.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiGetQsReverseDnsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiGetQsReverseDnsRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.getQsReverseDns(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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
**200** | QuickServer Reverse DNS info response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getQsSetupVnc**
> void getQsSetupVnc()

Returns the current VNC connection information for the QuickServer.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiGetQsSetupVncRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiGetQsSetupVncRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.getQsSetupVnc(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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
**200** | Get QuickServer Setup VNC Information |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getQsTrafficUsage**
> void getQsTrafficUsage()

Returns bandwidth traffic usage data for the QuickServer.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiGetQsTrafficUsageRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiGetQsTrafficUsageRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.getQsTrafficUsage(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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
**200** | Get QuickServer Traffic usage |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getQsViewDesktop**
> void getQsViewDesktop()

Returns remote desktop connection information for the QuickServer.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiGetQsViewDesktopRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiGetQsViewDesktopRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.getQsViewDesktop(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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
**200** | Get QuickServer View Desktop Information |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getQsWelcomeEmail**
> TextResponse getQsWelcomeEmail()

Resends the welcome email containing connection details and credentials for the QuickServer order.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiGetQsWelcomeEmailRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiGetQsWelcomeEmailRequest = {
    // Quickserver ID
  id: "133123",
};

const data = await apiInstance.getQsWelcomeEmail(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**string**] | Quickserver ID | defaults to undefined


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response with a text message field. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postQsBackup**
> QueueResponse postQsBackup()

Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiPostQsBackupRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiPostQsBackupRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.postQsBackup(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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

# **postQsChangeHostname**
> QueueResponse postQsChangeHostname()

Submits a hostname change request for the QuickServer.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiPostQsChangeHostnameRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiPostQsChangeHostnameRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.postQsChangeHostname(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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

# **postQsChangeRootPassword**
> QueueResponse postQsChangeRootPassword()

Triggers a root password reset for the QuickServer.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiPostQsChangeRootPasswordRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiPostQsChangeRootPasswordRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.postQsChangeRootPassword(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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

# **postQsChangeTimezone**
> QueueResponse postQsChangeTimezone()

Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiPostQsChangeTimezoneRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiPostQsChangeTimezoneRequest = {
    // QuickServer ID number
  id: 1,
    // The time zone
  timezone: "America/New_York",
};

const data = await apiInstance.postQsChangeTimezone(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined
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

# **postQsChangeWebuzoPassword**
> QueueResponse postQsChangeWebuzoPassword()

Resets the Webuzo control panel password for the QuickServer.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiPostQsChangeWebuzoPasswordRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiPostQsChangeWebuzoPasswordRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.postQsChangeWebuzoPassword(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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

# **postQsInsertCd**
> QueueResponse postQsInsertCd()

Mounts an ISO image in the QuickServer\'s virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiPostQsInsertCdRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiPostQsInsertCdRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.postQsInsertCd(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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

# **postQsReinstallOs**
> QueueResponse postQsReinstallOs()

Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiPostQsReinstallOsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiPostQsReinstallOsRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.postQsReinstallOs(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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

# **postQsResetPassword**
> QueueResponse postQsResetPassword()

Resets the root password on the QuickServer to a new randomly generated password.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiPostQsResetPasswordRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiPostQsResetPasswordRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.postQsResetPassword(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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

# **postQsReverseDns**
> TextResponse postQsReverseDns(reverseDnsEntries)

Updates the reverse DNS (PTR record) entries for the QuickServer\'s IP addresses.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiPostQsReverseDnsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiPostQsReverseDnsRequest = {
    // QuickServer ID number
  id: 1,
  
  reverseDnsEntries: {
    ips: {},
  },
};

const data = await apiInstance.postQsReverseDns(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **reverseDnsEntries** | **ReverseDnsEntries**|  |
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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
**200** | Update QuickServer Reverse DNS response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postQsSetupVnc**
> QueueResponse postQsSetupVnc()

Sets up or refreshes the VNC console connection for the QuickServer.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiPostQsSetupVncRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiPostQsSetupVncRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.postQsSetupVnc(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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

# **postQsTrafficUsage**
> void postQsTrafficUsage()

Searches and filters the QuickServer\'s bandwidth traffic usage data by date range.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiPostQsTrafficUsageRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiPostQsTrafficUsageRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.postQsTrafficUsage(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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
**200** | Submit QuickServer Traffic Usage |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postQsViewDesktop**
> void postQsViewDesktop()

Updates or refreshes the remote desktop session for the QuickServer.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiPostQsViewDesktopRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiPostQsViewDesktopRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.postQsViewDesktop(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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
**200** | Submit QuickServer View Desktop Information |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postQuickServerRestore**
> QueueResponse postQuickServerRestore(restoreRequest)

Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiPostQuickServerRestoreRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiPostQuickServerRestoreRequest = {
    // QuickServer ID number
  id: 1,
    // QuickServer Restore request
  restoreRequest: {
    backup: "backup_example",
    password: "password_example",
  },
};

const data = await apiInstance.postQuickServerRestore(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **restoreRequest** | **RestoreRequest**| QuickServer Restore request |
 **id** | [**number**] | QuickServer ID number | defaults to undefined


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

# **putQs**
> void putQs()

Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request = {};

const data = await apiInstance.putQs(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


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
**200** | Validate QuickServer Order response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **quickserversCancel**
> QuickserversCancel200Response quickserversCancel()

Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiQuickserversCancelRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiQuickserversCancelRequest = {
    // QuickServer ID number
  id: 1,
};

const data = await apiInstance.quickserversCancel(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | QuickServer ID number | defaults to undefined


### Return type

**QuickserversCancel200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Rapid Deploy Servers Cancel |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateQsInfo**
> updateQsInfo()

Updates QuickServer metadata or stored settings associated with the order.

### Example


```typescript
import { createConfiguration, QuickServersApi } from '';
import type { QuickServersApiUpdateQsInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new QuickServersApi(configuration);

const request: QuickServersApiUpdateQsInfoRequest = {
    // QuickServer ID number.
  id: "id_example",
};

const data = await apiInstance.updateQsInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**string**] | QuickServer ID number. | defaults to undefined


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


