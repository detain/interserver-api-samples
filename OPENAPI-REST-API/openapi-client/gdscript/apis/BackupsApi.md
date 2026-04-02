<a name="__pageTop"></a>
# BackupsApi   { #BackupsApi }


All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_backup**](#add_backup) | **POST** `/backups/order` | Place Backup Order
[**cancel_backup**](#cancel_backup) | **DELETE** `/backups/{id}` | Cancel Backup Service
[**get_backup_info**](#get_backup_info) | **GET** `/backups/{id}` | Get Backup Service Details
[**get_backup_invoices**](#get_backup_invoices) | **GET** `/backups/{id}/invoices` | Get Backup Order Invoices
[**get_backup_login**](#get_backup_login) | **GET** `/backups/{id}/login` | Get Backup Storage Panel Login
[**get_backups_list**](#get_backups_list) | **GET** `/backups` | List Backup Services
[**get_backups_welcome_email**](#get_backups_welcome_email) | **GET** `/backups/{id}/welcome_email` | Resend Backup Welcome Email
[**get_new_backup**](#get_new_backup) | **GET** `/backups/order` | Get Backup Order Form Data
[**update_backup_info**](#update_backup_info) | **POST** `/backups/{id}` | Update Backup Information
[**validate_backup_order**](#validate_backup_order) | **PUT** `/backups/order` | Validate Backup Order

# **add_backup**   { #add_backup }
<a name="add_backup"></a>

> `add_backup(validateOnly = null,serviceType = null,coupon = "", on_success: Callable, on_failure: Callable)`

Place Backup Order

Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.

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
var api = BackupsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BackupsApi.new(config, client)


# Invoke an endpoint
api.add_backup(
	# validateOnly: bool   Eg: true
	validateOnly,
	# serviceType: int   Eg: 56
	serviceType,
	# coupon: String = ""   Eg: coupon_example
	coupon,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "add_backup", response)
		assert(response.data is BackupOrderPostResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **cancel_backup**   { #cancel_backup }
<a name="cancel_backup"></a>

> `cancel_backup(id: int, on_success: Callable, on_failure: Callable)`

Cancel Backup Service

Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.

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
var api = BackupsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BackupsApi.new(config, client)


# Invoke an endpoint
api.cancel_backup(
	# id: int   Eg: 56
	# The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "cancel_backup", response)
		assert(response.data is cancelBackup_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_backup_info**   { #get_backup_info }
<a name="get_backup_info"></a>

> `get_backup_info(id: int, on_success: Callable, on_failure: Callable)`

Get Backup Service Details

Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.

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
var api = BackupsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BackupsApi.new(config, client)


# Invoke an endpoint
api.get_backup_info(
	# id: int   Eg: 56
	# The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_backup_info", response)
		assert(response.data is Backup)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_backup_invoices**   { #get_backup_invoices }
<a name="get_backup_invoices"></a>

> `get_backup_invoices(id: int, on_success: Callable, on_failure: Callable)`

Get Backup Order Invoices

Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.

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
var api = BackupsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BackupsApi.new(config, client)


# Invoke an endpoint
api.get_backup_invoices(
	# id: int   Eg: 56
	# The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_backup_invoices", response)
		assert(response.data is ChargeInvoiceRows)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_backup_login**   { #get_backup_login }
<a name="get_backup_login"></a>

> `get_backup_login(id: int, on_success: Callable, on_failure: Callable)`

Get Backup Storage Panel Login

Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.

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
var api = BackupsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BackupsApi.new(config, client)


# Invoke an endpoint
api.get_backup_login(
	# id: int   Eg: 56
	# The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_backup_login", response)
		assert(response.data is BackupLoginResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_backups_list**   { #get_backups_list }
<a name="get_backups_list"></a>

> `get_backups_list( on_success: Callable, on_failure: Callable)`

List Backup Services

Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.

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
var api = BackupsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BackupsApi.new(config, client)


# Invoke an endpoint
api.get_backups_list(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_backups_list", response)
		assert(response.data is BackupRow)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_backups_welcome_email**   { #get_backups_welcome_email }
<a name="get_backups_welcome_email"></a>

> `get_backups_welcome_email(id: int, on_success: Callable, on_failure: Callable)`

Resend Backup Welcome Email

Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.

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
var api = BackupsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BackupsApi.new(config, client)


# Invoke an endpoint
api.get_backups_welcome_email(
	# id: int   Eg: 56
	# The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_backups_welcome_email", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_new_backup**   { #get_new_backup }
<a name="get_new_backup"></a>

> `get_new_backup( on_success: Callable, on_failure: Callable)`

Get Backup Order Form Data

Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.

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
var api = BackupsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BackupsApi.new(config, client)


# Invoke an endpoint
api.get_new_backup(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_new_backup", response)
		assert(response.data is BackupsOrder)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_backup_info**   { #update_backup_info }
<a name="update_backup_info"></a>

> `update_backup_info(id: int, on_success: Callable, on_failure: Callable)`

Update Backup Information

Updates backup storage service metadata, such as stored credentials or settings for the order.

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
var api = BackupsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BackupsApi.new(config, client)


# Invoke an endpoint
api.update_backup_info(
	# id: int   Eg: 56
	# The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_backup_info", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **validate_backup_order**   { #validate_backup_order }
<a name="validate_backup_order"></a>

> `validate_backup_order(validateOnly = null,serviceType = null,coupon = "", on_success: Callable, on_failure: Callable)`

Validate Backup Order

Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.

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
var api = BackupsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BackupsApi.new(config, client)


# Invoke an endpoint
api.validate_backup_order(
	# validateOnly: bool   Eg: true
	validateOnly,
	# serviceType: int   Eg: 56
	serviceType,
	# coupon: String = ""   Eg: coupon_example
	coupon,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "validate_backup_order", response)
		assert(response.data is BackupOrderPutResponse)
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

