# SSLCertificatesApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addSsl**](SSLCertificatesApi.md#addSsl) | **POST** /ssl/order | Place SSL Cert Order
[**getNewSsl**](SSLCertificatesApi.md#getNewSsl) | **GET** /ssl/order | SSL Cert Ordering Information
[**getSslInfo**](SSLCertificatesApi.md#getSslInfo) | **GET** /ssl/{id} | Get SSL Cert Info
[**getSslInvoices**](SSLCertificatesApi.md#getSslInvoices) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices
[**getSslList**](SSLCertificatesApi.md#getSslList) | **GET** /ssl | List SSL Certs
[**getSslWelcomeEmail**](SSLCertificatesApi.md#getSslWelcomeEmail) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email
[**putSsl**](SSLCertificatesApi.md#putSsl) | **PUT** /ssl/order | Validate SSL Cert Order
[**sslCancel**](SSLCertificatesApi.md#sslCancel) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service
[**updateSslInfo**](SSLCertificatesApi.md#updateSslInfo) | **POST** /ssl/{id} | Update SSL Cert Order

<a name="addSsl"></a>
# **addSsl**
> addSsl()

Place SSL Cert Order

Places an order for a new SSL certificate. Use &#x60;PUT /ssl/order&#x60; to validate the order first.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = SSLCertificatesApi()
try {
    apiInstance.addSsl()
} catch (e: ClientException) {
    println("4xx response calling SSLCertificatesApi#addSsl")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SSLCertificatesApi#addSsl")
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

<a name="getNewSsl"></a>
# **getNewSsl**
> getNewSsl()

SSL Cert Ordering Information

Retrieves available SSL certificate types and pricing for ordering.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = SSLCertificatesApi()
try {
    apiInstance.getNewSsl()
} catch (e: ClientException) {
    println("4xx response calling SSLCertificatesApi#getNewSsl")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SSLCertificatesApi#getNewSsl")
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

<a name="getSslInfo"></a>
# **getSslInfo**
> getSslInfo(id)

Get SSL Cert Info

Returns detailed information about a specific SSL certificate including its domain and expiration.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = SSLCertificatesApi()
val id : kotlin.Int = 56 // kotlin.Int | SSL certificate ID number.
try {
    apiInstance.getSslInfo(id)
} catch (e: ClientException) {
    println("4xx response calling SSLCertificatesApi#getSslInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SSLCertificatesApi#getSslInfo")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| SSL certificate ID number. |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getSslInvoices"></a>
# **getSslInvoices**
> ChargeInvoiceRows getSslInvoices(id)

Get SSL Cert Invoices

Returns the billing invoices associated with this SSL certificate.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = SSLCertificatesApi()
val id : kotlin.Int = 56 // kotlin.Int | SSL Cert ID number
try {
    val result : ChargeInvoiceRows = apiInstance.getSslInvoices(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling SSLCertificatesApi#getSslInvoices")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SSLCertificatesApi#getSslInvoices")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| SSL Cert ID number |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getSslList"></a>
# **getSslList**
> getSslList()

List SSL Certs

Returns all SSL certificate services on the account with their current status.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = SSLCertificatesApi()
try {
    apiInstance.getSslList()
} catch (e: ClientException) {
    println("4xx response calling SSLCertificatesApi#getSslList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SSLCertificatesApi#getSslList")
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

<a name="getSslWelcomeEmail"></a>
# **getSslWelcomeEmail**
> SuccessTextResponse getSslWelcomeEmail(id)

Resend SSL Welcome Email

Resends the welcome email for the order.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = SSLCertificatesApi()
val id : kotlin.Int = 56 // kotlin.Int | SSL Cert ID number
try {
    val result : SuccessTextResponse = apiInstance.getSslWelcomeEmail(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling SSLCertificatesApi#getSslWelcomeEmail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SSLCertificatesApi#getSslWelcomeEmail")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| SSL Cert ID number |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="putSsl"></a>
# **putSsl**
> putSsl()

Validate SSL Cert Order

Validates an SSL certificate order before placing it.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = SSLCertificatesApi()
try {
    apiInstance.putSsl()
} catch (e: ClientException) {
    println("4xx response calling SSLCertificatesApi#putSsl")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SSLCertificatesApi#putSsl")
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

<a name="sslCancel"></a>
# **sslCancel**
> InlineResponse20020 sslCancel(id)

Cancel SSL Certificate Service

Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = SSLCertificatesApi()
val id : kotlin.Int = 56 // kotlin.Int | SSL Cert ID number
try {
    val result : InlineResponse20020 = apiInstance.sslCancel(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling SSLCertificatesApi#sslCancel")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SSLCertificatesApi#sslCancel")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| SSL Cert ID number |

### Return type

[**InlineResponse20020**](InlineResponse20020.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="updateSslInfo"></a>
# **updateSslInfo**
> updateSslInfo(id)

Update SSL Cert Order

Updates settings on an SSL certificate order.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = SSLCertificatesApi()
val id : kotlin.String = id_example // kotlin.String | SSL certificate ID number.
try {
    apiInstance.updateSslInfo(id)
} catch (e: ClientException) {
    println("4xx response calling SSLCertificatesApi#updateSslInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SSLCertificatesApi#updateSslInfo")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.String**| SSL certificate ID number. |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

