<a name="__pageTop"></a>
# PublicApi   { #PublicApi }


All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_captcha**](#get_captcha) | **GET** `/captcha` | Get Captcha Challenge
[**get_countries**](#get_countries) | **GET** `/account/countries` | Get Countries
[**get_info**](#get_info) | **GET** `/info` | Get Server Info
[**get_login_info**](#get_login_info) | **GET** `/login` | Get Login Info
[**get_mp_servers**](#get_mp_servers) | **GET** `/buy_now_servers_list` | List Marketplace Servers
[**get_oauth_redirect**](#get_oauth_redirect) | **GET** `/oauth` | Get OAuth Redirect URL
[**get_timezones**](#get_timezones) | **GET** `/account/timezones` | Get Available Timezones
[**patch_oauth_two_factor**](#patch_oauth_two_factor) | **PATCH** `/oauth` | Complete OAuth Two-Factor Verification
[**ping_server**](#ping_server) | **GET** `/ping` | Ping Server
[**post_oauth_callback**](#post_oauth_callback) | **POST** `/oauth` | OAuth Callback
[**submit_login**](#submit_login) | **POST** `/login` | Submit Login Information
[**submit_signup**](#submit_signup) | **POST** `/signup` | Submit Signup Information

# **get_captcha**   { #get_captcha }
<a name="get_captcha"></a>

> `get_captcha( on_success: Callable, on_failure: Callable)`

Get Captcha Challenge

Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = PublicApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = PublicApi.new(config, client)


# Invoke an endpoint
api.get_captcha(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_captcha", response)
		assert(response.data is CaptchaResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_countries**   { #get_countries }
<a name="get_countries"></a>

> `get_countries(fetchBy = "", on_success: Callable, on_failure: Callable)`

Get Countries

Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = PublicApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = PublicApi.new(config, client)


# Invoke an endpoint
api.get_countries(
	# fetchBy: String = ""   Eg: fetchBy_example
	# Get countries by iso2 or iso3 or numcode
	fetchBy,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_countries", response)
		assert(response.data is )
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_info**   { #get_info }
<a name="get_info"></a>

> `get_info( on_success: Callable, on_failure: Callable)`

Get Server Info

Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = PublicApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = PublicApi.new(config, client)


# Invoke an endpoint
api.get_info(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_info", response)
		assert(response.data is ServicesInfo)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_login_info**   { #get_login_info }
<a name="get_login_info"></a>

> `get_login_info( on_success: Callable, on_failure: Callable)`

Get Login Info

Gets the various pieces of information useful for generating a login page.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = PublicApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = PublicApi.new(config, client)


# Invoke an endpoint
api.get_login_info(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_login_info", response)
		assert(response.data is LoginInfo)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_mp_servers**   { #get_mp_servers }
<a name="get_mp_servers"></a>

> `get_mp_servers( on_success: Callable, on_failure: Callable)`

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = PublicApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = PublicApi.new(config, client)


# Invoke an endpoint
api.get_mp_servers(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_mp_servers", response)
		assert(response.data is BuyItNowList)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_oauth_redirect**   { #get_oauth_redirect }
<a name="get_oauth_redirect"></a>

> `get_oauth_redirect(provider: String, on_success: Callable, on_failure: Callable)`

Get OAuth Redirect URL

Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = PublicApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = PublicApi.new(config, client)


# Invoke an endpoint
api.get_oauth_redirect(
	# provider: String = ""   Eg: provider_example
	# The OAuth provider name (e.g. `Google`).
	provider,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_oauth_redirect", response)
		assert(response.data is getOauthRedirect_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_timezones**   { #get_timezones }
<a name="get_timezones"></a>

> `get_timezones( on_success: Callable, on_failure: Callable)`

Get Available Timezones

Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = PublicApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = PublicApi.new(config, client)


# Invoke an endpoint
api.get_timezones(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_timezones", response)
		assert(response.data is string)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **patch_oauth_two_factor**   { #patch_oauth_two_factor }
<a name="patch_oauth_two_factor"></a>

> `patch_oauth_two_factor(patchOauthTwoFactorRequest: PatchOauthTwoFactorRequest, on_success: Callable, on_failure: Callable)`

Complete OAuth Two-Factor Verification

Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = PublicApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = PublicApi.new(config, client)

var patchOauthTwoFactorRequest = PatchOauthTwoFactorRequest.new()
# … fill model patchOauthTwoFactorRequest with data

# Invoke an endpoint
api.patch_oauth_two_factor(
	# patchOauthTwoFactorRequest: PatchOauthTwoFactorRequest
	patchOauthTwoFactorRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "patch_oauth_two_factor", response)
		assert(response.data is patchOauthTwoFactor_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **ping_server**   { #ping_server }
<a name="ping_server"></a>

> `ping_server( on_success: Callable, on_failure: Callable)`

Ping Server

Performs a single ping/pong request to let you know if the server is up.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = PublicApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = PublicApi.new(config, client)


# Invoke an endpoint
api.ping_server(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "ping_server", response)
		assert(response.data is string)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_oauth_callback**   { #post_oauth_callback }
<a name="post_oauth_callback"></a>

> `post_oauth_callback(provider: String,postOauthCallbackRequest = null, on_success: Callable, on_failure: Callable)`

OAuth Callback

Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = PublicApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = PublicApi.new(config, client)

var postOauthCallbackRequest = PostOauthCallbackRequest.new()
# … fill model postOauthCallbackRequest with data

# Invoke an endpoint
api.post_oauth_callback(
	# provider: String = ""   Eg: provider_example
	# The OAuth provider name (e.g. `Google`).
	provider,
	# postOauthCallbackRequest: PostOauthCallbackRequest
	postOauthCallbackRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_oauth_callback", response)
		assert(response.data is postOauthCallback_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **submit_login**   { #submit_login }
<a name="submit_login"></a>

> `submit_login(login: String,passwd: String,remember = "",gRecaptchaResponse = null,tfa = "", on_success: Callable, on_failure: Callable)`

Submit Login Information

Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = PublicApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = PublicApi.new(config, client)


# Invoke an endpoint
api.submit_login(
	# login: String = ""   Eg: login_example
	login,
	# passwd: String = ""   Eg: passwd_example
	passwd,
	# remember: String = ""   Eg: remember_example
	remember,
	# gRecaptchaResponse: LoginSubmissionExampleGRecaptchaResponse
	gRecaptchaResponse,
	# tfa: String = ""   Eg: tfa_example
	# Two Factor Authentication Response.
	tfa,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "submit_login", response)
		assert(response.data is LoginSuccessResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **submit_signup**   { #submit_signup }
<a name="submit_signup"></a>

> `submit_signup(loginSubmissionExample = null, on_success: Callable, on_failure: Callable)`

Submit Signup Information

Creates a new account in our system using the provided information.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = PublicApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = PublicApi.new(config, client)

var loginSubmissionExample = LoginSubmissionExample.new()
# … fill model loginSubmissionExample with data

# Invoke an endpoint
api.submit_signup(
	# loginSubmissionExample: LoginSubmissionExample   Eg: {"login":"user@domain.com","passwd":"mypassword","remember":"true","g-recaptcha-response":{"__v_isShallow":false,"dep":{"w":0,"n":0},"__v_isRef":true,"_rawValue":"zzzzz","_value":"zzzzz"}}
	loginSubmissionExample,
	# On Success
	func(response):
		prints("Success!", "submit_signup", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```


### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), 
[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth), 
[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)

[[Back to top]](#__pageTop) \
[[Back to API list]](../README.md#documentation-for-api-endpoints) \
[[Back to Model list]](../README.md#documentation-for-models) \
[[Back to README]](../README.md) \

