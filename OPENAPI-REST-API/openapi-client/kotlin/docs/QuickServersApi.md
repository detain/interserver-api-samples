# QuickServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**addQs**](QuickServersApi.md#addQs) | **POST** /qs/order | Place QuickServer Order |
| [**deleteQsBackup**](QuickServersApi.md#deleteQsBackup) | **DELETE** /qs/{id}/backups | Delete QuickServer Backup |
| [**doQsBlockSmtp**](QuickServersApi.md#doQsBlockSmtp) | **GET** /qs/{id}/block_smtp | Block QuickServer SMTP |
| [**doQsDisableCd**](QuickServersApi.md#doQsDisableCd) | **GET** /qs/{id}/disable_cd | Disable CD Drive |
| [**doQsDisableQuota**](QuickServersApi.md#doQsDisableQuota) | **GET** /qs/{id}/disable_quota | Disable Quotas |
| [**doQsEjectCd**](QuickServersApi.md#doQsEjectCd) | **GET** /qs/{id}/eject_cd | Eject CD Drive |
| [**doQsEnableQuota**](QuickServersApi.md#doQsEnableQuota) | **GET** /qs/{id}/enable_quota | Enable Quotas |
| [**doQsRestart**](QuickServersApi.md#doQsRestart) | **GET** /qs/{id}/restart | Restart QuickServer |
| [**doQsStart**](QuickServersApi.md#doQsStart) | **GET** /qs/{id}/start | Start QuickServer |
| [**doQsStop**](QuickServersApi.md#doQsStop) | **GET** /qs/{id}/stop | Stop QuickServer |
| [**downloadQsBackup**](QuickServersApi.md#downloadQsBackup) | **PATCH** /qs/{id}/backups | Download QuickServer Backup |
| [**getNewQs**](QuickServersApi.md#getNewQs) | **GET** /qs/order | Get QuickServer Ordering Information |
| [**getQsBackups**](QuickServersApi.md#getQsBackups) | **GET** /qs/{id}/backups | List QuickServer Backups |
| [**getQsChangeHostname**](QuickServersApi.md#getQsChangeHostname) | **GET** /qs/{id}/change_hostname | Get QuickServer Hostname |
| [**getQsChangeRootPassword**](QuickServersApi.md#getQsChangeRootPassword) | **GET** /qs/{id}/change_root_password | Get Change Root Password Info |
| [**getQsChangeTimezone**](QuickServersApi.md#getQsChangeTimezone) | **GET** /qs/{id}/change_timezone | Get Timezone Info |
| [**getQsChangeWebuzoPassword**](QuickServersApi.md#getQsChangeWebuzoPassword) | **GET** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info |
| [**getQsInfo**](QuickServersApi.md#getQsInfo) | **GET** /qs/{id} | Get QuickServer Order |
| [**getQsInsertCd**](QuickServersApi.md#getQsInsertCd) | **GET** /qs/{id}/insert_cd | Insert CD Information |
| [**getQsInvoices**](QuickServersApi.md#getQsInvoices) | **GET** /qs/{id}/invoices | Get QuickServer Invoices |
| [**getQsList**](QuickServersApi.md#getQsList) | **GET** /qs | List QuickServers |
| [**getQsReinstallOs**](QuickServersApi.md#getQsReinstallOs) | **GET** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options |
| [**getQsResetPassword**](QuickServersApi.md#getQsResetPassword) | **GET** /qs/{id}/reset_password | Reset QuickServer Password Info |
| [**getQsReverseDns**](QuickServersApi.md#getQsReverseDns) | **GET** /qs/{id}/reverse_dns | Reverse DNS Info |
| [**getQsSetupVnc**](QuickServersApi.md#getQsSetupVnc) | **GET** /qs/{id}/setup_vnc | VNC Setup Info |
| [**getQsTrafficUsage**](QuickServersApi.md#getQsTrafficUsage) | **GET** /qs/{id}/traffic_usage | Get Traffic Usage |
| [**getQsViewDesktop**](QuickServersApi.md#getQsViewDesktop) | **GET** /qs/{id}/view_desktop | Get View Desktop Info |
| [**getQsWelcomeEmail**](QuickServersApi.md#getQsWelcomeEmail) | **GET** /qs/{id}/welcome_email | Resend QuickServer Welcome Email |
| [**postQsBackup**](QuickServersApi.md#postQsBackup) | **POST** /qs/{id}/backup | Create QuickServer Backup |
| [**postQsChangeHostname**](QuickServersApi.md#postQsChangeHostname) | **POST** /qs/{id}/change_hostname | Update QuickServer Hostname |
| [**postQsChangeRootPassword**](QuickServersApi.md#postQsChangeRootPassword) | **POST** /qs/{id}/change_root_password | Change Root Password |
| [**postQsChangeTimezone**](QuickServersApi.md#postQsChangeTimezone) | **POST** /qs/{id}/change_timezone | Change QuickServer Timezone |
| [**postQsChangeWebuzoPassword**](QuickServersApi.md#postQsChangeWebuzoPassword) | **POST** /qs/{id}/change_webuzo_password | Change Webuzo Password |
| [**postQsInsertCd**](QuickServersApi.md#postQsInsertCd) | **POST** /qs/{id}/insert_cd | Insert CD in QuickServer |
| [**postQsReinstallOs**](QuickServersApi.md#postQsReinstallOs) | **POST** /qs/{id}/reinstall_os | Reinstall QuickServer OS |
| [**postQsResetPassword**](QuickServersApi.md#postQsResetPassword) | **POST** /qs/{id}/reset_password | Reset QuickServer Password |
| [**postQsReverseDns**](QuickServersApi.md#postQsReverseDns) | **POST** /qs/{id}/reverse_dns | Update Reverse DNS |
| [**postQsSetupVnc**](QuickServersApi.md#postQsSetupVnc) | **POST** /qs/{id}/setup_vnc | Setup VNC |
| [**postQsTrafficUsage**](QuickServersApi.md#postQsTrafficUsage) | **POST** /qs/{id}/traffic_usage | Search Traffic Usage |
| [**postQsViewDesktop**](QuickServersApi.md#postQsViewDesktop) | **POST** /qs/{id}/view_desktop | Update View Desktop |
| [**postQuickServerRestore**](QuickServersApi.md#postQuickServerRestore) | **POST** /qs/{id}/restore | Restore QuickServer from Backup |
| [**putQs**](QuickServersApi.md#putQs) | **PUT** /qs/order | Validate QuickServer Order |
| [**quickserversCancel**](QuickServersApi.md#quickserversCancel) | **DELETE** /qs/{id} | Cancel QuickServer Order |
| [**updateQsInfo**](QuickServersApi.md#updateQsInfo) | **POST** /qs/{id} | Update QuickServer Order |


<a id="addQs"></a>
# **addQs**
> ServiceOrderPostResponse addQs()

Place QuickServer Order

Places a QuickServer order. On success, invoices are generated for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
try {
    val result : ServiceOrderPostResponse = apiInstance.addQs()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#addQs")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#addQs")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

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

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="deleteQsBackup"></a>
# **deleteQsBackup**
> SuccessTextResponse deleteQsBackup(id, file, all)

Delete QuickServer Backup

Permanently removes the specified backup file from storage. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames before deleting.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
val file : kotlin.String = file_example // kotlin.String | The backup filename to delete.
val all : kotlin.String = all_example // kotlin.String | Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
try {
    val result : SuccessTextResponse = apiInstance.deleteQsBackup(id, file, all)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#deleteQsBackup")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#deleteQsBackup")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| QuickServer ID number | |
| **file** | **kotlin.String**| The backup filename to delete. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **all** | **kotlin.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] [enum: 0, 1] |

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

<a id="doQsBlockSmtp"></a>
# **doQsBlockSmtp**
> QueueResponse doQsBlockSmtp(id)

Block QuickServer SMTP

Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number.
try {
    val result : QueueResponse = apiInstance.doQsBlockSmtp(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#doQsBlockSmtp")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#doQsBlockSmtp")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number. | |

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

<a id="doQsDisableCd"></a>
# **doQsDisableCd**
> QueueResponse doQsDisableCd(id)

Disable CD Drive

Disables the virtual CD drive for the QuickServer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number.
try {
    val result : QueueResponse = apiInstance.doQsDisableCd(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#doQsDisableCd")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#doQsDisableCd")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number. | |

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

<a id="doQsDisableQuota"></a>
# **doQsDisableQuota**
> QueueResponse doQsDisableQuota(id)

Disable Quotas

Disables disk quota enforcement for the QuickServer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number.
try {
    val result : QueueResponse = apiInstance.doQsDisableQuota(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#doQsDisableQuota")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#doQsDisableQuota")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number. | |

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

<a id="doQsEjectCd"></a>
# **doQsEjectCd**
> QueueResponse doQsEjectCd(id)

Eject CD Drive

Ejects the virtual CD from the QuickServer&#39;s CD drive.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number.
try {
    val result : QueueResponse = apiInstance.doQsEjectCd(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#doQsEjectCd")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#doQsEjectCd")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number. | |

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

<a id="doQsEnableQuota"></a>
# **doQsEnableQuota**
> QueueResponse doQsEnableQuota(id)

Enable Quotas

Enables disk quota enforcement for the QuickServer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number.
try {
    val result : QueueResponse = apiInstance.doQsEnableQuota(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#doQsEnableQuota")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#doQsEnableQuota")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number. | |

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

<a id="doQsRestart"></a>
# **doQsRestart**
> QueueResponse doQsRestart(id)

Restart QuickServer

Restarts the QuickServer. The server will be shut down and started again.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number.
try {
    val result : QueueResponse = apiInstance.doQsRestart(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#doQsRestart")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#doQsRestart")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number. | |

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

<a id="doQsStart"></a>
# **doQsStart**
> QueueResponse doQsStart(id)

Start QuickServer

Powers on the QuickServer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number.
try {
    val result : QueueResponse = apiInstance.doQsStart(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#doQsStart")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#doQsStart")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number. | |

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

<a id="doQsStop"></a>
# **doQsStop**
> QueueResponse doQsStop(id)

Stop QuickServer

Powers off the QuickServer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number.
try {
    val result : QueueResponse = apiInstance.doQsStop(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#doQsStop")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#doQsStop")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number. | |

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

<a id="downloadQsBackup"></a>
# **downloadQsBackup**
> DownloadQsBackup200Response downloadQsBackup(id, downloadQsBackupRequest, all)

Download QuickServer Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
val downloadQsBackupRequest : DownloadQsBackupRequest =  // DownloadQsBackupRequest | 
val all : kotlin.String = all_example // kotlin.String | Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
try {
    val result : DownloadQsBackup200Response = apiInstance.downloadQsBackup(id, downloadQsBackupRequest, all)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#downloadQsBackup")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#downloadQsBackup")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| QuickServer ID number | |
| **downloadQsBackupRequest** | [**DownloadQsBackupRequest**](DownloadQsBackupRequest.md)|  | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **all** | **kotlin.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] [enum: 0, 1] |

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

<a id="getNewQs"></a>
# **getNewQs**
> QuickserverOrder getNewQs()

Get QuickServer Ordering Information

Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
try {
    val result : QuickserverOrder = apiInstance.getNewQs()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getNewQs")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getNewQs")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**QuickserverOrder**](QuickserverOrder.md)

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

<a id="getQsBackups"></a>
# **getQsBackups**
> VpsBackupRows getQsBackups(id, all)

List QuickServer Backups

Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /qs/{id}/backups&#x60; to download or &#x60;DELETE /qs/{id}/backups&#x60; to remove a backup. Use &#x60;POST /qs/{id}/restore&#x60; to restore from a backup.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
val all : kotlin.String = all_example // kotlin.String | Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
try {
    val result : VpsBackupRows = apiInstance.getQsBackups(id, all)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getQsBackups")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getQsBackups")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| QuickServer ID number | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **all** | **kotlin.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] [enum: 0, 1] |

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

<a id="getQsChangeHostname"></a>
# **getQsChangeHostname**
> getQsChangeHostname(id)

Get QuickServer Hostname

Retrieves the current hostname and any validation requirements for changing it.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    apiInstance.getQsChangeHostname(id)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getQsChangeHostname")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getQsChangeHostname")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="getQsChangeRootPassword"></a>
# **getQsChangeRootPassword**
> getQsChangeRootPassword(id)

Get Change Root Password Info

Retrieves instructions or metadata needed to reset the root password.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    apiInstance.getQsChangeRootPassword(id)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getQsChangeRootPassword")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getQsChangeRootPassword")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="getQsChangeTimezone"></a>
# **getQsChangeTimezone**
> kotlin.collections.List&lt;kotlin.String&gt; getQsChangeTimezone(id)

Get Timezone Info

Returns the list of available timezones that can be set on the QuickServer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : kotlin.collections.List<kotlin.String> = apiInstance.getQsChangeTimezone(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getQsChangeTimezone")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getQsChangeTimezone")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="getQsChangeWebuzoPassword"></a>
# **getQsChangeWebuzoPassword**
> getQsChangeWebuzoPassword(id)

Webuzo Change Pass Info

Retrieves instructions or metadata for changing the Webuzo control panel password.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    apiInstance.getQsChangeWebuzoPassword(id)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getQsChangeWebuzoPassword")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getQsChangeWebuzoPassword")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="getQsInfo"></a>
# **getQsInfo**
> Quickserver getQsInfo(id)

Get QuickServer Order

Returns detailed QuickServer information, including credentials, IPs, and available client actions.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number.
try {
    val result : Quickserver = apiInstance.getQsInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getQsInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getQsInfo")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number. | |

### Return type

[**Quickserver**](Quickserver.md)

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

<a id="getQsInsertCd"></a>
# **getQsInsertCd**
> getQsInsertCd(id)

Insert CD Information

Returns available ISO images that can be mounted in the QuickServer&#39;s virtual CD drive.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    apiInstance.getQsInsertCd(id)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getQsInsertCd")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getQsInsertCd")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="getQsInvoices"></a>
# **getQsInvoices**
> ChargeInvoiceRows getQsInvoices(id)

Get QuickServer Invoices

Returns the billing invoices associated with this QuickServer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : ChargeInvoiceRows = apiInstance.getQsInvoices(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getQsInvoices")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getQsInvoices")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="getQsList"></a>
# **getQsList**
> kotlin.collections.List&lt;QuickserverRow&gt; getQsList()

List QuickServers

Returns the QuickServer services on your account. Use the &#x60;qs_id&#x60; values with &#x60;/qs/{id}&#x60; for details or with the action endpoints (restart, backup, etc.) to manage each server.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
try {
    val result : kotlin.collections.List<QuickserverRow> = apiInstance.getQsList()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getQsList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getQsList")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.collections.List&lt;QuickserverRow&gt;**](QuickserverRow.md)

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

<a id="getQsReinstallOs"></a>
# **getQsReinstallOs**
> VpsTemplatesList getQsReinstallOs(id)

QuickServer Reinstall OS Options

Returns the list of available operating system templates for reinstalling the QuickServer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : VpsTemplatesList = apiInstance.getQsReinstallOs(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getQsReinstallOs")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getQsReinstallOs")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="getQsResetPassword"></a>
# **getQsResetPassword**
> getQsResetPassword(id)

Reset QuickServer Password Info

Returns information needed before resetting the QuickServer&#39;s root password.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    apiInstance.getQsResetPassword(id)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getQsResetPassword")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getQsResetPassword")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="getQsReverseDns"></a>
# **getQsReverseDns**
> ReverseDnsEntries getQsReverseDns(id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the QuickServer&#39;s IP addresses.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : ReverseDnsEntries = apiInstance.getQsReverseDns(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getQsReverseDns")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getQsReverseDns")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="getQsSetupVnc"></a>
# **getQsSetupVnc**
> getQsSetupVnc(id)

VNC Setup Info

Returns the current VNC connection information for the QuickServer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    apiInstance.getQsSetupVnc(id)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getQsSetupVnc")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getQsSetupVnc")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="getQsTrafficUsage"></a>
# **getQsTrafficUsage**
> getQsTrafficUsage(id)

Get Traffic Usage

Returns bandwidth traffic usage data for the QuickServer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    apiInstance.getQsTrafficUsage(id)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getQsTrafficUsage")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getQsTrafficUsage")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="getQsViewDesktop"></a>
# **getQsViewDesktop**
> getQsViewDesktop(id)

Get View Desktop Info

Returns remote desktop connection information for the QuickServer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    apiInstance.getQsViewDesktop(id)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getQsViewDesktop")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getQsViewDesktop")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="getQsWelcomeEmail"></a>
# **getQsWelcomeEmail**
> TextResponse getQsWelcomeEmail(id)

Resend QuickServer Welcome Email

Resends the welcome email containing connection details and credentials for the QuickServer order.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.String = 133123 // kotlin.String | Quickserver ID
try {
    val result : TextResponse = apiInstance.getQsWelcomeEmail(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#getQsWelcomeEmail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#getQsWelcomeEmail")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.String**| Quickserver ID | |

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

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="postQsBackup"></a>
# **postQsBackup**
> QueueResponse postQsBackup(id)

Create QuickServer Backup

Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : QueueResponse = apiInstance.postQsBackup(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#postQsBackup")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#postQsBackup")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="postQsChangeHostname"></a>
# **postQsChangeHostname**
> QueueResponse postQsChangeHostname(id)

Update QuickServer Hostname

Submits a hostname change request for the QuickServer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : QueueResponse = apiInstance.postQsChangeHostname(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#postQsChangeHostname")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#postQsChangeHostname")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="postQsChangeRootPassword"></a>
# **postQsChangeRootPassword**
> QueueResponse postQsChangeRootPassword(id)

Change Root Password

Triggers a root password reset for the QuickServer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : QueueResponse = apiInstance.postQsChangeRootPassword(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#postQsChangeRootPassword")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#postQsChangeRootPassword")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="postQsChangeTimezone"></a>
# **postQsChangeTimezone**
> QueueResponse postQsChangeTimezone(id, timezone)

Change QuickServer Timezone

Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
val timezone : kotlin.String = timezone_example // kotlin.String | The time zone
try {
    val result : QueueResponse = apiInstance.postQsChangeTimezone(id, timezone)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#postQsChangeTimezone")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#postQsChangeTimezone")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| QuickServer ID number | |
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

<a id="postQsChangeWebuzoPassword"></a>
# **postQsChangeWebuzoPassword**
> QueueResponse postQsChangeWebuzoPassword(id)

Change Webuzo Password

Resets the Webuzo control panel password for the QuickServer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : QueueResponse = apiInstance.postQsChangeWebuzoPassword(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#postQsChangeWebuzoPassword")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#postQsChangeWebuzoPassword")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="postQsInsertCd"></a>
# **postQsInsertCd**
> QueueResponse postQsInsertCd(id)

Insert CD in QuickServer

Mounts an ISO image in the QuickServer&#39;s virtual CD drive. Use &#x60;GET /qs/{id}/insert_cd&#x60; to list available images.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : QueueResponse = apiInstance.postQsInsertCd(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#postQsInsertCd")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#postQsInsertCd")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="postQsReinstallOs"></a>
# **postQsReinstallOs**
> QueueResponse postQsReinstallOs(id)

Reinstall QuickServer OS

Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : QueueResponse = apiInstance.postQsReinstallOs(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#postQsReinstallOs")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#postQsReinstallOs")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="postQsResetPassword"></a>
# **postQsResetPassword**
> QueueResponse postQsResetPassword(id)

Reset QuickServer Password

Resets the root password on the QuickServer to a new randomly generated password.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : QueueResponse = apiInstance.postQsResetPassword(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#postQsResetPassword")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#postQsResetPassword")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="postQsReverseDns"></a>
# **postQsReverseDns**
> TextResponse postQsReverseDns(id, reverseDnsEntries)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the QuickServer&#39;s IP addresses.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
val reverseDnsEntries : ReverseDnsEntries =  // ReverseDnsEntries | 
try {
    val result : TextResponse = apiInstance.postQsReverseDns(id, reverseDnsEntries)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#postQsReverseDns")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#postQsReverseDns")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| QuickServer ID number | |
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

<a id="postQsSetupVnc"></a>
# **postQsSetupVnc**
> QueueResponse postQsSetupVnc(id)

Setup VNC

Sets up or refreshes the VNC console connection for the QuickServer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : QueueResponse = apiInstance.postQsSetupVnc(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#postQsSetupVnc")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#postQsSetupVnc")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="postQsTrafficUsage"></a>
# **postQsTrafficUsage**
> postQsTrafficUsage(id)

Search Traffic Usage

Searches and filters the QuickServer&#39;s bandwidth traffic usage data by date range.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    apiInstance.postQsTrafficUsage(id)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#postQsTrafficUsage")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#postQsTrafficUsage")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="postQsViewDesktop"></a>
# **postQsViewDesktop**
> postQsViewDesktop(id)

Update View Desktop

Updates or refreshes the remote desktop session for the QuickServer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    apiInstance.postQsViewDesktop(id)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#postQsViewDesktop")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#postQsViewDesktop")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

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

<a id="postQuickServerRestore"></a>
# **postQuickServerRestore**
> QueueResponse postQuickServerRestore(id, restoreRequest)

Restore QuickServer from Backup

Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
val restoreRequest : RestoreRequest =  // RestoreRequest | QuickServer Restore request
try {
    val result : QueueResponse = apiInstance.postQuickServerRestore(id, restoreRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#postQuickServerRestore")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#postQuickServerRestore")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| QuickServer ID number | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **restoreRequest** | [**RestoreRequest**](RestoreRequest.md)| QuickServer Restore request | |

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

<a id="putQs"></a>
# **putQs**
> putQs()

Validate QuickServer Order

Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
try {
    apiInstance.putQs()
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#putQs")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#putQs")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

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

<a id="quickserversCancel"></a>
# **quickserversCancel**
> QuickserversCancel200Response quickserversCancel(id)

Cancel QuickServer Order

Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : QuickserversCancel200Response = apiInstance.quickserversCancel(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#quickserversCancel")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#quickserversCancel")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| QuickServer ID number | |

### Return type

[**QuickserversCancel200Response**](QuickserversCancel200Response.md)

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

<a id="updateQsInfo"></a>
# **updateQsInfo**
> SuccessTextResponse updateQsInfo(id)

Update QuickServer Order

Updates QuickServer metadata or stored settings associated with the order.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = QuickServersApi()
val id : kotlin.String = id_example // kotlin.String | QuickServer ID number.
try {
    val result : SuccessTextResponse = apiInstance.updateQsInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling QuickServersApi#updateQsInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling QuickServersApi#updateQsInfo")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.String**| QuickServer ID number. | |

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

