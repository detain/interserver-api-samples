# ScrubIpsApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**cancelScrubIp**](ScrubIpsApi.md#cancelScrubIp) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service |
| [**createFilter**](ScrubIpsApi.md#createFilter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter |
| [**createGeoRule**](ScrubIpsApi.md#createGeoRule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule |
| [**createRule**](ScrubIpsApi.md#createRule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule |
| [**deleteFilter**](ScrubIpsApi.md#deleteFilter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter |
| [**disableScrub**](ScrubIpsApi.md#disableScrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection |
| [**enableScrub**](ScrubIpsApi.md#enableScrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection |
| [**getOrderDetail**](ScrubIpsApi.md#getOrderDetail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information |
| [**getScrubIpDetails**](ScrubIpsApi.md#getScrubIpDetails) | **GET** /scrub_ips/{id} | Get Scrub IP Details |
| [**getScrubIpFilterTypes**](ScrubIpsApi.md#getScrubIpFilterTypes) | **GET** /scrub_ips/filter_types | List Scrub Filter Types |
| [**getScrubIpInvoices**](ScrubIpsApi.md#getScrubIpInvoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices |
| [**getScrubIpLogs**](ScrubIpsApi.md#getScrubIpLogs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs |
| [**getScrubIpsList**](ScrubIpsApi.md#getScrubIpsList) | **GET** /scrub_ips | List Scrub IP Services |
| [**placeScrubOrder**](ScrubIpsApi.md#placeScrubOrder) | **POST** /scrub_ips/order | Place Scrub IP Order |
| [**scrubIpsDeleteGeoRule**](ScrubIpsApi.md#scrubIpsDeleteGeoRule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule |
| [**scrubIpsDeleteRule**](ScrubIpsApi.md#scrubIpsDeleteRule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule |


<a id="cancelScrubIp"></a>
# **cancelScrubIp**
> CancelScrubIp200Response cancelScrubIp(id)

Cancel Scrub IP Service

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ScrubIpsApi()
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
try {
    val result : CancelScrubIp200Response = apiInstance.cancelScrubIp(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ScrubIpsApi#cancelScrubIp")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ScrubIpsApi#cancelScrubIp")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| ScrubIp ID number | |

### Return type

[**CancelScrubIp200Response**](CancelScrubIp200Response.md)

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

<a id="createFilter"></a>
# **createFilter**
> CreateFilter201Response createFilter(id, createFilter)

Create Traffic Filter

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use &#x60;GET /scrub_ips/filter_types&#x60; to list available filter types.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ScrubIpsApi()
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
val createFilter : CreateFilter =  // CreateFilter | 
try {
    val result : CreateFilter201Response = apiInstance.createFilter(id, createFilter)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ScrubIpsApi#createFilter")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ScrubIpsApi#createFilter")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| ScrubIp ID number | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **createFilter** | [**CreateFilter**](CreateFilter.md)|  | |

### Return type

[**CreateFilter201Response**](CreateFilter201Response.md)

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

<a id="createGeoRule"></a>
# **createGeoRule**
> CreateRule201Response createGeoRule(id, createGeoFirewallRule)

Create Geo Firewall Rule

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ScrubIpsApi()
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
val createGeoFirewallRule : CreateGeoFirewallRule =  // CreateGeoFirewallRule | 
try {
    val result : CreateRule201Response = apiInstance.createGeoRule(id, createGeoFirewallRule)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ScrubIpsApi#createGeoRule")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ScrubIpsApi#createGeoRule")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| ScrubIp ID number | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **createGeoFirewallRule** | [**CreateGeoFirewallRule**](CreateGeoFirewallRule.md)|  | |

### Return type

[**CreateRule201Response**](CreateRule201Response.md)

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

<a id="createRule"></a>
# **createRule**
> CreateRule201Response createRule(id, createFirewallRule)

Create Firewall Rule

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ScrubIpsApi()
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
val createFirewallRule : CreateFirewallRule =  // CreateFirewallRule | 
try {
    val result : CreateRule201Response = apiInstance.createRule(id, createFirewallRule)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ScrubIpsApi#createRule")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ScrubIpsApi#createRule")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| ScrubIp ID number | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **createFirewallRule** | [**CreateFirewallRule**](CreateFirewallRule.md)|  | |

### Return type

[**CreateRule201Response**](CreateRule201Response.md)

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

<a id="deleteFilter"></a>
# **deleteFilter**
> DeleteFilter200Response deleteFilter(id, createFilter)

Delete Traffic Filter

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ScrubIpsApi()
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
val createFilter : CreateFilter =  // CreateFilter | 
try {
    val result : DeleteFilter200Response = apiInstance.deleteFilter(id, createFilter)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ScrubIpsApi#deleteFilter")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ScrubIpsApi#deleteFilter")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| ScrubIp ID number | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **createFilter** | [**CreateFilter**](CreateFilter.md)|  | |

### Return type

[**DeleteFilter200Response**](DeleteFilter200Response.md)

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

<a id="disableScrub"></a>
# **disableScrub**
> DisableScrub200Response disableScrub(id)

Disable Scrub Protection

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ScrubIpsApi()
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
try {
    val result : DisableScrub200Response = apiInstance.disableScrub(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ScrubIpsApi#disableScrub")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ScrubIpsApi#disableScrub")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| ScrubIp ID number | |

### Return type

[**DisableScrub200Response**](DisableScrub200Response.md)

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

<a id="enableScrub"></a>
# **enableScrub**
> EnableScrub200Response enableScrub(id)

Enable Scrub Protection

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ScrubIpsApi()
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
try {
    val result : EnableScrub200Response = apiInstance.enableScrub(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ScrubIpsApi#enableScrub")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ScrubIpsApi#enableScrub")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| ScrubIp ID number | |

### Return type

[**EnableScrub200Response**](EnableScrub200Response.md)

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

<a id="getOrderDetail"></a>
# **getOrderDetail**
> GetOrderDetail200Response getOrderDetail()

Get Scrub IP Ordering Information

Returns the available Scrub IP service plans and pricing information needed to build an order form.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ScrubIpsApi()
try {
    val result : GetOrderDetail200Response = apiInstance.getOrderDetail()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ScrubIpsApi#getOrderDetail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ScrubIpsApi#getOrderDetail")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**GetOrderDetail200Response**](GetOrderDetail200Response.md)

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

<a id="getScrubIpDetails"></a>
# **getScrubIpDetails**
> GetScrubIpDetails200Response getScrubIpDetails(id)

Get Scrub IP Details

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ScrubIpsApi()
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
try {
    val result : GetScrubIpDetails200Response = apiInstance.getScrubIpDetails(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ScrubIpsApi#getScrubIpDetails")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ScrubIpsApi#getScrubIpDetails")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| ScrubIp ID number | |

### Return type

[**GetScrubIpDetails200Response**](GetScrubIpDetails200Response.md)

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

<a id="getScrubIpFilterTypes"></a>
# **getScrubIpFilterTypes**
> ScrubIpFilterTypes getScrubIpFilterTypes()

List Scrub Filter Types

Returns the list of scrub filter types that can be used when creating filter rules via &#x60;/scrub_ips/{id}/create_filter&#x60;.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ScrubIpsApi()
try {
    val result : ScrubIpFilterTypes = apiInstance.getScrubIpFilterTypes()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ScrubIpsApi#getScrubIpFilterTypes")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ScrubIpsApi#getScrubIpFilterTypes")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ScrubIpFilterTypes**](ScrubIpFilterTypes.md)

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

<a id="getScrubIpInvoices"></a>
# **getScrubIpInvoices**
> ChargeInvoiceRows getScrubIpInvoices(id)

Get ScrubIp Invoices

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ScrubIpsApi()
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
try {
    val result : ChargeInvoiceRows = apiInstance.getScrubIpInvoices(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ScrubIpsApi#getScrubIpInvoices")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ScrubIpsApi#getScrubIpInvoices")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| ScrubIp ID number | |

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

<a id="getScrubIpLogs"></a>
# **getScrubIpLogs**
> kotlin.collections.List&lt;ScrubIpsLogRowSchema&gt; getScrubIpLogs(id)

Get Scrub IP Logs

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ScrubIpsApi()
val id : kotlin.String = 413232   // kotlin.String | Scrub Order ID
try {
    val result : kotlin.collections.List<ScrubIpsLogRowSchema> = apiInstance.getScrubIpLogs(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ScrubIpsApi#getScrubIpLogs")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ScrubIpsApi#getScrubIpLogs")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.String**| Scrub Order ID | |

### Return type

[**kotlin.collections.List&lt;ScrubIpsLogRowSchema&gt;**](ScrubIpsLogRowSchema.md)

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

<a id="getScrubIpsList"></a>
# **getScrubIpsList**
> kotlin.collections.List&lt;ScrubIpsRowSchema&gt; getScrubIpsList()

List Scrub IP Services

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ScrubIpsApi()
try {
    val result : kotlin.collections.List<ScrubIpsRowSchema> = apiInstance.getScrubIpsList()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ScrubIpsApi#getScrubIpsList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ScrubIpsApi#getScrubIpsList")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.collections.List&lt;ScrubIpsRowSchema&gt;**](ScrubIpsRowSchema.md)

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

<a id="placeScrubOrder"></a>
# **placeScrubOrder**
> PlaceScrubOrder201Response placeScrubOrder(scrubIpPlaceOrder)

Place Scrub IP Order

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ScrubIpsApi()
val scrubIpPlaceOrder : ScrubIpPlaceOrder =  // ScrubIpPlaceOrder | 
try {
    val result : PlaceScrubOrder201Response = apiInstance.placeScrubOrder(scrubIpPlaceOrder)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ScrubIpsApi#placeScrubOrder")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ScrubIpsApi#placeScrubOrder")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **scrubIpPlaceOrder** | [**ScrubIpPlaceOrder**](ScrubIpPlaceOrder.md)|  | |

### Return type

[**PlaceScrubOrder201Response**](PlaceScrubOrder201Response.md)

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

<a id="scrubIpsDeleteGeoRule"></a>
# **scrubIpsDeleteGeoRule**
> ScrubIpsDeleteRule200Response scrubIpsDeleteGeoRule(id, deleteGeoFirewallRule)

Delete Geo Firewall Rule

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ScrubIpsApi()
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
val deleteGeoFirewallRule : DeleteGeoFirewallRule =  // DeleteGeoFirewallRule | 
try {
    val result : ScrubIpsDeleteRule200Response = apiInstance.scrubIpsDeleteGeoRule(id, deleteGeoFirewallRule)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ScrubIpsApi#scrubIpsDeleteGeoRule")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ScrubIpsApi#scrubIpsDeleteGeoRule")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| ScrubIp ID number | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **deleteGeoFirewallRule** | [**DeleteGeoFirewallRule**](DeleteGeoFirewallRule.md)|  | |

### Return type

[**ScrubIpsDeleteRule200Response**](ScrubIpsDeleteRule200Response.md)

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

<a id="scrubIpsDeleteRule"></a>
# **scrubIpsDeleteRule**
> ScrubIpsDeleteRule200Response scrubIpsDeleteRule(id, deleteFirewallRule)

Delete Firewall Rule

Removes an existing firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ScrubIpsApi()
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
val deleteFirewallRule : DeleteFirewallRule =  // DeleteFirewallRule | 
try {
    val result : ScrubIpsDeleteRule200Response = apiInstance.scrubIpsDeleteRule(id, deleteFirewallRule)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ScrubIpsApi#scrubIpsDeleteRule")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ScrubIpsApi#scrubIpsDeleteRule")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| ScrubIp ID number | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **deleteFirewallRule** | [**DeleteFirewallRule**](DeleteFirewallRule.md)|  | |

### Return type

[**ScrubIpsDeleteRule200Response**](ScrubIpsDeleteRule200Response.md)

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

