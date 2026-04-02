# VPSApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**addVps**](VPSApi.md#addVps) | **POST** /vps/order | Place VPS Order |
| [**deleteVpsBackup**](VPSApi.md#deleteVpsBackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup |
| [**doVpsBlockSmtp**](VPSApi.md#doVpsBlockSmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP |
| [**doVpsDisableCd**](VPSApi.md#doVpsDisableCd) | **GET** /vps/{id}/disable_cd | Disable CD Drive |
| [**doVpsDisableQuota**](VPSApi.md#doVpsDisableQuota) | **GET** /vps/{id}/disable_quota | Disable Quotas |
| [**doVpsEjectCd**](VPSApi.md#doVpsEjectCd) | **GET** /vps/{id}/eject_cd | Eject CD Drive |
| [**doVpsEnableQuota**](VPSApi.md#doVpsEnableQuota) | **GET** /vps/{id}/enable_quota | Enable Quotas |
| [**doVpsRestart**](VPSApi.md#doVpsRestart) | **GET** /vps/{id}/restart | Restart VPS |
| [**doVpsStart**](VPSApi.md#doVpsStart) | **GET** /vps/{id}/start | Start VPS |
| [**doVpsStop**](VPSApi.md#doVpsStop) | **GET** /vps/{id}/stop | Stop VPS |
| [**downloadVpsBackup**](VPSApi.md#downloadVpsBackup) | **PATCH** /vps/{id}/backups | Download VPS Backup |
| [**getNewVps**](VPSApi.md#getNewVps) | **GET** /vps/order | VPS Ordering Information |
| [**getVpsBackups**](VPSApi.md#getVpsBackups) | **GET** /vps/{id}/backups | Get VPS Backups List |
| [**getVpsBuyHdSpace**](VPSApi.md#getVpsBuyHdSpace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info |
| [**getVpsBuyIp**](VPSApi.md#getVpsBuyIp) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info |
| [**getVpsChangeTimezone**](VPSApi.md#getVpsChangeTimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info |
| [**getVpsInfo**](VPSApi.md#getVpsInfo) | **GET** /vps/{id} | Get VPS Order |
| [**getVpsInvoices**](VPSApi.md#getVpsInvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices |
| [**getVpsList**](VPSApi.md#getVpsList) | **GET** /vps | List VPS Orders |
| [**getVpsReinstallOs**](VPSApi.md#getVpsReinstallOs) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options |
| [**getVpsReverseDns**](VPSApi.md#getVpsReverseDns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info |
| [**getVpsSetupVnc**](VPSApi.md#getVpsSetupVnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info |
| [**getVpsSlices**](VPSApi.md#getVpsSlices) | **GET** /vps/{id}/slices | Slice Upgrade Info |
| [**getVpsTrafficUsage**](VPSApi.md#getVpsTrafficUsage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage |
| [**getVpsViewDesktop**](VPSApi.md#getVpsViewDesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info |
| [**getVpsWelcomeEmail**](VPSApi.md#getVpsWelcomeEmail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email |
| [**postVpsBackup**](VPSApi.md#postVpsBackup) | **GET** /vps/{id}/backup | Start a VPS Backup |
| [**postVpsBuyHdSpace**](VPSApi.md#postVpsBuyHdSpace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon |
| [**postVpsBuyIp**](VPSApi.md#postVpsBuyIp) | **POST** /vps/{id}/buy_ip | Purchase Additional IP |
| [**postVpsChangeHostname**](VPSApi.md#postVpsChangeHostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname |
| [**postVpsChangeRootPassword**](VPSApi.md#postVpsChangeRootPassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password |
| [**postVpsChangeTimezone**](VPSApi.md#postVpsChangeTimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone |
| [**postVpsChangeWebuzoPassword**](VPSApi.md#postVpsChangeWebuzoPassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password |
| [**postVpsInsertCd**](VPSApi.md#postVpsInsertCd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS |
| [**postVpsReinstallOs**](VPSApi.md#postVpsReinstallOs) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS |
| [**postVpsResetPassword**](VPSApi.md#postVpsResetPassword) | **POST** /vps/{id}/reset_password | Reset VPS Password |
| [**postVpsRestore**](VPSApi.md#postVpsRestore) | **POST** /vps/{id}/restore | Restore VPS from Backup |
| [**postVpsReverseDns**](VPSApi.md#postVpsReverseDns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS |
| [**postVpsSetupVnc**](VPSApi.md#postVpsSetupVnc) | **POST** /vps/{id}/setup_vnc | Setup VNC |
| [**postVpsSlices**](VPSApi.md#postVpsSlices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade |
| [**postVpsViewDesktop**](VPSApi.md#postVpsViewDesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop |
| [**putVps**](VPSApi.md#putVps) | **PUT** /vps/order | Validate VPS Order |
| [**updateVpsInfo**](VPSApi.md#updateVpsInfo) | **POST** /vps/{id} | Update VPS Order |
| [**vPSCancel**](VPSApi.md#vPSCancel) | **DELETE** /vps/{id} | Cancel VPS Service |


<a id="addVps"></a>
# **addVps**
> ServiceOrderPostResponse addVps(vpsOrderPostRequest)

Place VPS Order

Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val vpsOrderPostRequest : VpsOrderPostRequest =  // VpsOrderPostRequest | 
try {
    val result : ServiceOrderPostResponse = apiInstance.addVps(vpsOrderPostRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#addVps")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#addVps")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **vpsOrderPostRequest** | [**VpsOrderPostRequest**](VpsOrderPostRequest.md)|  | [optional] |

### Return type

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="deleteVpsBackup"></a>
# **deleteVpsBackup**
> SuccessTextResponse deleteVpsBackup(id, file, all)

Delete VPS Backup

Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
val file : kotlin.String = file_example // kotlin.String | The backup filename to delete.
val all : kotlin.String = all_example // kotlin.String | Set to `1` to list all backups across all services, not just the ones for the given VPS.
try {
    val result : SuccessTextResponse = apiInstance.deleteVpsBackup(id, file, all)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#deleteVpsBackup")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#deleteVpsBackup")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| VPS ID number | |
| **file** | **kotlin.String**| The backup filename to delete. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **all** | **kotlin.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [enum: 0, 1] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="doVpsBlockSmtp"></a>
# **doVpsBlockSmtp**
> QueueResponse doVpsBlockSmtp(id)

Blocks SMTP

Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number.
try {
    val result : QueueResponse = apiInstance.doVpsBlockSmtp(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#doVpsBlockSmtp")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#doVpsBlockSmtp")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number. | |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="doVpsDisableCd"></a>
# **doVpsDisableCd**
> QueueResponse doVpsDisableCd(id)

Disable CD Drive

Disables the virtual CD drive on the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number.
try {
    val result : QueueResponse = apiInstance.doVpsDisableCd(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#doVpsDisableCd")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#doVpsDisableCd")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number. | |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="doVpsDisableQuota"></a>
# **doVpsDisableQuota**
> QueueResponse doVpsDisableQuota(id)

Disable Quotas

Disables disk quota enforcement on the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number.
try {
    val result : QueueResponse = apiInstance.doVpsDisableQuota(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#doVpsDisableQuota")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#doVpsDisableQuota")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number. | |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="doVpsEjectCd"></a>
# **doVpsEjectCd**
> QueueResponse doVpsEjectCd(id)

Eject CD Drive

Ejects the virtual CD from the VPS CD drive.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number.
try {
    val result : QueueResponse = apiInstance.doVpsEjectCd(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#doVpsEjectCd")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#doVpsEjectCd")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number. | |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="doVpsEnableQuota"></a>
# **doVpsEnableQuota**
> QueueResponse doVpsEnableQuota(id)

Enable Quotas

Enables disk quota enforcement on the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number.
try {
    val result : QueueResponse = apiInstance.doVpsEnableQuota(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#doVpsEnableQuota")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#doVpsEnableQuota")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number. | |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="doVpsRestart"></a>
# **doVpsRestart**
> QueueResponse doVpsRestart(id)

Restart VPS

Restarts the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number.
try {
    val result : QueueResponse = apiInstance.doVpsRestart(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#doVpsRestart")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#doVpsRestart")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number. | |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="doVpsStart"></a>
# **doVpsStart**
> QueueResponse doVpsStart(id)

Start VPS

Powers on the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number.
try {
    val result : QueueResponse = apiInstance.doVpsStart(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#doVpsStart")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#doVpsStart")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number. | |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="doVpsStop"></a>
# **doVpsStop**
> QueueResponse doVpsStop(id)

Stop VPS

Powers off the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number.
try {
    val result : QueueResponse = apiInstance.doVpsStop(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#doVpsStop")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#doVpsStop")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number. | |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="downloadVpsBackup"></a>
# **downloadVpsBackup**
> DownloadQsBackup200Response downloadVpsBackup(id, downloadQsBackupRequest, all)

Download VPS Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
val downloadQsBackupRequest : DownloadQsBackupRequest =  // DownloadQsBackupRequest | 
val all : kotlin.String = all_example // kotlin.String | Set to `1` to list all backups across all services, not just the ones for the given VPS.
try {
    val result : DownloadQsBackup200Response = apiInstance.downloadVpsBackup(id, downloadQsBackupRequest, all)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#downloadVpsBackup")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#downloadVpsBackup")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| VPS ID number | |
| **downloadQsBackupRequest** | [**DownloadQsBackupRequest**](DownloadQsBackupRequest.md)|  | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **all** | **kotlin.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [enum: 0, 1] |

### Return type

[**DownloadQsBackup200Response**](DownloadQsBackup200Response.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="getNewVps"></a>
# **getNewVps**
> VpsOrder getNewVps()

VPS Ordering Information

Retrieves available VPS configurations, OS templates, and pricing for ordering.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
try {
    val result : VpsOrder = apiInstance.getNewVps()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#getNewVps")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#getNewVps")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**VpsOrder**](VpsOrder.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getVpsBackups"></a>
# **getVpsBackups**
> VpsBackupRows getVpsBackups(id, all)

Get VPS Backups List

Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
val all : kotlin.String = all_example // kotlin.String | Set to `1` to list all backups across all services, not just the ones for the given VPS.
try {
    val result : VpsBackupRows = apiInstance.getVpsBackups(id, all)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#getVpsBackups")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#getVpsBackups")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| VPS ID number | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **all** | **kotlin.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [enum: 0, 1] |

### Return type

[**VpsBackupRows**](VpsBackupRows.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getVpsBuyHdSpace"></a>
# **getVpsBuyHdSpace**
> getVpsBuyHdSpace(id)

HD Space Addon Info

Returns available hard drive space addon options and pricing for the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    apiInstance.getVpsBuyHdSpace(id)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#getVpsBuyHdSpace")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#getVpsBuyHdSpace")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

null (empty response body)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getVpsBuyIp"></a>
# **getVpsBuyIp**
> getVpsBuyIp(id)

Additional IP Addon Info

Returns available additional IP address options and pricing for the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    apiInstance.getVpsBuyIp(id)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#getVpsBuyIp")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#getVpsBuyIp")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

null (empty response body)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getVpsChangeTimezone"></a>
# **getVpsChangeTimezone**
> kotlin.collections.List&lt;kotlin.String&gt; getVpsChangeTimezone(id)

Get Timezone Info

Returns the list of available timezones that can be set on the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : kotlin.collections.List<kotlin.String> = apiInstance.getVpsChangeTimezone(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#getVpsChangeTimezone")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#getVpsChangeTimezone")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

**kotlin.collections.List&lt;kotlin.String&gt;**

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getVpsInfo"></a>
# **getVpsInfo**
> Vps getVpsInfo(id)

Get VPS Order

Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : Vps = apiInstance.getVpsInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#getVpsInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#getVpsInfo")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

[**Vps**](Vps.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getVpsInvoices"></a>
# **getVpsInvoices**
> ChargeInvoiceRows getVpsInvoices(id)

Get VPS Invoices

Returns the billing invoices associated with this VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : ChargeInvoiceRows = apiInstance.getVpsInvoices(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#getVpsInvoices")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#getVpsInvoices")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getVpsList"></a>
# **getVpsList**
> kotlin.collections.List&lt;VpsRow&gt; getVpsList()

List VPS Orders

Returns all VPS services on the account with their current status and configuration.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
try {
    val result : kotlin.collections.List<VpsRow> = apiInstance.getVpsList()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#getVpsList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#getVpsList")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.collections.List&lt;VpsRow&gt;**](VpsRow.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getVpsReinstallOs"></a>
# **getVpsReinstallOs**
> VpsTemplatesList getVpsReinstallOs(id)

VPS Reinstall OS Options

Returns the list of available OS templates for reinstalling the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : VpsTemplatesList = apiInstance.getVpsReinstallOs(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#getVpsReinstallOs")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#getVpsReinstallOs")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

[**VpsTemplatesList**](VpsTemplatesList.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getVpsReverseDns"></a>
# **getVpsReverseDns**
> ReverseDnsEntries getVpsReverseDns(id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : ReverseDnsEntries = apiInstance.getVpsReverseDns(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#getVpsReverseDns")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#getVpsReverseDns")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getVpsSetupVnc"></a>
# **getVpsSetupVnc**
> getVpsSetupVnc(id)

VNC Setup Info

Returns the current VNC connection information for the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    apiInstance.getVpsSetupVnc(id)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#getVpsSetupVnc")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#getVpsSetupVnc")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

null (empty response body)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getVpsSlices"></a>
# **getVpsSlices**
> getVpsSlices(id)

Slice Upgrade Info

Returns available slice upgrade options and pricing for the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    apiInstance.getVpsSlices(id)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#getVpsSlices")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#getVpsSlices")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

null (empty response body)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getVpsTrafficUsage"></a>
# **getVpsTrafficUsage**
> VpsTrafficResponse getVpsTrafficUsage(id)

Get Traffic Usage

Returns bandwidth traffic usage data for the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : VpsTrafficResponse = apiInstance.getVpsTrafficUsage(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#getVpsTrafficUsage")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#getVpsTrafficUsage")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

[**VpsTrafficResponse**](VpsTrafficResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getVpsViewDesktop"></a>
# **getVpsViewDesktop**
> getVpsViewDesktop(id)

Get View Desktop Info

Returns remote desktop connection information for the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    apiInstance.getVpsViewDesktop(id)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#getVpsViewDesktop")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#getVpsViewDesktop")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

null (empty response body)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getVpsWelcomeEmail"></a>
# **getVpsWelcomeEmail**
> SuccessTextResponse getVpsWelcomeEmail(id)

Resend VPS Welcome Email

Resends the welcome email containing connection details and credentials for the VPS order.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.String = 4813 // kotlin.String | VPS ID
try {
    val result : SuccessTextResponse = apiInstance.getVpsWelcomeEmail(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#getVpsWelcomeEmail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#getVpsWelcomeEmail")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.String**| VPS ID | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="postVpsBackup"></a>
# **postVpsBackup**
> QueueResponse postVpsBackup(id)

Start a VPS Backup

Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsBackup(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#postVpsBackup")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#postVpsBackup")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="postVpsBuyHdSpace"></a>
# **postVpsBuyHdSpace**
> postVpsBuyHdSpace(id)

Purchase HD Space Addon

Purchases additional hard drive space for the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    apiInstance.postVpsBuyHdSpace(id)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#postVpsBuyHdSpace")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#postVpsBuyHdSpace")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

null (empty response body)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="postVpsBuyIp"></a>
# **postVpsBuyIp**
> postVpsBuyIp(id)

Purchase Additional IP

Purchases an additional IP address for the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    apiInstance.postVpsBuyIp(id)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#postVpsBuyIp")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#postVpsBuyIp")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

null (empty response body)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="postVpsChangeHostname"></a>
# **postVpsChangeHostname**
> QueueResponse postVpsChangeHostname(id, hostname)

Update VPS Hostname

Changes the hostname of the VPS. This queues a background task to update the server.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
val hostname : kotlin.String = hostname_example // kotlin.String | 
try {
    val result : QueueResponse = apiInstance.postVpsChangeHostname(id, hostname)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#postVpsChangeHostname")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#postVpsChangeHostname")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| VPS ID number | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **hostname** | **kotlin.String**|  | [optional] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="postVpsChangeRootPassword"></a>
# **postVpsChangeRootPassword**
> QueueResponse postVpsChangeRootPassword(id, password)

Change VPS Root Password

Changes the root password of the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
val password : kotlin.String = password_example // kotlin.String | 
try {
    val result : QueueResponse = apiInstance.postVpsChangeRootPassword(id, password)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#postVpsChangeRootPassword")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#postVpsChangeRootPassword")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| VPS ID number | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **password** | **kotlin.String**|  | |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="postVpsChangeTimezone"></a>
# **postVpsChangeTimezone**
> QueueResponse postVpsChangeTimezone(id, timezone)

Change VPS Timezone

Changes the system timezone on the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
val timezone : kotlin.String = timezone_example // kotlin.String | The time zone
try {
    val result : QueueResponse = apiInstance.postVpsChangeTimezone(id, timezone)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#postVpsChangeTimezone")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#postVpsChangeTimezone")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| VPS ID number | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **timezone** | **kotlin.String**| The time zone | |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="postVpsChangeWebuzoPassword"></a>
# **postVpsChangeWebuzoPassword**
> QueueResponse postVpsChangeWebuzoPassword(id, password)

Change Webuzo Password

Changes the Webuzo control panel password on the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
val password : kotlin.String = password_example // kotlin.String | 
try {
    val result : QueueResponse = apiInstance.postVpsChangeWebuzoPassword(id, password)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#postVpsChangeWebuzoPassword")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#postVpsChangeWebuzoPassword")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| VPS ID number | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **password** | **kotlin.String**|  | |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="postVpsInsertCd"></a>
# **postVpsInsertCd**
> QueueResponse postVpsInsertCd(id, url)

Insert CD in VPS

Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
val url : kotlin.String = url_example // kotlin.String | 
try {
    val result : QueueResponse = apiInstance.postVpsInsertCd(id, url)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#postVpsInsertCd")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#postVpsInsertCd")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| VPS ID number | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **url** | **kotlin.String**|  | [optional] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="postVpsReinstallOs"></a>
# **postVpsReinstallOs**
> QueueResponse postVpsReinstallOs(id, template, localPassword, password)

Reinstall VPS OS

Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
val template : kotlin.String = template_example // kotlin.String | OS Template Filename
val localPassword : kotlin.String = localPassword_example // kotlin.String | Password for this account.
val password : kotlin.String = password_example // kotlin.String | Password for Root / Administrator Account.
try {
    val result : QueueResponse = apiInstance.postVpsReinstallOs(id, template, localPassword, password)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#postVpsReinstallOs")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#postVpsReinstallOs")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| VPS ID number | |
| **template** | **kotlin.String**| OS Template Filename | |
| **localPassword** | **kotlin.String**| Password for this account. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **password** | **kotlin.String**| Password for Root / Administrator Account. | [optional] |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="postVpsResetPassword"></a>
# **postVpsResetPassword**
> QueueResponse postVpsResetPassword(id)

Reset VPS Password

Resets the root password on the VPS to a new randomly generated password.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsResetPassword(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#postVpsResetPassword")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#postVpsResetPassword")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="postVpsRestore"></a>
# **postVpsRestore**
> QueueResponse postVpsRestore(id, restoreRequest)

Restore VPS from Backup

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
val restoreRequest : RestoreRequest =  // RestoreRequest | VPS Restore request
try {
    val result : QueueResponse = apiInstance.postVpsRestore(id, restoreRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#postVpsRestore")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#postVpsRestore")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| VPS ID number | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **restoreRequest** | [**RestoreRequest**](RestoreRequest.md)| VPS Restore request | |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="postVpsReverseDns"></a>
# **postVpsReverseDns**
> TextResponse postVpsReverseDns(id, reverseDnsEntries)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
val reverseDnsEntries : ReverseDnsEntries =  // ReverseDnsEntries | 
try {
    val result : TextResponse = apiInstance.postVpsReverseDns(id, reverseDnsEntries)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#postVpsReverseDns")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#postVpsReverseDns")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| VPS ID number | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **reverseDnsEntries** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="postVpsSetupVnc"></a>
# **postVpsSetupVnc**
> QueueResponse postVpsSetupVnc(id)

Setup VNC

Sets up or refreshes the VNC console connection for the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsSetupVnc(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#postVpsSetupVnc")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#postVpsSetupVnc")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="postVpsSlices"></a>
# **postVpsSlices**
> postVpsSlices(id)

Purchase Slice Upgrade

Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    apiInstance.postVpsSlices(id)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#postVpsSlices")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#postVpsSlices")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

null (empty response body)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="postVpsViewDesktop"></a>
# **postVpsViewDesktop**
> postVpsViewDesktop(id)

Update View Desktop

Updates or refreshes the remote desktop session for the VPS.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    apiInstance.postVpsViewDesktop(id)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#postVpsViewDesktop")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#postVpsViewDesktop")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

null (empty response body)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="putVps"></a>
# **putVps**
> VpsOrderPutResponse putVps(vpsOrderPutRequest)

Validate VPS Order

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val vpsOrderPutRequest : VpsOrderPutRequest =  // VpsOrderPutRequest | 
try {
    val result : VpsOrderPutResponse = apiInstance.putVps(vpsOrderPutRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#putVps")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#putVps")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **vpsOrderPutRequest** | [**VpsOrderPutRequest**](VpsOrderPutRequest.md)|  | [optional] |

### Return type

[**VpsOrderPutResponse**](VpsOrderPutResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="updateVpsInfo"></a>
# **updateVpsInfo**
> SuccessTextResponse updateVpsInfo(id)

Update VPS Order

Updates settings on a VPS order.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.String = id_example // kotlin.String | VPS ID number.
try {
    val result : SuccessTextResponse = apiInstance.updateVpsInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#updateVpsInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#updateVpsInfo")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.String**| VPS ID number. | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="vPSCancel"></a>
# **vPSCancel**
> VPSCancel200Response vPSCancel(id)

Cancel VPS Service

Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : VPSCancel200Response = apiInstance.vPSCancel(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling VPSApi#vPSCancel")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling VPSApi#vPSCancel")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| VPS ID number | |

### Return type

[**VPSCancel200Response**](VPSCancel200Response.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

