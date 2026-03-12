# PUBLIC_API

All URIs are relative to *https://my.interserver.net/apiv2*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**captcha**](PUBLIC_API.md#captcha) | **Get** /captcha | Get Captcha Challenge
[**countries**](PUBLIC_API.md#countries) | **Get** /account/countries | Get Countries
[**info**](PUBLIC_API.md#info) | **Get** /info | Get Server Info
[**login_info**](PUBLIC_API.md#login_info) | **Get** /login | Get Login Info
[**mp_servers**](PUBLIC_API.md#mp_servers) | **Get** /buy_now_servers_list | List Marketplace Servers
[**oauth_redirect**](PUBLIC_API.md#oauth_redirect) | **Get** /oauth | Get OAuth Redirect URL
[**patch_oauth_two_factor**](PUBLIC_API.md#patch_oauth_two_factor) | **Patch** /oauth | Complete OAuth Two-Factor Verification
[**ping_server**](PUBLIC_API.md#ping_server) | **Get** /ping | Ping Server
[**post_oauth_callback**](PUBLIC_API.md#post_oauth_callback) | **Post** /oauth | OAuth Callback
[**submit_login**](PUBLIC_API.md#submit_login) | **Post** /login | Submit Login Information
[**submit_signup**](PUBLIC_API.md#submit_signup) | **Post** /signup | Submit Signup Information
[**timezones**](PUBLIC_API.md#timezones) | **Get** /account/timezones | Get Available Timezones


# **captcha**
> captcha : detachable CAPTCHA_RESPONSE


Get Captcha Challenge

Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.


### Parameters
This endpoint does not need any parameter.

### Return type

[**CAPTCHA_RESPONSE**](CaptchaResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **countries**
> countries (fetch_by:  detachable STRING_32 ): detachable ANY


Get Countries

Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fetch_by** | **STRING_32**| Get countries by iso2 or iso3 or numcode | [optional] [default to null]

### Return type

[**ANY**](ANY.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **info**
> info : detachable SERVICES_INFO


Get Server Info

Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.


### Parameters
This endpoint does not need any parameter.

### Return type

[**SERVICES_INFO**](ServicesInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **login_info**
> login_info : detachable LOGIN_INFO


Get Login Info

Gets the various pieces of information useful for generating a login page.


### Parameters
This endpoint does not need any parameter.

### Return type

[**LOGIN_INFO**](LoginInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **mp_servers**
> mp_servers : detachable BUY_IT_NOW_LIST


List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.


### Parameters
This endpoint does not need any parameter.

### Return type

[**BUY_IT_NOW_LIST**](BuyItNowList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **oauth_redirect**
> oauth_redirect (provider: STRING_32 ): detachable GET_OAUTH_REDIRECT_200_RESPONSE


Get OAuth Redirect URL

Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **STRING_32**| The OAuth provider name (e.g. &#x60;Google&#x60;). | [default to null]

### Return type

[**GET_OAUTH_REDIRECT_200_RESPONSE**](getOauthRedirect_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **patch_oauth_two_factor**
> patch_oauth_two_factor (patch_oauth_two_factor_request: PATCH_OAUTH_TWO_FACTOR_REQUEST ): detachable PATCH_OAUTH_TWO_FACTOR_200_RESPONSE


Complete OAuth Two-Factor Verification

Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **patch_oauth_two_factor_request** | [**PATCH_OAUTH_TWO_FACTOR_REQUEST**](PATCH_OAUTH_TWO_FACTOR_REQUEST.md)|  | 

### Return type

[**PATCH_OAUTH_TWO_FACTOR_200_RESPONSE**](patchOauthTwoFactor_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ping_server**
> ping_server : detachable STRING_32


Ping Server

Performs a single ping/pong request to let you know if the server is up.


### Parameters
This endpoint does not need any parameter.

### Return type

[**STRING_32**](STRING_32.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_oauth_callback**
> post_oauth_callback (provider: STRING_32 ; post_oauth_callback_request:  detachable POST_OAUTH_CALLBACK_REQUEST ): detachable POST_OAUTH_CALLBACK_200_RESPONSE


OAuth Callback

Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **STRING_32**| The OAuth provider name (e.g. &#x60;Google&#x60;). | [default to null]
 **post_oauth_callback_request** | [**POST_OAUTH_CALLBACK_REQUEST**](POST_OAUTH_CALLBACK_REQUEST.md)|  | [optional] 

### Return type

[**POST_OAUTH_CALLBACK_200_RESPONSE**](postOauthCallback_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **submit_login**
> submit_login (login: STRING_32 ; passwd: STRING_32 ; remember:  detachable STRING_32 ; g_recaptcha_response:  detachable LOGIN_SUBMISSION_EXAMPLE_G_RECAPTCHA_RESPONSE ; tfa:  detachable STRING_32 ): detachable LOGIN_SUCCESS_RESPONSE


Submit Login Information

Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **login** | **STRING_32**|  | [default to null]
 **passwd** | **STRING_32**|  | [default to null]
 **remember** | **STRING_32**|  | [optional] [default to null]
 **g_recaptcha_response** | [**LOGIN_SUBMISSION_EXAMPLE_G_RECAPTCHA_RESPONSE**](LoginSubmissionExample_g_recaptcha_response.md)|  | [optional] [default to null]
 **tfa** | **STRING_32**| Two Factor Authentication Response. | [optional] [default to null]

### Return type

[**LOGIN_SUCCESS_RESPONSE**](LoginSuccessResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **submit_signup**
> submit_signup (login_submission_example:  detachable LOGIN_SUBMISSION_EXAMPLE )


Submit Signup Information

Creates a new account in our system using the provided information.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **login_submission_example** | [**LOGIN_SUBMISSION_EXAMPLE**](LOGIN_SUBMISSION_EXAMPLE.md)|  | [optional] 

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **timezones**
> timezones : detachable LIST [STRING_32]


Get Available Timezones

Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.


### Parameters
This endpoint does not need any parameter.

### Return type

[**LIST [STRING_32]**](STRING_32.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

