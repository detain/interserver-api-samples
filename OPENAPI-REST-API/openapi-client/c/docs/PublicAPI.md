# PublicAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PublicAPI_getCaptcha**](PublicAPI.md#PublicAPI_getCaptcha) | **GET** /captcha | Get Captcha Challenge
[**PublicAPI_getCountries**](PublicAPI.md#PublicAPI_getCountries) | **GET** /account/countries | Get Countries
[**PublicAPI_getInfo**](PublicAPI.md#PublicAPI_getInfo) | **GET** /info | Get Server Info
[**PublicAPI_getLoginInfo**](PublicAPI.md#PublicAPI_getLoginInfo) | **GET** /login | Get Login Info
[**PublicAPI_getMPServers**](PublicAPI.md#PublicAPI_getMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers
[**PublicAPI_getOauthRedirect**](PublicAPI.md#PublicAPI_getOauthRedirect) | **GET** /oauth | Get OAuth Redirect URL
[**PublicAPI_getTimezones**](PublicAPI.md#PublicAPI_getTimezones) | **GET** /account/timezones | Get Available Timezones
[**PublicAPI_patchOauthTwoFactor**](PublicAPI.md#PublicAPI_patchOauthTwoFactor) | **PATCH** /oauth | Complete OAuth Two-Factor Verification
[**PublicAPI_pingServer**](PublicAPI.md#PublicAPI_pingServer) | **GET** /ping | Ping Server
[**PublicAPI_postOauthCallback**](PublicAPI.md#PublicAPI_postOauthCallback) | **POST** /oauth | OAuth Callback
[**PublicAPI_submitLogin**](PublicAPI.md#PublicAPI_submitLogin) | **POST** /login | Submit Login Information
[**PublicAPI_submitSignup**](PublicAPI.md#PublicAPI_submitSignup) | **POST** /signup | Submit Signup Information


# **PublicAPI_getCaptcha**
```c
// Get Captcha Challenge
//
// Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
//
captcha_response_t* PublicAPI_getCaptcha(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[captcha_response_t](captcha_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PublicAPI_getCountries**
```c
// Get Countries
//
// Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
//
object_t* PublicAPI_getCountries(apiClient_t *apiClient, interserver_management_api_getCountries_fetch_by_e fetch_by);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**fetch_by** | **interserver_management_api_getCountries_fetch_by_e** | Get countries by iso2 or iso3 or numcode | [optional] 

### Return type

[object_t](object.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PublicAPI_getInfo**
```c
// Get Server Info
//
// Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
//
services_info_t* PublicAPI_getInfo(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[services_info_t](services_info.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PublicAPI_getLoginInfo**
```c
// Get Login Info
//
// Gets the various pieces of information useful for generating a login page.
//
login_info_t* PublicAPI_getLoginInfo(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[login_info_t](login_info.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PublicAPI_getMPServers**
```c
// List Marketplace Servers
//
// Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
//
buy_it_now_list_t* PublicAPI_getMPServers(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[buy_it_now_list_t](buy_it_now_list.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PublicAPI_getOauthRedirect**
```c
// Get OAuth Redirect URL
//
// Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
//
get_oauth_redirect_200_response_t* PublicAPI_getOauthRedirect(apiClient_t *apiClient, char *provider);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**provider** | **char \*** | The OAuth provider name (e.g. &#x60;Google&#x60;). | 

### Return type

[get_oauth_redirect_200_response_t](get_oauth_redirect_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PublicAPI_getTimezones**
```c
// Get Available Timezones
//
// Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
//
list_t* PublicAPI_getTimezones(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type


[list_t](char.md) *




### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PublicAPI_patchOauthTwoFactor**
```c
// Complete OAuth Two-Factor Verification
//
// Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
//
patch_oauth_two_factor_200_response_t* PublicAPI_patchOauthTwoFactor(apiClient_t *apiClient, patch_oauth_two_factor_request_t *patch_oauth_two_factor_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**patch_oauth_two_factor_request** | **[patch_oauth_two_factor_request_t](patch_oauth_two_factor_request.md) \*** |  | 

### Return type

[patch_oauth_two_factor_200_response_t](patch_oauth_two_factor_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PublicAPI_pingServer**
```c
// Ping Server
//
// Performs a single ping/pong request to let you know if the server is up.
//
char* PublicAPI_pingServer(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

char*



### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PublicAPI_postOauthCallback**
```c
// OAuth Callback
//
// Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
//
post_oauth_callback_200_response_t* PublicAPI_postOauthCallback(apiClient_t *apiClient, char *provider, post_oauth_callback_request_t *post_oauth_callback_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**provider** | **char \*** | The OAuth provider name (e.g. &#x60;Google&#x60;). | 
**post_oauth_callback_request** | **[post_oauth_callback_request_t](post_oauth_callback_request.md) \*** |  | [optional] 

### Return type

[post_oauth_callback_200_response_t](post_oauth_callback_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PublicAPI_submitLogin**
```c
// Submit Login Information
//
// Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.
//
login_success_response_t* PublicAPI_submitLogin(apiClient_t *apiClient, char *login, char *passwd, char *remember, login_submission_example_g_recaptcha_response_t *g_recaptcha_response, char *tfa);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**login** | **char \*** |  | 
**passwd** | **char \*** |  | 
**remember** | **char \*** |  | [optional] 
**g_recaptcha_response** | **[login_submission_example_g_recaptcha_response_t](login_submission_example_g_recaptcha_response.md) \*** |  | [optional] 
**tfa** | **char \*** | Two Factor Authentication Response. | [optional] 

### Return type

[login_success_response_t](login_success_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PublicAPI_submitSignup**
```c
// Submit Signup Information
//
// Creates a new account in our system using the provided information.
//
void PublicAPI_submitSignup(apiClient_t *apiClient, login_submission_example_t *login_submission_example);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**login_submission_example** | **[login_submission_example_t](login_submission_example.md) \*** |  | [optional] 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

