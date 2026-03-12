# ScrubIpsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**cancelScrubIp**](ScrubIpsApi.md#cancelScrubIp) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service
[**createFilter**](ScrubIpsApi.md#createFilter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter
[**createGeoRule**](ScrubIpsApi.md#createGeoRule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule
[**createRule**](ScrubIpsApi.md#createRule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule
[**deleteFilter**](ScrubIpsApi.md#deleteFilter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter
[**disableScrub**](ScrubIpsApi.md#disableScrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection
[**enableScrub**](ScrubIpsApi.md#enableScrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection
[**getOrderDetail**](ScrubIpsApi.md#getOrderDetail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information
[**getScrubIpDetails**](ScrubIpsApi.md#getScrubIpDetails) | **GET** /scrub_ips/{id} | Get Scrub IP Details
[**getScrubIpFilterTypes**](ScrubIpsApi.md#getScrubIpFilterTypes) | **GET** /scrub_ips/filter_types | List Scrub Filter Types
[**getScrubIpInvoices**](ScrubIpsApi.md#getScrubIpInvoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices
[**getScrubIpLogs**](ScrubIpsApi.md#getScrubIpLogs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs
[**getScrubIpsList**](ScrubIpsApi.md#getScrubIpsList) | **GET** /scrub_ips | List Scrub IP Services
[**placeScrubOrder**](ScrubIpsApi.md#placeScrubOrder) | **POST** /scrub_ips/order | Place Scrub IP Order
[**scrubIpsDeleteGeoRule**](ScrubIpsApi.md#scrubIpsDeleteGeoRule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule
[**scrubIpsDeleteRule**](ScrubIpsApi.md#scrubIpsDeleteRule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule

<a name="cancelScrubIp"></a>
# **cancelScrubIp**
> InlineResponse20013 cancelScrubIp(id)

Cancel Scrub IP Service

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ScrubIpsApi()
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
try {
    val result : InlineResponse20013 = apiInstance.cancelScrubIp(id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| ScrubIp ID number |

### Return type

[**InlineResponse20013**](InlineResponse20013.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="createFilter"></a>
# **createFilter**
> InlineResponse2011 createFilter(body, id)

Create Traffic Filter

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use &#x60;GET /scrub_ips/filter_types&#x60; to list available filter types.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ScrubIpsApi()
val body : CreateFilter =  // CreateFilter | 
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
try {
    val result : InlineResponse2011 = apiInstance.createFilter(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFilter**](CreateFilter.md)|  |
 **id** | **kotlin.Int**| ScrubIp ID number |

### Return type

[**InlineResponse2011**](InlineResponse2011.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="createGeoRule"></a>
# **createGeoRule**
> InlineResponse201 createGeoRule(body, id)

Create Geo Firewall Rule

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ScrubIpsApi()
val body : CreateGeoFirewallRule =  // CreateGeoFirewallRule | 
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
try {
    val result : InlineResponse201 = apiInstance.createGeoRule(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateGeoFirewallRule**](CreateGeoFirewallRule.md)|  |
 **id** | **kotlin.Int**| ScrubIp ID number |

### Return type

[**InlineResponse201**](InlineResponse201.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="createRule"></a>
# **createRule**
> InlineResponse201 createRule(body, id)

Create Firewall Rule

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ScrubIpsApi()
val body : CreateFirewallRule =  // CreateFirewallRule | 
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
try {
    val result : InlineResponse201 = apiInstance.createRule(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFirewallRule**](CreateFirewallRule.md)|  |
 **id** | **kotlin.Int**| ScrubIp ID number |

### Return type

[**InlineResponse201**](InlineResponse201.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="deleteFilter"></a>
# **deleteFilter**
> InlineResponse20017 deleteFilter(body, id)

Delete Traffic Filter

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ScrubIpsApi()
val body : CreateFilter =  // CreateFilter | 
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
try {
    val result : InlineResponse20017 = apiInstance.deleteFilter(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFilter**](CreateFilter.md)|  |
 **id** | **kotlin.Int**| ScrubIp ID number |

### Return type

[**InlineResponse20017**](InlineResponse20017.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="disableScrub"></a>
# **disableScrub**
> InlineResponse20015 disableScrub(id)

Disable Scrub Protection

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ScrubIpsApi()
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
try {
    val result : InlineResponse20015 = apiInstance.disableScrub(id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| ScrubIp ID number |

### Return type

[**InlineResponse20015**](InlineResponse20015.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="enableScrub"></a>
# **enableScrub**
> InlineResponse20014 enableScrub(id)

Enable Scrub Protection

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ScrubIpsApi()
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
try {
    val result : InlineResponse20014 = apiInstance.enableScrub(id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| ScrubIp ID number |

### Return type

[**InlineResponse20014**](InlineResponse20014.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getOrderDetail"></a>
# **getOrderDetail**
> InlineResponse20018 getOrderDetail()

Get Scrub IP Ordering Information

Returns the available Scrub IP service plans and pricing information needed to build an order form.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ScrubIpsApi()
try {
    val result : InlineResponse20018 = apiInstance.getOrderDetail()
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

[**InlineResponse20018**](InlineResponse20018.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getScrubIpDetails"></a>
# **getScrubIpDetails**
> InlineResponse20012 getScrubIpDetails(id)

Get Scrub IP Details

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ScrubIpsApi()
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
try {
    val result : InlineResponse20012 = apiInstance.getScrubIpDetails(id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| ScrubIp ID number |

### Return type

[**InlineResponse20012**](InlineResponse20012.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getScrubIpFilterTypes"></a>
# **getScrubIpFilterTypes**
> ScrubIpFilterTypes getScrubIpFilterTypes()

List Scrub Filter Types

Returns the list of scrub filter types that can be used when creating filter rules via &#x60;/scrub_ips/{id}/create_filter&#x60;.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getScrubIpInvoices"></a>
# **getScrubIpInvoices**
> ChargeInvoiceRows getScrubIpInvoices(id)

Get ScrubIp Invoices

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| ScrubIp ID number |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getScrubIpLogs"></a>
# **getScrubIpLogs**
> kotlin.Array&lt;ScrubIpsLogRowSchema&gt; getScrubIpLogs(id)

Get Scrub IP Logs

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ScrubIpsApi()
val id : kotlin.String = id_example // kotlin.String | Scrub Order ID
try {
    val result : kotlin.Array<ScrubIpsLogRowSchema> = apiInstance.getScrubIpLogs(id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.String**| Scrub Order ID |

### Return type

[**kotlin.Array&lt;ScrubIpsLogRowSchema&gt;**](ScrubIpsLogRowSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getScrubIpsList"></a>
# **getScrubIpsList**
> kotlin.Array&lt;ScrubIpsRowSchema&gt; getScrubIpsList()

List Scrub IP Services

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ScrubIpsApi()
try {
    val result : kotlin.Array<ScrubIpsRowSchema> = apiInstance.getScrubIpsList()
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

[**kotlin.Array&lt;ScrubIpsRowSchema&gt;**](ScrubIpsRowSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="placeScrubOrder"></a>
# **placeScrubOrder**
> InlineResponse2012 placeScrubOrder(body)

Place Scrub IP Order

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ScrubIpsApi()
val body : ScrubIpPlaceOrder =  // ScrubIpPlaceOrder | 
try {
    val result : InlineResponse2012 = apiInstance.placeScrubOrder(body)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ScrubIpPlaceOrder**](ScrubIpPlaceOrder.md)|  |

### Return type

[**InlineResponse2012**](InlineResponse2012.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="scrubIpsDeleteGeoRule"></a>
# **scrubIpsDeleteGeoRule**
> InlineResponse20016 scrubIpsDeleteGeoRule(body, id)

Delete Geo Firewall Rule

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ScrubIpsApi()
val body : Delete_Geo_Firewall_Rule =  // Delete_Geo_Firewall_Rule | 
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
try {
    val result : InlineResponse20016 = apiInstance.scrubIpsDeleteGeoRule(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**Delete_Geo_Firewall_Rule**](Delete_Geo_Firewall_Rule.md)|  |
 **id** | **kotlin.Int**| ScrubIp ID number |

### Return type

[**InlineResponse20016**](InlineResponse20016.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="scrubIpsDeleteRule"></a>
# **scrubIpsDeleteRule**
> InlineResponse20016 scrubIpsDeleteRule(body, id)

Delete Firewall Rule

Removes an existing firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ScrubIpsApi()
val body : Delete_Firewall_Rule =  // Delete_Firewall_Rule | 
val id : kotlin.Int = 56 // kotlin.Int | ScrubIp ID number
try {
    val result : InlineResponse20016 = apiInstance.scrubIpsDeleteRule(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**Delete_Firewall_Rule**](Delete_Firewall_Rule.md)|  |
 **id** | **kotlin.Int**| ScrubIp ID number |

### Return type

[**InlineResponse20016**](InlineResponse20016.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

