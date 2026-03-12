<a name="__pageTop"></a>
# MailApi   { #MailApi }


All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_mail**](#add_mail) | **POST** `/mail/order` | Place Mail Order
[**add_rule**](#add_rule) | **POST** `/mail/{id}/rules` | Create Deny Rule
[**create_mail_alert**](#create_mail_alert) | **POST** `/mail/{id}/alerts` | Create Mail Alert
[**delete_mail_alert**](#delete_mail_alert) | **DELETE** `/mail/{id}/alerts` | Delete Mail Alert
[**delete_rule**](#delete_rule) | **DELETE** `/mail/{id}/rules/{rule}` | Delete Deny Rule
[**delist_block**](#delist_block) | **POST** `/mail/{id}/blocks/delete` | Remove Email Address from Block List
[**get_mail_alerts**](#get_mail_alerts) | **GET** `/mail/{id}/alerts` | List Mail Alerts
[**get_mail_blocks**](#get_mail_blocks) | **GET** `/mail/{id}/blocks` | List Blocked Email Addresses
[**get_mail_delist**](#get_mail_delist) | **GET** `/mail/{id}/delist` | Get Delist Status
[**get_mail_deliverability**](#get_mail_deliverability) | **GET** `/mail/{id}/deliverability` | Get Deliverability Metrics
[**get_mail_info**](#get_mail_info) | **GET** `/mail/{id}` | Get Mail Order
[**get_mail_invoices**](#get_mail_invoices) | **GET** `/mail/{id}/invoices` | Get Mail Invoices
[**get_mail_list**](#get_mail_list) | **GET** `/mail` | List Mail Orders
[**get_mail_welcome_email**](#get_mail_welcome_email) | **GET** `/mail/{id}/welcome_email` | Resend Mail Welcome Email
[**get_new_mail**](#get_new_mail) | **GET** `/mail/order` | Get Mail Ordering Information
[**get_rules**](#get_rules) | **GET** `/mail/{id}/rules` | List Deny Rules
[**get_stats**](#get_stats) | **GET** `/mail/{id}/stats` | Get Mail Usage Statistics
[**mail_cancel**](#mail_cancel) | **DELETE** `/mail/{id}` | Cancel Mail
[**post_mail_delist**](#post_mail_delist) | **POST** `/mail/{id}/delist` | Delist a Blocked Sender
[**put_mail**](#put_mail) | **PUT** `/mail/order` | Validate Mail Order
[**reset_mail_password**](#reset_mail_password) | **GET** `/mail/{id}/reset_password` | Reset Mail Password
[**send_adv_mail**](#send_adv_mail) | **POST** `/mail/{id}/advsend` | Send Email with Advanced Options
[**send_mail**](#send_mail) | **POST** `/mail/{id}/send` | Send Email
[**update_mail_alert**](#update_mail_alert) | **PUT** `/mail/{id}/alerts` | Update Mail Alert
[**update_mail_info**](#update_mail_info) | **POST** `/mail/{id}` | Update Mail Order
[**view_mail_log**](#view_mail_log) | **GET** `/mail/{id}/log` | View Mail Log

# **add_mail**   { #add_mail }
<a name="add_mail"></a>

> `add_mail( on_success: Callable, on_failure: Callable)`

Place Mail Order

Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.add_mail(
	# On Success
	func(response):
		prints("Success!", "add_mail", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **add_rule**   { #add_rule }
<a name="add_rule"></a>

> `add_rule(id: int,denyRuleNew: DenyRuleNew, on_success: Callable, on_failure: Callable)`

Create Deny Rule

Adds a new deny rule to automatically block emails that match the specified criteria.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)

var denyRuleNew = DenyRuleNew.new()
# … fill model denyRuleNew with data

# Invoke an endpoint
api.add_rule(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# denyRuleNew: DenyRuleNew   Eg: {"user":"mb20682","type":"email","data":"domeinwo@server.guesshost.net"}
	# These are the fields needed to create a new email deny rule.
	denyRuleNew,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "add_rule", response)
		assert(response.data is GenericResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **create_mail_alert**   { #create_mail_alert }
<a name="create_mail_alert"></a>

> `create_mail_alert(id: int,mailAlertRequest: MailAlertRequest, on_success: Callable, on_failure: Callable)`

Create Mail Alert

Creates a new alert for the mail service, such as delivery or quota notifications.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)

var mailAlertRequest = MailAlertRequest.new()
# … fill model mailAlertRequest with data

# Invoke an endpoint
api.create_mail_alert(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# mailAlertRequest: MailAlertRequest
	mailAlertRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "create_mail_alert", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **delete_mail_alert**   { #delete_mail_alert }
<a name="delete_mail_alert"></a>

> `delete_mail_alert(id: int,alertId: int, on_success: Callable, on_failure: Callable)`

Delete Mail Alert

Deletes an existing alert definition for the mail service.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.delete_mail_alert(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# alertId: int   Eg: 56
	# Alert ID to delete.
	alertId,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "delete_mail_alert", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **delete_rule**   { #delete_rule }
<a name="delete_rule"></a>

> `delete_rule(id: int,rule: String, on_success: Callable, on_failure: Callable)`

Delete Deny Rule

Removes a deny rule from the mail service.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.delete_rule(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# rule: String = ""   Eg: 34
	# The ID of the Rules entry.
	rule,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "delete_rule", response)
		assert(response.data is GenericResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **delist_block**   { #delist_block }
<a name="delist_block"></a>

> `delist_block(id: int,email = "", on_success: Callable, on_failure: Callable)`

Remove Email Address from Block List

Removes an email address from the mail service's block lists.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.delist_block(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# email: String = ""   Eg: email_example
	# an email address
	email,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "delist_block", response)
		assert(response.data is GenericResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_mail_alerts**   { #get_mail_alerts }
<a name="get_mail_alerts"></a>

> `get_mail_alerts(id: int, on_success: Callable, on_failure: Callable)`

List Mail Alerts

Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.get_mail_alerts(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_mail_alerts", response)
		assert(response.data is MailAlertsResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_mail_blocks**   { #get_mail_blocks }
<a name="get_mail_blocks"></a>

> `get_mail_blocks(id: int, on_success: Callable, on_failure: Callable)`

List Blocked Email Addresses

Displays a listing of the blocked email addresses

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.get_mail_blocks(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_mail_blocks", response)
		assert(response.data is MailBlocks)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_mail_delist**   { #get_mail_delist }
<a name="get_mail_delist"></a>

> `get_mail_delist(id: int, on_success: Callable, on_failure: Callable)`

Get Delist Status

Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.get_mail_delist(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_mail_delist", response)
		assert(response.data is MailDelistResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_mail_deliverability**   { #get_mail_deliverability }
<a name="get_mail_deliverability"></a>

> `get_mail_deliverability(id: int, on_success: Callable, on_failure: Callable)`

Get Deliverability Metrics

Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.get_mail_deliverability(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_mail_deliverability", response)
		assert(response.data is MailDeliverabilityResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_mail_info**   { #get_mail_info }
<a name="get_mail_info"></a>

> `get_mail_info(id: int, on_success: Callable, on_failure: Callable)`

Get Mail Order

Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.get_mail_info(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_mail_info", response)
		assert(response.data is MailSchema)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_mail_invoices**   { #get_mail_invoices }
<a name="get_mail_invoices"></a>

> `get_mail_invoices(id: int, on_success: Callable, on_failure: Callable)`

Get Mail Invoices

Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.get_mail_invoices(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_mail_invoices", response)
		assert(response.data is ChargeInvoiceRows)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_mail_list**   { #get_mail_list }
<a name="get_mail_list"></a>

> `get_mail_list( on_success: Callable, on_failure: Callable)`

List Mail Orders

Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.get_mail_list(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_mail_list", response)
		assert(response.data is MailRow)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_mail_welcome_email**   { #get_mail_welcome_email }
<a name="get_mail_welcome_email"></a>

> `get_mail_welcome_email(id: int, on_success: Callable, on_failure: Callable)`

Resend Mail Welcome Email

Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.get_mail_welcome_email(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_mail_welcome_email", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_new_mail**   { #get_new_mail }
<a name="get_new_mail"></a>

> `get_new_mail( on_success: Callable, on_failure: Callable)`

Get Mail Ordering Information

Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.get_new_mail(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_new_mail", response)
		assert(response.data is MailOrder)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_rules**   { #get_rules }
<a name="get_rules"></a>

> `get_rules(id: int, on_success: Callable, on_failure: Callable)`

List Deny Rules

Returns a listing of all the deny block rules configured for this mail service.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.get_rules(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_rules", response)
		assert(response.data is DenyRuleRecord)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_stats**   { #get_stats }
<a name="get_stats"></a>

> `get_stats(id: int,some_timenull = "", on_success: Callable, on_failure: Callable)`

Get Mail Usage Statistics

Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.get_stats(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# some_timenull: String = ""   Eg: some_timenull_example
	# The timeframe for the statistics.
	some_timenull,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_stats", response)
		assert(response.data is MailStatsType)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **mail_cancel**   { #mail_cancel }
<a name="mail_cancel"></a>

> `mail_cancel(id: int, on_success: Callable, on_failure: Callable)`

Cancel Mail

Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.mail_cancel(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "mail_cancel", response)
		assert(response.data is mailCancel_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_mail_delist**   { #post_mail_delist }
<a name="post_mail_delist"></a>

> `post_mail_delist(id: int,mailDelistRequest: MailDelistRequest, on_success: Callable, on_failure: Callable)`

Delist a Blocked Sender

Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)

var mailDelistRequest = MailDelistRequest.new()
# … fill model mailDelistRequest with data

# Invoke an endpoint
api.post_mail_delist(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# mailDelistRequest: MailDelistRequest
	mailDelistRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_mail_delist", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **put_mail**   { #put_mail }
<a name="put_mail"></a>

> `put_mail( on_success: Callable, on_failure: Callable)`

Validate Mail Order

Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.put_mail(
	# On Success
	func(response):
		prints("Success!", "put_mail", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **reset_mail_password**   { #reset_mail_password }
<a name="reset_mail_password"></a>

> `reset_mail_password(id: int, on_success: Callable, on_failure: Callable)`

Reset Mail Password

Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.reset_mail_password(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "reset_mail_password", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **send_adv_mail**   { #send_adv_mail }
<a name="send_adv_mail"></a>

> `send_adv_mail(id: int,sendMailAdv: SendMailAdv, on_success: Callable, on_failure: Callable)`

Send Email with Advanced Options

Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)

var sendMailAdv = SendMailAdv.new()
# … fill model sendMailAdv with data

# Invoke an endpoint
api.send_adv_mail(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# sendMailAdv: SendMailAdv   Eg: {"subject":"Welcome","body":"Hello","from":{"email":"user@domain.com"},"to":[{"email":"someone@client.com","name":"Mr Client"}],"attachments":[{"filename":"message.txt","data":"base64_encoded_contents"}],"id":66}
	sendMailAdv,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "send_adv_mail", response)
		assert(response.data is GenericResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **send_mail**   { #send_mail }
<a name="send_mail"></a>

> `send_mail(id: int,sendMail: SendMail, on_success: Callable, on_failure: Callable)`

Send Email

Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)

var sendMail = SendMail.new()
# … fill model sendMail with data

# Invoke an endpoint
api.send_mail(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# sendMail: SendMail
	sendMail,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "send_mail", response)
		assert(response.data is GenericResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_mail_alert**   { #update_mail_alert }
<a name="update_mail_alert"></a>

> `update_mail_alert(id: int,mailAlertUpdateRequest: MailAlertUpdateRequest, on_success: Callable, on_failure: Callable)`

Update Mail Alert

Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)

var mailAlertUpdateRequest = MailAlertUpdateRequest.new()
# … fill model mailAlertUpdateRequest with data

# Invoke an endpoint
api.update_mail_alert(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# mailAlertUpdateRequest: MailAlertUpdateRequest
	mailAlertUpdateRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_mail_alert", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_mail_info**   { #update_mail_info }
<a name="update_mail_info"></a>

> `update_mail_info(id: String, on_success: Callable, on_failure: Callable)`

Update Mail Order

Updates mail service metadata for the order, such as stored settings or account details.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.update_mail_info(
	# id: String = ""   Eg: id_example
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# On Success
	func(response):
		prints("Success!", "update_mail_info", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **view_mail_log**   { #view_mail_log }
<a name="view_mail_log"></a>

> `view_mail_log(id: int,id2 = null,origin = "",mx = "",from = "",to = "",subject = "",mailid = "",skip = 0,limit = 100,startDate = null,endDate = null,delivered = "", on_success: Callable, on_failure: Callable)`

View Mail Log

Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.

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
var api = MailApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = MailApi.new(config, client)


# Invoke an endpoint
api.view_mail_log(
	# id: int   Eg: 56
	# The mail service ID. Use `mail_id` from `GET /mail`.
	id,
	# id2: float   Eg: 2604
	# The ID of your mail order this will be sent through.
	id2,
	# origin: String = ""   Eg: 1.2.3.4
	# originating ip address sending mail
	origin,
	# mx: String = ""   Eg: mx.google.com
	# mx record mail was sent to
	mx,
	# from: String = ""   Eg: me@sender.com
	# from email address
	from,
	# to: String = ""   Eg: you@receiver.com
	# to/destination email address
	to,
	# subject: String = ""   Eg: Support
	# subject containing this string
	subject,
	# mailid: String = ""   Eg: 185997065c60008840
	# mail id
	mailid,
	# skip: int = 0   Eg: 1000
	# number of records to skip for pagination
	skip,
	# limit: int = 100   Eg: 1000
	# maximum number of records to return
	limit,
	# startDate: float   Eg: 1641781008
	# earliest date to get emails in unix timestamp format
	startDate,
	# endDate: float   Eg: 1673317008
	# Latest date to get emails in unix timestamp format.
	endDate,
	# delivered: String = ""   Eg: delivered_example
	# Filter emails by whether or not they were delivered.
	delivered,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "view_mail_log", response)
		assert(response.data is MailLog)
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

