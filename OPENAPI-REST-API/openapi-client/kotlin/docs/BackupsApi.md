# BackupsApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**addBackup**](BackupsApi.md#addBackup) | **POST** /backups/order | Place Backup Order |
| [**cancelBackup**](BackupsApi.md#cancelBackup) | **DELETE** /backups/{id} | Cancel Backup Service |
| [**getBackupInfo**](BackupsApi.md#getBackupInfo) | **GET** /backups/{id} | Get Backup Service Details |
| [**getBackupInvoices**](BackupsApi.md#getBackupInvoices) | **GET** /backups/{id}/invoices | Get Backup Order Invoices |
| [**getBackupLogin**](BackupsApi.md#getBackupLogin) | **GET** /backups/{id}/login | Get Backup Storage Panel Login |
| [**getBackupsList**](BackupsApi.md#getBackupsList) | **GET** /backups | List Backup Services |
| [**getBackupsWelcomeEmail**](BackupsApi.md#getBackupsWelcomeEmail) | **GET** /backups/{id}/welcome_email | Resend Backup Welcome Email |
| [**getNewBackup**](BackupsApi.md#getNewBackup) | **GET** /backups/order | Get Backup Order Form Data |
| [**updateBackupInfo**](BackupsApi.md#updateBackupInfo) | **POST** /backups/{id} | Update Backup Information |
| [**validateBackupOrder**](BackupsApi.md#validateBackupOrder) | **PUT** /backups/order | Validate Backup Order |


<a id="addBackup"></a>
# **addBackup**
> BackupOrderPostResponse addBackup(validateOnly, serviceType, coupon)

Place Backup Order

Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with &#x60;/billing/invoices/{id}&#x60; to view the invoice or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. The service is provisioned after payment is confirmed.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BackupsApi()
val validateOnly : kotlin.Boolean = true // kotlin.Boolean | 
val serviceType : kotlin.Int = 56 // kotlin.Int | 
val coupon : kotlin.String = coupon_example // kotlin.String | 
try {
    val result : BackupOrderPostResponse = apiInstance.addBackup(validateOnly, serviceType, coupon)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BackupsApi#addBackup")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BackupsApi#addBackup")
    e.printStackTrace()
}
```

### Parameters
| **validateOnly** | **kotlin.Boolean**|  | [optional] |
| **serviceType** | **kotlin.Int**|  | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **coupon** | **kotlin.String**|  | [optional] |

### Return type

[**BackupOrderPostResponse**](BackupOrderPostResponse.md)

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

<a id="cancelBackup"></a>
# **cancelBackup**
> CancelBackup200Response cancelBackup(id)

Cancel Backup Service

Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BackupsApi()
val id : kotlin.Int = 56 // kotlin.Int | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
try {
    val result : CancelBackup200Response = apiInstance.cancelBackup(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BackupsApi#cancelBackup")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BackupsApi#cancelBackup")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | |

### Return type

[**CancelBackup200Response**](CancelBackup200Response.md)

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

<a id="getBackupInfo"></a>
# **getBackupInfo**
> Backup getBackupInfo(id)

Get Backup Service Details

Returns detailed service information for the specified backup storage order, including &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60; in &#x60;serviceInfo&#x60;. Also returns &#x60;client_links&#x60;, &#x60;billingDetails&#x60;, &#x60;extraInfoTables&#x60;, &#x60;package&#x60;, and &#x60;custCurrency&#x60;.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BackupsApi()
val id : kotlin.Int = 56 // kotlin.Int | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
try {
    val result : Backup = apiInstance.getBackupInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BackupsApi#getBackupInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BackupsApi#getBackupInfo")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | |

### Return type

[**Backup**](Backup.md)

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

<a id="getBackupInvoices"></a>
# **getBackupInvoices**
> ChargeInvoiceRows getBackupInvoices(id)

Get Backup Order Invoices

Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BackupsApi()
val id : kotlin.Int = 56 // kotlin.Int | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
try {
    val result : ChargeInvoiceRows = apiInstance.getBackupInvoices(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BackupsApi#getBackupInvoices")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BackupsApi#getBackupInvoices")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | |

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

<a id="getBackupLogin"></a>
# **getBackupLogin**
> BackupLoginResponse getBackupLogin(id)

Get Backup Storage Panel Login

Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BackupsApi()
val id : kotlin.Int = 56 // kotlin.Int | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
try {
    val result : BackupLoginResponse = apiInstance.getBackupLogin(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BackupsApi#getBackupLogin")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BackupsApi#getBackupLogin")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | |

### Return type

[**BackupLoginResponse**](BackupLoginResponse.md)

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

<a id="getBackupsList"></a>
# **getBackupsList**
> kotlin.collections.List&lt;BackupRow&gt; getBackupsList()

List Backup Services

Returns all backup storage services on your account. Each entry includes the &#x60;backup_id&#x60;, &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60;. Use the &#x60;backup_id&#x60; with &#x60;/backups/{id}&#x60; to retrieve full service details or &#x60;/backups/{id}/login&#x60; to obtain a storage panel session.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BackupsApi()
try {
    val result : kotlin.collections.List<BackupRow> = apiInstance.getBackupsList()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BackupsApi#getBackupsList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BackupsApi#getBackupsList")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.collections.List&lt;BackupRow&gt;**](BackupRow.md)

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

<a id="getBackupsWelcomeEmail"></a>
# **getBackupsWelcomeEmail**
> SuccessTextResponse getBackupsWelcomeEmail(id)

Resend Backup Welcome Email

Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BackupsApi()
val id : kotlin.Int = 56 // kotlin.Int | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
try {
    val result : SuccessTextResponse = apiInstance.getBackupsWelcomeEmail(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BackupsApi#getBackupsWelcomeEmail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BackupsApi#getBackupsWelcomeEmail")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | |

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

<a id="getNewBackup"></a>
# **getNewBackup**
> BackupsOrder getNewBackup()

Get Backup Order Form Data

Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via &#x60;PUT /backups/order&#x60; or placing an order via &#x60;POST /backups/order&#x60;.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BackupsApi()
try {
    val result : BackupsOrder = apiInstance.getNewBackup()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BackupsApi#getNewBackup")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BackupsApi#getNewBackup")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BackupsOrder**](BackupsOrder.md)

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

<a id="updateBackupInfo"></a>
# **updateBackupInfo**
> SuccessTextResponse updateBackupInfo(id)

Update Backup Information

Updates backup storage service metadata, such as stored credentials or settings for the order.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BackupsApi()
val id : kotlin.Int = 56 // kotlin.Int | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
try {
    val result : SuccessTextResponse = apiInstance.updateBackupInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BackupsApi#updateBackupInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BackupsApi#updateBackupInfo")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | |

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

<a id="validateBackupOrder"></a>
# **validateBackupOrder**
> BackupOrderPutResponse validateBackupOrder(validateOnly, serviceType, coupon)

Validate Backup Order

Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via &#x60;POST /backups/order&#x60;.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BackupsApi()
val validateOnly : kotlin.Boolean = true // kotlin.Boolean | 
val serviceType : kotlin.Int = 56 // kotlin.Int | 
val coupon : kotlin.String = coupon_example // kotlin.String | 
try {
    val result : BackupOrderPutResponse = apiInstance.validateBackupOrder(validateOnly, serviceType, coupon)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BackupsApi#validateBackupOrder")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BackupsApi#validateBackupOrder")
    e.printStackTrace()
}
```

### Parameters
| **validateOnly** | **kotlin.Boolean**|  | [optional] |
| **serviceType** | **kotlin.Int**|  | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **coupon** | **kotlin.String**|  | [optional] |

### Return type

[**BackupOrderPutResponse**](BackupOrderPutResponse.md)

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

