# QuickServersApi

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

<a name="addQs"></a>
# **addQs**
> ServiceOrderPostResponse addQs()

Place QuickServer Order

Places a QuickServer order. On success, invoices are generated for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteQsBackup"></a>
# **deleteQsBackup**
> SuccessTextResponse deleteQsBackup(id, file, all)

Delete QuickServer Backup

Permanently removes the specified backup file from storage. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames before deleting.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |
 **file** | **kotlin.String**| The backup filename to delete. |
 **all** | **kotlin.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] [enum: 0, 1]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doQsBlockSmtp"></a>
# **doQsBlockSmtp**
> QueueResponse doQsBlockSmtp(id)

Block QuickServer SMTP

Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doQsDisableCd"></a>
# **doQsDisableCd**
> QueueResponse doQsDisableCd(id)

Disable CD Drive

Disables the virtual CD drive for the QuickServer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doQsDisableQuota"></a>
# **doQsDisableQuota**
> QueueResponse doQsDisableQuota(id)

Disable Quotas

Disables disk quota enforcement for the QuickServer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doQsEjectCd"></a>
# **doQsEjectCd**
> QueueResponse doQsEjectCd(id)

Eject CD Drive

Ejects the virtual CD from the QuickServer&#x27;s CD drive.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doQsEnableQuota"></a>
# **doQsEnableQuota**
> QueueResponse doQsEnableQuota(id)

Enable Quotas

Enables disk quota enforcement for the QuickServer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doQsRestart"></a>
# **doQsRestart**
> QueueResponse doQsRestart(id)

Restart QuickServer

Restarts the QuickServer. The server will be shut down and started again.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doQsStart"></a>
# **doQsStart**
> QueueResponse doQsStart(id)

Start QuickServer

Powers on the QuickServer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doQsStop"></a>
# **doQsStop**
> QueueResponse doQsStop(id)

Stop QuickServer

Powers off the QuickServer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="downloadQsBackup"></a>
# **downloadQsBackup**
> InlineResponse20011 downloadQsBackup(body, id, all)

Download QuickServer Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = QuickServersApi()
val body : IdBackupsBody =  // IdBackupsBody | 
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
val all : kotlin.String = all_example // kotlin.String | Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
try {
    val result : InlineResponse20011 = apiInstance.downloadQsBackup(body, id, all)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IdBackupsBody**](IdBackupsBody.md)|  |
 **id** | **kotlin.Int**| QuickServer ID number |
 **all** | **kotlin.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] [enum: 0, 1]

### Return type

