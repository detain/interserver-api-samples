<a name="__pageTop"></a>
# WebhostingApi   { #WebhostingApi }


All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_website**](#add_website) | **POST** `/websites/order` | Place Website Order
[**get_new_website**](#get_new_website) | **GET** `/websites/order` | Website Ordering Information
[**get_website_buy_ip**](#get_website_buy_ip) | **GET** `/websites/{id}/buy_ip` | Get Website IP Information
[**get_website_info**](#get_website_info) | **GET** `/websites/{id}` | Get Website Order
[**get_website_invoices**](#get_website_invoices) | **GET** `/websites/{id}/invoices` | Get Website Invoices
[**get_website_list**](#get_website_list) | **GET** `/websites` | Get Website Listing
[**get_websites_backups**](#get_websites_backups) | **GET** `/websites/{id}/backups` | Get Website Backups
[**get_websites_login**](#get_websites_login) | **GET** `/websites/{id}/login` | Hosting Panel Auto Login
[**get_websites_welcome_email**](#get_websites_welcome_email) | **GET** `/websites/{id}/welcome_email` | Resend Website Welcome Email
[**gett_website_reverse_dns**](#gett_website_reverse_dns) | **GET** `/websites/{id}/reverse_dns` | Get Website Reverse DNS
[**post_website_buy_ip**](#post_website_buy_ip) | **POST** `/websites/{id}/buy_ip` | Update Website IP DNS
[**post_website_migration**](#post_website_migration) | **POST** `/websites/{id}/migration` | Request Website Migration
[**post_websites_reverse_dns**](#post_websites_reverse_dns) | **POST** `/websites/{id}/reverse_dns` | Update Website Reverse DNS
[**put_websites**](#put_websites) | **PUT** `/websites/order` | Validate Webhosting Order
[**update_website_info**](#update_website_info) | **POST** `/websites/{id}` | Update Website Order
[**webhosting_cancel**](#webhosting_cancel) | **DELETE** `/websites/{id}` | Cancel Website

# **add_website**   { #add_website }
<a name="add_website"></a>

> `add_website( on_success: Callable, on_failure: Callable)`

Place Website Order

Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.

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
var api = WebhostingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = WebhostingApi.new(config, client)


# Invoke an endpoint
api.add_website(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "add_website", response)
		assert(response.data is ServiceOrderPostResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_new_website**   { #get_new_website }
<a name="get_new_website"></a>

> `get_new_website( on_success: Callable, on_failure: Callable)`

Website Ordering Information

Retrieves available webhosting plans and pricing for ordering.

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
var api = WebhostingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = WebhostingApi.new(config, client)


# Invoke an endpoint
api.get_new_website(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_new_website", response)
		assert(response.data is WebsitesOrder)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_website_buy_ip**   { #get_website_buy_ip }
<a name="get_website_buy_ip"></a>

> `get_website_buy_ip(id: int, on_success: Callable, on_failure: Callable)`

Get Website IP Information

Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.

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
var api = WebhostingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = WebhostingApi.new(config, client)


# Invoke an endpoint
api.get_website_buy_ip(
	# id: int   Eg: 56
	# The website service ID. Use `website_id` from `GET /websites`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_website_buy_ip", response)
		assert(response.data is getWebsiteBuyIp_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_website_info**   { #get_website_info }
<a name="get_website_info"></a>

> `get_website_info(id: int, on_success: Callable, on_failure: Callable)`

Get Website Order

Returns detailed information about a specific webhosting order including its domain, plan, and status.

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
var api = WebhostingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = WebhostingApi.new(config, client)


# Invoke an endpoint
api.get_website_info(
	# id: int   Eg: 56
	# The website service ID. Use `website_id` from `GET /websites`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_website_info", response)
		assert(response.data is Website)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_website_invoices**   { #get_website_invoices }
<a name="get_website_invoices"></a>

> `get_website_invoices(id: int, on_success: Callable, on_failure: Callable)`

Get Website Invoices

Returns the billing invoices associated with this webhosting service.

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
var api = WebhostingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = WebhostingApi.new(config, client)


# Invoke an endpoint
api.get_website_invoices(
	# id: int   Eg: 56
	# The website service ID. Use `website_id` from `GET /websites`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_website_invoices", response)
		assert(response.data is ChargeInvoiceRows)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_website_list**   { #get_website_list }
<a name="get_website_list"></a>

> `get_website_list( on_success: Callable, on_failure: Callable)`

Get Website Listing

Gets a listing of your webhosting orders and service details.

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
var api = WebhostingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = WebhostingApi.new(config, client)


# Invoke an endpoint
api.get_website_list(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_website_list", response)
		assert(response.data is WebsiteRow)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_websites_backups**   { #get_websites_backups }
<a name="get_websites_backups"></a>

> `get_websites_backups(id: int, on_success: Callable, on_failure: Callable)`

Get Website Backups

Gets a list of the backups that exist for a website and their sizes.

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
var api = WebhostingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = WebhostingApi.new(config, client)


# Invoke an endpoint
api.get_websites_backups(
	# id: int   Eg: 56
	# The website service ID. Use `website_id` from `GET /websites`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_websites_backups", response)
		assert(response.data is WebsiteBackups)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_websites_login**   { #get_websites_login }
<a name="get_websites_login"></a>

> `get_websites_login(id: int, on_success: Callable, on_failure: Callable)`

Hosting Panel Auto Login

Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.

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
var api = WebhostingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = WebhostingApi.new(config, client)


# Invoke an endpoint
api.get_websites_login(
	# id: int   Eg: 56
	# The website service ID. Use `website_id` from `GET /websites`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_websites_login", response)
		assert(response.data is WebsiteLoginResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_websites_welcome_email**   { #get_websites_welcome_email }
<a name="get_websites_welcome_email"></a>

> `get_websites_welcome_email(id: int, on_success: Callable, on_failure: Callable)`

Resend Website Welcome Email

Resends the welcome email containing hosting credentials and panel access details for the webhosting order.

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
var api = WebhostingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = WebhostingApi.new(config, client)


# Invoke an endpoint
api.get_websites_welcome_email(
	# id: int   Eg: 56
	# The website service ID. Use `website_id` from `GET /websites`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_websites_welcome_email", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **gett_website_reverse_dns**   { #gett_website_reverse_dns }
<a name="gett_website_reverse_dns"></a>

> `gett_website_reverse_dns(id: int, on_success: Callable, on_failure: Callable)`

Get Website Reverse DNS

Returns the current reverse DNS (PTR record) entries for the website's IP addresses.

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
var api = WebhostingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = WebhostingApi.new(config, client)


# Invoke an endpoint
api.gett_website_reverse_dns(
	# id: int   Eg: 56
	# The website service ID. Use `website_id` from `GET /websites`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "gett_website_reverse_dns", response)
		assert(response.data is ReverseDnsEntries)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_website_buy_ip**   { #post_website_buy_ip }
<a name="post_website_buy_ip"></a>

> `post_website_buy_ip(id: int,postWebsiteBuyIpRequest: PostWebsiteBuyIpRequest, on_success: Callable, on_failure: Callable)`

Update Website IP DNS

Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.

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
var api = WebhostingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = WebhostingApi.new(config, client)

var postWebsiteBuyIpRequest = PostWebsiteBuyIpRequest.new()
# … fill model postWebsiteBuyIpRequest with data

# Invoke an endpoint
api.post_website_buy_ip(
	# id: int   Eg: 56
	# The website service ID. Use `website_id` from `GET /websites`.
	id,
	# postWebsiteBuyIpRequest: PostWebsiteBuyIpRequest
	postWebsiteBuyIpRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_website_buy_ip", response)
		assert(response.data is postWebsiteBuyIp_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_website_migration**   { #post_website_migration }
<a name="post_website_migration"></a>

> `post_website_migration(id: int,postWebsiteMigrationRequest: PostWebsiteMigrationRequest, on_success: Callable, on_failure: Callable)`

Request Website Migration

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.

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
var api = WebhostingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = WebhostingApi.new(config, client)

var postWebsiteMigrationRequest = PostWebsiteMigrationRequest.new()
# … fill model postWebsiteMigrationRequest with data

# Invoke an endpoint
api.post_website_migration(
	# id: int   Eg: 56
	# The website service ID. Use `website_id` from `GET /websites`.
	id,
	# postWebsiteMigrationRequest: PostWebsiteMigrationRequest
	postWebsiteMigrationRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_website_migration", response)
		assert(response.data is postWebsiteMigration_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_websites_reverse_dns**   { #post_websites_reverse_dns }
<a name="post_websites_reverse_dns"></a>

> `post_websites_reverse_dns(id: int,reverseDnsEntries: ReverseDnsEntries, on_success: Callable, on_failure: Callable)`

Update Website Reverse DNS

Updates the reverse DNS entries for each of the IP addresses for the website.

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
var api = WebhostingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = WebhostingApi.new(config, client)

var reverseDnsEntries = ReverseDnsEntries.new()
# … fill model reverseDnsEntries with data

# Invoke an endpoint
api.post_websites_reverse_dns(
	# id: int   Eg: 56
	# The website service ID. Use `website_id` from `GET /websites`.
	id,
	# reverseDnsEntries: ReverseDnsEntries
	reverseDnsEntries,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_websites_reverse_dns", response)
		assert(response.data is TextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **put_websites**   { #put_websites }
<a name="put_websites"></a>

> `put_websites( on_success: Callable, on_failure: Callable)`

Validate Webhosting Order

Validates a webhosting order before placing it.

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
var api = WebhostingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = WebhostingApi.new(config, client)


# Invoke an endpoint
api.put_websites(
	# On Success
	func(response):
		prints("Success!", "put_websites", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_website_info**   { #update_website_info }
<a name="update_website_info"></a>

> `update_website_info(id: String, on_success: Callable, on_failure: Callable)`

Update Website Order

Updates settings on a webhosting order.

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
var api = WebhostingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = WebhostingApi.new(config, client)


# Invoke an endpoint
api.update_website_info(
	# id: String = ""   Eg: id_example
	# The website service ID. Use `website_id` from `GET /websites`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_website_info", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **webhosting_cancel**   { #webhosting_cancel }
<a name="webhosting_cancel"></a>

> `webhosting_cancel(id: String, on_success: Callable, on_failure: Callable)`

Cancel Website

Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.

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
var api = WebhostingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = WebhostingApi.new(config, client)


# Invoke an endpoint
api.webhosting_cancel(
	# id: String = ""   Eg: 123
	# The website service ID. Use `website_id` from `GET /websites`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "webhosting_cancel", response)
		assert(response.data is webhostingCancel_200_response)
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

