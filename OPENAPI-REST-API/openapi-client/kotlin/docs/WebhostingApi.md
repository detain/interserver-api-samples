# WebhostingApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**addWebsite**](WebhostingApi.md#addWebsite) | **POST** /websites/order | Place Website Order |
| [**getNewWebsite**](WebhostingApi.md#getNewWebsite) | **GET** /websites/order | Website Ordering Information |
| [**getWebsiteBuyIp**](WebhostingApi.md#getWebsiteBuyIp) | **GET** /websites/{id}/buy_ip | Get Website IP Information |
| [**getWebsiteInfo**](WebhostingApi.md#getWebsiteInfo) | **GET** /websites/{id} | Get Website Order |
| [**getWebsiteInvoices**](WebhostingApi.md#getWebsiteInvoices) | **GET** /websites/{id}/invoices | Get Website Invoices |
| [**getWebsiteList**](WebhostingApi.md#getWebsiteList) | **GET** /websites | Get Website Listing |
| [**getWebsitesBackups**](WebhostingApi.md#getWebsitesBackups) | **GET** /websites/{id}/backups | Get Website Backups |
| [**getWebsitesLogin**](WebhostingApi.md#getWebsitesLogin) | **GET** /websites/{id}/login | Hosting Panel Auto Login |
| [**getWebsitesWelcomeEmail**](WebhostingApi.md#getWebsitesWelcomeEmail) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email |
| [**gettWebsiteReverseDns**](WebhostingApi.md#gettWebsiteReverseDns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS |
| [**postWebsiteBuyIp**](WebhostingApi.md#postWebsiteBuyIp) | **POST** /websites/{id}/buy_ip | Update Website IP DNS |
| [**postWebsiteMigration**](WebhostingApi.md#postWebsiteMigration) | **POST** /websites/{id}/migration | Request Website Migration |
| [**postWebsitesReverseDns**](WebhostingApi.md#postWebsitesReverseDns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS |
| [**putWebsites**](WebhostingApi.md#putWebsites) | **PUT** /websites/order | Validate Webhosting Order |
| [**updateWebsiteInfo**](WebhostingApi.md#updateWebsiteInfo) | **POST** /websites/{id} | Update Website Order |
| [**webhostingCancel**](WebhostingApi.md#webhostingCancel) | **DELETE** /websites/{id} | Cancel Website |


<a id="addWebsite"></a>
# **addWebsite**
> addWebsite()

Place Website Order

Places an order for a new webhosting package. Use &#x60;PUT /websites/order&#x60; to validate the order first.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = WebhostingApi()
try {
    apiInstance.addWebsite()
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#addWebsite")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#addWebsite")
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

<a id="getNewWebsite"></a>
# **getNewWebsite**
> WebsitesOrder getNewWebsite()

Website Ordering Information

Retrieves available webhosting plans and pricing for ordering.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = WebhostingApi()
try {
    val result : WebsitesOrder = apiInstance.getNewWebsite()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#getNewWebsite")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#getNewWebsite")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**WebsitesOrder**](WebsitesOrder.md)

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

<a id="getWebsiteBuyIp"></a>
# **getWebsiteBuyIp**
> GetWebsiteBuyIp200Response getWebsiteBuyIp(id)

Get Website IP Information

Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via &#x60;POST /websites/{id}/buy_ip&#x60;.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : GetWebsiteBuyIp200Response = apiInstance.getWebsiteBuyIp(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#getWebsiteBuyIp")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#getWebsiteBuyIp")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

### Return type

[**GetWebsiteBuyIp200Response**](GetWebsiteBuyIp200Response.md)

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

<a id="getWebsiteInfo"></a>
# **getWebsiteInfo**
> Website getWebsiteInfo(id)

Get Website Order

Returns detailed information about a specific webhosting order including its domain, plan, and status.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : Website = apiInstance.getWebsiteInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#getWebsiteInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#getWebsiteInfo")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

### Return type

[**Website**](Website.md)

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

<a id="getWebsiteInvoices"></a>
# **getWebsiteInvoices**
> ChargeInvoiceRows getWebsiteInvoices(id)

Get Website Invoices

Returns the billing invoices associated with this webhosting service.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : ChargeInvoiceRows = apiInstance.getWebsiteInvoices(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#getWebsiteInvoices")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#getWebsiteInvoices")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

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

<a id="getWebsiteList"></a>
# **getWebsiteList**
> kotlin.collections.List&lt;WebsiteRow&gt; getWebsiteList()

Get Website Listing

Gets a listing of your webhosting orders and service details.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = WebhostingApi()
try {
    val result : kotlin.collections.List<WebsiteRow> = apiInstance.getWebsiteList()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#getWebsiteList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#getWebsiteList")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.collections.List&lt;WebsiteRow&gt;**](WebsiteRow.md)

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
 - **Accept**: application/json, multipart/form-data

<a id="getWebsitesBackups"></a>
# **getWebsitesBackups**
> WebsiteBackups getWebsitesBackups(id)

Get Website Backups

Gets a list of the backups that exist for a website and their sizes.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : WebsiteBackups = apiInstance.getWebsitesBackups(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#getWebsitesBackups")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#getWebsitesBackups")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

### Return type

[**WebsiteBackups**](WebsiteBackups.md)

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

<a id="getWebsitesLogin"></a>
# **getWebsitesLogin**
> WebsiteLoginResponse getWebsitesLogin(id)

Hosting Panel Auto Login

Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : WebsiteLoginResponse = apiInstance.getWebsitesLogin(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#getWebsitesLogin")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#getWebsitesLogin")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

### Return type

[**WebsiteLoginResponse**](WebsiteLoginResponse.md)

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

<a id="getWebsitesWelcomeEmail"></a>
# **getWebsitesWelcomeEmail**
> SuccessTextResponse getWebsitesWelcomeEmail(id)

Resend Website Welcome Email

Resends the welcome email containing hosting credentials and panel access details for the webhosting order.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : SuccessTextResponse = apiInstance.getWebsitesWelcomeEmail(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#getWebsitesWelcomeEmail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#getWebsitesWelcomeEmail")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

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

<a id="gettWebsiteReverseDns"></a>
# **gettWebsiteReverseDns**
> ReverseDnsEntries gettWebsiteReverseDns(id)

Get Website Reverse DNS

Returns the current reverse DNS (PTR record) entries for the website&#39;s IP addresses.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : ReverseDnsEntries = apiInstance.gettWebsiteReverseDns(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#gettWebsiteReverseDns")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#gettWebsiteReverseDns")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

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

<a id="postWebsiteBuyIp"></a>
# **postWebsiteBuyIp**
> PostWebsiteBuyIp200Response postWebsiteBuyIp(id, postWebsiteBuyIpRequest)

Update Website IP DNS

Updates the reverse DNS hostnames for the website&#39;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
val postWebsiteBuyIpRequest : PostWebsiteBuyIpRequest =  // PostWebsiteBuyIpRequest | 
try {
    val result : PostWebsiteBuyIp200Response = apiInstance.postWebsiteBuyIp(id, postWebsiteBuyIpRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#postWebsiteBuyIp")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#postWebsiteBuyIp")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **postWebsiteBuyIpRequest** | [**PostWebsiteBuyIpRequest**](PostWebsiteBuyIpRequest.md)|  | |

### Return type

[**PostWebsiteBuyIp200Response**](PostWebsiteBuyIp200Response.md)

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

<a id="postWebsiteMigration"></a>
# **postWebsiteMigration**
> PostWebsiteMigration200Response postWebsiteMigration(id, postWebsiteMigrationRequest)

Request Website Migration

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
val postWebsiteMigrationRequest : PostWebsiteMigrationRequest =  // PostWebsiteMigrationRequest | 
try {
    val result : PostWebsiteMigration200Response = apiInstance.postWebsiteMigration(id, postWebsiteMigrationRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#postWebsiteMigration")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#postWebsiteMigration")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **postWebsiteMigrationRequest** | [**PostWebsiteMigrationRequest**](PostWebsiteMigrationRequest.md)|  | |

### Return type

[**PostWebsiteMigration200Response**](PostWebsiteMigration200Response.md)

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

<a id="postWebsitesReverseDns"></a>
# **postWebsitesReverseDns**
> TextResponse postWebsitesReverseDns(id, reverseDnsEntries)

Update Website Reverse DNS

Updates the reverse DNS entries for each of the IP addresses for the website.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
val reverseDnsEntries : ReverseDnsEntries =  // ReverseDnsEntries | 
try {
    val result : TextResponse = apiInstance.postWebsitesReverseDns(id, reverseDnsEntries)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#postWebsitesReverseDns")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#postWebsitesReverseDns")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |
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

<a id="putWebsites"></a>
# **putWebsites**
> putWebsites()

Validate Webhosting Order

Validates a webhosting order before placing it.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = WebhostingApi()
try {
    apiInstance.putWebsites()
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#putWebsites")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#putWebsites")
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

<a id="updateWebsiteInfo"></a>
# **updateWebsiteInfo**
> updateWebsiteInfo(id)

Update Website Order

Updates settings on a webhosting order.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = WebhostingApi()
val id : kotlin.String = id_example // kotlin.String | The website service ID. Use `website_id` from `GET /websites`.
try {
    apiInstance.updateWebsiteInfo(id)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#updateWebsiteInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#updateWebsiteInfo")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.String**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

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

<a id="webhostingCancel"></a>
# **webhostingCancel**
> WebhostingCancel200Response webhostingCancel(id)

Cancel Website

Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = WebhostingApi()
val id : kotlin.String = 123 // kotlin.String | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : WebhostingCancel200Response = apiInstance.webhostingCancel(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#webhostingCancel")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#webhostingCancel")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.String**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

### Return type

[**WebhostingCancel200Response**](WebhostingCancel200Response.md)

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

