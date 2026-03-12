# InterServerManagementApi.PublicApi

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



## getCaptcha

> CaptchaResponse getCaptcha()

Get Captcha Challenge

Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.PublicApi();
apiInstance.getCaptcha((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
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


## getCountries

> Object getCountries(opts)

Get Countries

Returns a map of country codes to country names. Use the optional &#x60;fetch_by&#x60; parameter to select the key format: &#x60;iso2&#x60; (default, two-letter codes), &#x60;iso3&#x60; (three-letter codes), or &#x60;numcode&#x60; (numeric codes). Use these values when populating country fields in account registration or domain contact forms.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.PublicApi();
let opts = {
  'fetch_by': "fetch_by_example" // String | Get countries by iso2 or iso3 or numcode
};
apiInstance.getCountries(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fetch_by** | **String**| Get countries by iso2 or iso3 or numcode | [optional] 

### Return type

**Object**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getInfo

> ServicesInfo getInfo()

Get Server Info

Returns metadata about the API server&#39;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.PublicApi();
apiInstance.getInfo((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
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


## getLoginInfo

> LoginInfo getLoginInfo()

Get Login Info

Gets the various pieces of information useful for generating a login page.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.PublicApi();
apiInstance.getLoginInfo((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
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


## getMPServers

> BuyItNowList getMPServers()

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.PublicApi();
apiInstance.getMPServers((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
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


## getOauthRedirect

> GetOauthRedirect200Response getOauthRedirect(provider)

Get OAuth Redirect URL

Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call &#x60;POST /oauth&#x60;.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.PublicApi();
let provider = "provider_example"; // String | The OAuth provider name (e.g. `Google`).
apiInstance.getOauthRedirect(provider, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **String**| The OAuth provider name (e.g. &#x60;Google&#x60;). | 

### Return type

[**GetOauthRedirect200Response**](GetOauthRedirect200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getTimezones

> [String] getTimezones()

Get Available Timezones

Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.PublicApi();
apiInstance.getTimezones((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
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


## patchOauthTwoFactor

> PatchOauthTwoFactor200Response patchOauthTwoFactor(PatchOauthTwoFactorRequest)

Complete OAuth Two-Factor Verification

Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.PublicApi();
let PatchOauthTwoFactorRequest = new InterServerManagementApi.PatchOauthTwoFactorRequest(); // PatchOauthTwoFactorRequest | 
apiInstance.patchOauthTwoFactor(PatchOauthTwoFactorRequest, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **PatchOauthTwoFactorRequest** | [**PatchOauthTwoFactorRequest**](PatchOauthTwoFactorRequest.md)|  | 

### Return type

[**PatchOauthTwoFactor200Response**](PatchOauthTwoFactor200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json


## pingServer

> String pingServer()

Ping Server

Performs a single ping/pong request to let you know if the server is up.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.PublicApi();
apiInstance.pingServer((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
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


## postOauthCallback

> PostOauthCallback200Response postOauthCallback(provider, opts)

OAuth Callback

Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.PublicApi();
let provider = "provider_example"; // String | The OAuth provider name (e.g. `Google`).
let opts = {
  'PostOauthCallbackRequest': new InterServerManagementApi.PostOauthCallbackRequest() // PostOauthCallbackRequest | 
};
apiInstance.postOauthCallback(provider, opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **String**| The OAuth provider name (e.g. &#x60;Google&#x60;). | 
 **PostOauthCallbackRequest** | [**PostOauthCallbackRequest**](PostOauthCallbackRequest.md)|  | [optional] 

### Return type

[**PostOauthCallback200Response**](PostOauthCallback200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json


## submitLogin

> LoginSuccessResponse submitLogin(login, passwd, opts)

Submit Login Information

Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.PublicApi();
let login = "login_example"; // String | 
let passwd = "passwd_example"; // String | 
let opts = {
  'remember': "remember_example", // String | 
  'g_recaptcha_response': new InterServerManagementApi.LoginSubmissionExampleGRecaptchaResponse(), // LoginSubmissionExampleGRecaptchaResponse | 
  'tfa': "tfa_example" // String | Two Factor Authentication Response.
};
apiInstance.submitLogin(login, passwd, opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **login** | **String**|  | 
 **passwd** | **String**|  | 
 **remember** | **String**|  | [optional] 
 **g_recaptcha_response** | [**LoginSubmissionExampleGRecaptchaResponse**](LoginSubmissionExampleGRecaptchaResponse.md)|  | [optional] 
 **tfa** | **String**| Two Factor Authentication Response. | [optional] 

### Return type

[**LoginSuccessResponse**](LoginSuccessResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json


## submitSignup

> submitSignup(opts)

Submit Signup Information

Creates a new account in our system using the provided information.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.PublicApi();
let opts = {
  'LoginSubmissionExample': {"login":"user@domain.com","passwd":"mypassword","remember":"true","g-recaptcha-response":{"__v_isShallow":false,"dep":{"w":0,"n":0},"__v_isRef":true,"_rawValue":"zzzzz","_value":"zzzzz"}} // LoginSubmissionExample | 
};
apiInstance.submitSignup(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **LoginSubmissionExample** | [**LoginSubmissionExample**](LoginSubmissionExample.md)|  | [optional] 

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

