<a name="__pageTop"></a>
# SSLCertificatesApi   { #SSLCertificatesApi }


All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_ssl**](#add_ssl) | **POST** `/ssl/order` | Place SSL Cert Order
[**get_new_ssl**](#get_new_ssl) | **GET** `/ssl/order` | SSL Cert Ordering Information
[**get_ssl_info**](#get_ssl_info) | **GET** `/ssl/{id}` | Get SSL Cert Info
[**get_ssl_invoices**](#get_ssl_invoices) | **GET** `/ssl/{id}/invoices` | Get SSL Cert Invoices
[**get_ssl_list**](#get_ssl_list) | **GET** `/ssl` | List SSL Certs
[**get_ssl_welcome_email**](#get_ssl_welcome_email) | **GET** `/ssl/{id}/welcome_email` | Resend SSL Welcome Email
[**put_ssl**](#put_ssl) | **PUT** `/ssl/order` | Validate SSL Cert Order
[**ssl_cancel**](#ssl_cancel) | **DELETE** `/ssl/{id}` | Cancel SSL Certificate Service
[**update_ssl_info**](#update_ssl_info) | **POST** `/ssl/{id}` | Update SSL Cert Order

# **add_ssl**   { #add_ssl }
<a name="add_ssl"></a>

> `add_ssl( on_success: Callable, on_failure: Callable)`

Place SSL Cert Order

Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.

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
var api = SSLCertificatesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = SSLCertificatesApi.new(config, client)


# Invoke an endpoint
api.add_ssl(
	# On Success
	func(response):
		prints("Success!", "add_ssl", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_new_ssl**   { #get_new_ssl }
<a name="get_new_ssl"></a>

> `get_new_ssl( on_success: Callable, on_failure: Callable)`

SSL Cert Ordering Information

Retrieves available SSL certificate types and pricing for ordering.

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
var api = SSLCertificatesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = SSLCertificatesApi.new(config, client)


# Invoke an endpoint
api.get_new_ssl(
	# On Success
	func(response):
		prints("Success!", "get_new_ssl", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_ssl_info**   { #get_ssl_info }
<a name="get_ssl_info"></a>

> `get_ssl_info(id: int, on_success: Callable, on_failure: Callable)`

Get SSL Cert Info

Returns detailed information about a specific SSL certificate including its domain and expiration.

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
var api = SSLCertificatesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = SSLCertificatesApi.new(config, client)


# Invoke an endpoint
api.get_ssl_info(
	# id: int   Eg: 56
	# SSL certificate ID number.
	id,
	# On Success
	func(response):
		prints("Success!", "get_ssl_info", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_ssl_invoices**   { #get_ssl_invoices }
<a name="get_ssl_invoices"></a>

> `get_ssl_invoices(id: int, on_success: Callable, on_failure: Callable)`

Get SSL Cert Invoices

Returns the billing invoices associated with this SSL certificate.

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
var api = SSLCertificatesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = SSLCertificatesApi.new(config, client)


# Invoke an endpoint
api.get_ssl_invoices(
	# id: int   Eg: 56
	# SSL Cert ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_ssl_invoices", response)
		assert(response.data is ChargeInvoiceRows)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_ssl_list**   { #get_ssl_list }
<a name="get_ssl_list"></a>

> `get_ssl_list( on_success: Callable, on_failure: Callable)`

List SSL Certs

Returns all SSL certificate services on the account with their current status.

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
var api = SSLCertificatesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = SSLCertificatesApi.new(config, client)


# Invoke an endpoint
api.get_ssl_list(
	# On Success
	func(response):
		prints("Success!", "get_ssl_list", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_ssl_welcome_email**   { #get_ssl_welcome_email }
<a name="get_ssl_welcome_email"></a>

> `get_ssl_welcome_email(id: int, on_success: Callable, on_failure: Callable)`

Resend SSL Welcome Email

Resends the welcome email for the order.

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
var api = SSLCertificatesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = SSLCertificatesApi.new(config, client)


# Invoke an endpoint
api.get_ssl_welcome_email(
	# id: int   Eg: 56
	# SSL Cert ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_ssl_welcome_email", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **put_ssl**   { #put_ssl }
<a name="put_ssl"></a>

> `put_ssl( on_success: Callable, on_failure: Callable)`

Validate SSL Cert Order

Validates an SSL certificate order before placing it.

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
var api = SSLCertificatesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = SSLCertificatesApi.new(config, client)


# Invoke an endpoint
api.put_ssl(
	# On Success
	func(response):
		prints("Success!", "put_ssl", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **ssl_cancel**   { #ssl_cancel }
<a name="ssl_cancel"></a>

> `ssl_cancel(id: int, on_success: Callable, on_failure: Callable)`

Cancel SSL Certificate Service

Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.

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
var api = SSLCertificatesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = SSLCertificatesApi.new(config, client)


# Invoke an endpoint
api.ssl_cancel(
	# id: int   Eg: 56
	# SSL Cert ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "ssl_cancel", response)
		assert(response.data is sslCancel_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_ssl_info**   { #update_ssl_info }
<a name="update_ssl_info"></a>

> `update_ssl_info(id: String, on_success: Callable, on_failure: Callable)`

Update SSL Cert Order

Updates settings on an SSL certificate order.

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
var api = SSLCertificatesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = SSLCertificatesApi.new(config, client)


# Invoke an endpoint
api.update_ssl_info(
	# id: String = ""   Eg: id_example
	# SSL certificate ID number.
	id,
	# On Success
	func(response):
		prints("Success!", "update_ssl_info", response)
		
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

