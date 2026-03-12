# PublicApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
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


## Creating PublicApi

To initiate an instance of `PublicApi`, you can use micronaut's `ApplicationContext`:
```java
/* imports
import io.micronaut.runtime.Micronaut;
import io.micronaut.context.ApplicationContext;
import org.openapitools.api.PublicApi;
*/

ApplicationContext context = Micronaut.run(/* ... */);
PetApi apiInstance = context.getBean(PublicApi.class);
```

Or the `@Inject` annotation:
```java
@Singleton
class MyClass {
    @Inject
    PublicApi publicApi;

    /* ... use the injected variable */
}
```
Note that the class needs to be annotated with one of Micronaut's [scope annotations](https://docs.micronaut.io/latest/guide/#scopes) like `Singleton` in order to be processed.

More information can be found inside [Inversion of Control guide section](https://docs.micronaut.io/latest/guide/#ioc).

<a id="getCaptcha"></a>
# **getCaptcha**
```java
Mono<CaptchaResponse> PublicApi.getCaptcha()
```

Get Captcha Challenge

Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.



### Return type
[**CaptchaResponse**](CaptchaResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getCountries"></a>
# **getCountries**
```java
Mono<Object> PublicApi.getCountries(fetchBy)
```

Get Countries

Returns a map of country codes to country names. Use the optional &#x60;fetch_by&#x60; parameter to select the key format: &#x60;iso2&#x60; (default, two-letter codes), &#x60;iso3&#x60; (three-letter codes), or &#x60;numcode&#x60; (numeric codes). Use these values when populating country fields in account registration or domain contact forms.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **fetchBy** | `String`| Get countries by iso2 or iso3 or numcode | [optional parameter] [enum: `iso2`, `iso3`, `numcode`] |


### Return type
`Object`

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getInfo"></a>
# **getInfo**
```java
Mono<ServicesInfo> PublicApi.getInfo()
```

Get Server Info

Returns metadata about the API server&#39;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.



### Return type
[**ServicesInfo**](ServicesInfo.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getLoginInfo"></a>
# **getLoginInfo**
```java
Mono<LoginInfo> PublicApi.getLoginInfo()
```

Get Login Info

Gets the various pieces of information useful for generating a login page.



### Return type
[**LoginInfo**](LoginInfo.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getMPServers"></a>
# **getMPServers**
```java
Mono<BuyItNowList> PublicApi.getMPServers()
```

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.



### Return type
[**BuyItNowList**](BuyItNowList.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getOauthRedirect"></a>
# **getOauthRedirect**
```java
Mono<GetOauthRedirect200Response> PublicApi.getOauthRedirect(provider)
```

Get OAuth Redirect URL

Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call &#x60;POST /oauth&#x60;.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **provider** | `String`| The OAuth provider name (e.g. &#x60;Google&#x60;). | |


### Return type
[**GetOauthRedirect200Response**](GetOauthRedirect200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getTimezones"></a>
# **getTimezones**
```java
Mono<List<String>> PublicApi.getTimezones()
```

Get Available Timezones

Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;.



### Return type
`List&lt;String&gt;`

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="patchOauthTwoFactor"></a>
# **patchOauthTwoFactor**
```java
Mono<PatchOauthTwoFactor200Response> PublicApi.patchOauthTwoFactor(patchOauthTwoFactorRequest)
```

Complete OAuth Two-Factor Verification

Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **patchOauthTwoFactorRequest** | [**PatchOauthTwoFactorRequest**](PatchOauthTwoFactorRequest.md)|  | |


### Return type
[**PatchOauthTwoFactor200Response**](PatchOauthTwoFactor200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="pingServer"></a>
# **pingServer**
```java
Mono<String> PublicApi.pingServer()
```

Ping Server

Performs a single ping/pong request to let you know if the server is up.



### Return type
`String`

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postOauthCallback"></a>
# **postOauthCallback**
```java
Mono<PostOauthCallback200Response> PublicApi.postOauthCallback(providerpostOauthCallbackRequest)
```

OAuth Callback

Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **provider** | `String`| The OAuth provider name (e.g. &#x60;Google&#x60;). | |
| **postOauthCallbackRequest** | [**PostOauthCallbackRequest**](PostOauthCallbackRequest.md)|  | [optional parameter] |


### Return type
[**PostOauthCallback200Response**](PostOauthCallback200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="submitLogin"></a>
# **submitLogin**
```java
Mono<LoginSuccessResponse> PublicApi.submitLogin(loginpasswdremembergRecaptchaResponsetfa)
```

Submit Login Information

Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **login** | `String`|  | |
| **passwd** | `String`|  | |
| **remember** | `String`|  | [optional parameter] |
| **gRecaptchaResponse** | [**LoginSubmissionExampleGRecaptchaResponse**](LoginSubmissionExampleGRecaptchaResponse.md)|  | [optional parameter] |
| **tfa** | `String`| Two Factor Authentication Response. | [optional parameter] |


### Return type
[**LoginSuccessResponse**](LoginSuccessResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="submitSignup"></a>
# **submitSignup**
```java
Mono<Void> PublicApi.submitSignup(loginSubmissionExample)
```

Submit Signup Information

Creates a new account in our system using the provided information.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **loginSubmissionExample** | [**LoginSubmissionExample**](LoginSubmissionExample.md)|  | [optional parameter] |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`
 - **Accept**: `application/json`

