# PublicApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getCaptcha**](PublicApi.md#getCaptcha) | **GET** /captcha | Get Captcha Challenge
[**getCaptchaWithHttpInfo**](PublicApi.md#getCaptchaWithHttpInfo) | **GET** /captcha | Get Captcha Challenge
[**getCountries**](PublicApi.md#getCountries) | **GET** /account/countries | Get Countries
[**getCountriesWithHttpInfo**](PublicApi.md#getCountriesWithHttpInfo) | **GET** /account/countries | Get Countries
[**getInfo**](PublicApi.md#getInfo) | **GET** /info | Get Server Info
[**getInfoWithHttpInfo**](PublicApi.md#getInfoWithHttpInfo) | **GET** /info | Get Server Info
[**getLoginInfo**](PublicApi.md#getLoginInfo) | **GET** /login | Get Login Info
[**getLoginInfoWithHttpInfo**](PublicApi.md#getLoginInfoWithHttpInfo) | **GET** /login | Get Login Info
[**getMPServers**](PublicApi.md#getMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers
[**getMPServersWithHttpInfo**](PublicApi.md#getMPServersWithHttpInfo) | **GET** /buy_now_servers_list | List Marketplace Servers
[**getOauthRedirect**](PublicApi.md#getOauthRedirect) | **GET** /oauth | Get OAuth Redirect URL
[**getOauthRedirectWithHttpInfo**](PublicApi.md#getOauthRedirectWithHttpInfo) | **GET** /oauth | Get OAuth Redirect URL
[**getTimezones**](PublicApi.md#getTimezones) | **GET** /account/timezones | Get Available Timezones
[**getTimezonesWithHttpInfo**](PublicApi.md#getTimezonesWithHttpInfo) | **GET** /account/timezones | Get Available Timezones
[**patchOauthTwoFactor**](PublicApi.md#patchOauthTwoFactor) | **PATCH** /oauth | Complete OAuth Two-Factor Verification
[**patchOauthTwoFactorWithHttpInfo**](PublicApi.md#patchOauthTwoFactorWithHttpInfo) | **PATCH** /oauth | Complete OAuth Two-Factor Verification
[**pingServer**](PublicApi.md#pingServer) | **GET** /ping | Ping Server
[**pingServerWithHttpInfo**](PublicApi.md#pingServerWithHttpInfo) | **GET** /ping | Ping Server
[**postOauthCallback**](PublicApi.md#postOauthCallback) | **POST** /oauth | OAuth Callback
[**postOauthCallbackWithHttpInfo**](PublicApi.md#postOauthCallbackWithHttpInfo) | **POST** /oauth | OAuth Callback
[**submitLogin**](PublicApi.md#submitLogin) | **POST** /login | Submit Login Information
[**submitLoginWithHttpInfo**](PublicApi.md#submitLoginWithHttpInfo) | **POST** /login | Submit Login Information
[**submitSignup**](PublicApi.md#submitSignup) | **POST** /signup | Submit Signup Information
[**submitSignupWithHttpInfo**](PublicApi.md#submitSignupWithHttpInfo) | **POST** /signup | Submit Signup Information



## getCaptcha

> getCaptcha(): ApiRequest[CaptchaResponse]

Get Captcha Challenge

Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.

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
    val apiInstance = PublicApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.getCaptcha()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling PublicApi#getCaptcha")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling PublicApi#getCaptcha")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

ApiRequest[[**CaptchaResponse**](CaptchaResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | An array containing a &#x60;captcha&#x60; field containing a string with a base64 encoded captcha image. |  -  |
| **401** | Unauthorized |  -  |


## getCountries

> getCountries(getCountriesRequest): ApiRequest[Any]

Get Countries

Returns a map of country codes to country names. Use the optional &#x60;fetch_by&#x60; parameter to select the key format: &#x60;iso2&#x60; (default, two-letter codes), &#x60;iso3&#x60; (three-letter codes), or &#x60;numcode&#x60; (numeric codes). Use these values when populating country fields in account registration or domain contact forms.

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
    val apiInstance = PublicApi("https://my.interserver.net/apiv2")
    val fetchBy: String = fetchBy_example // String | Get countries by iso2 or iso3 or numcode
    
    val request = apiInstance.getCountries(fetchBy)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling PublicApi#getCountries")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling PublicApi#getCountries")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fetchBy** | **String**| Get countries by iso2 or iso3 or numcode | [optional] [enum: iso2, iso3, numcode]

### Return type

ApiRequest[**Any**]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The list of countries with both 2 letter abbreviations and the country names. |  -  |
| **401** | Unauthorized |  -  |


## getInfo

> getInfo(): ApiRequest[ServicesInfo]

Get Server Info

Returns metadata about the API server&#39;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.

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
    val apiInstance = PublicApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.getInfo()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling PublicApi#getInfo")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling PublicApi#getInfo")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

ApiRequest[[**ServicesInfo**](ServicesInfo.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The modules and services information from the server. |  -  |
| **401** | Unauthorized |  -  |


## getLoginInfo

> getLoginInfo(): ApiRequest[LoginInfo]

Get Login Info

Gets the various pieces of information useful for generating a login page.

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
    val apiInstance = PublicApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.getLoginInfo()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling PublicApi#getLoginInfo")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling PublicApi#getLoginInfo")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

ApiRequest[[**LoginInfo**](LoginInfo.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Various pieces of information useful for rendering a login page. |  -  |
| **403** | Error response to a login request. |  -  |


## getMPServers

> getMPServers(): ApiRequest[BuyItNowList]

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

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
    val apiInstance = PublicApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.getMPServers()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling PublicApi#getMPServers")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling PublicApi#getMPServers")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

ApiRequest[[**BuyItNowList**](BuyItNowList.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Marketplace Buy it now servers list |  -  |
| **401** | Unauthorized |  -  |


## getOauthRedirect

> getOauthRedirect(getOauthRedirectRequest): ApiRequest[GetOauthRedirect200Response]

Get OAuth Redirect URL

Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call &#x60;POST /oauth&#x60;.

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
    val apiInstance = PublicApi("https://my.interserver.net/apiv2")
    val provider: String = provider_example // String | The OAuth provider name (e.g. `Google`).
    
    val request = apiInstance.getOauthRedirect(provider)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling PublicApi#getOauthRedirect")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling PublicApi#getOauthRedirect")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **String**| The OAuth provider name (e.g. &#x60;Google&#x60;). |

### Return type

ApiRequest[[**GetOauthRedirect200Response**](GetOauthRedirect200Response.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | OAuth redirect URL for the requested provider. |  -  |
| **401** | Unauthorized |  -  |


## getTimezones

> getTimezones(): ApiRequest[Seq[String]]

Get Available Timezones

Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;.

### Example

```scala
// Import classes:
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
    val apiInstance = PublicApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.getTimezones()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling PublicApi#getTimezones")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling PublicApi#getTimezones")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

ApiRequest[**Seq[String]**]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | An array of all available timezone identifiers. |  -  |


## patchOauthTwoFactor

> patchOauthTwoFactor(patchOauthTwoFactorRequest): ApiRequest[PatchOauthTwoFactor200Response]

Complete OAuth Two-Factor Verification

Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.

### Example

```scala
// Import classes:
import 
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
    val apiInstance = PublicApi("https://my.interserver.net/apiv2")
    val patchOauthTwoFactorRequest: PatchOauthTwoFactorRequest =  // PatchOauthTwoFactorRequest | 
    
    val request = apiInstance.patchOauthTwoFactor(patchOauthTwoFactorRequest)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling PublicApi#patchOauthTwoFactor")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling PublicApi#patchOauthTwoFactor")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **patchOauthTwoFactorRequest** | [**PatchOauthTwoFactorRequest**](PatchOauthTwoFactorRequest.md)|  |

### Return type

ApiRequest[[**PatchOauthTwoFactor200Response**](PatchOauthTwoFactor200Response.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | OAuth 2FA verification result. |  -  |
| **401** | Unauthorized |  -  |


## pingServer

> pingServer(): ApiRequest[String]

Ping Server

Performs a single ping/pong request to let you know if the server is up.

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
    val apiInstance = PublicApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.pingServer()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling PublicApi#pingServer")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling PublicApi#pingServer")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

ApiRequest[**String**]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A simple response of \&quot;pong\&quot; for use with simple tests to see if a service is up.  |  -  |
| **401** | Unauthorized |  -  |
| **0** | Something is wrong |  -  |


## postOauthCallback

> postOauthCallback(postOauthCallbackRequest): ApiRequest[PostOauthCallback200Response]

OAuth Callback

Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.

### Example

```scala
// Import classes:
import 
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
    val apiInstance = PublicApi("https://my.interserver.net/apiv2")
    val provider: String = provider_example // String | The OAuth provider name (e.g. `Google`).

    val postOauthCallbackRequest: PostOauthCallbackRequest =  // PostOauthCallbackRequest | 
    
    val request = apiInstance.postOauthCallback(provider, postOauthCallbackRequest)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling PublicApi#postOauthCallback")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling PublicApi#postOauthCallback")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **String**| The OAuth provider name (e.g. &#x60;Google&#x60;). |
 **postOauthCallbackRequest** | [**PostOauthCallbackRequest**](PostOauthCallbackRequest.md)|  | [optional]

### Return type

ApiRequest[[**PostOauthCallback200Response**](PostOauthCallback200Response.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | OAuth callback result. |  -  |
| **401** | Unauthorized |  -  |


## submitLogin

> submitLogin(submitLoginRequest): ApiRequest[LoginSuccessResponse]

Submit Login Information

Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.

### Example

```scala
// Import classes:
import 
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
    val apiInstance = PublicApi("https://my.interserver.net/apiv2")
    val login: String = login_example // String | 

    val passwd: String = passwd_example // String | 

    val remember: String = remember_example // String | 

    val gRecaptchaResponse: LoginSubmissionExampleGRecaptchaResponse =  // LoginSubmissionExampleGRecaptchaResponse | 

    val tfa: String = tfa_example // String | Two Factor Authentication Response.
    
    val request = apiInstance.submitLogin(login, passwd, remember, gRecaptchaResponse, tfa)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling PublicApi#submitLogin")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling PublicApi#submitLogin")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **login** | **String**|  |
 **passwd** | **String**|  |
 **remember** | **String**|  | [optional]
 **gRecaptchaResponse** | [**LoginSubmissionExampleGRecaptchaResponse**](LoginSubmissionExampleGRecaptchaResponse.md)|  | [optional]
 **tfa** | **String**| Two Factor Authentication Response. | [optional]

### Return type

ApiRequest[[**LoginSuccessResponse**](LoginSuccessResponse.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Successful login response containing the session token. |  -  |
| **402** | Error response to a login request. |  -  |
| **0** | Default response |  -  |


## submitSignup

> submitSignup(submitSignupRequest): ApiRequest[Unit]

Submit Signup Information

Creates a new account in our system using the provided information.

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
    val apiInstance = PublicApi("https://my.interserver.net/apiv2")
    val loginSubmissionExample: LoginSubmissionExample = {"login":"user@domain.com","passwd":"mypassword","remember":"true","g-recaptcha-response":{"__v_isShallow":false,"dep":{"w":0,"n":0},"__v_isRef":true,"_rawValue":"zzzzz","_value":"zzzzz"}} // LoginSubmissionExample | 
    
    val request = apiInstance.submitSignup(loginSubmissionExample)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling PublicApi#submitSignup")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling PublicApi#submitSignup")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **loginSubmissionExample** | [**LoginSubmissionExample**](LoginSubmissionExample.md)|  | [optional]

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Account created successfully. |  -  |
| **402** | Error response to a login request. |  -  |

