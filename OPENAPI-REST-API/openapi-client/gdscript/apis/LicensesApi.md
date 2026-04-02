<a name="__pageTop"></a>
# LicensesApi   { #LicensesApi }


All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_license**](#add_license) | **POST** `/licenses/order` | Place License Order
[**get_license_info**](#get_license_info) | **GET** `/licenses/{id}` | Get License
[**get_license_invoices**](#get_license_invoices) | **GET** `/licenses/{id}/invoices` | Get License Invoices
[**get_license_list**](#get_license_list) | **GET** `/licenses` | List Licenses
[**get_license_order_cat_tag_info**](#get_license_order_cat_tag_info) | **GET** `/licenses/order/{catTag}` | Get License Order Information for Category
[**get_licenses_welcome_email**](#get_licenses_welcome_email) | **GET** `/licenses/{id}/welcome_email` | Resend License Welcome Email
[**get_new_license**](#get_new_license) | **GET** `/licenses/order` | Get License Order Information
[**licenses_cancel**](#licenses_cancel) | **DELETE** `/licenses/{id}` | Cancel License
[**post_license_change_ip**](#post_license_change_ip) | **POST** `/licenses/{id}/change_ip` | Change License IP
[**put_licenses**](#put_licenses) | **PUT** `/licenses/order` | Validate License Order
[**update_license_info**](#update_license_info) | **POST** `/licenses/{id}` | Update License

# **add_license**   { #add_license }
<a name="add_license"></a>

> `add_license( on_success: Callable, on_failure: Callable)`

Place License Order

Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.

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
var api = LicensesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = LicensesApi.new(config, client)


# Invoke an endpoint
api.add_license(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "add_license", response)
		assert(response.data is ServiceOrderPostResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_license_info**   { #get_license_info }
<a name="get_license_info"></a>

> `get_license_info(id: int, on_success: Callable, on_failure: Callable)`

Get License

Returns detailed information about a specific license including its type, IP assignment, and status.

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
var api = LicensesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = LicensesApi.new(config, client)


# Invoke an endpoint
api.get_license_info(
	# id: int   Eg: 56
	# The license service ID. Use `license_id` from `GET /licenses`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_license_info", response)
		assert(response.data is License)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_license_invoices**   { #get_license_invoices }
<a name="get_license_invoices"></a>

> `get_license_invoices(id: int, on_success: Callable, on_failure: Callable)`

Get License Invoices

Returns the billing invoices associated with this license service.

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
var api = LicensesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = LicensesApi.new(config, client)


# Invoke an endpoint
api.get_license_invoices(
	# id: int   Eg: 56
	# The license service ID. Use `license_id` from `GET /licenses`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_license_invoices", response)
		assert(response.data is ChargeInvoiceRows)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_license_list**   { #get_license_list }
<a name="get_license_list"></a>

> `get_license_list( on_success: Callable, on_failure: Callable)`

List Licenses

Returns all software license services on the account with their current status and IP assignments.

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
var api = LicensesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = LicensesApi.new(config, client)


# Invoke an endpoint
api.get_license_list(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_license_list", response)
		assert(response.data is LicenseRow)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_license_order_cat_tag_info**   { #get_license_order_cat_tag_info }
<a name="get_license_order_cat_tag_info"></a>

> `get_license_order_cat_tag_info(catTag: String, on_success: Callable, on_failure: Callable)`

Get License Order Information for Category

Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.

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
var api = LicensesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = LicensesApi.new(config, client)


# Invoke an endpoint
api.get_license_order_cat_tag_info(
	# catTag: String = ""   Eg: catTag_example
	# The license category tag (e.g. `cpanel`, `plesk`). Obtain valid values from the `GET /licenses/order` response.
	catTag,
	# On Success
	func(response):
		prints("Success!", "get_license_order_cat_tag_info", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_licenses_welcome_email**   { #get_licenses_welcome_email }
<a name="get_licenses_welcome_email"></a>

> `get_licenses_welcome_email(id: int, on_success: Callable, on_failure: Callable)`

Resend License Welcome Email

Resends the welcome email for the license service. The email contains the license key and activation instructions.

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
var api = LicensesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = LicensesApi.new(config, client)


# Invoke an endpoint
api.get_licenses_welcome_email(
	# id: int   Eg: 56
	# The license service ID. Use `license_id` from `GET /licenses`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_licenses_welcome_email", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_new_license**   { #get_new_license }
<a name="get_new_license"></a>

> `get_new_license( on_success: Callable, on_failure: Callable)`

Get License Order Information

Retrieves available license types, categories, and pricing for ordering a new license.

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
var api = LicensesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = LicensesApi.new(config, client)


# Invoke an endpoint
api.get_new_license(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_new_license", response)
		assert(response.data is LicensesOrder)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **licenses_cancel**   { #licenses_cancel }
<a name="licenses_cancel"></a>

> `licenses_cancel(id: int, on_success: Callable, on_failure: Callable)`

Cancel License

Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

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
var api = LicensesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = LicensesApi.new(config, client)


# Invoke an endpoint
api.licenses_cancel(
	# id: int   Eg: 56
	# The license service ID. Use `license_id` from `GET /licenses`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "licenses_cancel", response)
		assert(response.data is licensesCancel_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_license_change_ip**   { #post_license_change_ip }
<a name="post_license_change_ip"></a>

> `post_license_change_ip(id: int,ipObject: IpObject, on_success: Callable, on_failure: Callable)`

Change License IP

Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.

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
var api = LicensesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = LicensesApi.new(config, client)

var ipObject = IpObject.new()
# … fill model ipObject with data

# Invoke an endpoint
api.post_license_change_ip(
	# id: int   Eg: 56
	# The license service ID. Use `license_id` from `GET /licenses`.
	id,
	# ipObject: IpObject
	ipObject,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_license_change_ip", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **put_licenses**   { #put_licenses }
<a name="put_licenses"></a>

> `put_licenses( on_success: Callable, on_failure: Callable)`

Validate License Order

Validates a license order before placing it. Use this to check for errors before committing to a purchase.

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
var api = LicensesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = LicensesApi.new(config, client)


# Invoke an endpoint
api.put_licenses(
	# On Success
	func(response):
		prints("Success!", "put_licenses", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_license_info**   { #update_license_info }
<a name="update_license_info"></a>

> `update_license_info(id: String, on_success: Callable, on_failure: Callable)`

Update License

Updates settings on a license service such as its assigned IP.

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
var api = LicensesApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = LicensesApi.new(config, client)


# Invoke an endpoint
api.update_license_info(
	# id: String = ""   Eg: id_example
	# The license service ID. Use `license_id` from `GET /licenses`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_license_info", response)
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

