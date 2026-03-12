# SSLCertificatesApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addSsl**](SSLCertificatesApi.md#addSsl) | **POST** /ssl/order | Place SSL Cert Order
[**addSslWithHttpInfo**](SSLCertificatesApi.md#addSslWithHttpInfo) | **POST** /ssl/order | Place SSL Cert Order
[**getNewSsl**](SSLCertificatesApi.md#getNewSsl) | **GET** /ssl/order | SSL Cert Ordering Information
[**getNewSslWithHttpInfo**](SSLCertificatesApi.md#getNewSslWithHttpInfo) | **GET** /ssl/order | SSL Cert Ordering Information
[**getSslInfo**](SSLCertificatesApi.md#getSslInfo) | **GET** /ssl/{id} | Get SSL Cert Info
[**getSslInfoWithHttpInfo**](SSLCertificatesApi.md#getSslInfoWithHttpInfo) | **GET** /ssl/{id} | Get SSL Cert Info
[**getSslInvoices**](SSLCertificatesApi.md#getSslInvoices) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices
[**getSslInvoicesWithHttpInfo**](SSLCertificatesApi.md#getSslInvoicesWithHttpInfo) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices
[**getSslList**](SSLCertificatesApi.md#getSslList) | **GET** /ssl | List SSL Certs
[**getSslListWithHttpInfo**](SSLCertificatesApi.md#getSslListWithHttpInfo) | **GET** /ssl | List SSL Certs
[**getSslWelcomeEmail**](SSLCertificatesApi.md#getSslWelcomeEmail) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email
[**getSslWelcomeEmailWithHttpInfo**](SSLCertificatesApi.md#getSslWelcomeEmailWithHttpInfo) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email
[**putSsl**](SSLCertificatesApi.md#putSsl) | **PUT** /ssl/order | Validate SSL Cert Order
[**putSslWithHttpInfo**](SSLCertificatesApi.md#putSslWithHttpInfo) | **PUT** /ssl/order | Validate SSL Cert Order
[**sslCancel**](SSLCertificatesApi.md#sslCancel) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service
[**sslCancelWithHttpInfo**](SSLCertificatesApi.md#sslCancelWithHttpInfo) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service
[**updateSslInfo**](SSLCertificatesApi.md#updateSslInfo) | **POST** /ssl/{id} | Update SSL Cert Order
[**updateSslInfoWithHttpInfo**](SSLCertificatesApi.md#updateSslInfoWithHttpInfo) | **POST** /ssl/{id} | Update SSL Cert Order



## addSsl

> addSsl(): ApiRequest[Unit]

Place SSL Cert Order

Places an order for a new SSL certificate. Use &#x60;PUT /ssl/order&#x60; to validate the order first.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import org.apache.pekko.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = SSLCertificatesApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.addSsl()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling SSLCertificatesApi#addSsl")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling SSLCertificatesApi#addSsl")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |


## getNewSsl

> getNewSsl(): ApiRequest[Unit]

SSL Cert Ordering Information

Retrieves available SSL certificate types and pricing for ordering.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import org.apache.pekko.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = SSLCertificatesApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.getNewSsl()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling SSLCertificatesApi#getNewSsl")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling SSLCertificatesApi#getNewSsl")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |


## getSslInfo

> getSslInfo(getSslInfoRequest): ApiRequest[Unit]

Get SSL Cert Info

Returns detailed information about a specific SSL certificate including its domain and expiration.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import org.apache.pekko.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = SSLCertificatesApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | SSL certificate ID number.
    
    val request = apiInstance.getSslInfo(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling SSLCertificatesApi#getSslInfo")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling SSLCertificatesApi#getSslInfo")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| SSL certificate ID number. |

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |


## getSslInvoices

> getSslInvoices(getSslInvoicesRequest): ApiRequest[ChargeInvoiceRows]

Get SSL Cert Invoices

Returns the billing invoices associated with this SSL certificate.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import org.apache.pekko.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = SSLCertificatesApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | SSL Cert ID number
    
    val request = apiInstance.getSslInvoices(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling SSLCertificatesApi#getSslInvoices")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling SSLCertificatesApi#getSslInvoices")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| SSL Cert ID number |

### Return type

ApiRequest[[**ChargeInvoiceRows**](ChargeInvoiceRows.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get Invoices response |  -  |
| **401** | Unauthorized |  -  |


## getSslList

> getSslList(): ApiRequest[Unit]

List SSL Certs

Returns all SSL certificate services on the account with their current status.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import org.apache.pekko.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = SSLCertificatesApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.getSslList()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling SSLCertificatesApi#getSslList")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling SSLCertificatesApi#getSslList")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;SSL&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |


## getSslWelcomeEmail

> getSslWelcomeEmail(getSslWelcomeEmailRequest): ApiRequest[SuccessTextResponse]

Resend SSL Welcome Email

Resends the welcome email for the order.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import org.apache.pekko.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = SSLCertificatesApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | SSL Cert ID number
    
    val request = apiInstance.getSslWelcomeEmail(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling SSLCertificatesApi#getSslWelcomeEmail")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling SSLCertificatesApi#getSslWelcomeEmail")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| SSL Cert ID number |

### Return type

ApiRequest[[**SuccessTextResponse**](SuccessTextResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |


## putSsl

> putSsl(): ApiRequest[Unit]

Validate SSL Cert Order

Validates an SSL certificate order before placing it.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import org.apache.pekko.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = SSLCertificatesApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.putSsl()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling SSLCertificatesApi#putSsl")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling SSLCertificatesApi#putSsl")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Validate SSL Order response |  -  |
| **401** | Unauthorized |  -  |


## sslCancel

> sslCancel(sslCancelRequest): ApiRequest[SslCancel200Response]

Cancel SSL Certificate Service

Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import org.apache.pekko.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = SSLCertificatesApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | SSL Cert ID number
    
    val request = apiInstance.sslCancel(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling SSLCertificatesApi#sslCancel")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling SSLCertificatesApi#sslCancel")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| SSL Cert ID number |

### Return type

ApiRequest[[**SslCancel200Response**](SslCancel200Response.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | SSL Cancel |  -  |
| **401** | Unauthorized |  -  |


## updateSslInfo

> updateSslInfo(updateSslInfoRequest): ApiRequest[Unit]

Update SSL Cert Order

Updates settings on an SSL certificate order.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import org.apache.pekko.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = SSLCertificatesApi("https://my.interserver.net/apiv2")
    val id: String = id_example // String | SSL certificate ID number.
    
    val request = apiInstance.updateSslInfo(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling SSLCertificatesApi#updateSslInfo")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling SSLCertificatesApi#updateSslInfo")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| SSL certificate ID number. |

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

