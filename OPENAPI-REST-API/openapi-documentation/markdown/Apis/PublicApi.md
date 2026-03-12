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


<a name="getCaptcha"></a>
# **getCaptcha**
> CaptchaResponse getCaptcha()

Get Captcha Challenge

    Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.

### Parameters
This endpoint does not need any parameter.

### Return type

[**CaptchaResponse**](../Models/CaptchaResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getCountries"></a>
# **getCountries**
> Object getCountries(fetch\_by)

Get Countries

    Returns a map of country codes to country names. Use the optional &#x60;fetch_by&#x60; parameter to select the key format: &#x60;iso2&#x60; (default, two-letter codes), &#x60;iso3&#x60; (three-letter codes), or &#x60;numcode&#x60; (numeric codes). Use these values when populating country fields in account registration or domain contact forms.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **fetch\_by** | **String**| Get countries by iso2 or iso3 or numcode | [optional] [default to null] [enum: iso2, iso3, numcode] |

### Return type

**Object**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getInfo"></a>
# **getInfo**
> ServicesInfo getInfo()

Get Server Info

    Returns metadata about the API server&#39;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServicesInfo**](../Models/ServicesInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getLoginInfo"></a>
# **getLoginInfo**
> LoginInfo getLoginInfo()

Get Login Info

    Gets the various pieces of information useful for generating a login page.

### Parameters
This endpoint does not need any parameter.

### Return type

[**LoginInfo**](../Models/LoginInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getMPServers"></a>
# **getMPServers**
> BuyItNowList getMPServers()

List Marketplace Servers

    Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Parameters
This endpoint does not need any parameter.

### Return type

[**BuyItNowList**](../Models/BuyItNowList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getOauthRedirect"></a>
# **getOauthRedirect**
> getOauthRedirect_200_response getOauthRedirect(provider)

Get OAuth Redirect URL

    Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call &#x60;POST /oauth&#x60;.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **provider** | **String**| The OAuth provider name (e.g. &#x60;Google&#x60;). | [default to null] |

### Return type

[**getOauthRedirect_200_response**](../Models/getOauthRedirect_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTimezones"></a>
# **getTimezones**
> List getTimezones()

Get Available Timezones

    Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;.

### Parameters
This endpoint does not need any parameter.

### Return type

**List**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="patchOauthTwoFactor"></a>
# **patchOauthTwoFactor**
> patchOauthTwoFactor_200_response patchOauthTwoFactor(patchOauthTwoFactor\_request)

Complete OAuth Two-Factor Verification

    Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **patchOauthTwoFactor\_request** | [**patchOauthTwoFactor_request**](../Models/patchOauthTwoFactor_request.md)|  | |

### Return type

[**patchOauthTwoFactor_200_response**](../Models/patchOauthTwoFactor_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="pingServer"></a>
# **pingServer**
> String pingServer()

Ping Server

    Performs a single ping/pong request to let you know if the server is up.

### Parameters
This endpoint does not need any parameter.

### Return type

**String**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postOauthCallback"></a>
# **postOauthCallback**
> postOauthCallback_200_response postOauthCallback(provider, postOauthCallback\_request)

OAuth Callback

    Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **provider** | **String**| The OAuth provider name (e.g. &#x60;Google&#x60;). | [default to null] |
| **postOauthCallback\_request** | [**postOauthCallback_request**](../Models/postOauthCallback_request.md)|  | [optional] |

### Return type

[**postOauthCallback_200_response**](../Models/postOauthCallback_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="submitLogin"></a>
# **submitLogin**
> LoginSuccessResponse submitLogin(login, passwd, remember, g-recaptcha-response, tfa)

Submit Login Information

    Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **login** | **String**|  | [default to null] |
| **passwd** | **String**|  | [default to null] |
| **remember** | **String**|  | [optional] [default to null] |
| **g-recaptcha-response** | [**LoginSubmissionExample_g_recaptcha_response**](../Models/LoginSubmissionExample_g_recaptcha_response.md)|  | [optional] [default to null] |
| **tfa** | **String**| Two Factor Authentication Response. | [optional] [default to null] |

### Return type

[**LoginSuccessResponse**](../Models/LoginSuccessResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="submitSignup"></a>
# **submitSignup**
> submitSignup(LoginSubmissionExample)

Submit Signup Information

    Creates a new account in our system using the provided information.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **LoginSubmissionExample** | [**LoginSubmissionExample**](../Models/LoginSubmissionExample.md)|  | [optional] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

