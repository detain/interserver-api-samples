# swagger.api.PublicApi

## Load the API package
```dart
import 'package:swagger/api.dart';
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getCaptcha**](PublicApi.md#getCaptcha) | **GET** /captcha | Get Captcha Challenge
[**getCountries**](PublicApi.md#getCountries) | **GET** /account/countries | Get Countries
[**getInfo**](PublicApi.md#getInfo) | **GET** /info | Get Server Info
[**getLoginInfo**](PublicApi.md#getLoginInfo) | **GET** /login | Get Login Info
[**getMPServers**](PublicApi.md#getMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers
[**getOauthRedirect**](PublicApi.md#getOauthRedirect) | **GET** /oauth | Get OAuth Redirect URL
[**getTimezones**](PublicApi.md#getTimezones) | **GET** /account/timezones | Get Available Timezones
[**patchOauthTwoFactor**](PublicApi.md#patchOauthTwoFactor) | **PATCH** /oauth | Complete OAuth Two-Factor Verification
[**pingServer**](PublicApi.md#pingServer) | **GET** /ping | Ping Server
[**postOauthCallback**](PublicApi.md#postOauthCallback) | **POST** /oauth | OAuth Callback
[**submitLogin**](PublicApi.md#submitLogin) | **POST** /login | Submit Login Information
[**submitSignup**](PublicApi.md#submitSignup) | **POST** /signup | Submit Signup Information

# **getCaptcha**
> CaptchaResponse getCaptcha()

Get Captcha Challenge

Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new PublicApi();

try {
    var result = api_instance.getCaptcha();
    print(result);
} catch (e) {
    print("Exception when calling PublicApi->getCaptcha: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**CaptchaResponse**](CaptchaResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCountries**
> Object getCountries(fetchBy)

Get Countries

Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new PublicApi();
var fetchBy = fetchBy_example; // String | Get countries by iso2 or iso3 or numcode

try {
    var result = api_instance.getCountries(fetchBy);
    print(result);
} catch (e) {
    print("Exception when calling PublicApi->getCountries: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fetchBy** | **String**| Get countries by iso2 or iso3 or numcode | [optional] 

### Return type

[**Object**](Object.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInfo**
> ServicesInfo getInfo()

Get Server Info

Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new PublicApi();

try {
    var result = api_instance.getInfo();
    print(result);
} catch (e) {
    print("Exception when calling PublicApi->getInfo: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServicesInfo**](ServicesInfo.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getLoginInfo**
> LoginInfo getLoginInfo()

Get Login Info

Gets the various pieces of information useful for generating a login page.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new PublicApi();

try {
    var result = api_instance.getLoginInfo();
    print(result);
} catch (e) {
    print("Exception when calling PublicApi->getLoginInfo: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**LoginInfo**](LoginInfo.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMPServers**
> BuyItNowList getMPServers()

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new PublicApi();

try {
    var result = api_instance.getMPServers();
    print(result);
} catch (e) {
    print("Exception when calling PublicApi->getMPServers: $e\n");
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getOauthRedirect**
> InlineResponse2005 getOauthRedirect(provider)

Get OAuth Redirect URL

Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new PublicApi();
var provider = provider_example; // String | The OAuth provider name (e.g. `Google`).

try {
    var result = api_instance.getOauthRedirect(provider);
    print(result);
} catch (e) {
    print("Exception when calling PublicApi->getOauthRedirect: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **String**| The OAuth provider name (e.g. &#x60;Google&#x60;). | 

### Return type

[**InlineResponse2005**](InlineResponse2005.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTimezones**
> List<String> getTimezones()

Get Available Timezones

Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new PublicApi();

try {
    var result = api_instance.getTimezones();
    print(result);
} catch (e) {
    print("Exception when calling PublicApi->getTimezones: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**List<String>**

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **patchOauthTwoFactor**
> InlineResponse2007 patchOauthTwoFactor(body, accountId, code)

Complete OAuth Two-Factor Verification

Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new PublicApi();
var body = new OauthBody2(); // OauthBody2 | 
var accountId = 56; // int | 
var code = code_example; // String | 

try {
    var result = api_instance.patchOauthTwoFactor(body, accountId, code);
    print(result);
} catch (e) {
    print("Exception when calling PublicApi->patchOauthTwoFactor: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OauthBody2**](OauthBody2.md)|  | 
 **accountId** | **int**|  | 
 **code** | **String**|  | 

### Return type

[**InlineResponse2007**](InlineResponse2007.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pingServer**
> String pingServer()

Ping Server

Performs a single ping/pong request to let you know if the server is up.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new PublicApi();

try {
    var result = api_instance.pingServer();
    print(result);
} catch (e) {
    print("Exception when calling PublicApi->pingServer: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**String**

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postOauthCallback**
> InlineResponse2006 postOauthCallback(provider, body, provider)

OAuth Callback

Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new PublicApi();
var provider = provider_example; // String | The OAuth provider name (e.g. `Google`).
var body = new OauthBody(); // OauthBody | 
var provider = provider_example; // String | 

try {
    var result = api_instance.postOauthCallback(provider, body, provider);
    print(result);
} catch (e) {
    print("Exception when calling PublicApi->postOauthCallback: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **String**| The OAuth provider name (e.g. &#x60;Google&#x60;). | 
 **body** | [**OauthBody**](OauthBody.md)|  | [optional] 
 **provider** | **String**|  | [optional] 

### Return type

[**InlineResponse2006**](InlineResponse2006.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **submitLogin**
> LoginSuccessResponse submitLogin(login, passwd, remember, gRecaptchaResponse, tfa, body)

Submit Login Information

Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new PublicApi();
var login = login_example; // String | 
var passwd = passwd_example; // String | 
var remember = remember_example; // String | 
var gRecaptchaResponse = ; // LoginSubmissionExampleGrecaptcharesponse | 
var tfa = tfa_example; // String | 
var body = new LoginSubmissionExample(); // LoginSubmissionExample | 

try {
    var result = api_instance.submitLogin(login, passwd, remember, gRecaptchaResponse, tfa, body);
    print(result);
} catch (e) {
    print("Exception when calling PublicApi->submitLogin: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **login** | **String**|  | 
 **passwd** | **String**|  | 
 **remember** | **String**|  | 
 **gRecaptchaResponse** | [**LoginSubmissionExampleGrecaptcharesponse**](.md)|  | 
 **tfa** | **String**|  | 
 **body** | [**LoginSubmissionExample**](LoginSubmissionExample.md)|  | 

### Return type

[**LoginSuccessResponse**](LoginSuccessResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **submitSignup**
> submitSignup(body)

Submit Signup Information

Creates a new account in our system using the provided information.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new PublicApi();
var body = new LoginSubmissionExample(); // LoginSubmissionExample | 

try {
    api_instance.submitSignup(body);
} catch (e) {
    print("Exception when calling PublicApi->submitSignup: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**LoginSubmissionExample**](LoginSubmissionExample.md)|  | [optional] 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

