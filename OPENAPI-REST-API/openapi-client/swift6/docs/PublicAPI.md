# PublicAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getCaptcha**](PublicAPI.md#getcaptcha) | **GET** /captcha | Get Captcha Challenge
[**getCountries**](PublicAPI.md#getcountries) | **GET** /account/countries | Get Countries
[**getInfo**](PublicAPI.md#getinfo) | **GET** /info | Get Server Info
[**getLoginInfo**](PublicAPI.md#getlogininfo) | **GET** /login | Get Login Info
[**getMPServers**](PublicAPI.md#getmpservers) | **GET** /buy_now_servers_list | List Marketplace Servers
[**getOauthRedirect**](PublicAPI.md#getoauthredirect) | **GET** /oauth | Get OAuth Redirect URL
[**getTimezones**](PublicAPI.md#gettimezones) | **GET** /account/timezones | Get Available Timezones
[**patchOauthTwoFactor**](PublicAPI.md#patchoauthtwofactor) | **PATCH** /oauth | Complete OAuth Two-Factor Verification
[**pingServer**](PublicAPI.md#pingserver) | **GET** /ping | Ping Server
[**postOauthCallback**](PublicAPI.md#postoauthcallback) | **POST** /oauth | OAuth Callback
[**submitLogin**](PublicAPI.md#submitlogin) | **POST** /login | Submit Login Information
[**submitSignup**](PublicAPI.md#submitsignup) | **POST** /signup | Submit Signup Information


# **getCaptcha**
```swift
    open class func getCaptcha(completion: @escaping (_ data: CaptchaResponse?, _ error: Error?) -> Void)
```

Get Captcha Challenge

Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get Captcha Challenge
PublicAPI.getCaptcha() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**CaptchaResponse**](CaptchaResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCountries**
```swift
    open class func getCountries(fetchBy: FetchBy_getCountries? = nil, completion: @escaping (_ data: JSONValue?, _ error: Error?) -> Void)
```

Get Countries

Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let fetchBy = "fetchBy_example" // String | Get countries by iso2 or iso3 or numcode (optional)

// Get Countries
PublicAPI.getCountries(fetchBy: fetchBy) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fetchBy** | **String** | Get countries by iso2 or iso3 or numcode | [optional] 

### Return type

**JSONValue**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInfo**
```swift
    open class func getInfo(completion: @escaping (_ data: ServicesInfo?, _ error: Error?) -> Void)
```

Get Server Info

Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get Server Info
PublicAPI.getInfo() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServicesInfo**](ServicesInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getLoginInfo**
```swift
    open class func getLoginInfo(completion: @escaping (_ data: LoginInfo?, _ error: Error?) -> Void)
```

Get Login Info

Gets the various pieces of information useful for generating a login page.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get Login Info
PublicAPI.getLoginInfo() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**LoginInfo**](LoginInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMPServers**
```swift
    open class func getMPServers(completion: @escaping (_ data: BuyItNowList?, _ error: Error?) -> Void)
```

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// List Marketplace Servers
PublicAPI.getMPServers() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BuyItNowList**](BuyItNowList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getOauthRedirect**
```swift
    open class func getOauthRedirect(provider: String, completion: @escaping (_ data: GetOauthRedirect200Response?, _ error: Error?) -> Void)
```

Get OAuth Redirect URL

Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let provider = "provider_example" // String | The OAuth provider name (e.g. `Google`).

// Get OAuth Redirect URL
PublicAPI.getOauthRedirect(provider: provider) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **String** | The OAuth provider name (e.g. &#x60;Google&#x60;). | 

### Return type

[**GetOauthRedirect200Response**](GetOauthRedirect200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTimezones**
```swift
    open class func getTimezones(completion: @escaping (_ data: [String]?, _ error: Error?) -> Void)
```

Get Available Timezones

Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get Available Timezones
PublicAPI.getTimezones() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**[String]**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **patchOauthTwoFactor**
```swift
    open class func patchOauthTwoFactor(patchOauthTwoFactorRequest: PatchOauthTwoFactorRequest, completion: @escaping (_ data: PatchOauthTwoFactor200Response?, _ error: Error?) -> Void)
```

Complete OAuth Two-Factor Verification

Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let patchOauthTwoFactorRequest = patchOauthTwoFactor_request(accountId: 123, code: "code_example") // PatchOauthTwoFactorRequest | 

// Complete OAuth Two-Factor Verification
PublicAPI.patchOauthTwoFactor(patchOauthTwoFactorRequest: patchOauthTwoFactorRequest) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **patchOauthTwoFactorRequest** | [**PatchOauthTwoFactorRequest**](PatchOauthTwoFactorRequest.md) |  | 

### Return type

[**PatchOauthTwoFactor200Response**](PatchOauthTwoFactor200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pingServer**
```swift
    open class func pingServer(completion: @escaping (_ data: String?, _ error: Error?) -> Void)
```

Ping Server

Performs a single ping/pong request to let you know if the server is up.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Ping Server
PublicAPI.pingServer() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**String**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postOauthCallback**
```swift
    open class func postOauthCallback(provider: String, postOauthCallbackRequest: PostOauthCallbackRequest? = nil, completion: @escaping (_ data: PostOauthCallback200Response?, _ error: Error?) -> Void)
```

OAuth Callback

Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let provider = "provider_example" // String | The OAuth provider name (e.g. `Google`).
let postOauthCallbackRequest = postOauthCallback_request(provider: "provider_example") // PostOauthCallbackRequest |  (optional)

// OAuth Callback
PublicAPI.postOauthCallback(provider: provider, postOauthCallbackRequest: postOauthCallbackRequest) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **String** | The OAuth provider name (e.g. &#x60;Google&#x60;). | 
 **postOauthCallbackRequest** | [**PostOauthCallbackRequest**](PostOauthCallbackRequest.md) |  | [optional] 

### Return type

[**PostOauthCallback200Response**](PostOauthCallback200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **submitLogin**
```swift
    open class func submitLogin(login: String, passwd: String, remember: String? = nil, gRecaptchaResponse: LoginSubmissionExampleGRecaptchaResponse? = nil, tfa: String? = nil, completion: @escaping (_ data: LoginSuccessResponse?, _ error: Error?) -> Void)
```

Submit Login Information

Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let login = "login_example" // String | 
let passwd = "passwd_example" // String | 
let remember = "remember_example" // String |  (optional)
let gRecaptchaResponse = LoginSubmissionExample_g_recaptcha_response(vIsShallow: false, dep: LoginSubmissionExample_g_recaptcha_response_dep(w: 123, n: 123), vIsRef: false, rawValue: "rawValue_example", value: "value_example") // LoginSubmissionExampleGRecaptchaResponse |  (optional)
let tfa = "tfa_example" // String | Two Factor Authentication Response. (optional)

// Submit Login Information
PublicAPI.submitLogin(login: login, passwd: passwd, remember: remember, gRecaptchaResponse: gRecaptchaResponse, tfa: tfa) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **login** | **String** |  | 
 **passwd** | **String** |  | 
 **remember** | **String** |  | [optional] 
 **gRecaptchaResponse** | [**LoginSubmissionExampleGRecaptchaResponse**](LoginSubmissionExampleGRecaptchaResponse.md) |  | [optional] 
 **tfa** | **String** | Two Factor Authentication Response. | [optional] 

### Return type

[**LoginSuccessResponse**](LoginSuccessResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **submitSignup**
```swift
    open class func submitSignup(loginSubmissionExample: LoginSubmissionExample? = nil, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Submit Signup Information

Creates a new account in our system using the provided information.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let loginSubmissionExample = LoginSubmissionExample(login: "login_example", passwd: "passwd_example", remember: "remember_example", gRecaptchaResponse: LoginSubmissionExample_g_recaptcha_response(vIsShallow: false, dep: LoginSubmissionExample_g_recaptcha_response_dep(w: 123, n: 123), vIsRef: false, rawValue: "rawValue_example", value: "value_example"), tfa: "tfa_example") // LoginSubmissionExample |  (optional)

// Submit Signup Information
PublicAPI.submitSignup(loginSubmissionExample: loginSubmissionExample) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **loginSubmissionExample** | [**LoginSubmissionExample**](LoginSubmissionExample.md) |  | [optional] 

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

