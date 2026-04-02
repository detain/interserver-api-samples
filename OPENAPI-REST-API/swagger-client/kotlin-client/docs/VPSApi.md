# VPSApi

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

<a name="addVps"></a>
# **addVps**
> ServiceOrderPostResponse addVps(body)

Place VPS Order

Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val body : VpsOrderPostRequest =  // VpsOrderPostRequest | 
try {
    val result : ServiceOrderPostResponse = apiInstance.addVps(body)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**VpsOrderPostRequest**](VpsOrderPostRequest.md)|  | [optional]

### Return type

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="addVps"></a>
# **addVps**
> ServiceOrderPostResponse addVps(osDistro, slices, vpsPlatform, controlpanel, period, location, osVersion, hostname, coupon, rootpass, comment)

Place VPS Order

Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val osDistro : kotlin.String = osDistro_example // kotlin.String | 
val slices : kotlin.Int = 56 // kotlin.Int | 
val vpsPlatform : kotlin.String = vpsPlatform_example // kotlin.String | 
val controlpanel : kotlin.String = controlpanel_example // kotlin.String | 
val period : kotlin.Int = 56 // kotlin.Int | 
val location : kotlin.Int = 56 // kotlin.Int | 
val osVersion : kotlin.String = osVersion_example // kotlin.String | 
val hostname : kotlin.String = hostname_example // kotlin.String | 
val coupon : kotlin.String = coupon_example // kotlin.String | 
val rootpass : kotlin.String = rootpass_example // kotlin.String | 
val comment : kotlin.String = comment_example // kotlin.String | 
try {
    val result : ServiceOrderPostResponse = apiInstance.addVps(osDistro, slices, vpsPlatform, controlpanel, period, location, osVersion, hostname, coupon, rootpass, comment)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **osDistro** | **kotlin.String**|  | [optional]
 **slices** | **kotlin.Int**|  | [optional] [enum: 32, 1]
 **vpsPlatform** | **kotlin.String**|  | [optional] [enum: kvm, hyperv, kvmstorage]
 **controlpanel** | **kotlin.String**|  | [optional] [enum: none, cpanel, da]
 **period** | **kotlin.Int**|  | [optional] [enum: 12, 1]
 **location** | **kotlin.Int**|  | [optional] [enum: 3, 1]
 **osVersion** | **kotlin.String**|  | [optional]
 **hostname** | **kotlin.String**|  | [optional]
 **coupon** | **kotlin.String**|  | [optional]
 **rootpass** | **kotlin.String**|  | [optional]
 **comment** | **kotlin.String**|  | [optional]

### Return type

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="deleteVpsBackup"></a>
# **deleteVpsBackup**
> SuccessTextResponse deleteVpsBackup(id, file, all)

Delete VPS Backup

Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |
 **file** | **kotlin.String**| The backup filename to delete. |
 **all** | **kotlin.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [enum: 0, 1]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doVpsBlockSmtp"></a>
# **doVpsBlockSmtp**
> QueueResponse doVpsBlockSmtp(id)

Blocks SMTP

Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doVpsDisableCd"></a>
# **doVpsDisableCd**
> QueueResponse doVpsDisableCd(id)

Disable CD Drive

Disables the virtual CD drive on the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doVpsDisableQuota"></a>
# **doVpsDisableQuota**
> QueueResponse doVpsDisableQuota(id)

Disable Quotas

Disables disk quota enforcement on the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doVpsEjectCd"></a>
# **doVpsEjectCd**
> QueueResponse doVpsEjectCd(id)

Eject CD Drive

Ejects the virtual CD from the VPS CD drive.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doVpsEnableQuota"></a>
# **doVpsEnableQuota**
> QueueResponse doVpsEnableQuota(id)

Enable Quotas

Enables disk quota enforcement on the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doVpsRestart"></a>
# **doVpsRestart**
> QueueResponse doVpsRestart(id)

Restart VPS

Restarts the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doVpsStart"></a>
# **doVpsStart**
> QueueResponse doVpsStart(id)

Start VPS

Powers on the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="doVpsStop"></a>
# **doVpsStop**
> QueueResponse doVpsStop(id)

Stop VPS

Powers off the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number. |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="downloadVpsBackup"></a>
# **downloadVpsBackup**
> InlineResponse20011 downloadVpsBackup(body, id, all)

Download VPS Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val body : IdBackupsBody2 =  // IdBackupsBody2 | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
val all : kotlin.String = all_example // kotlin.String | Set to `1` to list all backups across all services, not just the ones for the given VPS.
try {
    val result : InlineResponse20011 = apiInstance.downloadVpsBackup(body, id, all)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IdBackupsBody2**](IdBackupsBody2.md)|  |
 **id** | **kotlin.Int**| VPS ID number |
 **all** | **kotlin.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [enum: 0, 1]

### Return type

[**InlineResponse20011**](InlineResponse20011.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="downloadVpsBackup"></a>
# **downloadVpsBackup**
> InlineResponse20011 downloadVpsBackup(file, id, all)

Download VPS Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val file : kotlin.String = file_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
val all : kotlin.String = all_example // kotlin.String | Set to `1` to list all backups across all services, not just the ones for the given VPS.
try {
    val result : InlineResponse20011 = apiInstance.downloadVpsBackup(file, id, all)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **file** | **kotlin.String**|  |
 **id** | **kotlin.Int**| VPS ID number |
 **all** | **kotlin.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [enum: 0, 1]

### Return type

[**InlineResponse20011**](InlineResponse20011.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="getNewVps"></a>
# **getNewVps**
> VpsOrder getNewVps()

VPS Ordering Information

Retrieves available VPS configurations, OS templates, and pricing for ordering.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsBackups"></a>
# **getVpsBackups**
> VpsBackupRows getVpsBackups(id, all)

Get VPS Backups List

Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |
 **all** | **kotlin.String**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] [enum: 0, 1]

### Return type

[**VpsBackupRows**](VpsBackupRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsBuyHdSpace"></a>
# **getVpsBuyHdSpace**
> getVpsBuyHdSpace(id)

HD Space Addon Info

Returns available hard drive space addon options and pricing for the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsBuyIp"></a>
# **getVpsBuyIp**
> getVpsBuyIp(id)

Additional IP Addon Info

Returns available additional IP address options and pricing for the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsChangeTimezone"></a>
# **getVpsChangeTimezone**
> kotlin.Array&lt;kotlin.String&gt; getVpsChangeTimezone(id)

Get Timezone Info

Returns the list of available timezones that can be set on the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : kotlin.Array<kotlin.String> = apiInstance.getVpsChangeTimezone(id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

**kotlin.Array&lt;kotlin.String&gt;**

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsInfo"></a>
# **getVpsInfo**
> Vps getVpsInfo(id)

Get VPS Order

Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**Vps**](Vps.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsInvoices"></a>
# **getVpsInvoices**
> ChargeInvoiceRows getVpsInvoices(id)

Get VPS Invoices

Returns the billing invoices associated with this VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsList"></a>
# **getVpsList**
> kotlin.Array&lt;VpsRow&gt; getVpsList()

List VPS Orders

Returns all VPS services on the account with their current status and configuration.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
try {
    val result : kotlin.Array<VpsRow> = apiInstance.getVpsList()
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

[**kotlin.Array&lt;VpsRow&gt;**](VpsRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsReinstallOs"></a>
# **getVpsReinstallOs**
> VpsTemplatesList getVpsReinstallOs(id)

VPS Reinstall OS Options

Returns the list of available OS templates for reinstalling the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**VpsTemplatesList**](VpsTemplatesList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsReverseDns"></a>
# **getVpsReverseDns**
> ReverseDnsEntries getVpsReverseDns(id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsSetupVnc"></a>
# **getVpsSetupVnc**
> getVpsSetupVnc(id)

VNC Setup Info

Returns the current VNC connection information for the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsSlices"></a>
# **getVpsSlices**
> getVpsSlices(id)

Slice Upgrade Info

Returns available slice upgrade options and pricing for the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsTrafficUsage"></a>
# **getVpsTrafficUsage**
> VpsTrafficResponse getVpsTrafficUsage(id)

Get Traffic Usage

Returns bandwidth traffic usage data for the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**VpsTrafficResponse**](VpsTrafficResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsViewDesktop"></a>
# **getVpsViewDesktop**
> getVpsViewDesktop(id)

Get View Desktop Info

Returns remote desktop connection information for the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getVpsWelcomeEmail"></a>
# **getVpsWelcomeEmail**
> SuccessTextResponse getVpsWelcomeEmail(id)

Resend VPS Welcome Email

Resends the welcome email containing connection details and credentials for the VPS order.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val id : kotlin.String = id_example // kotlin.String | VPS ID
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.String**| VPS ID |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postVpsBackup"></a>
# **postVpsBackup**
> QueueResponse postVpsBackup(id)

Start a VPS Backup

Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postVpsBuyHdSpace"></a>
# **postVpsBuyHdSpace**
> postVpsBuyHdSpace(id)

Purchase HD Space Addon

Purchases additional hard drive space for the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postVpsBuyIp"></a>
# **postVpsBuyIp**
> postVpsBuyIp(id)

Purchase Additional IP

Purchases an additional IP address for the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postVpsChangeHostname"></a>
# **postVpsChangeHostname**
> QueueResponse postVpsChangeHostname(hostname, id)

Update VPS Hostname

Changes the hostname of the VPS. This queues a background task to update the server.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val hostname : kotlin.String = hostname_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsChangeHostname(hostname, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **hostname** | **kotlin.String**|  |
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsChangeHostname"></a>
# **postVpsChangeHostname**
> QueueResponse postVpsChangeHostname(body, id)

Update VPS Hostname

Changes the hostname of the VPS. This queues a background task to update the server.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val body : HostnameObject =  // HostnameObject | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsChangeHostname(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**HostnameObject**](HostnameObject.md)|  |
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsChangeRootPassword"></a>
# **postVpsChangeRootPassword**
> QueueResponse postVpsChangeRootPassword(password, id)

Change VPS Root Password

Changes the root password of the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val password : kotlin.String = password_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsChangeRootPassword(password, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **password** | **kotlin.String**|  |
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsChangeRootPassword"></a>
# **postVpsChangeRootPassword**
> QueueResponse postVpsChangeRootPassword(body, id)

Change VPS Root Password

Changes the root password of the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val body : PasswordRequest =  // PasswordRequest | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsChangeRootPassword(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**PasswordRequest**](PasswordRequest.md)|  |
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsChangeTimezone"></a>
# **postVpsChangeTimezone**
> QueueResponse postVpsChangeTimezone(timezone, id)

Change VPS Timezone

Changes the system timezone on the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val timezone : kotlin.String = timezone_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsChangeTimezone(timezone, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **timezone** | **kotlin.String**|  |
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsChangeTimezone"></a>
# **postVpsChangeTimezone**
> QueueResponse postVpsChangeTimezone(body, id)

Change VPS Timezone

Changes the system timezone on the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val body : TimezoneUpdate =  // TimezoneUpdate | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsChangeTimezone(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TimezoneUpdate**](TimezoneUpdate.md)|  |
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsChangeWebuzoPassword"></a>
# **postVpsChangeWebuzoPassword**
> QueueResponse postVpsChangeWebuzoPassword(password, id)

Change Webuzo Password

Changes the Webuzo control panel password on the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val password : kotlin.String = password_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsChangeWebuzoPassword(password, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **password** | **kotlin.String**|  |
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsChangeWebuzoPassword"></a>
# **postVpsChangeWebuzoPassword**
> QueueResponse postVpsChangeWebuzoPassword(body, id)

Change Webuzo Password

Changes the Webuzo control panel password on the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val body : PasswordRequest =  // PasswordRequest | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsChangeWebuzoPassword(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**PasswordRequest**](PasswordRequest.md)|  |
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsInsertCd"></a>
# **postVpsInsertCd**
> QueueResponse postVpsInsertCd(url, id)

Insert CD in VPS

Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val url : kotlin.String = url_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsInsertCd(url, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **url** | **kotlin.String**|  |
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsInsertCd"></a>
# **postVpsInsertCd**
> QueueResponse postVpsInsertCd(body, id)

Insert CD in VPS

Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val body : UrlRequest =  // UrlRequest | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsInsertCd(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**UrlRequest**](UrlRequest.md)|  |
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsReinstallOs"></a>
# **postVpsReinstallOs**
> QueueResponse postVpsReinstallOs(template, password, localPassword, id)

Reinstall VPS OS

Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val template : kotlin.String = template_example // kotlin.String | 
val password : kotlin.String =  // kotlin.String | 
val localPassword : kotlin.String =  // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsReinstallOs(template, password, localPassword, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **template** | **kotlin.String**|  |
 **password** | [**kotlin.String**](.md)|  |
 **localPassword** | [**kotlin.String**](.md)|  |
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsReinstallOs"></a>
# **postVpsReinstallOs**
> QueueResponse postVpsReinstallOs(body, id)

Reinstall VPS OS

Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val body : TemplateRequest =  // TemplateRequest | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsReinstallOs(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TemplateRequest**](TemplateRequest.md)|  |
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postVpsResetPassword"></a>
# **postVpsResetPassword**
> QueueResponse postVpsResetPassword(id)

Reset VPS Password

Resets the root password on the VPS to a new randomly generated password.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postVpsRestore"></a>
# **postVpsRestore**
> QueueResponse postVpsRestore(body, id)

Restore VPS from Backup

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val body : RestoreRequest =  // RestoreRequest | VPS Restore request
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsRestore(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**RestoreRequest**](RestoreRequest.md)| VPS Restore request |
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postVpsRestore"></a>
# **postVpsRestore**
> QueueResponse postVpsRestore(backup, password, id)

Restore VPS from Backup

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val backup : kotlin.String = backup_example // kotlin.String | 
val password : kotlin.String = password_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : QueueResponse = apiInstance.postVpsRestore(backup, password, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **backup** | **kotlin.String**|  |
 **password** | **kotlin.String**|  |
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postVpsReverseDns"></a>
# **postVpsReverseDns**
> TextResponse postVpsReverseDns(body, id)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val body : ReverseDnsEntries =  // ReverseDnsEntries | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : TextResponse = apiInstance.postVpsReverseDns(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  |
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postVpsReverseDns"></a>
# **postVpsReverseDns**
> TextResponse postVpsReverseDns(ips, id)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val ips : kotlin.collections.Map<kotlin.String, kotlin.Any> =  // kotlin.collections.Map<kotlin.String, kotlin.Any> | 
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : TextResponse = apiInstance.postVpsReverseDns(ips, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ips** | [**kotlin.collections.Map&lt;kotlin.String, kotlin.Any&gt;**](kotlin.Any.md)|  |
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postVpsSetupVnc"></a>
# **postVpsSetupVnc**
> QueueResponse postVpsSetupVnc(id)

Setup VNC

Sets up or refreshes the VNC console connection for the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postVpsSlices"></a>
# **postVpsSlices**
> postVpsSlices(id)

Purchase Slice Upgrade

Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postVpsViewDesktop"></a>
# **postVpsViewDesktop**
> postVpsViewDesktop(id)

Update View Desktop

Updates or refreshes the remote desktop session for the VPS.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="putVps"></a>
# **putVps**
> VpsOrderPutResponse putVps(body)

Validate VPS Order

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val body : VpsOrderPutRequest =  // VpsOrderPutRequest | 
try {
    val result : VpsOrderPutResponse = apiInstance.putVps(body)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**VpsOrderPutRequest**](VpsOrderPutRequest.md)|  | [optional]

### Return type

[**VpsOrderPutResponse**](VpsOrderPutResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="putVps"></a>
# **putVps**
> VpsOrderPutResponse putVps(osDistro, slices, vpsPlatform, controlpanel, period, location, osVersion, hostname, coupon, rootpass, comment)

Validate VPS Order

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val osDistro : kotlin.String = osDistro_example // kotlin.String | 
val slices : kotlin.Int = 56 // kotlin.Int | 
val vpsPlatform : kotlin.String = vpsPlatform_example // kotlin.String | 
val controlpanel : kotlin.String = controlpanel_example // kotlin.String | 
val period : kotlin.Int = 56 // kotlin.Int | 
val location : kotlin.Int = 56 // kotlin.Int | 
val osVersion : kotlin.String = osVersion_example // kotlin.String | 
val hostname : kotlin.String = hostname_example // kotlin.String | 
val coupon : kotlin.String = coupon_example // kotlin.String | 
val rootpass : kotlin.String = rootpass_example // kotlin.String | 
val comment : kotlin.String = comment_example // kotlin.String | 
try {
    val result : VpsOrderPutResponse = apiInstance.putVps(osDistro, slices, vpsPlatform, controlpanel, period, location, osVersion, hostname, coupon, rootpass, comment)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **osDistro** | **kotlin.String**|  | [optional]
 **slices** | **kotlin.Int**|  | [optional] [enum: 32, 1]
 **vpsPlatform** | **kotlin.String**|  | [optional] [enum: kvm, hyperv, kvmstorage]
 **controlpanel** | **kotlin.String**|  | [optional] [enum: none, cpanel, da]
 **period** | **kotlin.Int**|  | [optional] [enum: 12, 1]
 **location** | **kotlin.Int**|  | [optional] [enum: 3, 1]
 **osVersion** | **kotlin.String**|  | [optional]
 **hostname** | **kotlin.String**|  | [optional]
 **coupon** | **kotlin.String**|  | [optional]
 **rootpass** | **kotlin.String**|  | [optional]
 **comment** | **kotlin.String**|  | [optional]

### Return type

[**VpsOrderPutResponse**](VpsOrderPutResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="updateVpsInfo"></a>
# **updateVpsInfo**
> SuccessTextResponse updateVpsInfo(id)

Update VPS Order

Updates settings on a VPS order.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.String**| VPS ID number. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="vPSCancel"></a>
# **vPSCancel**
> InlineResponse20022 vPSCancel(id)

Cancel VPS Service

Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = VPSApi()
val id : kotlin.Int = 56 // kotlin.Int | VPS ID number
try {
    val result : InlineResponse20022 = apiInstance.vPSCancel(id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| VPS ID number |

### Return type

[**InlineResponse20022**](InlineResponse20022.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

