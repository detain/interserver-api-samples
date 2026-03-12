# LicensesApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**addLicense**](LicensesApi.md#addLicense) | **POST** /licenses/order | Place License Order |
| [**getLicenseInfo**](LicensesApi.md#getLicenseInfo) | **GET** /licenses/{id} | Get License |
| [**getLicenseInvoices**](LicensesApi.md#getLicenseInvoices) | **GET** /licenses/{id}/invoices | Get License Invoices |
| [**getLicenseList**](LicensesApi.md#getLicenseList) | **GET** /licenses | List Licenses |
| [**getLicenseOrderCatTagInfo**](LicensesApi.md#getLicenseOrderCatTagInfo) | **GET** /licenses/order/{catTag} | Get License Order Information for Category |
| [**getLicensesWelcomeEmail**](LicensesApi.md#getLicensesWelcomeEmail) | **GET** /licenses/{id}/welcome_email | Resend License Welcome Email |
| [**getNewLicense**](LicensesApi.md#getNewLicense) | **GET** /licenses/order | Get License Order Information |
| [**licensesCancel**](LicensesApi.md#licensesCancel) | **DELETE** /licenses/{id} | Cancel License |
| [**postLicenseChangeIp**](LicensesApi.md#postLicenseChangeIp) | **POST** /licenses/{id}/change_ip | Change License IP |
| [**putLicenses**](LicensesApi.md#putLicenses) | **PUT** /licenses/order | Validate License Order |
| [**updateLicenseInfo**](LicensesApi.md#updateLicenseInfo) | **POST** /licenses/{id} | Update License |


<a id="addLicense"></a>
# **addLicense**
> addLicense()

Place License Order

Places an order for a new software license. Use &#x60;PUT /licenses/order&#x60; to validate the order first.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = LicensesApi()
try {
    apiInstance.addLicense()
} catch (e: ClientException) {
    println("4xx response calling LicensesApi#addLicense")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling LicensesApi#addLicense")
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

<a id="getLicenseInfo"></a>
# **getLicenseInfo**
> License getLicenseInfo(id)

Get License

Returns detailed information about a specific license including its type, IP assignment, and status.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = LicensesApi()
val id : kotlin.Int = 56 // kotlin.Int | The license service ID. Use `license_id` from `GET /licenses`.
try {
    val result : License = apiInstance.getLicenseInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling LicensesApi#getLicenseInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling LicensesApi#getLicenseInfo")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | |

### Return type

[**License**](License.md)

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

<a id="getLicenseInvoices"></a>
# **getLicenseInvoices**
> ChargeInvoiceRows getLicenseInvoices(id)

Get License Invoices

Returns the billing invoices associated with this license service.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = LicensesApi()
val id : kotlin.Int = 56 // kotlin.Int | The license service ID. Use `license_id` from `GET /licenses`.
try {
    val result : ChargeInvoiceRows = apiInstance.getLicenseInvoices(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling LicensesApi#getLicenseInvoices")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling LicensesApi#getLicenseInvoices")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | |

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

<a id="getLicenseList"></a>
# **getLicenseList**
> kotlin.collections.List&lt;LicenseRow&gt; getLicenseList()

List Licenses

Returns all software license services on the account with their current status and IP assignments.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = LicensesApi()
try {
    val result : kotlin.collections.List<LicenseRow> = apiInstance.getLicenseList()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling LicensesApi#getLicenseList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling LicensesApi#getLicenseList")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.collections.List&lt;LicenseRow&gt;**](LicenseRow.md)

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

<a id="getLicenseOrderCatTagInfo"></a>
# **getLicenseOrderCatTagInfo**
> getLicenseOrderCatTagInfo(catTag)

Get License Order Information for Category

Returns the available license types and pricing for a specific license category. Use the category tags from &#x60;GET /licenses/order&#x60; to identify valid values.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = LicensesApi()
val catTag : kotlin.String = catTag_example // kotlin.String | The license category tag (e.g. `cpanel`, `plesk`). Obtain valid values from the `GET /licenses/order` response.
try {
    apiInstance.getLicenseOrderCatTagInfo(catTag)
} catch (e: ClientException) {
    println("4xx response calling LicensesApi#getLicenseOrderCatTagInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling LicensesApi#getLicenseOrderCatTagInfo")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **catTag** | **kotlin.String**| The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response. | |

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

<a id="getLicensesWelcomeEmail"></a>
# **getLicensesWelcomeEmail**
> SuccessTextResponse getLicensesWelcomeEmail(id)

Resend License Welcome Email

Resends the welcome email for the license service. The email contains the license key and activation instructions.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = LicensesApi()
val id : kotlin.Int = 56 // kotlin.Int | The license service ID. Use `license_id` from `GET /licenses`.
try {
    val result : SuccessTextResponse = apiInstance.getLicensesWelcomeEmail(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling LicensesApi#getLicensesWelcomeEmail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling LicensesApi#getLicensesWelcomeEmail")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | |

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

<a id="getNewLicense"></a>
# **getNewLicense**
> LicensesOrder getNewLicense()

Get License Order Information

Retrieves available license types, categories, and pricing for ordering a new license.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = LicensesApi()
try {
    val result : LicensesOrder = apiInstance.getNewLicense()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling LicensesApi#getNewLicense")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling LicensesApi#getNewLicense")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**LicensesOrder**](LicensesOrder.md)

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

<a id="licensesCancel"></a>
# **licensesCancel**
> LicensesCancel200Response licensesCancel(id)

Cancel License

Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = LicensesApi()
val id : kotlin.Int = 56 // kotlin.Int | The license service ID. Use `license_id` from `GET /licenses`.
try {
    val result : LicensesCancel200Response = apiInstance.licensesCancel(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling LicensesApi#licensesCancel")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling LicensesApi#licensesCancel")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | |

### Return type

[**LicensesCancel200Response**](LicensesCancel200Response.md)

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

<a id="postLicenseChangeIp"></a>
# **postLicenseChangeIp**
> SuccessTextResponse postLicenseChangeIp(id, ipObject)

Change License IP

Changes the IP address associated with the license. The service must be active. Use &#x60;GET /licenses/{id}&#x60; to view the current IP assignment before making changes.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = LicensesApi()
val id : kotlin.Int = 56 // kotlin.Int | The license service ID. Use `license_id` from `GET /licenses`.
val ipObject : IpObject =  // IpObject | 
try {
    val result : SuccessTextResponse = apiInstance.postLicenseChangeIp(id, ipObject)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling LicensesApi#postLicenseChangeIp")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling LicensesApi#postLicenseChangeIp")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **ipObject** | [**IpObject**](IpObject.md)|  | |

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

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="putLicenses"></a>
# **putLicenses**
> putLicenses()

Validate License Order

Validates a license order before placing it. Use this to check for errors before committing to a purchase.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = LicensesApi()
try {
    apiInstance.putLicenses()
} catch (e: ClientException) {
    println("4xx response calling LicensesApi#putLicenses")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling LicensesApi#putLicenses")
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

<a id="updateLicenseInfo"></a>
# **updateLicenseInfo**
> updateLicenseInfo(id)

Update License

Updates settings on a license service such as its assigned IP.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = LicensesApi()
val id : kotlin.String = id_example // kotlin.String | The license service ID. Use `license_id` from `GET /licenses`.
try {
    apiInstance.updateLicenseInfo(id)
} catch (e: ClientException) {
    println("4xx response calling LicensesApi#updateLicenseInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling LicensesApi#updateLicenseInfo")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.String**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | |

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

