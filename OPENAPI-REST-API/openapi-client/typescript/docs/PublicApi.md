# .PublicApi

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

Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.

### Example


```typescript
import { createConfiguration, PublicApi } from '';

const configuration = createConfiguration();
const apiInstance = new PublicApi(configuration);

const request = {};

const data = await apiInstance.getCaptcha(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**CaptchaResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | An array containing a &#x60;captcha&#x60; field containing a string with a base64 encoded captcha image. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getCountries**
> any getCountries()

Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.

### Example


```typescript
import { createConfiguration, PublicApi } from '';
import type { PublicApiGetCountriesRequest } from '';

const configuration = createConfiguration();
const apiInstance = new PublicApi(configuration);

const request: PublicApiGetCountriesRequest = {
    // Get countries by iso2 or iso3 or numcode (optional)
  fetchBy: "iso2",
};

const data = await apiInstance.getCountries(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fetchBy** | [**&#39;iso2&#39; | &#39;iso3&#39; | &#39;numcode&#39;**]**Array<&#39;iso2&#39; &#124; &#39;iso3&#39; &#124; &#39;numcode&#39;>** | Get countries by iso2 or iso3 or numcode | (optional) defaults to undefined


### Return type

**any**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The list of countries with both 2 letter abbreviations and the country names. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getInfo**
> ServicesInfo getInfo()

Returns metadata about the API server\'s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.

### Example


```typescript
import { createConfiguration, PublicApi } from '';

const configuration = createConfiguration();
const apiInstance = new PublicApi(configuration);

const request = {};

const data = await apiInstance.getInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**ServicesInfo**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The modules and services information from the server. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getLoginInfo**
> LoginInfo getLoginInfo()

Gets the various pieces of information useful for generating a login page.

### Example


```typescript
import { createConfiguration, PublicApi } from '';

const configuration = createConfiguration();
const apiInstance = new PublicApi(configuration);

const request = {};

const data = await apiInstance.getLoginInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**LoginInfo**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Various pieces of information useful for rendering a login page. |  -  |
**403** | Error response to a login request. |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getMPServers**
> BuyItNowList getMPServers()

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example


```typescript
import { createConfiguration, PublicApi } from '';

const configuration = createConfiguration();
const apiInstance = new PublicApi(configuration);

const request = {};

const data = await apiInstance.getMPServers(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**BuyItNowList**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Marketplace Buy it now servers list |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getOauthRedirect**
> GetOauthRedirect200Response getOauthRedirect()

Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.

### Example


```typescript
import { createConfiguration, PublicApi } from '';
import type { PublicApiGetOauthRedirectRequest } from '';

const configuration = createConfiguration();
const apiInstance = new PublicApi(configuration);

const request: PublicApiGetOauthRedirectRequest = {
    // The OAuth provider name (e.g. `Google`).
  provider: "provider_example",
};

const data = await apiInstance.getOauthRedirect(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | [**string**] | The OAuth provider name (e.g. &#x60;Google&#x60;). | defaults to undefined


### Return type

**GetOauthRedirect200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | OAuth redirect URL for the requested provider. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getTimezones**
> Array<string> getTimezones()

Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.

### Example


```typescript
import { createConfiguration, PublicApi } from '';

const configuration = createConfiguration();
const apiInstance = new PublicApi(configuration);

const request = {};

const data = await apiInstance.getTimezones(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**Array<string>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | An array of all available timezone identifiers. |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **patchOauthTwoFactor**
> PatchOauthTwoFactor200Response patchOauthTwoFactor(patchOauthTwoFactorRequest)

Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.

### Example


```typescript
import { createConfiguration, PublicApi } from '';
import type { PublicApiPatchOauthTwoFactorRequest } from '';

const configuration = createConfiguration();
const apiInstance = new PublicApi(configuration);

const request: PublicApiPatchOauthTwoFactorRequest = {
  
  patchOauthTwoFactorRequest: {
    account_id: 1,
    code: "code_example",
  },
};

const data = await apiInstance.patchOauthTwoFactor(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **patchOauthTwoFactorRequest** | **PatchOauthTwoFactorRequest**|  |


### Return type

**PatchOauthTwoFactor200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | OAuth 2FA verification result. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **pingServer**
> string pingServer()

Performs a single ping/pong request to let you know if the server is up.

### Example


```typescript
import { createConfiguration, PublicApi } from '';

const configuration = createConfiguration();
const apiInstance = new PublicApi(configuration);

const request = {};

const data = await apiInstance.pingServer(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**string**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A simple response of \&quot;pong\&quot; for use with simple tests to see if a service is up.  |  -  |
**401** | Unauthorized |  -  |
**0** | Something is wrong |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postOauthCallback**
> PostOauthCallback200Response postOauthCallback()

Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.

### Example


```typescript
import { createConfiguration, PublicApi } from '';
import type { PublicApiPostOauthCallbackRequest } from '';

const configuration = createConfiguration();
const apiInstance = new PublicApi(configuration);

const request: PublicApiPostOauthCallbackRequest = {
    // The OAuth provider name (e.g. `Google`).
  provider: "provider_example",
  
  postOauthCallbackRequest: {
    provider: "provider_example",
  },
};

const data = await apiInstance.postOauthCallback(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **postOauthCallbackRequest** | **PostOauthCallbackRequest**|  |
 **provider** | [**string**] | The OAuth provider name (e.g. &#x60;Google&#x60;). | defaults to undefined


### Return type

**PostOauthCallback200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | OAuth callback result. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **submitLogin**
> LoginSuccessResponse submitLogin()

Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.

### Example


```typescript
import { createConfiguration, PublicApi } from '';
import type { PublicApiSubmitLoginRequest } from '';

const configuration = createConfiguration();
const apiInstance = new PublicApi(configuration);

const request: PublicApiSubmitLoginRequest = {
  
  login: "login_example",
  
  passwd: "passwd_example",
  
  remember: "remember_example",
  
  gRecaptchaResponse: {
    __v_isShallow: true,
    dep: {
      w: 1,
      n: 1,
    },
    __v_isRef: true,
    _rawValue: "_rawValue_example",
    _value: "_value_example",
  },
    // Two Factor Authentication Response. (optional)
  tfa: "tfa_example",
};

const data = await apiInstance.submitLogin(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **login** | [**string**] |  | defaults to undefined
 **passwd** | [**string**] |  | defaults to undefined
 **remember** | [**string**] |  | (optional) defaults to undefined
 **gRecaptchaResponse** | **LoginSubmissionExampleGRecaptchaResponse** |  | (optional) defaults to undefined
 **tfa** | [**string**] | Two Factor Authentication Response. | (optional) defaults to undefined


### Return type

**LoginSuccessResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful login response containing the session token. |  -  |
**402** | Error response to a login request. |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **submitSignup**
> void submitSignup()

Creates a new account in our system using the provided information.

### Example


```typescript
import { createConfiguration, PublicApi } from '';
import type { PublicApiSubmitSignupRequest } from '';

const configuration = createConfiguration();
const apiInstance = new PublicApi(configuration);

const request: PublicApiSubmitSignupRequest = {
  
  loginSubmissionExample: {
    login: "login_example",
    passwd: "passwd_example",
    remember: "remember_example",
    g_recaptcha_response: {
      __v_isShallow: true,
      dep: {
        w: 1,
        n: 1,
      },
      __v_isRef: true,
      _rawValue: "_rawValue_example",
      _value: "_value_example",
    },
    tfa: "tfa_example",
  },
};

const data = await apiInstance.submitSignup(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **loginSubmissionExample** | **LoginSubmissionExample**|  |


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Account created successfully. |  -  |
**402** | Error response to a login request. |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)


