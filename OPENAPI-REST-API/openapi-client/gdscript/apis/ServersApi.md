<a name="__pageTop"></a>
# ServersApi   { #ServersApi }


All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_server**](#add_server) | **POST** `/servers/order` | Place Server Order
[**buy_it_now_server_order**](#buy_it_now_server_order) | **GET** `/servers/order/buy_now_server` | Get Buy Now Server Options
[**get_mp_servers**](#get_mp_servers) | **GET** `/buy_now_servers_list` | List Marketplace Servers
[**get_new_server**](#get_new_server) | **GET** `/servers/order` | Server Ordering Information
[**get_server_info**](#get_server_info) | **GET** `/servers/{id}` | Get Server Order
[**get_server_invoices**](#get_server_invoices) | **GET** `/servers/{id}/invoices` | Get Server Invoices
[**get_server_list**](#get_server_list) | **GET** `/servers` | List Servers
[**get_server_reverse_dns**](#get_server_reverse_dns) | **GET** `/servers/{id}/reverse_dns` | Reverse DNS Info
[**get_servers_welcome_email**](#get_servers_welcome_email) | **GET** `/servers/{id}/welcome_email` | Resend Server Welcome Email
[**place_buy_now_server**](#place_buy_now_server) | **POST** `/servers/order/buy_now_server` | Place Buy Now Server Order
[**post_server_reverse_dns**](#post_server_reverse_dns) | **POST** `/servers/{id}/reverse_dns` | Update Reverse DNS
[**put_servers**](#put_servers) | **PUT** `/servers/order` | Validate Server Order
[**server_ipmi_live_get**](#server_ipmi_live_get) | **GET** `/servers/{id}/ipmi_live` | Server IPMI Live Information
[**server_ipmi_live_post**](#server_ipmi_live_post) | **POST** `/servers/{id}/ipmi_live` | Server IPMI Live Setup
[**server_ipmi_power_get**](#server_ipmi_power_get) | **GET** `/servers/{id}/ipmi_power` | Get IPMI Power Status
[**server_ipmi_power_post**](#server_ipmi_power_post) | **POST** `/servers/{id}/ipmi_power` | Server IPMI Power
[**servers_cancel**](#servers_cancel) | **DELETE** `/servers/{id}` | Cancel Server Service
[**update_server_info**](#update_server_info) | **POST** `/servers/{id}` | Update Server Order

# **add_server**   { #add_server }
<a name="add_server"></a>

> `add_server( on_success: Callable, on_failure: Callable)`

Place Server Order

Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)


# Invoke an endpoint
api.add_server(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "add_server", response)
		assert(response.data is addServer_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **buy_it_now_server_order**   { #buy_it_now_server_order }
<a name="buy_it_now_server_order"></a>

> `buy_it_now_server_order( on_success: Callable, on_failure: Callable)`

Get Buy Now Server Options

Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)


# Invoke an endpoint
api.buy_it_now_server_order(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "buy_it_now_server_order", response)
		assert(response.data is buyItNowServerOrder_200_response)
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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)


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

# **get_new_server**   { #get_new_server }
<a name="get_new_server"></a>

> `get_new_server( on_success: Callable, on_failure: Callable)`

Server Ordering Information

Retrieves available server configurations and pricing for ordering a new dedicated server.

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)


# Invoke an endpoint
api.get_new_server(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_new_server", response)
		assert(response.data is ServerOrder)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_server_info**   { #get_server_info }
<a name="get_server_info"></a>

> `get_server_info(id: int, on_success: Callable, on_failure: Callable)`

Get Server Order

Returns detailed information about a specific server including its hardware configuration, IPs, and status.

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)


# Invoke an endpoint
api.get_server_info(
	# id: int   Eg: 56
	# Server ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_server_info", response)
		assert(response.data is Server)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_server_invoices**   { #get_server_invoices }
<a name="get_server_invoices"></a>

> `get_server_invoices(id: int, on_success: Callable, on_failure: Callable)`

Get Server Invoices

Returns the billing invoices associated with this dedicated server.

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)


# Invoke an endpoint
api.get_server_invoices(
	# id: int   Eg: 56
	# Server ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_server_invoices", response)
		assert(response.data is ChargeInvoiceRows)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_server_list**   { #get_server_list }
<a name="get_server_list"></a>

> `get_server_list( on_success: Callable, on_failure: Callable)`

List Servers

Returns all dedicated server services on the account with their current status and configuration.

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)


# Invoke an endpoint
api.get_server_list(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_server_list", response)
		assert(response.data is ServerRow)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_server_reverse_dns**   { #get_server_reverse_dns }
<a name="get_server_reverse_dns"></a>

> `get_server_reverse_dns(id: int, on_success: Callable, on_failure: Callable)`

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the server's IP addresses.

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)


# Invoke an endpoint
api.get_server_reverse_dns(
	# id: int   Eg: 56
	# Server ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_server_reverse_dns", response)
		assert(response.data is ReverseDnsEntries)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_servers_welcome_email**   { #get_servers_welcome_email }
<a name="get_servers_welcome_email"></a>

> `get_servers_welcome_email(id: int, on_success: Callable, on_failure: Callable)`

Resend Server Welcome Email

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)


# Invoke an endpoint
api.get_servers_welcome_email(
	# id: int   Eg: 56
	# Server ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_servers_welcome_email", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **place_buy_now_server**   { #place_buy_now_server }
<a name="place_buy_now_server"></a>

> `place_buy_now_server(placeBuyNowServerRequest = null, on_success: Callable, on_failure: Callable)`

Place Buy Now Server Order

Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)

var placeBuyNowServerRequest = PlaceBuyNowServerRequest.new()
# … fill model placeBuyNowServerRequest with data

# Invoke an endpoint
api.place_buy_now_server(
	# placeBuyNowServerRequest: PlaceBuyNowServerRequest
	placeBuyNowServerRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "place_buy_now_server", response)
		assert(response.data is ServersBuyNowResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_server_reverse_dns**   { #post_server_reverse_dns }
<a name="post_server_reverse_dns"></a>

> `post_server_reverse_dns(id: int,reverseDnsEntries: ReverseDnsEntries, on_success: Callable, on_failure: Callable)`

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the server's IP addresses.

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)

var reverseDnsEntries = ReverseDnsEntries.new()
# … fill model reverseDnsEntries with data

# Invoke an endpoint
api.post_server_reverse_dns(
	# id: int   Eg: 56
	# Server ID number
	id,
	# reverseDnsEntries: ReverseDnsEntries
	reverseDnsEntries,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_server_reverse_dns", response)
		assert(response.data is TextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **put_servers**   { #put_servers }
<a name="put_servers"></a>

> `put_servers( on_success: Callable, on_failure: Callable)`

Validate Server Order

Validates a server order before placing it. Use this to check for errors before committing to a purchase.

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)


# Invoke an endpoint
api.put_servers(
	# On Success
	func(response):
		prints("Success!", "put_servers", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **server_ipmi_live_get**   { #server_ipmi_live_get }
<a name="server_ipmi_live_get"></a>

> `server_ipmi_live_get(id: int, on_success: Callable, on_failure: Callable)`

Server IPMI Live Information

Returns the current IPMI live connection information for the server.

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)


# Invoke an endpoint
api.server_ipmi_live_get(
	# id: int   Eg: 56
	# Server ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "server_ipmi_live_get", response)
		assert(response.data is ServerIpmiLiveInfo)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **server_ipmi_live_post**   { #server_ipmi_live_post }
<a name="server_ipmi_live_post"></a>

> `server_ipmi_live_post(id: int,some_ipnull: String,asset = null, on_success: Callable, on_failure: Callable)`

Server IPMI Live Setup

Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)


# Invoke an endpoint
api.server_ipmi_live_post(
	# id: int   Eg: 56
	# Server ID number
	id,
	# some_ipnull: String = ""   Eg: some_ipnull_example
	# Your IP Address you wish to connect to the IPMI system from.
	some_ipnull,
	# asset: int   Eg: 56
	# Asset ID
	asset,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "server_ipmi_live_post", response)
		assert(response.data is ServerIpmiLiveInfo)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **server_ipmi_power_get**   { #server_ipmi_power_get }
<a name="server_ipmi_power_get"></a>

> `server_ipmi_power_get(id: int, on_success: Callable, on_failure: Callable)`

Get IPMI Power Status

Returns the chassis power status from ipmi.

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)


# Invoke an endpoint
api.server_ipmi_power_get(
	# id: int   Eg: 56
	# Server ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "server_ipmi_power_get", response)
		assert(response.data is TextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **server_ipmi_power_post**   { #server_ipmi_power_post }
<a name="server_ipmi_power_post"></a>

> `server_ipmi_power_post(id: int,action: String,asset = null, on_success: Callable, on_failure: Callable)`

Server IPMI Power

Uses the IPMI interface to set the Power status on the server.

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)


# Invoke an endpoint
api.server_ipmi_power_post(
	# id: int   Eg: 56
	# Server ID number
	id,
	# action: String = ""   Eg: action_example
	# The power action to send to the ipmi controller.
	action,
	# asset: int   Eg: 56
	# The Asset ID
	asset,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "server_ipmi_power_post", response)
		assert(response.data is TextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **servers_cancel**   { #servers_cancel }
<a name="servers_cancel"></a>

> `servers_cancel(id: int, on_success: Callable, on_failure: Callable)`

Cancel Server Service

Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)


# Invoke an endpoint
api.servers_cancel(
	# id: int   Eg: 56
	# Server ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "servers_cancel", response)
		assert(response.data is serversCancel_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_server_info**   { #update_server_info }
<a name="update_server_info"></a>

> `update_server_info(id: String, on_success: Callable, on_failure: Callable)`

Update Server Order

Updates settings on a dedicated server order.

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
var api = ServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ServersApi.new(config, client)


# Invoke an endpoint
api.update_server_info(
	# id: String = ""   Eg: id_example
	# Server ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_server_info", response)
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

