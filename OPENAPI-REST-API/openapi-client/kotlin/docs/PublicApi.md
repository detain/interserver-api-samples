# PublicApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**getCaptcha**](PublicApi.md#getCaptcha) | **GET** /captcha | Get Captcha Challenge |
| [**getCountries**](PublicApi.md#getCountries) | **GET** /account/countries | Get Countries |
| [**getInfo**](PublicApi.md#getInfo) | **GET** /info | Get Server Info |
| [**getLoginInfo**](PublicApi.md#getLoginInfo) | **GET** /login | Get Login Info |
| [**getMPServers**](PublicApi.md#getMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers |
| [**getOauthRedirect**](PublicApi.md#getOauthRedirect) | **GET** /oauth | Get OAuth Redirect URL |
| [**getTimezones**](PublicApi.md#getTimezones) | **GET** /account/timezones | Get Available Timezones |
| [**patchOauthTwoFactor**](PublicApi.md#patchOauthTwoFactor) | **PATCH** /oauth | Complete OAuth Two-Factor Verification |
| [**pingServer**](PublicApi.md#pingServer) | **GET** /ping | Ping Server |
| [**postOauthCallback**](PublicApi.md#postOauthCallback) | **POST** /oauth | OAuth Callback |
| [**submitLogin**](PublicApi.md#submitLogin) | **POST** /login | Submit Login Information |
| [**submitSignup**](PublicApi.md#submitSignup) | **POST** /signup | Submit Signup Information |


<a id="getCaptcha"></a>
# **getCaptcha**
> CaptchaResponse getCaptcha()

Get Captcha Challenge

Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = PublicApi()
try {
    val result : CaptchaResponse = apiInstance.getCaptcha()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PublicApi#getCaptcha")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PublicApi#getCaptcha")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**CaptchaResponse**](CaptchaResponse.md)

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

<a id="getCountries"></a>
# **getCountries**
> kotlin.Any getCountries(fetchBy)

Get Countries

Returns a map of country codes to country names. Use the optional &#x60;fetch_by&#x60; parameter to select the key format: &#x60;iso2&#x60; (default, two-letter codes), &#x60;iso3&#x60; (three-letter codes), or &#x60;numcode&#x60; (numeric codes). Use these values when populating country fields in account registration or domain contact forms.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = PublicApi()
val fetchBy : kotlin.String = fetchBy_example // kotlin.String | Get countries by iso2 or iso3 or numcode
try {
    val result : kotlin.Any = apiInstance.getCountries(fetchBy)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PublicApi#getCountries")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PublicApi#getCountries")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **fetchBy** | **kotlin.String**| Get countries by iso2 or iso3 or numcode | [optional] [enum: iso2, iso3, numcode] |

### Return type

[**kotlin.Any**](kotlin.Any.md)

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

<a id="getInfo"></a>
# **getInfo**
> ServicesInfo getInfo()

Get Server Info

Returns metadata about the API server&#39;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = PublicApi()
try {
    val result : ServicesInfo = apiInstance.getInfo()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PublicApi#getInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PublicApi#getInfo")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServicesInfo**](ServicesInfo.md)

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

<a id="getLoginInfo"></a>
# **getLoginInfo**
> LoginInfo getLoginInfo()

Get Login Info

Gets the various pieces of information useful for generating a login page.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = PublicApi()
try {
    val result : LoginInfo = apiInstance.getLoginInfo()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PublicApi#getLoginInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PublicApi#getLoginInfo")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**LoginInfo**](LoginInfo.md)

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

<a id="getMPServers"></a>
# **getMPServers**
> BuyItNowList getMPServers()

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = PublicApi()
try {
    val result : BuyItNowList = apiInstance.getMPServers()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PublicApi#getMPServers")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PublicApi#getMPServers")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BuyItNowList**](BuyItNowList.md)

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

<a id="getOauthRedirect"></a>
# **getOauthRedirect**
> GetOauthRedirect200Response getOauthRedirect(provider)

Get OAuth Redirect URL

Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call &#x60;POST /oauth&#x60;.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = PublicApi()
val provider : kotlin.String = provider_example // kotlin.String | The OAuth provider name (e.g. `Google`).
try {
    val result : GetOauthRedirect200Response = apiInstance.getOauthRedirect(provider)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PublicApi#getOauthRedirect")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PublicApi#getOauthRedirect")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **provider** | **kotlin.String**| The OAuth provider name (e.g. &#x60;Google&#x60;). | |

### Return type

[**GetOauthRedirect200Response**](GetOauthRedirect200Response.md)

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

<a id="getTimezones"></a>
# **getTimezones**
> kotlin.collections.List&lt;kotlin.String&gt; getTimezones()

Get Available Timezones

Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = PublicApi()
try {
    val result : kotlin.collections.List<kotlin.String> = apiInstance.getTimezones()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PublicApi#getTimezones")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PublicApi#getTimezones")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**kotlin.collections.List&lt;kotlin.String&gt;**

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

<a id="patchOauthTwoFactor"></a>
# **patchOauthTwoFactor**
> PatchOauthTwoFactor200Response patchOauthTwoFactor(patchOauthTwoFactorRequest)

Complete OAuth Two-Factor Verification

Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = PublicApi()
val patchOauthTwoFactorRequest : PatchOauthTwoFactorRequest =  // PatchOauthTwoFactorRequest | 
try {
    val result : PatchOauthTwoFactor200Response = apiInstance.patchOauthTwoFactor(patchOauthTwoFactorRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PublicApi#patchOauthTwoFactor")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PublicApi#patchOauthTwoFactor")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **patchOauthTwoFactorRequest** | [**PatchOauthTwoFactorRequest**](PatchOauthTwoFactorRequest.md)|  | |

### Return type

[**PatchOauthTwoFactor200Response**](PatchOauthTwoFactor200Response.md)

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

<a id="pingServer"></a>
# **pingServer**
> kotlin.String pingServer()

Ping Server

Performs a single ping/pong request to let you know if the server is up.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = PublicApi()
try {
    val result : kotlin.String = apiInstance.pingServer()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PublicApi#pingServer")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PublicApi#pingServer")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**kotlin.String**

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

<a id="postOauthCallback"></a>
# **postOauthCallback**
> PostOauthCallback200Response postOauthCallback(provider, postOauthCallbackRequest)

OAuth Callback

Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = PublicApi()
val provider : kotlin.String = provider_example // kotlin.String | The OAuth provider name (e.g. `Google`).
val postOauthCallbackRequest : PostOauthCallbackRequest =  // PostOauthCallbackRequest | 
try {
    val result : PostOauthCallback200Response = apiInstance.postOauthCallback(provider, postOauthCallbackRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PublicApi#postOauthCallback")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PublicApi#postOauthCallback")
    e.printStackTrace()
}
```

### Parameters
| **provider** | **kotlin.String**| The OAuth provider name (e.g. &#x60;Google&#x60;). | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **postOauthCallbackRequest** | [**PostOauthCallbackRequest**](PostOauthCallbackRequest.md)|  | [optional] |

### Return type

[**PostOauthCallback200Response**](PostOauthCallback200Response.md)

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

<a id="submitLogin"></a>
# **submitLogin**
> LoginSuccessResponse submitLogin(login, passwd, remember, gRecaptchaResponse, tfa)

Submit Login Information

Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = PublicApi()
val login : kotlin.String = login_example // kotlin.String | 
val passwd : kotlin.String = passwd_example // kotlin.String | 
val remember : kotlin.String = remember_example // kotlin.String | 
val gRecaptchaResponse : LoginSubmissionExampleGRecaptchaResponse =  // LoginSubmissionExampleGRecaptchaResponse | 
val tfa : kotlin.String = tfa_example // kotlin.String | Two Factor Authentication Response.
try {
    val result : LoginSuccessResponse = apiInstance.submitLogin(login, passwd, remember, gRecaptchaResponse, tfa)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PublicApi#submitLogin")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PublicApi#submitLogin")
    e.printStackTrace()
}
```

### Parameters
| **login** | **kotlin.String**|  | |
| **passwd** | **kotlin.String**|  | |
| **remember** | **kotlin.String**|  | [optional] |
| **gRecaptchaResponse** | [**LoginSubmissionExampleGRecaptchaResponse**](LoginSubmissionExampleGRecaptchaResponse.md)|  | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **tfa** | **kotlin.String**| Two Factor Authentication Response. | [optional] |

### Return type

[**LoginSuccessResponse**](LoginSuccessResponse.md)

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

<a id="submitSignup"></a>
# **submitSignup**
> submitSignup(loginSubmissionExample)

Submit Signup Information

Creates a new account in our system using the provided information.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = PublicApi()
val loginSubmissionExample : LoginSubmissionExample = {"login":"user@domain.com","passwd":"mypassword","remember":"true","g-recaptcha-response":{"__v_isShallow":false,"dep":{"w":0,"n":0},"__v_isRef":true,"_rawValue":"zzzzz","_value":"zzzzz"}} // LoginSubmissionExample | 
try {
    apiInstance.submitSignup(loginSubmissionExample)
} catch (e: ClientException) {
    println("4xx response calling PublicApi#submitSignup")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PublicApi#submitSignup")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **loginSubmissionExample** | [**LoginSubmissionExample**](LoginSubmissionExample.md)|  | [optional] |

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

 - **Content-Type**: application/json
 - **Accept**: application/json

