<a name="__pageTop"></a>
# ScrubIpsApi   { #ScrubIpsApi }


All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**cancel_scrub_ip**](#cancel_scrub_ip) | **DELETE** `/scrub_ips/{id}` | Cancel Scrub IP Service
[**create_filter**](#create_filter) | **POST** `/scrub_ips/{id}/create_filter` | Create Traffic Filter
[**create_geo_rule**](#create_geo_rule) | **POST** `/scrub_ips/{id}/create_geo_rule` | Create Geo Firewall Rule
[**create_rule**](#create_rule) | **POST** `/scrub_ips/{id}/create_rule` | Create Firewall Rule
[**delete_filter**](#delete_filter) | **POST** `/scrub_ips/{id}/delete_filter` | Delete Traffic Filter
[**disable_scrub**](#disable_scrub) | **GET** `/scrub_ips/{id}/disable` | Disable Scrub Protection
[**enable_scrub**](#enable_scrub) | **GET** `/scrub_ips/{id}/enable` | Enable Scrub Protection
[**get_order_detail**](#get_order_detail) | **GET** `/scrub_ips/order` | Get Scrub IP Ordering Information
[**get_scrub_ip_details**](#get_scrub_ip_details) | **GET** `/scrub_ips/{id}` | Get Scrub IP Details
[**get_scrub_ip_filter_types**](#get_scrub_ip_filter_types) | **GET** `/scrub_ips/filter_types` | List Scrub Filter Types
[**get_scrub_ip_invoices**](#get_scrub_ip_invoices) | **GET** `/scrub_ips/{id}/invoices` | Get ScrubIp Invoices
[**get_scrub_ip_logs**](#get_scrub_ip_logs) | **GET** `/scrub_ips/{id}/logs` | Get Scrub IP Logs
[**get_scrub_ips_list**](#get_scrub_ips_list) | **GET** `/scrub_ips` | List Scrub IP Services
[**place_scrub_order**](#place_scrub_order) | **POST** `/scrub_ips/order` | Place Scrub IP Order
[**scrub_ips_delete_geo_rule**](#scrub_ips_delete_geo_rule) | **POST** `/scrub_ips/{id}/delete_geo_rule` | Delete Geo Firewall Rule
[**scrub_ips_delete_rule**](#scrub_ips_delete_rule) | **POST** `/scrub_ips/{id}/delete_rule` | Delete Firewall Rule

# **cancel_scrub_ip**   { #cancel_scrub_ip }
<a name="cancel_scrub_ip"></a>

> `cancel_scrub_ip(id: int, on_success: Callable, on_failure: Callable)`

Cancel Scrub IP Service

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

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
var api = ScrubIpsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ScrubIpsApi.new(config, client)


# Invoke an endpoint
api.cancel_scrub_ip(
	# id: int   Eg: 56
	# ScrubIp ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "cancel_scrub_ip", response)
		assert(response.data is cancelScrubIp_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **create_filter**   { #create_filter }
<a name="create_filter"></a>

> `create_filter(id: int,createFilter: CreateFilter, on_success: Callable, on_failure: Callable)`

Create Traffic Filter

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.

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
var api = ScrubIpsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ScrubIpsApi.new(config, client)

var createFilter = CreateFilter.new()
# … fill model createFilter with data

# Invoke an endpoint
api.create_filter(
	# id: int   Eg: 56
	# ScrubIp ID number
	id,
	# createFilter: CreateFilter
	createFilter,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "create_filter", response)
		assert(response.data is createFilter_201_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **create_geo_rule**   { #create_geo_rule }
<a name="create_geo_rule"></a>

> `create_geo_rule(id: int,createGeoFirewallRule: CreateGeoFirewallRule, on_success: Callable, on_failure: Callable)`

Create Geo Firewall Rule

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

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
var api = ScrubIpsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ScrubIpsApi.new(config, client)

var createGeoFirewallRule = CreateGeoFirewallRule.new()
# … fill model createGeoFirewallRule with data

# Invoke an endpoint
api.create_geo_rule(
	# id: int   Eg: 56
	# ScrubIp ID number
	id,
	# createGeoFirewallRule: CreateGeoFirewallRule
	createGeoFirewallRule,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "create_geo_rule", response)
		assert(response.data is createRule_201_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **create_rule**   { #create_rule }
<a name="create_rule"></a>

> `create_rule(id: int,createFirewallRule: CreateFirewallRule, on_success: Callable, on_failure: Callable)`

Create Firewall Rule

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

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
var api = ScrubIpsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ScrubIpsApi.new(config, client)

var createFirewallRule = CreateFirewallRule.new()
# … fill model createFirewallRule with data

# Invoke an endpoint
api.create_rule(
	# id: int   Eg: 56
	# ScrubIp ID number
	id,
	# createFirewallRule: CreateFirewallRule
	createFirewallRule,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "create_rule", response)
		assert(response.data is createRule_201_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **delete_filter**   { #delete_filter }
<a name="delete_filter"></a>

> `delete_filter(id: int,createFilter: CreateFilter, on_success: Callable, on_failure: Callable)`

Delete Traffic Filter

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

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
var api = ScrubIpsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ScrubIpsApi.new(config, client)

var createFilter = CreateFilter.new()
# … fill model createFilter with data

# Invoke an endpoint
api.delete_filter(
	# id: int   Eg: 56
	# ScrubIp ID number
	id,
	# createFilter: CreateFilter
	createFilter,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "delete_filter", response)
		assert(response.data is deleteFilter_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **disable_scrub**   { #disable_scrub }
<a name="disable_scrub"></a>

> `disable_scrub(id: int, on_success: Callable, on_failure: Callable)`

Disable Scrub Protection

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

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
var api = ScrubIpsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ScrubIpsApi.new(config, client)


# Invoke an endpoint
api.disable_scrub(
	# id: int   Eg: 56
	# ScrubIp ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "disable_scrub", response)
		assert(response.data is disableScrub_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **enable_scrub**   { #enable_scrub }
<a name="enable_scrub"></a>

> `enable_scrub(id: int, on_success: Callable, on_failure: Callable)`

Enable Scrub Protection

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

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
var api = ScrubIpsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ScrubIpsApi.new(config, client)


# Invoke an endpoint
api.enable_scrub(
	# id: int   Eg: 56
	# ScrubIp ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "enable_scrub", response)
		assert(response.data is enableScrub_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_order_detail**   { #get_order_detail }
<a name="get_order_detail"></a>

> `get_order_detail( on_success: Callable, on_failure: Callable)`

Get Scrub IP Ordering Information

Returns the available Scrub IP service plans and pricing information needed to build an order form.

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
var api = ScrubIpsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ScrubIpsApi.new(config, client)


# Invoke an endpoint
api.get_order_detail(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_order_detail", response)
		assert(response.data is getOrderDetail_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_scrub_ip_details**   { #get_scrub_ip_details }
<a name="get_scrub_ip_details"></a>

> `get_scrub_ip_details(id: int, on_success: Callable, on_failure: Callable)`

Get Scrub IP Details

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

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
var api = ScrubIpsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ScrubIpsApi.new(config, client)


# Invoke an endpoint
api.get_scrub_ip_details(
	# id: int   Eg: 56
	# ScrubIp ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_scrub_ip_details", response)
		assert(response.data is getScrubIpDetails_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_scrub_ip_filter_types**   { #get_scrub_ip_filter_types }
<a name="get_scrub_ip_filter_types"></a>

> `get_scrub_ip_filter_types( on_success: Callable, on_failure: Callable)`

List Scrub Filter Types

Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.

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
var api = ScrubIpsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ScrubIpsApi.new(config, client)


# Invoke an endpoint
api.get_scrub_ip_filter_types(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_scrub_ip_filter_types", response)
		assert(response.data is ScrubIpFilterTypes)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_scrub_ip_invoices**   { #get_scrub_ip_invoices }
<a name="get_scrub_ip_invoices"></a>

> `get_scrub_ip_invoices(id: int, on_success: Callable, on_failure: Callable)`

Get ScrubIp Invoices

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

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
var api = ScrubIpsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ScrubIpsApi.new(config, client)


# Invoke an endpoint
api.get_scrub_ip_invoices(
	# id: int   Eg: 56
	# ScrubIp ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_scrub_ip_invoices", response)
		assert(response.data is ChargeInvoiceRows)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_scrub_ip_logs**   { #get_scrub_ip_logs }
<a name="get_scrub_ip_logs"></a>

> `get_scrub_ip_logs(id: String, on_success: Callable, on_failure: Callable)`

Get Scrub IP Logs

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

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
var api = ScrubIpsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ScrubIpsApi.new(config, client)


# Invoke an endpoint
api.get_scrub_ip_logs(
	# id: String = ""   Eg: 413232  
	# Scrub Order ID
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_scrub_ip_logs", response)
		assert(response.data is ScrubIpsLogRowSchema)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_scrub_ips_list**   { #get_scrub_ips_list }
<a name="get_scrub_ips_list"></a>

> `get_scrub_ips_list( on_success: Callable, on_failure: Callable)`

List Scrub IP Services

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.

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
var api = ScrubIpsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ScrubIpsApi.new(config, client)


# Invoke an endpoint
api.get_scrub_ips_list(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_scrub_ips_list", response)
		assert(response.data is ScrubIpsRowSchema)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **place_scrub_order**   { #place_scrub_order }
<a name="place_scrub_order"></a>

> `place_scrub_order(scrubIpPlaceOrder: ScrubIpPlaceOrder, on_success: Callable, on_failure: Callable)`

Place Scrub IP Order

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

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
var api = ScrubIpsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ScrubIpsApi.new(config, client)

var scrubIpPlaceOrder = ScrubIpPlaceOrder.new()
# … fill model scrubIpPlaceOrder with data

# Invoke an endpoint
api.place_scrub_order(
	# scrubIpPlaceOrder: ScrubIpPlaceOrder
	scrubIpPlaceOrder,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "place_scrub_order", response)
		assert(response.data is placeScrubOrder_201_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **scrub_ips_delete_geo_rule**   { #scrub_ips_delete_geo_rule }
<a name="scrub_ips_delete_geo_rule"></a>

> `scrub_ips_delete_geo_rule(id: int,deleteGeoFirewallRule: DeleteGeoFirewallRule, on_success: Callable, on_failure: Callable)`

Delete Geo Firewall Rule

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

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
var api = ScrubIpsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ScrubIpsApi.new(config, client)

var deleteGeoFirewallRule = DeleteGeoFirewallRule.new()
# … fill model deleteGeoFirewallRule with data

# Invoke an endpoint
api.scrub_ips_delete_geo_rule(
	# id: int   Eg: 56
	# ScrubIp ID number
	id,
	# deleteGeoFirewallRule: DeleteGeoFirewallRule
	deleteGeoFirewallRule,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "scrub_ips_delete_geo_rule", response)
		assert(response.data is scrubIpsDeleteRule_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **scrub_ips_delete_rule**   { #scrub_ips_delete_rule }
<a name="scrub_ips_delete_rule"></a>

> `scrub_ips_delete_rule(id: int,deleteFirewallRule: DeleteFirewallRule, on_success: Callable, on_failure: Callable)`

Delete Firewall Rule

Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

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
var api = ScrubIpsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = ScrubIpsApi.new(config, client)

var deleteFirewallRule = DeleteFirewallRule.new()
# … fill model deleteFirewallRule with data

# Invoke an endpoint
api.scrub_ips_delete_rule(
	# id: int   Eg: 56
	# ScrubIp ID number
	id,
	# deleteFirewallRule: DeleteFirewallRule
	deleteFirewallRule,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "scrub_ips_delete_rule", response)
		assert(response.data is scrubIpsDeleteRule_200_response)
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

