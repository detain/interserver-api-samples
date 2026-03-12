# SwaggerClient::PublicApi

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
[**patch_oauth_two_factor**](PublicApi.md#patch_oauth_two_factor) | **PATCH** /oauth | Complete OAuth Two-Factor Verification
[**ping_server**](PublicApi.md#ping_server) | **GET** /ping | Ping Server
[**post_oauth_callback**](PublicApi.md#post_oauth_callback) | **POST** /oauth | OAuth Callback
[**post_oauth_callback**](PublicApi.md#post_oauth_callback) | **POST** /oauth | OAuth Callback
[**submit_login**](PublicApi.md#submit_login) | **POST** /login | Submit Login Information
[**submit_login**](PublicApi.md#submit_login) | **POST** /login | Submit Login Information
[**submit_signup**](PublicApi.md#submit_signup) | **POST** /signup | Submit Signup Information

# **get_captcha**
> CaptchaResponse get_captcha

Get Captcha Challenge

Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::PublicApi.new

begin
  #Get Captcha Challenge
  result = api_instance.get_captcha
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling PublicApi->get_captcha: #{e}"
end
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



# **get_countries**
> Object get_countries(opts)

Get Countries

Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::PublicApi.new
opts = { 
  fetch_by: 'fetch_by_example' # String | Get countries by iso2 or iso3 or numcode
}

begin
  #Get Countries
  result = api_instance.get_countries(opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling PublicApi->get_countries: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fetch_by** | **String**| Get countries by iso2 or iso3 or numcode | [optional] 

### Return type

**Object**

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_info**
> ServicesInfo get_info

Get Server Info

Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::PublicApi.new

begin
  #Get Server Info
  result = api_instance.get_info
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling PublicApi->get_info: #{e}"
end
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



# **get_login_info**
> LoginInfo get_login_info

Get Login Info

Gets the various pieces of information useful for generating a login page.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::PublicApi.new

begin
  #Get Login Info
  result = api_instance.get_login_info
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling PublicApi->get_login_info: #{e}"
end
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



# **get_mp_servers**
> BuyItNowList get_mp_servers

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::PublicApi.new

begin
  #List Marketplace Servers
  result = api_instance.get_mp_servers
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling PublicApi->get_mp_servers: #{e}"
end
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



# **get_oauth_redirect**
> InlineResponse2005 get_oauth_redirect(provider)

Get OAuth Redirect URL

Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::PublicApi.new
provider = 'provider_example' # String | The OAuth provider name (e.g. `Google`).


begin
  #Get OAuth Redirect URL
  result = api_instance.get_oauth_redirect(provider)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling PublicApi->get_oauth_redirect: #{e}"
end
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



# **get_timezones**
> Array&lt;String&gt; get_timezones

Get Available Timezones

Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::PublicApi.new

begin
  #Get Available Timezones
  result = api_instance.get_timezones
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling PublicApi->get_timezones: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

**Array&lt;String&gt;**

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **patch_oauth_two_factor**
> InlineResponse2007 patch_oauth_two_factor(body)

Complete OAuth Two-Factor Verification

Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::PublicApi.new
body = SwaggerClient::OauthBody2.new # OauthBody2 | 


begin
  #Complete OAuth Two-Factor Verification
  result = api_instance.patch_oauth_two_factor(body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling PublicApi->patch_oauth_two_factor: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OauthBody2**](OauthBody2.md)|  | 

### Return type

[**InlineResponse2007**](InlineResponse2007.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **patch_oauth_two_factor**
> InlineResponse2007 patch_oauth_two_factor(account_idcode)

Complete OAuth Two-Factor Verification

Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::PublicApi.new
account_id = 56 # Integer | 
code = 'code_example' # String | 


begin
  #Complete OAuth Two-Factor Verification
  result = api_instance.patch_oauth_two_factor(account_idcode)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling PublicApi->patch_oauth_two_factor: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **account_id** | **Integer**|  | 
 **code** | **String**|  | 

### Return type

[**InlineResponse2007**](InlineResponse2007.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **ping_server**
> String ping_server

Ping Server

Performs a single ping/pong request to let you know if the server is up.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::PublicApi.new

begin
  #Ping Server
  result = api_instance.ping_server
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling PublicApi->ping_server: #{e}"
end
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



# **post_oauth_callback**
> InlineResponse2006 post_oauth_callback(provider, opts)

OAuth Callback

Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::PublicApi.new
provider = 'provider_example' # String | The OAuth provider name (e.g. `Google`).
opts = { 
  body: SwaggerClient::OauthBody.new # OauthBody | 
}

begin
  #OAuth Callback
  result = api_instance.post_oauth_callback(provider, opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling PublicApi->post_oauth_callback: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **String**| The OAuth provider name (e.g. &#x60;Google&#x60;). | 
 **body** | [**OauthBody**](OauthBody.md)|  | [optional] 

### Return type

[**InlineResponse2006**](InlineResponse2006.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **post_oauth_callback**
> InlineResponse2006 post_oauth_callback(provider, opts)

OAuth Callback

Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::PublicApi.new
provider = 'provider_example' # String | The OAuth provider name (e.g. `Google`).
opts = { 
  provider2: 'provider_example' # String | 
}

begin
  #OAuth Callback
  result = api_instance.post_oauth_callback(provider, opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling PublicApi->post_oauth_callback: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **String**| The OAuth provider name (e.g. &#x60;Google&#x60;). | 
 **provider2** | **String**|  | [optional] 

### Return type

[**InlineResponse2006**](InlineResponse2006.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **submit_login**
> LoginSuccessResponse submit_login(loginpasswdrememberg_recaptcha_responsetfa)

Submit Login Information

Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::PublicApi.new
login = 'login_example' # String | 
passwd = 'passwd_example' # String | 
remember = 'remember_example' # String | 
g_recaptcha_response = SwaggerClient::LoginSubmissionExampleGrecaptcharesponse.new # LoginSubmissionExampleGrecaptcharesponse | 
tfa = 'tfa_example' # String | 


begin
  #Submit Login Information
  result = api_instance.submit_login(loginpasswdrememberg_recaptcha_responsetfa)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling PublicApi->submit_login: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **login** | **String**|  | 
 **passwd** | **String**|  | 
 **remember** | **String**|  | 
 **g_recaptcha_response** | [**LoginSubmissionExampleGrecaptcharesponse**](.md)|  | 
 **tfa** | **String**|  | 

### Return type

[**LoginSuccessResponse**](LoginSuccessResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json



# **submit_login**
> LoginSuccessResponse submit_login(body)

Submit Login Information

Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::PublicApi.new
body = SwaggerClient::LoginSubmissionExample.new # LoginSubmissionExample | 


begin
  #Submit Login Information
  result = api_instance.submit_login(body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling PublicApi->submit_login: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**LoginSubmissionExample**](LoginSubmissionExample.md)|  | 

### Return type

[**LoginSuccessResponse**](LoginSuccessResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json



# **submit_signup**
> submit_signup(opts)

Submit Signup Information

Creates a new account in our system using the provided information.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::PublicApi.new
opts = { 
  body: SwaggerClient::LoginSubmissionExample.new # LoginSubmissionExample | 
}

begin
  #Submit Signup Information
  api_instance.submit_signup(opts)
rescue SwaggerClient::ApiError => e
  puts "Exception when calling PublicApi->submit_signup: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**LoginSubmissionExample**](LoginSubmissionExample.md)|  | [optional] 

### Return type

nil (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json



