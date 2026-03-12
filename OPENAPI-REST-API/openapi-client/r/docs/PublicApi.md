# PublicApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetCaptcha**](PublicApi.md#GetCaptcha) | **GET** /captcha | Get Captcha Challenge
[**GetCountries**](PublicApi.md#GetCountries) | **GET** /account/countries | Get Countries
[**GetInfo**](PublicApi.md#GetInfo) | **GET** /info | Get Server Info
[**GetLoginInfo**](PublicApi.md#GetLoginInfo) | **GET** /login | Get Login Info
[**GetMPServers**](PublicApi.md#GetMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers
[**GetOauthRedirect**](PublicApi.md#GetOauthRedirect) | **GET** /oauth | Get OAuth Redirect URL
[**GetTimezones**](PublicApi.md#GetTimezones) | **GET** /account/timezones | Get Available Timezones
[**PatchOauthTwoFactor**](PublicApi.md#PatchOauthTwoFactor) | **PATCH** /oauth | Complete OAuth Two-Factor Verification
[**PingServer**](PublicApi.md#PingServer) | **GET** /ping | Ping Server
[**PostOauthCallback**](PublicApi.md#PostOauthCallback) | **POST** /oauth | OAuth Callback
[**SubmitLogin**](PublicApi.md#SubmitLogin) | **POST** /login | Submit Login Information
[**SubmitSignup**](PublicApi.md#SubmitSignup) | **POST** /signup | Submit Signup Information


# **GetCaptcha**
> CaptchaResponse GetCaptcha()

Get Captcha Challenge

Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.

### Example
```R
library(openapi)

# Get Captcha Challenge
#

api_instance <- PublicApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetCaptcha(data_file = "result.txt")
result <- api_instance$GetCaptcha()
dput(result)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | An array containing a &#x60;captcha&#x60; field containing a string with a base64 encoded captcha image. |  -  |
| **401** | Unauthorized |  -  |

# **GetCountries**
> object GetCountries(fetch_by = var.fetch_by)

Get Countries

Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.

### Example
```R
library(openapi)

# Get Countries
#
# prepare function argument(s)
var_fetch_by <- "fetch_by_example" # character | Get countries by iso2 or iso3 or numcode (Optional)

api_instance <- PublicApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetCountries(fetch_by = var_fetch_bydata_file = "result.txt")
result <- api_instance$GetCountries(fetch_by = var_fetch_by)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fetch_by** | Enum [iso2, iso3, numcode] | Get countries by iso2 or iso3 or numcode | [optional] 

### Return type

**object**

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

# **GetInfo**
> ServicesInfo GetInfo()

Get Server Info

Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.

### Example
```R
library(openapi)

# Get Server Info
#

api_instance <- PublicApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetInfo(data_file = "result.txt")
result <- api_instance$GetInfo()
dput(result)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The modules and services information from the server. |  -  |
| **401** | Unauthorized |  -  |

# **GetLoginInfo**
> LoginInfo GetLoginInfo()

Get Login Info

Gets the various pieces of information useful for generating a login page.

### Example
```R
library(openapi)

# Get Login Info
#

api_instance <- PublicApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetLoginInfo(data_file = "result.txt")
result <- api_instance$GetLoginInfo()
dput(result)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Various pieces of information useful for rendering a login page. |  -  |
| **403** | Error response to a login request. |  -  |

# **GetMPServers**
> BuyItNowList GetMPServers()

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example
```R
library(openapi)

# List Marketplace Servers
#

api_instance <- PublicApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetMPServers(data_file = "result.txt")
result <- api_instance$GetMPServers()
dput(result)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Marketplace Buy it now servers list |  -  |
| **401** | Unauthorized |  -  |

# **GetOauthRedirect**
> GetOauthRedirect200Response GetOauthRedirect(provider)

Get OAuth Redirect URL

Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.

### Example
```R
library(openapi)

# Get OAuth Redirect URL
#
# prepare function argument(s)
var_provider <- "provider_example" # character | The OAuth provider name (e.g. `Google`).

api_instance <- PublicApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetOauthRedirect(var_providerdata_file = "result.txt")
result <- api_instance$GetOauthRedirect(var_provider)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **character**| The OAuth provider name (e.g. &#x60;Google&#x60;). | 

### Return type

[**GetOauthRedirect200Response**](getOauthRedirect_200_response.md)

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

# **GetTimezones**
> array[character] GetTimezones()

Get Available Timezones

Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.

### Example
```R
library(openapi)

# Get Available Timezones
#

api_instance <- PublicApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetTimezones(data_file = "result.txt")
result <- api_instance$GetTimezones()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

**array[character]**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | An array of all available timezone identifiers. |  -  |

# **PatchOauthTwoFactor**
> PatchOauthTwoFactor200Response PatchOauthTwoFactor(patch_oauth_two_factor_request)

Complete OAuth Two-Factor Verification

Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.

### Example
```R
library(openapi)

# Complete OAuth Two-Factor Verification
#
# prepare function argument(s)
var_patch_oauth_two_factor_request <- patchOauthTwoFactor_request$new(123, "code_example") # PatchOauthTwoFactorRequest | 

api_instance <- PublicApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PatchOauthTwoFactor(var_patch_oauth_two_factor_requestdata_file = "result.txt")
result <- api_instance$PatchOauthTwoFactor(var_patch_oauth_two_factor_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **patch_oauth_two_factor_request** | [**PatchOauthTwoFactorRequest**](PatchOauthTwoFactorRequest.md)|  | 

### Return type

[**PatchOauthTwoFactor200Response**](patchOauthTwoFactor_200_response.md)

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

# **PingServer**
> character PingServer()

Ping Server

Performs a single ping/pong request to let you know if the server is up.

### Example
```R
library(openapi)

# Ping Server
#

api_instance <- PublicApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PingServer(data_file = "result.txt")
result <- api_instance$PingServer()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

**character**

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

# **PostOauthCallback**
> PostOauthCallback200Response PostOauthCallback(provider, post_oauth_callback_request = var.post_oauth_callback_request)

OAuth Callback

Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.

### Example
```R
library(openapi)

# OAuth Callback
#
# prepare function argument(s)
var_provider <- "provider_example" # character | The OAuth provider name (e.g. `Google`).
var_post_oauth_callback_request <- postOauthCallback_request$new("provider_example") # PostOauthCallbackRequest |  (Optional)

api_instance <- PublicApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostOauthCallback(var_provider, post_oauth_callback_request = var_post_oauth_callback_requestdata_file = "result.txt")
result <- api_instance$PostOauthCallback(var_provider, post_oauth_callback_request = var_post_oauth_callback_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **character**| The OAuth provider name (e.g. &#x60;Google&#x60;). | 
 **post_oauth_callback_request** | [**PostOauthCallbackRequest**](PostOauthCallbackRequest.md)|  | [optional] 

### Return type

[**PostOauthCallback200Response**](postOauthCallback_200_response.md)

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

# **SubmitLogin**
> LoginSuccessResponse SubmitLogin(login, passwd, remember = var.remember, g_recaptcha_response = var.g_recaptcha_response, tfa = var.tfa)

Submit Login Information

Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.

### Example
```R
library(openapi)

# Submit Login Information
#
# prepare function argument(s)
var_login <- "login_example" # character | 
var_passwd <- "passwd_example" # character | 
var_remember <- "remember_example" # character |  (Optional)
var_g_recaptcha_response <- LoginSubmissionExample_g_recaptcha_response$new("__v_isShallow_example", LoginSubmissionExample_g_recaptcha_response_dep$new(123, 123), "__v_isRef_example", "_rawValue_example", "_value_example") # LoginSubmissionExampleGRecaptchaResponse |  (Optional)
var_tfa <- "tfa_example" # character | Two Factor Authentication Response. (Optional)

api_instance <- PublicApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$SubmitLogin(var_login, var_passwd, remember = var_remember, g_recaptcha_response = var_g_recaptcha_response, tfa = var_tfadata_file = "result.txt")
result <- api_instance$SubmitLogin(var_login, var_passwd, remember = var_remember, g_recaptcha_response = var_g_recaptcha_response, tfa = var_tfa)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **login** | **character**|  | 
 **passwd** | **character**|  | 
 **remember** | **character**|  | [optional] 
 **g_recaptcha_response** | [**LoginSubmissionExampleGRecaptchaResponse**](LoginSubmissionExample_g_recaptcha_response.md)|  | [optional] 
 **tfa** | **character**| Two Factor Authentication Response. | [optional] 

### Return type

[**LoginSuccessResponse**](LoginSuccessResponse.md)

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

# **SubmitSignup**
> SubmitSignup(login_submission_example = var.login_submission_example)

Submit Signup Information

Creates a new account in our system using the provided information.

### Example
```R
library(openapi)

# Submit Signup Information
#
# prepare function argument(s)
var_login_submission_example <- LoginSubmissionExample$new("login_example", "passwd_example", "remember_example", LoginSubmissionExample_g_recaptcha_response$new("__v_isShallow_example", LoginSubmissionExample_g_recaptcha_response_dep$new(123, 123), "__v_isRef_example", "_rawValue_example", "_value_example"), "tfa_example") # LoginSubmissionExample |  (Optional)

api_instance <- PublicApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$SubmitSignup(login_submission_example = var_login_submission_example)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **login_submission_example** | [**LoginSubmissionExample**](LoginSubmissionExample.md)|  | [optional] 

### Return type

void (empty response body)

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

