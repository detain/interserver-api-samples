<a name="__pageTop"></a>
# TicketsApi   { #TicketsApi }


All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_new_ticket**](#add_new_ticket) | **POST** `/tickets/new` | Create New Ticket
[**close_ticket**](#close_ticket) | **GET** `/tickets/{id}/close` | Close Ticket
[**delete_ticket_info**](#delete_ticket_info) | **DELETE** `/tickets/{id}` | Close Ticket
[**get_new_ticket**](#get_new_ticket) | **GET** `/tickets/new` | Gets Information for creating a new ticket.
[**get_ticket_info**](#get_ticket_info) | **GET** `/tickets/{id}` | Get Ticket Information
[**get_tickets_list**](#get_tickets_list) | **GET** `/tickets` | List Support Tickets
[**post_ticket_info**](#post_ticket_info) | **POST** `/tickets/{id}` | Reply To Ticket
[**post_tickets_list**](#post_tickets_list) | **POST** `/tickets` | Search Support Tickets
[**put_ticket_info**](#put_ticket_info) | **PUT** `/tickets/{id}` | Update Ticket
[**reply_ticket**](#reply_ticket) | **POST** `/tickets/{id}/reply` | Reply Ticket
[**update_ticket_info**](#update_ticket_info) | **POST** `/tickets/{id}/update` | Update Ticket

# **add_new_ticket**   { #add_new_ticket }
<a name="add_new_ticket"></a>

> `add_new_ticket(ticketNew: TicketNew, on_success: Callable, on_failure: Callable)`

Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

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
var api = TicketsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = TicketsApi.new(config, client)

var ticketNew = TicketNew.new()
# … fill model ticketNew with data

# Invoke an endpoint
api.add_new_ticket(
	# ticketNew: TicketNew
	ticketNew,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "add_new_ticket", response)
		assert(response.data is TicketNewResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **close_ticket**   { #close_ticket }
<a name="close_ticket"></a>

> `close_ticket(id: String, on_success: Callable, on_failure: Callable)`

Close Ticket

Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.

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
var api = TicketsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = TicketsApi.new(config, client)


# Invoke an endpoint
api.close_ticket(
	# id: String = ""   Eg: 1511222
	# Ticket ID
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "close_ticket", response)
		assert(response.data is CloseTicketResponseSchema)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **delete_ticket_info**   { #delete_ticket_info }
<a name="delete_ticket_info"></a>

> `delete_ticket_info(id: float, on_success: Callable, on_failure: Callable)`

Close Ticket

Closes the support ticket.

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
var api = TicketsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = TicketsApi.new(config, client)


# Invoke an endpoint
api.delete_ticket_info(
	# id: float   Eg: 8.14
	# Ticket ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "delete_ticket_info", response)
		assert(response.data is ViewTicketResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_new_ticket**   { #get_new_ticket }
<a name="get_new_ticket"></a>

> `get_new_ticket( on_success: Callable, on_failure: Callable)`

Gets Information for creating a new ticket.

Returns the form data needed to create a new support ticket, such as available departments and service categories.

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
var api = TicketsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = TicketsApi.new(config, client)


# Invoke an endpoint
api.get_new_ticket(
	# On Success
	func(response):
		prints("Success!", "get_new_ticket", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_ticket_info**   { #get_ticket_info }
<a name="get_ticket_info"></a>

> `get_ticket_info(id: float, on_success: Callable, on_failure: Callable)`

Get Ticket Information

Returns the full details of a support ticket including its history of replies.

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
var api = TicketsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = TicketsApi.new(config, client)


# Invoke an endpoint
api.get_ticket_info(
	# id: float   Eg: 8.14
	# Ticket ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_ticket_info", response)
		assert(response.data is ViewTicketResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_tickets_list**   { #get_tickets_list }
<a name="get_tickets_list"></a>

> `get_tickets_list(page = 1,period = "30",view = "", on_success: Callable, on_failure: Callable)`

List Support Tickets

Returns a paginated list of support tickets on the account. Filter by status and time period.

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
var api = TicketsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = TicketsApi.new(config, client)


# Invoke an endpoint
api.get_tickets_list(
	# page: int = 1   Eg: 56
	# Page number for paginated results.
	page,
	# period: String = "30"   Eg: period_example
	# How far back to show tickets from. Value is in days.
	period,
	# view: String = ""   Eg: view_example
	# The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
	view,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_tickets_list", response)
		assert(response.data is Tickets)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_ticket_info**   { #post_ticket_info }
<a name="post_ticket_info"></a>

> `post_ticket_info(id: float, on_success: Callable, on_failure: Callable)`

Reply To Ticket

Adds a reply to an existing support ticket.

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
var api = TicketsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = TicketsApi.new(config, client)


# Invoke an endpoint
api.post_ticket_info(
	# id: float   Eg: 8.14
	# Ticket ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_ticket_info", response)
		assert(response.data is ViewTicketResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_tickets_list**   { #post_tickets_list }
<a name="post_tickets_list"></a>

> `post_tickets_list( on_success: Callable, on_failure: Callable)`

Search Support Tickets

Searches support tickets by email, subject, or ticket mask ID.

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
var api = TicketsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = TicketsApi.new(config, client)


# Invoke an endpoint
api.post_tickets_list(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_tickets_list", response)
		assert(response.data is Tickets)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **put_ticket_info**   { #put_ticket_info }
<a name="put_ticket_info"></a>

> `put_ticket_info(id: float, on_success: Callable, on_failure: Callable)`

Update Ticket

Updates a support ticket's properties such as subject or status.

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
var api = TicketsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = TicketsApi.new(config, client)


# Invoke an endpoint
api.put_ticket_info(
	# id: float   Eg: 8.14
	# Ticket ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "put_ticket_info", response)
		assert(response.data is ViewTicketResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **reply_ticket**   { #reply_ticket }
<a name="reply_ticket"></a>

> `reply_ticket(id: float,replyTicketRequest = null, on_success: Callable, on_failure: Callable)`

Reply Ticket

Posts a reply to an existing support ticket thread.

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
var api = TicketsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = TicketsApi.new(config, client)

var replyTicketRequest = ReplyTicketRequest.new()
# … fill model replyTicketRequest with data

# Invoke an endpoint
api.reply_ticket(
	# id: float   Eg: 8.14
	# The ticket ID number.
	id,
	# replyTicketRequest: ReplyTicketRequest
	replyTicketRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "reply_ticket", response)
		assert(response.data is ReplyTicketResponseSchema)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_ticket_info**   { #update_ticket_info }
<a name="update_ticket_info"></a>

> `update_ticket_info(id: float,updateTicket = null, on_success: Callable, on_failure: Callable)`

Update Ticket

Updates a support ticket's subject or body content.

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
var api = TicketsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = TicketsApi.new(config, client)

var updateTicket = UpdateTicket.new()
# … fill model updateTicket with data

# Invoke an endpoint
api.update_ticket_info(
	# id: float   Eg: 8.14
	# The ticket ID number.
	id,
	# updateTicket: UpdateTicket
	updateTicket,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_ticket_info", response)
		assert(response.data is UpdateTicketResponseSchema)
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

