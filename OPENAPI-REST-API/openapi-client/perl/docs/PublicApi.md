# OpenAPIClient::PublicApi

## Load the API package
```perl
use OpenAPIClient::Object::PublicApi;
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_captcha**](PublicApi.md#get_captcha) | **GET** /captcha | Get Captcha Challenge
[**get_countries**](PublicApi.md#get_countries) | **GET** /account/countries | Get Countries
[**get_info**](PublicApi.md#get_info) | **GET** /info | Get Server Info
[**get_login_info**](PublicApi.md#get_login_info) | **GET** /login | Get Login Info
[**get_mp_servers**](PublicApi.md#get_mp_servers) | **GET** /buy_now_servers_list | List Marketplace Servers
[**get_oauth_redirect**](PublicApi.md#get_oauth_redirect) | **GET** /oauth | Get OAuth Redirect URL
[**get_timezones**](PublicApi.md#get_timezones) | **GET** /account/timezones | Get Available Timezones
[**patch_oauth_two_factor**](PublicApi.md#patch_oauth_two_factor) | **PATCH** /oauth | Complete OAuth Two-Factor Verification
[**ping_server**](PublicApi.md#ping_server) | **GET** /ping | Ping Server
[**post_oauth_callback**](PublicApi.md#post_oauth_callback) | **POST** /oauth | OAuth Callback
[**submit_login**](PublicApi.md#submit_login) | **POST** /login | Submit Login Information
[**submit_signup**](PublicApi.md#submit_signup) | **POST** /signup | Submit Signup Information


# **get_captcha**
> CaptchaResponse get_captcha()

Get Captcha Challenge

Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::PublicApi;
my $api_instance = OpenAPIClient::PublicApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->get_captcha();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling PublicApi->get_captcha: $@\n";
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

# **get_countries**
> object get_countries(fetch_by => $fetch_by)

Get Countries

Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::PublicApi;
my $api_instance = OpenAPIClient::PublicApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $fetch_by = "fetch_by_example"; # string | Get countries by iso2 or iso3 or numcode

eval {
    my $result = $api_instance->get_countries(fetch_by => $fetch_by);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling PublicApi->get_countries: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fetch_by** | **string**| Get countries by iso2 or iso3 or numcode | [optional] 

### Return type

**object**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_info**
> ServicesInfo get_info()

Get Server Info

Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::PublicApi;
my $api_instance = OpenAPIClient::PublicApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->get_info();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling PublicApi->get_info: $@\n";
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

# **get_login_info**
> LoginInfo get_login_info()

Get Login Info

Gets the various pieces of information useful for generating a login page.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::PublicApi;
my $api_instance = OpenAPIClient::PublicApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->get_login_info();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling PublicApi->get_login_info: $@\n";
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

# **get_mp_servers**
> BuyItNowList get_mp_servers()

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::PublicApi;
my $api_instance = OpenAPIClient::PublicApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->get_mp_servers();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling PublicApi->get_mp_servers: $@\n";
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

# **get_oauth_redirect**
> GetOauthRedirect200Response get_oauth_redirect(provider => $provider)

Get OAuth Redirect URL

Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::PublicApi;
my $api_instance = OpenAPIClient::PublicApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $provider = "provider_example"; # string | The OAuth provider name (e.g. `Google`).

eval {
    my $result = $api_instance->get_oauth_redirect(provider => $provider);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling PublicApi->get_oauth_redirect: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **string**| The OAuth provider name (e.g. &#x60;Google&#x60;). | 

### Return type

[**GetOauthRedirect200Response**](GetOauthRedirect200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_timezones**
> ARRAY[string] get_timezones()

Get Available Timezones

Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::PublicApi;
my $api_instance = OpenAPIClient::PublicApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->get_timezones();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling PublicApi->get_timezones: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**ARRAY[string]**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **patch_oauth_two_factor**
> PatchOauthTwoFactor200Response patch_oauth_two_factor(patch_oauth_two_factor_request => $patch_oauth_two_factor_request)

Complete OAuth Two-Factor Verification

Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::PublicApi;
my $api_instance = OpenAPIClient::PublicApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $patch_oauth_two_factor_request = OpenAPIClient::Object::PatchOauthTwoFactorRequest->new(); # PatchOauthTwoFactorRequest | 

eval {
    my $result = $api_instance->patch_oauth_two_factor(patch_oauth_two_factor_request => $patch_oauth_two_factor_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling PublicApi->patch_oauth_two_factor: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **patch_oauth_two_factor_request** | [**PatchOauthTwoFactorRequest**](PatchOauthTwoFactorRequest.md)|  | 

### Return type

[**PatchOauthTwoFactor200Response**](PatchOauthTwoFactor200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ping_server**
> string ping_server()

Ping Server

Performs a single ping/pong request to let you know if the server is up.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::PublicApi;
my $api_instance = OpenAPIClient::PublicApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->ping_server();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling PublicApi->ping_server: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**string**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_oauth_callback**
> PostOauthCallback200Response post_oauth_callback(provider => $provider, post_oauth_callback_request => $post_oauth_callback_request)

OAuth Callback

Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::PublicApi;
my $api_instance = OpenAPIClient::PublicApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $provider = "provider_example"; # string | The OAuth provider name (e.g. `Google`).
my $post_oauth_callback_request = OpenAPIClient::Object::PostOauthCallbackRequest->new(); # PostOauthCallbackRequest | 

eval {
    my $result = $api_instance->post_oauth_callback(provider => $provider, post_oauth_callback_request => $post_oauth_callback_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling PublicApi->post_oauth_callback: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **string**| The OAuth provider name (e.g. &#x60;Google&#x60;). | 
 **post_oauth_callback_request** | [**PostOauthCallbackRequest**](PostOauthCallbackRequest.md)|  | [optional] 

### Return type

[**PostOauthCallback200Response**](PostOauthCallback200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **submit_login**
> LoginSuccessResponse submit_login(login => $login, passwd => $passwd, remember => $remember, g_recaptcha_response => $g_recaptcha_response, tfa => $tfa)

Submit Login Information

Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::PublicApi;
my $api_instance = OpenAPIClient::PublicApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $login = "login_example"; # string | 
my $passwd = "passwd_example"; # string | 
my $remember = "remember_example"; # string | 
my $g_recaptcha_response = new OpenAPIClient.LoginSubmissionExampleGRecaptchaResponse(); # LoginSubmissionExampleGRecaptchaResponse | 
my $tfa = "tfa_example"; # string | Two Factor Authentication Response.

eval {
    my $result = $api_instance->submit_login(login => $login, passwd => $passwd, remember => $remember, g_recaptcha_response => $g_recaptcha_response, tfa => $tfa);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling PublicApi->submit_login: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **login** | **string**|  | 
 **passwd** | **string**|  | 
 **remember** | **string**|  | [optional] 
 **g_recaptcha_response** | [**LoginSubmissionExampleGRecaptchaResponse**](LoginSubmissionExampleGRecaptchaResponse.md)|  | [optional] 
 **tfa** | **string**| Two Factor Authentication Response. | [optional] 

### Return type

[**LoginSuccessResponse**](LoginSuccessResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **submit_signup**
> submit_signup(login_submission_example => $login_submission_example)

Submit Signup Information

Creates a new account in our system using the provided information.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::PublicApi;
my $api_instance = OpenAPIClient::PublicApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $login_submission_example = OpenAPIClient::Object::LoginSubmissionExample->new(); # LoginSubmissionExample | 

eval {
    $api_instance->submit_signup(login_submission_example => $login_submission_example);
};
if ($@) {
    warn "Exception when calling PublicApi->submit_signup: $@\n";
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

