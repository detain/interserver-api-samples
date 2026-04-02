# VPSApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addVps**](VPSApi.md#addvps) | **POST** /vps/order | Place VPS Order |
| [**deleteVpsBackup**](VPSApi.md#deletevpsbackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup |
| [**doVpsBlockSmtp**](VPSApi.md#dovpsblocksmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP |
| [**doVpsDisableCd**](VPSApi.md#dovpsdisablecd) | **GET** /vps/{id}/disable_cd | Disable CD Drive |
| [**doVpsDisableQuota**](VPSApi.md#dovpsdisablequota) | **GET** /vps/{id}/disable_quota | Disable Quotas |
| [**doVpsEjectCd**](VPSApi.md#dovpsejectcd) | **GET** /vps/{id}/eject_cd | Eject CD Drive |
| [**doVpsEnableQuota**](VPSApi.md#dovpsenablequota) | **GET** /vps/{id}/enable_quota | Enable Quotas |
| [**doVpsRestart**](VPSApi.md#dovpsrestart) | **GET** /vps/{id}/restart | Restart VPS |
| [**doVpsStart**](VPSApi.md#dovpsstart) | **GET** /vps/{id}/start | Start VPS |
| [**doVpsStop**](VPSApi.md#dovpsstop) | **GET** /vps/{id}/stop | Stop VPS |
| [**downloadVpsBackup**](VPSApi.md#downloadvpsbackup) | **PATCH** /vps/{id}/backups | Download VPS Backup |
| [**getNewVps**](VPSApi.md#getnewvps) | **GET** /vps/order | VPS Ordering Information |
| [**getVpsBackups**](VPSApi.md#getvpsbackups) | **GET** /vps/{id}/backups | Get VPS Backups List |
| [**getVpsBuyHdSpace**](VPSApi.md#getvpsbuyhdspace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info |
| [**getVpsBuyIp**](VPSApi.md#getvpsbuyip) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info |
| [**getVpsChangeTimezone**](VPSApi.md#getvpschangetimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info |
| [**getVpsInfo**](VPSApi.md#getvpsinfo) | **GET** /vps/{id} | Get VPS Order |
| [**getVpsInvoices**](VPSApi.md#getvpsinvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices |
| [**getVpsList**](VPSApi.md#getvpslist) | **GET** /vps | List VPS Orders |
| [**getVpsReinstallOs**](VPSApi.md#getvpsreinstallos) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options |
| [**getVpsReverseDns**](VPSApi.md#getvpsreversedns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info |
| [**getVpsSetupVnc**](VPSApi.md#getvpssetupvnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info |
| [**getVpsSlices**](VPSApi.md#getvpsslices) | **GET** /vps/{id}/slices | Slice Upgrade Info |
| [**getVpsTrafficUsage**](VPSApi.md#getvpstrafficusage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage |
| [**getVpsViewDesktop**](VPSApi.md#getvpsviewdesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info |
| [**getVpsWelcomeEmail**](VPSApi.md#getvpswelcomeemail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email |
| [**postVpsBackup**](VPSApi.md#postvpsbackup) | **GET** /vps/{id}/backup | Start a VPS Backup |
| [**postVpsBuyHdSpace**](VPSApi.md#postvpsbuyhdspace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon |
| [**postVpsBuyIp**](VPSApi.md#postvpsbuyip) | **POST** /vps/{id}/buy_ip | Purchase Additional IP |
| [**postVpsChangeHostname**](VPSApi.md#postvpschangehostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname |
| [**postVpsChangeRootPassword**](VPSApi.md#postvpschangerootpassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password |
| [**postVpsChangeTimezone**](VPSApi.md#postvpschangetimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone |
| [**postVpsChangeWebuzoPassword**](VPSApi.md#postvpschangewebuzopassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password |
| [**postVpsInsertCd**](VPSApi.md#postvpsinsertcd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS |
| [**postVpsReinstallOs**](VPSApi.md#postvpsreinstallos) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS |
| [**postVpsResetPassword**](VPSApi.md#postvpsresetpassword) | **POST** /vps/{id}/reset_password | Reset VPS Password |
| [**postVpsRestore**](VPSApi.md#postvpsrestore) | **POST** /vps/{id}/restore | Restore VPS from Backup |
| [**postVpsReverseDns**](VPSApi.md#postvpsreversedns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS |
| [**postVpsSetupVnc**](VPSApi.md#postvpssetupvnc) | **POST** /vps/{id}/setup_vnc | Setup VNC |
| [**postVpsSlices**](VPSApi.md#postvpsslices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade |
| [**postVpsViewDesktop**](VPSApi.md#postvpsviewdesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop |
| [**putVps**](VPSApi.md#putvps) | **PUT** /vps/order | Validate VPS Order |
| [**updateVpsInfo**](VPSApi.md#updatevpsinfo) | **POST** /vps/{id} | Update VPS Order |
| [**vPSCancel**](VPSApi.md#vpscancel) | **DELETE** /vps/{id} | Cancel VPS Service |



## addVps

> ServiceOrderPostResponse addVps(vpsOrderPostRequest)

Place VPS Order

Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { AddVpsRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // VpsOrderPostRequest (optional)
    vpsOrderPostRequest: ...,
  } satisfies AddVpsRequest;

  try {
    const data = await api.addVps(body);
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
| **vpsOrderPostRequest** | [VpsOrderPostRequest](VpsOrderPostRequest.md) |  | [Optional] |

### Return type

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Order placed successfully. Use the invoice ID to proceed to payment via &#x60;/pay/{method}/{invoices}&#x60; or view the invoice at &#x60;/billing/invoices/{id}&#x60;. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## deleteVpsBackup

> SuccessTextResponse deleteVpsBackup(id, file, all)

Delete VPS Backup

Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { DeleteVpsBackupRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
    // string | The backup filename to delete.
    file: file_example,
    // '0' | '1' | Set to `1` to list all backups across all services, not just the ones for the given VPS. (optional)
    all: all_example,
  } satisfies DeleteVpsBackupRequest;

  try {
    const data = await api.deleteVpsBackup(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |
| **file** | `string` | The backup filename to delete. | [Defaults to `undefined`] |
| **all** | `0`, `1` | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [Optional] [Defaults to `undefined`] [Enum: 0, 1] |

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


## doVpsBlockSmtp

> QueueResponse doVpsBlockSmtp(id)

Blocks SMTP

Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { DoVpsBlockSmtpRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number.
    id: 56,
  } satisfies DoVpsBlockSmtpRequest;

  try {
    const data = await api.doVpsBlockSmtp(body);
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
| **id** | `number` | VPS ID number. | [Defaults to `undefined`] |

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


## doVpsDisableCd

> QueueResponse doVpsDisableCd(id)

Disable CD Drive

Disables the virtual CD drive on the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { DoVpsDisableCdRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number.
    id: 56,
  } satisfies DoVpsDisableCdRequest;

  try {
    const data = await api.doVpsDisableCd(body);
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
| **id** | `number` | VPS ID number. | [Defaults to `undefined`] |

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


## doVpsDisableQuota

> QueueResponse doVpsDisableQuota(id)

Disable Quotas

Disables disk quota enforcement on the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { DoVpsDisableQuotaRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number.
    id: 56,
  } satisfies DoVpsDisableQuotaRequest;

  try {
    const data = await api.doVpsDisableQuota(body);
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
| **id** | `number` | VPS ID number. | [Defaults to `undefined`] |

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


## doVpsEjectCd

> QueueResponse doVpsEjectCd(id)

Eject CD Drive

Ejects the virtual CD from the VPS CD drive.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { DoVpsEjectCdRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number.
    id: 56,
  } satisfies DoVpsEjectCdRequest;

  try {
    const data = await api.doVpsEjectCd(body);
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
| **id** | `number` | VPS ID number. | [Defaults to `undefined`] |

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


## doVpsEnableQuota

> QueueResponse doVpsEnableQuota(id)

Enable Quotas

Enables disk quota enforcement on the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { DoVpsEnableQuotaRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number.
    id: 56,
  } satisfies DoVpsEnableQuotaRequest;

  try {
    const data = await api.doVpsEnableQuota(body);
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
| **id** | `number` | VPS ID number. | [Defaults to `undefined`] |

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


## doVpsRestart

> QueueResponse doVpsRestart(id)

Restart VPS

Restarts the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { DoVpsRestartRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number.
    id: 56,
  } satisfies DoVpsRestartRequest;

  try {
    const data = await api.doVpsRestart(body);
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
| **id** | `number` | VPS ID number. | [Defaults to `undefined`] |

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


## doVpsStart

> QueueResponse doVpsStart(id)

Start VPS

Powers on the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { DoVpsStartRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number.
    id: 56,
  } satisfies DoVpsStartRequest;

  try {
    const data = await api.doVpsStart(body);
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
| **id** | `number` | VPS ID number. | [Defaults to `undefined`] |

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


## doVpsStop

> QueueResponse doVpsStop(id)

Stop VPS

Powers off the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { DoVpsStopRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number.
    id: 56,
  } satisfies DoVpsStopRequest;

  try {
    const data = await api.doVpsStop(body);
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
| **id** | `number` | VPS ID number. | [Defaults to `undefined`] |

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


## downloadVpsBackup

> DownloadQsBackup200Response downloadVpsBackup(id, downloadQsBackupRequest, all)

Download VPS Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { DownloadVpsBackupRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
    // DownloadQsBackupRequest
    downloadQsBackupRequest: ...,
    // '0' | '1' | Set to `1` to list all backups across all services, not just the ones for the given VPS. (optional)
    all: all_example,
  } satisfies DownloadVpsBackupRequest;

  try {
    const data = await api.downloadVpsBackup(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |
| **downloadQsBackupRequest** | [DownloadQsBackupRequest](DownloadQsBackupRequest.md) |  | |
| **all** | `0`, `1` | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [Optional] [Defaults to `undefined`] [Enum: 0, 1] |

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


## getNewVps

> VpsOrder getNewVps()

VPS Ordering Information

Retrieves available VPS configurations, OS templates, and pricing for ordering.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { GetNewVpsRequest } from '';

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
  const api = new VPSApi(config);

  try {
    const data = await api.getNewVps();
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

[**VpsOrder**](VpsOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | VPS Order information |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getVpsBackups

> VpsBackupRows getVpsBackups(id, all)

Get VPS Backups List

Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { GetVpsBackupsRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
    // '0' | '1' | Set to `1` to list all backups across all services, not just the ones for the given VPS. (optional)
    all: all_example,
  } satisfies GetVpsBackupsRequest;

  try {
    const data = await api.getVpsBackups(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |
| **all** | `0`, `1` | Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [Optional] [Defaults to `undefined`] [Enum: 0, 1] |

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
| **200** | The listing of the available backups |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getVpsBuyHdSpace

> getVpsBuyHdSpace(id)

HD Space Addon Info

Returns available hard drive space addon options and pricing for the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { GetVpsBuyHdSpaceRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies GetVpsBuyHdSpaceRequest;

  try {
    const data = await api.getVpsBuyHdSpace(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

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
| **200** | Get VPS Buy HD Space information |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getVpsBuyIp

> getVpsBuyIp(id)

Additional IP Addon Info

Returns available additional IP address options and pricing for the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { GetVpsBuyIpRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies GetVpsBuyIpRequest;

  try {
    const data = await api.getVpsBuyIp(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

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
| **200** | VPS Buy IP information |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getVpsChangeTimezone

> Array&lt;string&gt; getVpsChangeTimezone(id)

Get Timezone Info

Returns the list of available timezones that can be set on the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { GetVpsChangeTimezoneRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies GetVpsChangeTimezoneRequest;

  try {
    const data = await api.getVpsChangeTimezone(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

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
| **200** | VPS Change Timezone info response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getVpsInfo

> Vps getVpsInfo(id)

Get VPS Order

Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { GetVpsInfoRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies GetVpsInfoRequest;

  try {
    const data = await api.getVpsInfo(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

### Return type

[**Vps**](Vps.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The VPS Information |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getVpsInvoices

> ChargeInvoiceRows getVpsInvoices(id)

Get VPS Invoices

Returns the billing invoices associated with this VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { GetVpsInvoicesRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies GetVpsInvoicesRequest;

  try {
    const data = await api.getVpsInvoices(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

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
| **200** | Get VPS Invoices response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getVpsList

> Array&lt;VpsRow&gt; getVpsList()

List VPS Orders

Returns all VPS services on the account with their current status and configuration.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { GetVpsListRequest } from '';

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
  const api = new VPSApi(config);

  try {
    const data = await api.getVpsList();
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

[**Array&lt;VpsRow&gt;**](VpsRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Vps&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getVpsReinstallOs

> VpsTemplatesList getVpsReinstallOs(id)

VPS Reinstall OS Options

Returns the list of available OS templates for reinstalling the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { GetVpsReinstallOsRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies GetVpsReinstallOsRequest;

  try {
    const data = await api.getVpsReinstallOs(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

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
| **200** | VPS Reinstall OS info response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getVpsReverseDns

> ReverseDnsEntries getVpsReverseDns(id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { GetVpsReverseDnsRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies GetVpsReverseDnsRequest;

  try {
    const data = await api.getVpsReverseDns(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

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
| **200** | VPS Reverse DNS info response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getVpsSetupVnc

> getVpsSetupVnc(id)

VNC Setup Info

Returns the current VNC connection information for the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { GetVpsSetupVncRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies GetVpsSetupVncRequest;

  try {
    const data = await api.getVpsSetupVnc(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

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
| **200** | Get VPS Setup VNC Information |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getVpsSlices

> getVpsSlices(id)

Slice Upgrade Info

Returns available slice upgrade options and pricing for the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { GetVpsSlicesRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies GetVpsSlicesRequest;

  try {
    const data = await api.getVpsSlices(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

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
| **200** | VPS Slices information |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getVpsTrafficUsage

> VpsTrafficResponse getVpsTrafficUsage(id)

Get Traffic Usage

Returns bandwidth traffic usage data for the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { GetVpsTrafficUsageRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies GetVpsTrafficUsageRequest;

  try {
    const data = await api.getVpsTrafficUsage(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

### Return type

[**VpsTrafficResponse**](VpsTrafficResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get VPS Traffic usage |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getVpsViewDesktop

> getVpsViewDesktop(id)

Get View Desktop Info

Returns remote desktop connection information for the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { GetVpsViewDesktopRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies GetVpsViewDesktopRequest;

  try {
    const data = await api.getVpsViewDesktop(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

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
| **200** | Get VPS View Desktop Information |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getVpsWelcomeEmail

> SuccessTextResponse getVpsWelcomeEmail(id)

Resend VPS Welcome Email

Resends the welcome email containing connection details and credentials for the VPS order.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { GetVpsWelcomeEmailRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // string | VPS ID
    id: 4813,
  } satisfies GetVpsWelcomeEmailRequest;

  try {
    const data = await api.getVpsWelcomeEmail(body);
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
| **id** | `string` | VPS ID | [Defaults to `undefined`] |

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


## postVpsBackup

> QueueResponse postVpsBackup(id)

Start a VPS Backup

Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { PostVpsBackupRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies PostVpsBackupRequest;

  try {
    const data = await api.postVpsBackup(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

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


## postVpsBuyHdSpace

> postVpsBuyHdSpace(id)

Purchase HD Space Addon

Purchases additional hard drive space for the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { PostVpsBuyHdSpaceRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies PostVpsBuyHdSpaceRequest;

  try {
    const data = await api.postVpsBuyHdSpace(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

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
| **200** | Post Buy HD Space for VPS response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postVpsBuyIp

> postVpsBuyIp(id)

Purchase Additional IP

Purchases an additional IP address for the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { PostVpsBuyIpRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies PostVpsBuyIpRequest;

  try {
    const data = await api.postVpsBuyIp(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

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
| **200** | Submit VPS Buy IP form response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postVpsChangeHostname

> QueueResponse postVpsChangeHostname(id, hostname)

Update VPS Hostname

Changes the hostname of the VPS. This queues a background task to update the server.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { PostVpsChangeHostnameRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
    // string (optional)
    hostname: hostname_example,
  } satisfies PostVpsChangeHostnameRequest;

  try {
    const data = await api.postVpsChangeHostname(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |
| **hostname** | `string` |  | [Optional] [Defaults to `undefined`] |

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


## postVpsChangeRootPassword

> QueueResponse postVpsChangeRootPassword(id, password)

Change VPS Root Password

Changes the root password of the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { PostVpsChangeRootPasswordRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
    // string
    password: password_example,
  } satisfies PostVpsChangeRootPasswordRequest;

  try {
    const data = await api.postVpsChangeRootPassword(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |
| **password** | `string` |  | [Defaults to `undefined`] |

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


## postVpsChangeTimezone

> QueueResponse postVpsChangeTimezone(id, timezone)

Change VPS Timezone

Changes the system timezone on the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { PostVpsChangeTimezoneRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
    // string | The time zone
    timezone: timezone_example,
  } satisfies PostVpsChangeTimezoneRequest;

  try {
    const data = await api.postVpsChangeTimezone(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |
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


## postVpsChangeWebuzoPassword

> QueueResponse postVpsChangeWebuzoPassword(id, password)

Change Webuzo Password

Changes the Webuzo control panel password on the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { PostVpsChangeWebuzoPasswordRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
    // string
    password: password_example,
  } satisfies PostVpsChangeWebuzoPasswordRequest;

  try {
    const data = await api.postVpsChangeWebuzoPassword(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |
| **password** | `string` |  | [Defaults to `undefined`] |

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


## postVpsInsertCd

> QueueResponse postVpsInsertCd(id, url)

Insert CD in VPS

Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { PostVpsInsertCdRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
    // string (optional)
    url: url_example,
  } satisfies PostVpsInsertCdRequest;

  try {
    const data = await api.postVpsInsertCd(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |
| **url** | `string` |  | [Optional] [Defaults to `undefined`] |

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


## postVpsReinstallOs

> QueueResponse postVpsReinstallOs(id, template, localPassword, password)

Reinstall VPS OS

Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { PostVpsReinstallOsRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
    // string | OS Template Filename
    template: template_example,
    // string | Password for this account.
    localPassword: localPassword_example,
    // string | Password for Root / Administrator Account. (optional)
    password: password_example,
  } satisfies PostVpsReinstallOsRequest;

  try {
    const data = await api.postVpsReinstallOs(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |
| **template** | `string` | OS Template Filename | [Defaults to `undefined`] |
| **localPassword** | `string` | Password for this account. | [Defaults to `undefined`] |
| **password** | `string` | Password for Root / Administrator Account. | [Optional] [Defaults to `undefined`] |

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


## postVpsResetPassword

> QueueResponse postVpsResetPassword(id)

Reset VPS Password

Resets the root password on the VPS to a new randomly generated password.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { PostVpsResetPasswordRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies PostVpsResetPasswordRequest;

  try {
    const data = await api.postVpsResetPassword(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

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


## postVpsRestore

> QueueResponse postVpsRestore(id, restoreRequest)

Restore VPS from Backup

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { PostVpsRestoreRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
    // RestoreRequest | VPS Restore request
    restoreRequest: ...,
  } satisfies PostVpsRestoreRequest;

  try {
    const data = await api.postVpsRestore(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |
| **restoreRequest** | [RestoreRequest](RestoreRequest.md) | VPS Restore request | |

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


## postVpsReverseDns

> TextResponse postVpsReverseDns(id, reverseDnsEntries)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { PostVpsReverseDnsRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
    // ReverseDnsEntries
    reverseDnsEntries: ...,
  } satisfies PostVpsReverseDnsRequest;

  try {
    const data = await api.postVpsReverseDns(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |
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
| **200** | Update VPS Reverse DNS response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postVpsSetupVnc

> QueueResponse postVpsSetupVnc(id)

Setup VNC

Sets up or refreshes the VNC console connection for the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { PostVpsSetupVncRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies PostVpsSetupVncRequest;

  try {
    const data = await api.postVpsSetupVnc(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

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


## postVpsSlices

> postVpsSlices(id)

Purchase Slice Upgrade

Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { PostVpsSlicesRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies PostVpsSlicesRequest;

  try {
    const data = await api.postVpsSlices(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

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
| **200** | Update VPS slices response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postVpsViewDesktop

> postVpsViewDesktop(id)

Update View Desktop

Updates or refreshes the remote desktop session for the VPS.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { PostVpsViewDesktopRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies PostVpsViewDesktopRequest;

  try {
    const data = await api.postVpsViewDesktop(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

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
| **200** | Submit VPS View Desktop Information |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## putVps

> VpsOrderPutResponse putVps(vpsOrderPutRequest)

Validate VPS Order

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { PutVpsRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // VpsOrderPutRequest (optional)
    vpsOrderPutRequest: ...,
  } satisfies PutVpsRequest;

  try {
    const data = await api.putVps(body);
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
| **vpsOrderPutRequest** | [VpsOrderPutRequest](VpsOrderPutRequest.md) |  | [Optional] |

### Return type

[**VpsOrderPutResponse**](VpsOrderPutResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Validate VPS order response. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateVpsInfo

> SuccessTextResponse updateVpsInfo(id)

Update VPS Order

Updates settings on a VPS order.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { UpdateVpsInfoRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // string | VPS ID number.
    id: id_example,
  } satisfies UpdateVpsInfoRequest;

  try {
    const data = await api.updateVpsInfo(body);
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
| **id** | `string` | VPS ID number. | [Defaults to `undefined`] |

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


## vPSCancel

> VPSCancel200Response vPSCancel(id)

Cancel VPS Service

Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example

```ts
import {
  Configuration,
  VPSApi,
} from '';
import type { VPSCancelRequest } from '';

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
  const api = new VPSApi(config);

  const body = {
    // number | VPS ID number
    id: 56,
  } satisfies VPSCancelRequest;

  try {
    const data = await api.vPSCancel(body);
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
| **id** | `number` | VPS ID number | [Defaults to `undefined`] |

### Return type

[**VPSCancel200Response**](VPSCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | VPS Cancel |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)

