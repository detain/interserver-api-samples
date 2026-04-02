# QuickServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addQs**](QuickServersApi.md#addqs) | **POST** /qs/order | Place QuickServer Order |
| [**deleteQsBackup**](QuickServersApi.md#deleteqsbackup) | **DELETE** /qs/{id}/backups | Delete QuickServer Backup |
| [**doQsBlockSmtp**](QuickServersApi.md#doqsblocksmtp) | **GET** /qs/{id}/block_smtp | Block QuickServer SMTP |
| [**doQsDisableCd**](QuickServersApi.md#doqsdisablecd) | **GET** /qs/{id}/disable_cd | Disable CD Drive |
| [**doQsDisableQuota**](QuickServersApi.md#doqsdisablequota) | **GET** /qs/{id}/disable_quota | Disable Quotas |
| [**doQsEjectCd**](QuickServersApi.md#doqsejectcd) | **GET** /qs/{id}/eject_cd | Eject CD Drive |
| [**doQsEnableQuota**](QuickServersApi.md#doqsenablequota) | **GET** /qs/{id}/enable_quota | Enable Quotas |
| [**doQsRestart**](QuickServersApi.md#doqsrestart) | **GET** /qs/{id}/restart | Restart QuickServer |
| [**doQsStart**](QuickServersApi.md#doqsstart) | **GET** /qs/{id}/start | Start QuickServer |
| [**doQsStop**](QuickServersApi.md#doqsstop) | **GET** /qs/{id}/stop | Stop QuickServer |
| [**downloadQsBackup**](QuickServersApi.md#downloadqsbackupoperation) | **PATCH** /qs/{id}/backups | Download QuickServer Backup |
| [**getNewQs**](QuickServersApi.md#getnewqs) | **GET** /qs/order | Get QuickServer Ordering Information |
| [**getQsBackups**](QuickServersApi.md#getqsbackups) | **GET** /qs/{id}/backups | List QuickServer Backups |
| [**getQsChangeHostname**](QuickServersApi.md#getqschangehostname) | **GET** /qs/{id}/change_hostname | Get QuickServer Hostname |
| [**getQsChangeRootPassword**](QuickServersApi.md#getqschangerootpassword) | **GET** /qs/{id}/change_root_password | Get Change Root Password Info |
| [**getQsChangeTimezone**](QuickServersApi.md#getqschangetimezone) | **GET** /qs/{id}/change_timezone | Get Timezone Info |
| [**getQsChangeWebuzoPassword**](QuickServersApi.md#getqschangewebuzopassword) | **GET** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info |
| [**getQsInfo**](QuickServersApi.md#getqsinfo) | **GET** /qs/{id} | Get QuickServer Order |
| [**getQsInsertCd**](QuickServersApi.md#getqsinsertcd) | **GET** /qs/{id}/insert_cd | Insert CD Information |
| [**getQsInvoices**](QuickServersApi.md#getqsinvoices) | **GET** /qs/{id}/invoices | Get QuickServer Invoices |
| [**getQsList**](QuickServersApi.md#getqslist) | **GET** /qs | List QuickServers |
| [**getQsReinstallOs**](QuickServersApi.md#getqsreinstallos) | **GET** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options |
| [**getQsResetPassword**](QuickServersApi.md#getqsresetpassword) | **GET** /qs/{id}/reset_password | Reset QuickServer Password Info |
| [**getQsReverseDns**](QuickServersApi.md#getqsreversedns) | **GET** /qs/{id}/reverse_dns | Reverse DNS Info |
| [**getQsSetupVnc**](QuickServersApi.md#getqssetupvnc) | **GET** /qs/{id}/setup_vnc | VNC Setup Info |
| [**getQsTrafficUsage**](QuickServersApi.md#getqstrafficusage) | **GET** /qs/{id}/traffic_usage | Get Traffic Usage |
| [**getQsViewDesktop**](QuickServersApi.md#getqsviewdesktop) | **GET** /qs/{id}/view_desktop | Get View Desktop Info |
| [**getQsWelcomeEmail**](QuickServersApi.md#getqswelcomeemail) | **GET** /qs/{id}/welcome_email | Resend QuickServer Welcome Email |
| [**postQsBackup**](QuickServersApi.md#postqsbackup) | **POST** /qs/{id}/backup | Create QuickServer Backup |
| [**postQsChangeHostname**](QuickServersApi.md#postqschangehostname) | **POST** /qs/{id}/change_hostname | Update QuickServer Hostname |
| [**postQsChangeRootPassword**](QuickServersApi.md#postqschangerootpassword) | **POST** /qs/{id}/change_root_password | Change Root Password |
| [**postQsChangeTimezone**](QuickServersApi.md#postqschangetimezone) | **POST** /qs/{id}/change_timezone | Change QuickServer Timezone |
| [**postQsChangeWebuzoPassword**](QuickServersApi.md#postqschangewebuzopassword) | **POST** /qs/{id}/change_webuzo_password | Change Webuzo Password |
| [**postQsInsertCd**](QuickServersApi.md#postqsinsertcd) | **POST** /qs/{id}/insert_cd | Insert CD in QuickServer |
| [**postQsReinstallOs**](QuickServersApi.md#postqsreinstallos) | **POST** /qs/{id}/reinstall_os | Reinstall QuickServer OS |
| [**postQsResetPassword**](QuickServersApi.md#postqsresetpassword) | **POST** /qs/{id}/reset_password | Reset QuickServer Password |
| [**postQsReverseDns**](QuickServersApi.md#postqsreversedns) | **POST** /qs/{id}/reverse_dns | Update Reverse DNS |
| [**postQsSetupVnc**](QuickServersApi.md#postqssetupvnc) | **POST** /qs/{id}/setup_vnc | Setup VNC |
| [**postQsTrafficUsage**](QuickServersApi.md#postqstrafficusage) | **POST** /qs/{id}/traffic_usage | Search Traffic Usage |
| [**postQsViewDesktop**](QuickServersApi.md#postqsviewdesktop) | **POST** /qs/{id}/view_desktop | Update View Desktop |
| [**postQuickServerRestore**](QuickServersApi.md#postquickserverrestore) | **POST** /qs/{id}/restore | Restore QuickServer from Backup |
| [**putQs**](QuickServersApi.md#putqs) | **PUT** /qs/order | Validate QuickServer Order |
| [**quickserversCancel**](QuickServersApi.md#quickserverscancel) | **DELETE** /qs/{id} | Cancel QuickServer Order |
| [**updateQsInfo**](QuickServersApi.md#updateqsinfo) | **POST** /qs/{id} | Update QuickServer Order |



## addQs

> ServiceOrderPostResponse addQs()

Place QuickServer Order

Places a QuickServer order. On success, invoices are generated for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { AddQsRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  try {
    const data = await api.addQs();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Order placed successfully. Use the invoice ID to proceed to payment via &#x60;/pay/{method}/{invoices}&#x60; or view the invoice at &#x60;/billing/invoices/{id}&#x60;. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## deleteQsBackup

> SuccessTextResponse deleteQsBackup(id, file, all)

Delete QuickServer Backup

Permanently removes the specified backup file from storage. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames before deleting.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { DeleteQsBackupRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
    // string | The backup filename to delete.
    file: file_example,
    // '0' | '1' | Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (optional)
    all: all_example,
  } satisfies DeleteQsBackupRequest;

  try {
    const data = await api.deleteQsBackup(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |
| **file** | `string` | The backup filename to delete. | [Defaults to `undefined`] |
| **all** | `0`, `1` | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [Optional] [Defaults to `undefined`] [Enum: 0, 1] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## doQsBlockSmtp

> QueueResponse doQsBlockSmtp(id)

Block QuickServer SMTP

Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { DoQsBlockSmtpRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number.
    id: 56,
  } satisfies DoQsBlockSmtpRequest;

  try {
    const data = await api.doQsBlockSmtp(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number. | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## doQsDisableCd

> QueueResponse doQsDisableCd(id)

Disable CD Drive

Disables the virtual CD drive for the QuickServer.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { DoQsDisableCdRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number.
    id: 56,
  } satisfies DoQsDisableCdRequest;

  try {
    const data = await api.doQsDisableCd(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number. | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## doQsDisableQuota

> QueueResponse doQsDisableQuota(id)

Disable Quotas

Disables disk quota enforcement for the QuickServer.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { DoQsDisableQuotaRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number.
    id: 56,
  } satisfies DoQsDisableQuotaRequest;

  try {
    const data = await api.doQsDisableQuota(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number. | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## doQsEjectCd

> QueueResponse doQsEjectCd(id)

Eject CD Drive

Ejects the virtual CD from the QuickServer\&#39;s CD drive.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { DoQsEjectCdRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number.
    id: 56,
  } satisfies DoQsEjectCdRequest;

  try {
    const data = await api.doQsEjectCd(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number. | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## doQsEnableQuota

> QueueResponse doQsEnableQuota(id)

Enable Quotas

Enables disk quota enforcement for the QuickServer.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { DoQsEnableQuotaRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number.
    id: 56,
  } satisfies DoQsEnableQuotaRequest;

  try {
    const data = await api.doQsEnableQuota(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number. | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## doQsRestart

> QueueResponse doQsRestart(id)

Restart QuickServer

Restarts the QuickServer. The server will be shut down and started again.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { DoQsRestartRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number.
    id: 56,
  } satisfies DoQsRestartRequest;

  try {
    const data = await api.doQsRestart(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number. | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## doQsStart

> QueueResponse doQsStart(id)

Start QuickServer

Powers on the QuickServer.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { DoQsStartRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number.
    id: 56,
  } satisfies DoQsStartRequest;

  try {
    const data = await api.doQsStart(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number. | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## doQsStop

> QueueResponse doQsStop(id)

Stop QuickServer

Powers off the QuickServer.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { DoQsStopRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number.
    id: 56,
  } satisfies DoQsStopRequest;

  try {
    const data = await api.doQsStop(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number. | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## downloadQsBackup

> DownloadQsBackup200Response downloadQsBackup(id, downloadQsBackupRequest, all)

Download QuickServer Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { DownloadQsBackupOperationRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
    // DownloadQsBackupRequest
    downloadQsBackupRequest: ...,
    // '0' | '1' | Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (optional)
    all: all_example,
  } satisfies DownloadQsBackupOperationRequest;

  try {
    const data = await api.downloadQsBackup(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |
| **downloadQsBackupRequest** | [DownloadQsBackupRequest](DownloadQsBackupRequest.md) |  | |
| **all** | `0`, `1` | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [Optional] [Defaults to `undefined`] [Enum: 0, 1] |

### Return type

[**DownloadQsBackup200Response**](DownloadQsBackup200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Download URL for the backup file. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getNewQs

> QuickserverOrder getNewQs()

Get QuickServer Ordering Information

Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetNewQsRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  try {
    const data = await api.getNewQs();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**QuickserverOrder**](QuickserverOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Quickserver Ordering information. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getQsBackups

> VpsBackupRows getQsBackups(id, all)

List QuickServer Backups

Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /qs/{id}/backups&#x60; to download or &#x60;DELETE /qs/{id}/backups&#x60; to remove a backup. Use &#x60;POST /qs/{id}/restore&#x60; to restore from a backup.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetQsBackupsRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
    // '0' | '1' | Set to `1` to list all backups across all services, not just the ones for the given QuickServer. (optional)
    all: all_example,
  } satisfies GetQsBackupsRequest;

  try {
    const data = await api.getQsBackups(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |
| **all** | `0`, `1` | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [Optional] [Defaults to `undefined`] [Enum: 0, 1] |

### Return type

[**VpsBackupRows**](VpsBackupRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of available backups for the QuickServer. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getQsChangeHostname

> getQsChangeHostname(id)

Get QuickServer Hostname

Retrieves the current hostname and any validation requirements for changing it.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetQsChangeHostnameRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies GetQsChangeHostnameRequest;

  try {
    const data = await api.getQsChangeHostname(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | QuickServer Change Hostname info response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getQsChangeRootPassword

> getQsChangeRootPassword(id)

Get Change Root Password Info

Retrieves instructions or metadata needed to reset the root password.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetQsChangeRootPasswordRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies GetQsChangeRootPasswordRequest;

  try {
    const data = await api.getQsChangeRootPassword(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | QuickServer Change Root Password response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getQsChangeTimezone

> Array&lt;string&gt; getQsChangeTimezone(id)

Get Timezone Info

Returns the list of available timezones that can be set on the QuickServer.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetQsChangeTimezoneRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies GetQsChangeTimezoneRequest;

  try {
    const data = await api.getQsChangeTimezone(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

**Array<string>**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | QuickServer Change Timezone info response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getQsChangeWebuzoPassword

> getQsChangeWebuzoPassword(id)

Webuzo Change Pass Info

Retrieves instructions or metadata for changing the Webuzo control panel password.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetQsChangeWebuzoPasswordRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies GetQsChangeWebuzoPasswordRequest;

  try {
    const data = await api.getQsChangeWebuzoPassword(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | QuickServer Change Webuzo Password info response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getQsInfo

> Quickserver getQsInfo(id)

Get QuickServer Order

Returns detailed QuickServer information, including credentials, IPs, and available client actions.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetQsInfoRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number.
    id: 56,
  } satisfies GetQsInfoRequest;

  try {
    const data = await api.getQsInfo(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number. | [Defaults to `undefined`] |

### Return type

[**Quickserver**](Quickserver.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Quickserver details |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getQsInsertCd

> getQsInsertCd(id)

Insert CD Information

Returns available ISO images that can be mounted in the QuickServer\&#39;s virtual CD drive.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetQsInsertCdRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies GetQsInsertCdRequest;

  try {
    const data = await api.getQsInsertCd(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | QuickServer Insert CD info response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getQsInvoices

> ChargeInvoiceRows getQsInvoices(id)

Get QuickServer Invoices

Returns the billing invoices associated with this QuickServer.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetQsInvoicesRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies GetQsInvoicesRequest;

  try {
    const data = await api.getQsInvoices(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get Invoices response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getQsList

> Array&lt;QuickserverRow&gt; getQsList()

List QuickServers

Returns the QuickServer services on your account. Use the &#x60;qs_id&#x60; values with &#x60;/qs/{id}&#x60; for details or with the action endpoints (restart, backup, etc.) to manage each server.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetQsListRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  try {
    const data = await api.getQsList();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Array&lt;QuickserverRow&gt;**](QuickserverRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Quickservers&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getQsReinstallOs

> VpsTemplatesList getQsReinstallOs(id)

QuickServer Reinstall OS Options

Returns the list of available operating system templates for reinstalling the QuickServer.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetQsReinstallOsRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies GetQsReinstallOsRequest;

  try {
    const data = await api.getQsReinstallOs(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

[**VpsTemplatesList**](VpsTemplatesList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | QuickServer Reinstall OS info response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getQsResetPassword

> getQsResetPassword(id)

Reset QuickServer Password Info

Returns information needed before resetting the QuickServer\&#39;s root password.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetQsResetPasswordRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies GetQsResetPasswordRequest;

  try {
    const data = await api.getQsResetPassword(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | QuickServer Reset password info |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getQsReverseDns

> ReverseDnsEntries getQsReverseDns(id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the QuickServer\&#39;s IP addresses.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetQsReverseDnsRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies GetQsReverseDnsRequest;

  try {
    const data = await api.getQsReverseDns(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | QuickServer Reverse DNS info response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getQsSetupVnc

> getQsSetupVnc(id)

VNC Setup Info

Returns the current VNC connection information for the QuickServer.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetQsSetupVncRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies GetQsSetupVncRequest;

  try {
    const data = await api.getQsSetupVnc(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get QuickServer Setup VNC Information |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getQsTrafficUsage

> getQsTrafficUsage(id)

Get Traffic Usage

Returns bandwidth traffic usage data for the QuickServer.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetQsTrafficUsageRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies GetQsTrafficUsageRequest;

  try {
    const data = await api.getQsTrafficUsage(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get QuickServer Traffic usage |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getQsViewDesktop

> getQsViewDesktop(id)

Get View Desktop Info

Returns remote desktop connection information for the QuickServer.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetQsViewDesktopRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies GetQsViewDesktopRequest;

  try {
    const data = await api.getQsViewDesktop(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get QuickServer View Desktop Information |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getQsWelcomeEmail

> TextResponse getQsWelcomeEmail(id)

Resend QuickServer Welcome Email

Resends the welcome email containing connection details and credentials for the QuickServer order.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { GetQsWelcomeEmailRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // string | Quickserver ID
    id: 133123,
  } satisfies GetQsWelcomeEmailRequest;

  try {
    const data = await api.getQsWelcomeEmail(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `string` | Quickserver ID | [Defaults to `undefined`] |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postQsBackup

> QueueResponse postQsBackup(id)

Create QuickServer Backup

Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { PostQsBackupRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies PostQsBackupRequest;

  try {
    const data = await api.postQsBackup(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postQsChangeHostname

> QueueResponse postQsChangeHostname(id)

Update QuickServer Hostname

Submits a hostname change request for the QuickServer.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { PostQsChangeHostnameRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies PostQsChangeHostnameRequest;

  try {
    const data = await api.postQsChangeHostname(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postQsChangeRootPassword

> QueueResponse postQsChangeRootPassword(id)

Change Root Password

Triggers a root password reset for the QuickServer.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { PostQsChangeRootPasswordRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies PostQsChangeRootPasswordRequest;

  try {
    const data = await api.postQsChangeRootPassword(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postQsChangeTimezone

> QueueResponse postQsChangeTimezone(id, timezone)

Change QuickServer Timezone

Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { PostQsChangeTimezoneRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
    // string | The time zone
    timezone: timezone_example,
  } satisfies PostQsChangeTimezoneRequest;

  try {
    const data = await api.postQsChangeTimezone(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |
| **timezone** | `string` | The time zone | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postQsChangeWebuzoPassword

> QueueResponse postQsChangeWebuzoPassword(id)

Change Webuzo Password

Resets the Webuzo control panel password for the QuickServer.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { PostQsChangeWebuzoPasswordRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies PostQsChangeWebuzoPasswordRequest;

  try {
    const data = await api.postQsChangeWebuzoPassword(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postQsInsertCd

> QueueResponse postQsInsertCd(id)

Insert CD in QuickServer

Mounts an ISO image in the QuickServer\&#39;s virtual CD drive. Use &#x60;GET /qs/{id}/insert_cd&#x60; to list available images.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { PostQsInsertCdRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies PostQsInsertCdRequest;

  try {
    const data = await api.postQsInsertCd(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postQsReinstallOs

> QueueResponse postQsReinstallOs(id)

Reinstall QuickServer OS

Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { PostQsReinstallOsRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies PostQsReinstallOsRequest;

  try {
    const data = await api.postQsReinstallOs(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postQsResetPassword

> QueueResponse postQsResetPassword(id)

Reset QuickServer Password

Resets the root password on the QuickServer to a new randomly generated password.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { PostQsResetPasswordRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies PostQsResetPasswordRequest;

  try {
    const data = await api.postQsResetPassword(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postQsReverseDns

> TextResponse postQsReverseDns(id, reverseDnsEntries)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the QuickServer\&#39;s IP addresses.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { PostQsReverseDnsRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
    // ReverseDnsEntries
    reverseDnsEntries: ...,
  } satisfies PostQsReverseDnsRequest;

  try {
    const data = await api.postQsReverseDns(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |
| **reverseDnsEntries** | [ReverseDnsEntries](ReverseDnsEntries.md) |  | |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Update QuickServer Reverse DNS response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postQsSetupVnc

> QueueResponse postQsSetupVnc(id)

Setup VNC

Sets up or refreshes the VNC console connection for the QuickServer.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { PostQsSetupVncRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies PostQsSetupVncRequest;

  try {
    const data = await api.postQsSetupVnc(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postQsTrafficUsage

> postQsTrafficUsage(id)

Search Traffic Usage

Searches and filters the QuickServer\&#39;s bandwidth traffic usage data by date range.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { PostQsTrafficUsageRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies PostQsTrafficUsageRequest;

  try {
    const data = await api.postQsTrafficUsage(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Submit QuickServer Traffic Usage |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postQsViewDesktop

> postQsViewDesktop(id)

Update View Desktop

Updates or refreshes the remote desktop session for the QuickServer.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { PostQsViewDesktopRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies PostQsViewDesktopRequest;

  try {
    const data = await api.postQsViewDesktop(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Submit QuickServer View Desktop Information |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postQuickServerRestore

> QueueResponse postQuickServerRestore(id, restoreRequest)

Restore QuickServer from Backup

Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { PostQuickServerRestoreRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
    // RestoreRequest | QuickServer Restore request
    restoreRequest: ...,
  } satisfies PostQuickServerRestoreRequest;

  try {
    const data = await api.postQuickServerRestore(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |
| **restoreRequest** | [RestoreRequest](RestoreRequest.md) | QuickServer Restore request | |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response message from sending a service queue. |  -  |
| **400** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## putQs

> putQs()

Validate QuickServer Order

Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { PutQsRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  try {
    const data = await api.putQs();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Validate QuickServer Order response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## quickserversCancel

> QuickserversCancel200Response quickserversCancel(id)

Cancel QuickServer Order

Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { QuickserversCancelRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // number | QuickServer ID number
    id: 56,
  } satisfies QuickserversCancelRequest;

  try {
    const data = await api.quickserversCancel(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | QuickServer ID number | [Defaults to `undefined`] |

### Return type

[**QuickserversCancel200Response**](QuickserversCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Rapid Deploy Servers Cancel |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateQsInfo

> SuccessTextResponse updateQsInfo(id)

Update QuickServer Order

Updates QuickServer metadata or stored settings associated with the order.

### Example

```ts
import {
  Configuration,
  QuickServersApi,
} from '';
import type { UpdateQsInfoRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new QuickServersApi(config);

  const body = {
    // string | QuickServer ID number.
    id: id_example,
  } satisfies UpdateQsInfoRequest;

  try {
    const data = await api.updateQsInfo(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `string` | QuickServer ID number. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)

