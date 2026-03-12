# ServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addServer**](ServersApi.md#addServer) | **POST** /servers/order | Place Server Order
[**buyItNowServerOrder**](ServersApi.md#buyItNowServerOrder) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options
[**getMPServers**](ServersApi.md#getMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers
[**getNewServer**](ServersApi.md#getNewServer) | **GET** /servers/order | Server Ordering Information
[**getServerInfo**](ServersApi.md#getServerInfo) | **GET** /servers/{id} | Get Server Order
[**getServerInvoices**](ServersApi.md#getServerInvoices) | **GET** /servers/{id}/invoices | Get Server Invoices
[**getServerList**](ServersApi.md#getServerList) | **GET** /servers | List Servers
[**getServerReverseDns**](ServersApi.md#getServerReverseDns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info
[**getServersWelcomeEmail**](ServersApi.md#getServersWelcomeEmail) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email
[**placeBuyNowServer**](ServersApi.md#placeBuyNowServer) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order
[**postServerReverseDns**](ServersApi.md#postServerReverseDns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS
[**putServers**](ServersApi.md#putServers) | **PUT** /servers/order | Validate Server Order
[**serverIpmiLiveGet**](ServersApi.md#serverIpmiLiveGet) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information
[**serverIpmiLivePost**](ServersApi.md#serverIpmiLivePost) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup
[**serverIpmiPowerGet**](ServersApi.md#serverIpmiPowerGet) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status
[**serverIpmiPowerPost**](ServersApi.md#serverIpmiPowerPost) | **POST** /servers/{id}/ipmi_power | Server IPMI Power
[**serversCancel**](ServersApi.md#serversCancel) | **DELETE** /servers/{id} | Cancel Server Service
[**updateServerInfo**](ServersApi.md#updateServerInfo) | **POST** /servers/{id} | Update Server Order

<a name="addServer"></a>
# **addServer**
> addServer()

Place Server Order

Places an order for a new dedicated server. Use &#x60;PUT /servers/order&#x60; to validate the order first.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
try {
    apiInstance.addServer()
} catch (e: ClientException) {
    println("4xx response calling ServersApi#addServer")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#addServer")
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

<a name="buyItNowServerOrder"></a>
# **buyItNowServerOrder**
> InlineResponse20026 buyItNowServerOrder()

Get Buy Now Server Options

Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via &#x60;POST /servers/order/buy_now_server&#x60;.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
try {
    val result : InlineResponse20026 = apiInstance.buyItNowServerOrder()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#buyItNowServerOrder")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#buyItNowServerOrder")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse20026**](InlineResponse20026.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getMPServers"></a>
# **getMPServers**
> BuyItNowList getMPServers()

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
try {
    val result : BuyItNowList = apiInstance.getMPServers()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#getMPServers")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#getMPServers")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BuyItNowList**](BuyItNowList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getNewServer"></a>
# **getNewServer**
> ServerOrder getNewServer()

Server Ordering Information

Retrieves available server configurations and pricing for ordering a new dedicated server.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
try {
    val result : ServerOrder = apiInstance.getNewServer()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#getNewServer")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#getNewServer")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServerOrder**](ServerOrder.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getServerInfo"></a>
# **getServerInfo**
> Server getServerInfo(id)

Get Server Order

Returns detailed information about a specific server including its hardware configuration, IPs, and status.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
val id : kotlin.Int = 56 // kotlin.Int | Server ID number.
try {
    val result : Server = apiInstance.getServerInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#getServerInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#getServerInfo")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| Server ID number. |

### Return type

[**Server**](Server.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getServerInvoices"></a>
# **getServerInvoices**
> ChargeInvoiceRows getServerInvoices(id)

Get Server Invoices

Returns the billing invoices associated with this dedicated server.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
val id : kotlin.Int = 56 // kotlin.Int | Server ID number
try {
    val result : ChargeInvoiceRows = apiInstance.getServerInvoices(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#getServerInvoices")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#getServerInvoices")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| Server ID number |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getServerList"></a>
# **getServerList**
> kotlin.Array&lt;ServerRow&gt; getServerList()

List Servers

Returns all dedicated server services on the account with their current status and configuration.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
try {
    val result : kotlin.Array<ServerRow> = apiInstance.getServerList()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#getServerList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#getServerList")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.Array&lt;ServerRow&gt;**](ServerRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getServerReverseDns"></a>
# **getServerReverseDns**
> ReverseDnsEntries getServerReverseDns(id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the server&#x27;s IP addresses.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
val id : kotlin.Int = 56 // kotlin.Int | Server ID number
try {
    val result : ReverseDnsEntries = apiInstance.getServerReverseDns(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#getServerReverseDns")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#getServerReverseDns")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| Server ID number |

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getServersWelcomeEmail"></a>
# **getServersWelcomeEmail**
> SuccessTextResponse getServersWelcomeEmail(id)

Resend Server Welcome Email

Resends the welcome email for the order.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
val id : kotlin.Int = 56 // kotlin.Int | Server ID number
try {
    val result : SuccessTextResponse = apiInstance.getServersWelcomeEmail(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#getServersWelcomeEmail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#getServersWelcomeEmail")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| Server ID number |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="placeBuyNowServer"></a>
# **placeBuyNowServer**
> ServersBuyNowResponse placeBuyNowServer(body)

Place Buy Now Server Order

Places an order for a buy-it-now dedicated server. Use &#x60;GET /servers/order/buy_now_server&#x60; to retrieve available server configurations and their IDs before ordering.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
val body : OrderBuyNowServerBody =  // OrderBuyNowServerBody | 
try {
    val result : ServersBuyNowResponse = apiInstance.placeBuyNowServer(body)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#placeBuyNowServer")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#placeBuyNowServer")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OrderBuyNowServerBody**](OrderBuyNowServerBody.md)|  | [optional]

### Return type

[**ServersBuyNowResponse**](ServersBuyNowResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="postServerReverseDns"></a>
# **postServerReverseDns**
> TextResponse postServerReverseDns(body, id)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the server&#x27;s IP addresses.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
val body : ReverseDnsEntries =  // ReverseDnsEntries | 
val id : kotlin.Int = 56 // kotlin.Int | Server ID number
try {
    val result : TextResponse = apiInstance.postServerReverseDns(body, id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#postServerReverseDns")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#postServerReverseDns")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  |
 **id** | **kotlin.Int**| Server ID number |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postServerReverseDns"></a>
# **postServerReverseDns**
> TextResponse postServerReverseDns(ips, id)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the server&#x27;s IP addresses.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
val ips : kotlin.collections.Map<kotlin.String, kotlin.Any> =  // kotlin.collections.Map<kotlin.String, kotlin.Any> | 
val id : kotlin.Int = 56 // kotlin.Int | Server ID number
try {
    val result : TextResponse = apiInstance.postServerReverseDns(ips, id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#postServerReverseDns")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#postServerReverseDns")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ips** | [**kotlin.collections.Map&lt;kotlin.String, kotlin.Any&gt;**](kotlin.Any.md)|  |
 **id** | **kotlin.Int**| Server ID number |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="putServers"></a>
# **putServers**
> putServers()

Validate Server Order

Validates a server order before placing it. Use this to check for errors before committing to a purchase.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
try {
    apiInstance.putServers()
} catch (e: ClientException) {
    println("4xx response calling ServersApi#putServers")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#putServers")
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

<a name="serverIpmiLiveGet"></a>
# **serverIpmiLiveGet**
> ServerIpmiLiveInfo serverIpmiLiveGet(id)

Server IPMI Live Information

Returns the current IPMI live connection information for the server.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
val id : kotlin.Int = 56 // kotlin.Int | Server ID number
try {
    val result : ServerIpmiLiveInfo = apiInstance.serverIpmiLiveGet(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#serverIpmiLiveGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#serverIpmiLiveGet")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| Server ID number |

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="serverIpmiLivePost"></a>
# **serverIpmiLivePost**
> ServerIpmiLiveInfo serverIpmiLivePost(asset, ip, id)

Server IPMI Live Setup

Configures IPMI live access by whitelisting your current IP address for connections to the server&#x27;s IPMI management interface.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
val asset : kotlin.Int = 56 // kotlin.Int | 
val ip : kotlin.String = ip_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | Server ID number
try {
    val result : ServerIpmiLiveInfo = apiInstance.serverIpmiLivePost(asset, ip, id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#serverIpmiLivePost")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#serverIpmiLivePost")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **asset** | **kotlin.Int**|  |
 **ip** | **kotlin.String**|  |
 **id** | **kotlin.Int**| Server ID number |

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="serverIpmiLivePost"></a>
# **serverIpmiLivePost**
> ServerIpmiLiveInfo serverIpmiLivePost(body, id)

Server IPMI Live Setup

Configures IPMI live access by whitelisting your current IP address for connections to the server&#x27;s IPMI management interface.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
val body : ServerIpmiLiveRequest =  // ServerIpmiLiveRequest | 
val id : kotlin.Int = 56 // kotlin.Int | Server ID number
try {
    val result : ServerIpmiLiveInfo = apiInstance.serverIpmiLivePost(body, id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#serverIpmiLivePost")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#serverIpmiLivePost")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ServerIpmiLiveRequest**](ServerIpmiLiveRequest.md)|  |
 **id** | **kotlin.Int**| Server ID number |

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="serverIpmiPowerGet"></a>
# **serverIpmiPowerGet**
> TextResponse serverIpmiPowerGet(id)

Get IPMI Power Status

Returns the chassis power status from ipmi.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
val id : kotlin.Int = 56 // kotlin.Int | Server ID number
try {
    val result : TextResponse = apiInstance.serverIpmiPowerGet(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#serverIpmiPowerGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#serverIpmiPowerGet")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| Server ID number |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="serverIpmiPowerPost"></a>
# **serverIpmiPowerPost**
> TextResponse serverIpmiPowerPost(asset, action, id)

Server IPMI Power

Uses the IPMI interface to set the Power status on the server.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
val asset : kotlin.Int = 56 // kotlin.Int | 
val action : kotlin.String = action_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | Server ID number
try {
    val result : TextResponse = apiInstance.serverIpmiPowerPost(asset, action, id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#serverIpmiPowerPost")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#serverIpmiPowerPost")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **asset** | **kotlin.Int**|  |
 **action** | **kotlin.String**|  | [enum: cycle, reset, on, off, soft]
 **id** | **kotlin.Int**| Server ID number |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="serverIpmiPowerPost"></a>
# **serverIpmiPowerPost**
> TextResponse serverIpmiPowerPost(body, id)

Server IPMI Power

Uses the IPMI interface to set the Power status on the server.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
val body : ServerIpmiPowerRequest =  // ServerIpmiPowerRequest | 
val id : kotlin.Int = 56 // kotlin.Int | Server ID number
try {
    val result : TextResponse = apiInstance.serverIpmiPowerPost(body, id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#serverIpmiPowerPost")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#serverIpmiPowerPost")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ServerIpmiPowerRequest**](ServerIpmiPowerRequest.md)|  |
 **id** | **kotlin.Int**| Server ID number |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="serversCancel"></a>
# **serversCancel**
> InlineResponse20019 serversCancel(id)

Cancel Server Service

Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
val id : kotlin.Int = 56 // kotlin.Int | Server ID number
try {
    val result : InlineResponse20019 = apiInstance.serversCancel(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#serversCancel")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#serversCancel")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| Server ID number |

### Return type

[**InlineResponse20019**](InlineResponse20019.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="updateServerInfo"></a>
# **updateServerInfo**
> updateServerInfo(id)

Update Server Order

Updates settings on a dedicated server order.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = ServersApi()
val id : kotlin.String = id_example // kotlin.String | Server ID number.
try {
    apiInstance.updateServerInfo(id)
} catch (e: ClientException) {
    println("4xx response calling ServersApi#updateServerInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ServersApi#updateServerInfo")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.String**| Server ID number. |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

