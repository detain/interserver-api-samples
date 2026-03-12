# FloatingIPsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addFloatingIp**](FloatingIPsApi.md#addFloatingIp) | **POST** /floating_ips/order | Place Floating IP Order
[**floatingIpsCancel**](FloatingIPsApi.md#floatingIpsCancel) | **DELETE** /floating_ips/{id} | Cancel Floating IP
[**getFloatingIpInfo**](FloatingIPsApi.md#getFloatingIpInfo) | **GET** /floating_ips/{id} | View Floating IP
[**getFloatingIpInvoices**](FloatingIPsApi.md#getFloatingIpInvoices) | **GET** /floating_ips/{id}/invoices | Get Floating IP Invoices
[**getFloatingIpsList**](FloatingIPsApi.md#getFloatingIpsList) | **GET** /floating_ips | List Floating IPs
[**getFloatingIpsWelcomeEmail**](FloatingIPsApi.md#getFloatingIpsWelcomeEmail) | **GET** /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email
[**getNewFloatingIp**](FloatingIPsApi.md#getNewFloatingIp) | **GET** /floating_ips/order | Get Floating IP Ordering Information
[**postFloatingIpsChangeIp**](FloatingIPsApi.md#postFloatingIpsChangeIp) | **POST** /floating_ips/{id}/change_ip | Change Floating IP Target
[**putFloatingIps**](FloatingIPsApi.md#putFloatingIps) | **PUT** /floating_ips/order | Validate Floating IP Order
[**updateFloatingIpInfo**](FloatingIPsApi.md#updateFloatingIpInfo) | **POST** /floating_ips/{id} | Update Floating IP

<a name="addFloatingIp"></a>
# **addFloatingIp**
> addFloatingIp()

Place Floating IP Order

Places an order for a new Floating IP service. Use &#x60;PUT /floating_ips/order&#x60; to validate the order first.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = FloatingIPsApi()
try {
    apiInstance.addFloatingIp()
} catch (e: ClientException) {
    println("4xx response calling FloatingIPsApi#addFloatingIp")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling FloatingIPsApi#addFloatingIp")
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

<a name="floatingIpsCancel"></a>
# **floatingIpsCancel**
> InlineResponse2003 floatingIpsCancel(id)

Cancel Floating IP

Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = FloatingIPsApi()
val id : kotlin.Int = 56 // kotlin.Int | The Floating IP service ID. Use the ID from `GET /floating_ips`.
try {
    val result : InlineResponse2003 = apiInstance.floatingIpsCancel(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling FloatingIPsApi#floatingIpsCancel")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling FloatingIPsApi#floatingIpsCancel")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. |

### Return type

[**InlineResponse2003**](InlineResponse2003.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getFloatingIpInfo"></a>
# **getFloatingIpInfo**
> getFloatingIpInfo(id)

View Floating IP

Returns detailed information about a specific Floating IP service including its current target IP assignment.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = FloatingIPsApi()
val id : kotlin.Int = 56 // kotlin.Int | The Floating IP service ID. Use the ID from `GET /floating_ips`.
try {
    apiInstance.getFloatingIpInfo(id)
} catch (e: ClientException) {
    println("4xx response calling FloatingIPsApi#getFloatingIpInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling FloatingIPsApi#getFloatingIpInfo")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getFloatingIpInvoices"></a>
# **getFloatingIpInvoices**
> ChargeInvoiceRows getFloatingIpInvoices(id)

Get Floating IP Invoices

Returns the billing invoices associated with this Floating IP service.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = FloatingIPsApi()
val id : kotlin.Int = 56 // kotlin.Int | The Floating IP service ID. Use the ID from `GET /floating_ips`.
try {
    val result : ChargeInvoiceRows = apiInstance.getFloatingIpInvoices(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling FloatingIPsApi#getFloatingIpInvoices")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling FloatingIPsApi#getFloatingIpInvoices")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getFloatingIpsList"></a>
# **getFloatingIpsList**
> getFloatingIpsList()

List Floating IPs

Returns all Floating IP services on the account with their current status and assignment details.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = FloatingIPsApi()
try {
    apiInstance.getFloatingIpsList()
} catch (e: ClientException) {
    println("4xx response calling FloatingIPsApi#getFloatingIpsList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling FloatingIPsApi#getFloatingIpsList")
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

<a name="getFloatingIpsWelcomeEmail"></a>
# **getFloatingIpsWelcomeEmail**
> SuccessTextResponse getFloatingIpsWelcomeEmail(id)

Resend Floating IPs Welcome Email

Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = FloatingIPsApi()
val id : kotlin.Int = 56 // kotlin.Int | The Floating IP service ID. Use the ID from `GET /floating_ips`.
try {
    val result : SuccessTextResponse = apiInstance.getFloatingIpsWelcomeEmail(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling FloatingIPsApi#getFloatingIpsWelcomeEmail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling FloatingIPsApi#getFloatingIpsWelcomeEmail")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getNewFloatingIp"></a>
# **getNewFloatingIp**
> getNewFloatingIp()

Get Floating IP Ordering Information

Retrieves available options and pricing for ordering a new Floating IP.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = FloatingIPsApi()
try {
    apiInstance.getNewFloatingIp()
} catch (e: ClientException) {
    println("4xx response calling FloatingIPsApi#getNewFloatingIp")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling FloatingIPsApi#getNewFloatingIp")
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

<a name="postFloatingIpsChangeIp"></a>
# **postFloatingIpsChangeIp**
> SuccessTextResponse postFloatingIpsChangeIp(ip, id)

Change Floating IP Target

Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = FloatingIPsApi()
val ip : kotlin.String = ip_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | The Floating IP service ID. Use the ID from `GET /floating_ips`.
try {
    val result : SuccessTextResponse = apiInstance.postFloatingIpsChangeIp(ip, id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling FloatingIPsApi#postFloatingIpsChangeIp")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling FloatingIPsApi#postFloatingIpsChangeIp")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ip** | **kotlin.String**|  |
 **id** | **kotlin.Int**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postFloatingIpsChangeIp"></a>
# **postFloatingIpsChangeIp**
> SuccessTextResponse postFloatingIpsChangeIp(body, id)

Change Floating IP Target

Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = FloatingIPsApi()
val body : IpObject =  // IpObject | 
val id : kotlin.Int = 56 // kotlin.Int | The Floating IP service ID. Use the ID from `GET /floating_ips`.
try {
    val result : SuccessTextResponse = apiInstance.postFloatingIpsChangeIp(body, id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling FloatingIPsApi#postFloatingIpsChangeIp")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling FloatingIPsApi#postFloatingIpsChangeIp")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IpObject**](IpObject.md)|  |
 **id** | **kotlin.Int**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="putFloatingIps"></a>
# **putFloatingIps**
> putFloatingIps()

Validate Floating IP Order

Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = FloatingIPsApi()
try {
    apiInstance.putFloatingIps()
} catch (e: ClientException) {
    println("4xx response calling FloatingIPsApi#putFloatingIps")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling FloatingIPsApi#putFloatingIps")
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

<a name="updateFloatingIpInfo"></a>
# **updateFloatingIpInfo**
> updateFloatingIpInfo(id)

Update Floating IP

Updates settings on a Floating IP service, such as its label or configuration metadata.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = FloatingIPsApi()
val id : kotlin.String = id_example // kotlin.String | The Floating IP service ID. Use the ID from `GET /floating_ips`.
try {
    apiInstance.updateFloatingIpInfo(id)
} catch (e: ClientException) {
    println("4xx response calling FloatingIPsApi#updateFloatingIpInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling FloatingIPsApi#updateFloatingIpInfo")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.String**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

