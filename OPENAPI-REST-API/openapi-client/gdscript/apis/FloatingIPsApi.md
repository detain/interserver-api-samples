<a name="__pageTop"></a>
# FloatingIPsApi   { #FloatingIPsApi }


All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_floating_ip**](#add_floating_ip) | **POST** `/floating_ips/order` | Place Floating IP Order
[**floating_ips_cancel**](#floating_ips_cancel) | **DELETE** `/floating_ips/{id}` | Cancel Floating IP
[**get_floating_ip_info**](#get_floating_ip_info) | **GET** `/floating_ips/{id}` | View Floating IP
[**get_floating_ip_invoices**](#get_floating_ip_invoices) | **GET** `/floating_ips/{id}/invoices` | Get Floating IP Invoices
[**get_floating_ips_list**](#get_floating_ips_list) | **GET** `/floating_ips` | List Floating IPs
[**get_floating_ips_welcome_email**](#get_floating_ips_welcome_email) | **GET** `/floating_ips/{id}/welcome_email` | Resend Floating IPs Welcome Email
[**get_new_floating_ip**](#get_new_floating_ip) | **GET** `/floating_ips/order` | Get Floating IP Ordering Information
[**post_floating_ips_change_ip**](#post_floating_ips_change_ip) | **POST** `/floating_ips/{id}/change_ip` | Change Floating IP Target
[**put_floating_ips**](#put_floating_ips) | **PUT** `/floating_ips/order` | Validate Floating IP Order
[**update_floating_ip_info**](#update_floating_ip_info) | **POST** `/floating_ips/{id}` | Update Floating IP

# **add_floating_ip**   { #add_floating_ip }
<a name="add_floating_ip"></a>

> `add_floating_ip( on_success: Callable, on_failure: Callable)`

Place Floating IP Order

Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.

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
var api = FloatingIPsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = FloatingIPsApi.new(config, client)


# Invoke an endpoint
api.add_floating_ip(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "add_floating_ip", response)
		assert(response.data is ServiceOrderPostResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **floating_ips_cancel**   { #floating_ips_cancel }
<a name="floating_ips_cancel"></a>

> `floating_ips_cancel(id: int, on_success: Callable, on_failure: Callable)`

Cancel Floating IP

Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.

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
var api = FloatingIPsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = FloatingIPsApi.new(config, client)


# Invoke an endpoint
api.floating_ips_cancel(
	# id: int   Eg: 56
	# The Floating IP service ID. Use the ID from `GET /floating_ips`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "floating_ips_cancel", response)
		assert(response.data is floating_ipsCancel_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_floating_ip_info**   { #get_floating_ip_info }
<a name="get_floating_ip_info"></a>

> `get_floating_ip_info(id: int, on_success: Callable, on_failure: Callable)`

View Floating IP

Returns detailed information about a specific Floating IP service including its current target IP assignment.

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
var api = FloatingIPsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = FloatingIPsApi.new(config, client)


# Invoke an endpoint
api.get_floating_ip_info(
	# id: int   Eg: 56
	# The Floating IP service ID. Use the ID from `GET /floating_ips`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_floating_ip_info", response)
		assert(response.data is )
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_floating_ip_invoices**   { #get_floating_ip_invoices }
<a name="get_floating_ip_invoices"></a>

> `get_floating_ip_invoices(id: int, on_success: Callable, on_failure: Callable)`

Get Floating IP Invoices

Returns the billing invoices associated with this Floating IP service.

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
var api = FloatingIPsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = FloatingIPsApi.new(config, client)


# Invoke an endpoint
api.get_floating_ip_invoices(
	# id: int   Eg: 56
	# The Floating IP service ID. Use the ID from `GET /floating_ips`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_floating_ip_invoices", response)
		assert(response.data is ChargeInvoiceRows)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_floating_ips_list**   { #get_floating_ips_list }
<a name="get_floating_ips_list"></a>

> `get_floating_ips_list( on_success: Callable, on_failure: Callable)`

List Floating IPs

Returns all Floating IP services on the account with their current status and assignment details.

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
var api = FloatingIPsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = FloatingIPsApi.new(config, client)


# Invoke an endpoint
api.get_floating_ips_list(
	# On Success
	func(response):
		prints("Success!", "get_floating_ips_list", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_floating_ips_welcome_email**   { #get_floating_ips_welcome_email }
<a name="get_floating_ips_welcome_email"></a>

> `get_floating_ips_welcome_email(id: int, on_success: Callable, on_failure: Callable)`

Resend Floating IPs Welcome Email

Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.

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
var api = FloatingIPsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = FloatingIPsApi.new(config, client)


# Invoke an endpoint
api.get_floating_ips_welcome_email(
	# id: int   Eg: 56
	# The Floating IP service ID. Use the ID from `GET /floating_ips`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_floating_ips_welcome_email", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_new_floating_ip**   { #get_new_floating_ip }
<a name="get_new_floating_ip"></a>

> `get_new_floating_ip( on_success: Callable, on_failure: Callable)`

Get Floating IP Ordering Information

Retrieves available options and pricing for ordering a new Floating IP.

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
var api = FloatingIPsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = FloatingIPsApi.new(config, client)


# Invoke an endpoint
api.get_new_floating_ip(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_new_floating_ip", response)
		assert(response.data is )
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_floating_ips_change_ip**   { #post_floating_ips_change_ip }
<a name="post_floating_ips_change_ip"></a>

> `post_floating_ips_change_ip(id: int,some_ipnull: String, on_success: Callable, on_failure: Callable)`

Change Floating IP Target

Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.

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
var api = FloatingIPsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = FloatingIPsApi.new(config, client)


# Invoke an endpoint
api.post_floating_ips_change_ip(
	# id: int   Eg: 56
	# The Floating IP service ID. Use the ID from `GET /floating_ips`.
	id,
	# some_ipnull: String = ""   Eg: some_ipnull_example
	# IP Address
	some_ipnull,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_floating_ips_change_ip", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **put_floating_ips**   { #put_floating_ips }
<a name="put_floating_ips"></a>

> `put_floating_ips( on_success: Callable, on_failure: Callable)`

Validate Floating IP Order

Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.

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
var api = FloatingIPsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = FloatingIPsApi.new(config, client)


# Invoke an endpoint
api.put_floating_ips(
	# On Success
	func(response):
		prints("Success!", "put_floating_ips", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_floating_ip_info**   { #update_floating_ip_info }
<a name="update_floating_ip_info"></a>

> `update_floating_ip_info(id: String, on_success: Callable, on_failure: Callable)`

Update Floating IP

Updates settings on a Floating IP service, such as its label or configuration metadata.

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
var api = FloatingIPsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = FloatingIPsApi.new(config, client)


# Invoke an endpoint
api.update_floating_ip_info(
	# id: String = ""   Eg: id_example
	# The Floating IP service ID. Use the ID from `GET /floating_ips`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_floating_ip_info", response)
		assert(response.data is SuccessTextResponse)
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