[**InlineResponse20011**](InlineResponse20011.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="downloadQsBackup"></a>
# **downloadQsBackup**
> InlineResponse20011 downloadQsBackup(file, id, all)

Download QuickServer Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = QuickServersApi()
val file : kotlin.String = file_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
val all : kotlin.String = all_example // kotlin.String | Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
try {
    val result : InlineResponse20011 = apiInstance.downloadQsBackup(file, id, all)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **file** | **kotlin.String**|  |
 **id** | **kotlin.Int**| QuickServer ID number |
 **all** | **kotlin.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] [enum: 0, 1]

### Return type

[**InlineResponse20011**](InlineResponse20011.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="getNewQs"></a>
# **getNewQs**
> QuickserverOrder getNewQs()

Get QuickServer Ordering Information

Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getQsBackups"></a>
# **getQsBackups**
> VpsBackupRows getQsBackups(id, all)

List QuickServer Backups

Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /qs/{id}/backups&#x60; to download or &#x60;DELETE /qs/{id}/backups&#x60; to remove a backup. Use &#x60;POST /qs/{id}/restore&#x60; to restore from a backup.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |
 **all** | **kotlin.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer. | [optional] [enum: 0, 1]

### Return type

[**VpsBackupRows**](VpsBackupRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getQsChangeHostname"></a>
# **getQsChangeHostname**
> getQsChangeHostname(id)

Get QuickServer Hostname

Retrieves the current hostname and any validation requirements for changing it.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getQsChangeRootPassword"></a>
# **getQsChangeRootPassword**
> getQsChangeRootPassword(id)

Get Change Root Password Info

Retrieves instructions or metadata needed to reset the root password.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getQsChangeTimezone"></a>
# **getQsChangeTimezone**
> kotlin.Array&lt;kotlin.String&gt; getQsChangeTimezone(id)

Get Timezone Info

Returns the list of available timezones that can be set on the QuickServer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : kotlin.Array<kotlin.String> = apiInstance.getQsChangeTimezone(id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

**kotlin.Array&lt;kotlin.String&gt;**

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getQsChangeWebuzoPassword"></a>
# **getQsChangeWebuzoPassword**
> getQsChangeWebuzoPassword(id)

Webuzo Change Pass Info

Retrieves instructions or metadata for changing the Webuzo control panel password.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getQsInfo"></a>
# **getQsInfo**
> Quickserver getQsInfo(id)

Get QuickServer Order

Returns detailed QuickServer information, including credentials, IPs, and available client actions.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number. |

### Return type

[**Quickserver**](Quickserver.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getQsInsertCd"></a>
# **getQsInsertCd**
> getQsInsertCd(id)

Insert CD Information

Returns available ISO images that can be mounted in the QuickServer&#x27;s virtual CD drive.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getQsInvoices"></a>
# **getQsInvoices**
> ChargeInvoiceRows getQsInvoices(id)

Get QuickServer Invoices

Returns the billing invoices associated with this QuickServer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getQsList"></a>
# **getQsList**
> kotlin.Array&lt;QuickserverRow&gt; getQsList()

List QuickServers

Returns the QuickServer services on your account. Use the &#x60;qs_id&#x60; values with &#x60;/qs/{id}&#x60; for details or with the action endpoints (restart, backup, etc.) to manage each server.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = QuickServersApi()
try {
    val result : kotlin.Array<QuickserverRow> = apiInstance.getQsList()
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

[**kotlin.Array&lt;QuickserverRow&gt;**](QuickserverRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getQsReinstallOs"></a>
# **getQsReinstallOs**
> VpsTemplatesList getQsReinstallOs(id)

QuickServer Reinstall OS Options

Returns the list of available operating system templates for reinstalling the QuickServer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**VpsTemplatesList**](VpsTemplatesList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getQsResetPassword"></a>
# **getQsResetPassword**
> getQsResetPassword(id)

Reset QuickServer Password Info

Returns information needed before resetting the QuickServer&#x27;s root password.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getQsReverseDns"></a>
# **getQsReverseDns**
> ReverseDnsEntries getQsReverseDns(id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getQsSetupVnc"></a>
# **getQsSetupVnc**
> getQsSetupVnc(id)

VNC Setup Info

Returns the current VNC connection information for the QuickServer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getQsTrafficUsage"></a>
# **getQsTrafficUsage**
> getQsTrafficUsage(id)

Get Traffic Usage

Returns bandwidth traffic usage data for the QuickServer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getQsViewDesktop"></a>
# **getQsViewDesktop**
> getQsViewDesktop(id)

Get View Desktop Info

Returns remote desktop connection information for the QuickServer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getQsWelcomeEmail"></a>
# **getQsWelcomeEmail**
> TextResponse getQsWelcomeEmail(id)

Resend QuickServer Welcome Email

Resends the welcome email containing connection details and credentials for the QuickServer order.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = QuickServersApi()
val id : kotlin.String = id_example // kotlin.String | Quickserver ID
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.String**| Quickserver ID |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postQsBackup"></a>
# **postQsBackup**
> QueueResponse postQsBackup(id)

Create QuickServer Backup

Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postQsChangeHostname"></a>
# **postQsChangeHostname**
> QueueResponse postQsChangeHostname(id)

Update QuickServer Hostname

Submits a hostname change request for the QuickServer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postQsChangeRootPassword"></a>
# **postQsChangeRootPassword**
> QueueResponse postQsChangeRootPassword(id)

Change Root Password

Triggers a root password reset for the QuickServer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postQsChangeTimezone"></a>
# **postQsChangeTimezone**
> QueueResponse postQsChangeTimezone(timezone, id)

Change QuickServer Timezone

Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = QuickServersApi()
val timezone : kotlin.String = timezone_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : QueueResponse = apiInstance.postQsChangeTimezone(timezone, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **timezone** | **kotlin.String**|  |
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postQsChangeTimezone"></a>
# **postQsChangeTimezone**
> QueueResponse postQsChangeTimezone(body, id)

Change QuickServer Timezone

Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = QuickServersApi()
val body : TimezoneUpdate =  // TimezoneUpdate | 
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : QueueResponse = apiInstance.postQsChangeTimezone(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TimezoneUpdate**](TimezoneUpdate.md)|  |
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postQsChangeWebuzoPassword"></a>
# **postQsChangeWebuzoPassword**
> QueueResponse postQsChangeWebuzoPassword(id)

Change Webuzo Password

Resets the Webuzo control panel password for the QuickServer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postQsInsertCd"></a>
# **postQsInsertCd**
> QueueResponse postQsInsertCd(id)

Insert CD in QuickServer

Mounts an ISO image in the QuickServer&#x27;s virtual CD drive. Use &#x60;GET /qs/{id}/insert_cd&#x60; to list available images.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postQsReinstallOs"></a>
# **postQsReinstallOs**
> QueueResponse postQsReinstallOs(id)

Reinstall QuickServer OS

Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postQsResetPassword"></a>
# **postQsResetPassword**
> QueueResponse postQsResetPassword(id)

Reset QuickServer Password

Resets the root password on the QuickServer to a new randomly generated password.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postQsReverseDns"></a>
# **postQsReverseDns**
> TextResponse postQsReverseDns(body, id)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = QuickServersApi()
val body : ReverseDnsEntries =  // ReverseDnsEntries | 
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : TextResponse = apiInstance.postQsReverseDns(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  |
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postQsReverseDns"></a>
# **postQsReverseDns**
> TextResponse postQsReverseDns(ips, id)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = QuickServersApi()
val ips : kotlin.collections.Map<kotlin.String, kotlin.Any> =  // kotlin.collections.Map<kotlin.String, kotlin.Any> | 
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : TextResponse = apiInstance.postQsReverseDns(ips, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ips** | [**kotlin.collections.Map&lt;kotlin.String, kotlin.Any&gt;**](kotlin.Any.md)|  |
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postQsSetupVnc"></a>
# **postQsSetupVnc**
> QueueResponse postQsSetupVnc(id)

Setup VNC

Sets up or refreshes the VNC console connection for the QuickServer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postQsTrafficUsage"></a>
# **postQsTrafficUsage**
> postQsTrafficUsage(id)

Search Traffic Usage

Searches and filters the QuickServer&#x27;s bandwidth traffic usage data by date range.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postQsViewDesktop"></a>
# **postQsViewDesktop**
> postQsViewDesktop(id)

Update View Desktop

Updates or refreshes the remote desktop session for the QuickServer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postQuickServerRestore"></a>
# **postQuickServerRestore**
> QueueResponse postQuickServerRestore(body, id)

Restore QuickServer from Backup

Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = QuickServersApi()
val body : RestoreRequest =  // RestoreRequest | QuickServer Restore request
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : QueueResponse = apiInstance.postQuickServerRestore(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**RestoreRequest**](RestoreRequest.md)| QuickServer Restore request |
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postQuickServerRestore"></a>
# **postQuickServerRestore**
> QueueResponse postQuickServerRestore(backup, password, id)

Restore QuickServer from Backup

Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = QuickServersApi()
val backup : kotlin.String = backup_example // kotlin.String | 
val password : kotlin.String = password_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : QueueResponse = apiInstance.postQuickServerRestore(backup, password, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **backup** | **kotlin.String**|  |
 **password** | **kotlin.String**|  |
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="putQs"></a>
# **putQs**
> putQs()

Validate QuickServer Order

Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="quickserversCancel"></a>
# **quickserversCancel**
> InlineResponse20010 quickserversCancel(id)

Cancel QuickServer Order

Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = QuickServersApi()
val id : kotlin.Int = 56 // kotlin.Int | QuickServer ID number
try {
    val result : InlineResponse20010 = apiInstance.quickserversCancel(id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| QuickServer ID number |

### Return type

[**InlineResponse20010**](InlineResponse20010.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="updateQsInfo"></a>
# **updateQsInfo**
> SuccessTextResponse updateQsInfo(id)

Update QuickServer Order

Updates QuickServer metadata or stored settings associated with the order.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.String**| QuickServer ID number. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

