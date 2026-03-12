<a name="__pageTop"></a>
# DomainsApi   { #DomainsApi }


All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_domain**](#add_domain) | **POST** `/domains/order` | Place Domain Order
[**add_domain_dnssec**](#add_domain_dnssec) | **POST** `/domains/{id}/dnssec` | Add Domain DNSSEC Records
[**add_domain_nameserver**](#add_domain_nameserver) | **POST** `/domains/{id}/nameservers` | Add Registered Nameserver
[**cancel_domain**](#cancel_domain) | **DELETE** `/domains/{id}` | Cancel Domain Order
[**delete_domain_dnssec**](#delete_domain_dnssec) | **DELETE** `/domains/{id}/dnssec` | Remove Domain DNSSEC Records
[**delete_domain_nameserver**](#delete_domain_nameserver) | **DELETE** `/domains/{id}/nameservers` | Delete Registered Nameserver
[**get_domain_contact**](#get_domain_contact) | **GET** `/domains/{id}/contact` | Get Domain Contact Details
[**get_domain_dnssec**](#get_domain_dnssec) | **GET** `/domains/{id}/dnssec` | Get Domain DNSSEC Records
[**get_domain_info**](#get_domain_info) | **GET** `/domains/{id}` | Get Domain Order
[**get_domain_invoices**](#get_domain_invoices) | **GET** `/domains/{id}/invoices` | Get Domain Invoices
[**get_domain_lookup**](#get_domain_lookup) | **GET** `/domains/lookup/{name}` | Lookup Domain Availability and Pricing
[**get_domain_nameservers**](#get_domain_nameservers) | **GET** `/domains/{id}/nameservers` | List Registered Nameservers
[**get_domain_order_fields**](#get_domain_order_fields) | **GET** `/domains/order/{domain}/{regType}` | Get Domain Order Fields
[**get_domain_order_search_results**](#get_domain_order_search_results) | **GET** `/domains/order/{domain}` | Get Domain Order Search Results
[**get_domain_renewal**](#get_domain_renewal) | **GET** `/domains/{id}/renew` | Start Domain Renewal Flow
[**get_domain_search**](#get_domain_search) | **GET** `/domains/search/{name}` | Search Domain Suggestions
[**get_domain_transfer**](#get_domain_transfer) | **GET** `/domains/{id}/transfer` | Start Domain Transfer Flow
[**get_domain_whois_privacy**](#get_domain_whois_privacy) | **GET** `/domains/{id}/whois` | Get Whois Privacy Status
[**get_domains_list**](#get_domains_list) | **GET** `/domains` | List Domain Orders
[**get_domains_welcome_email**](#get_domains_welcome_email) | **GET** `/domains/{id}/welcome_email` | Resend Domain Welcome Email
[**get_new_domain**](#get_new_domain) | **GET** `/domains/order` | Get Domain Ordering Information
[**patch_domains**](#patch_domains) | **PATCH** `/domains/order` | Validate Domain Order
[**post_domain_renewal**](#post_domain_renewal) | **POST** `/domains/{id}/renew` | Request Domain Renewal
[**post_domain_transfer**](#post_domain_transfer) | **POST** `/domains/{id}/transfer` | Request Domain Transfer
[**put_domains**](#put_domains) | **PUT** `/domains/order` | Domain Order Search
[**update_domain_contact**](#update_domain_contact) | **POST** `/domains/{id}/contact` | Update Domain Contact Details
[**update_domain_info**](#update_domain_info) | **POST** `/domains/{id}` | Update Domain Order
[**update_domain_nameservers**](#update_domain_nameservers) | **PUT** `/domains/{id}/nameservers` | Replace Nameserver Set
[**update_domain_whois_privacy**](#update_domain_whois_privacy) | **POST** `/domains/{id}/whois` | Update Whois Privacy

# **add_domain**   { #add_domain }
<a name="add_domain"></a>

> `add_domain( on_success: Callable, on_failure: Callable)`

Place Domain Order

Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.add_domain(
	# On Success
	func(response):
		prints("Success!", "add_domain", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **add_domain_dnssec**   { #add_domain_dnssec }
<a name="add_domain_dnssec"></a>

> `add_domain_dnssec(id: int,domainDnssecRequest: DomainDnssecRequest, on_success: Callable, on_failure: Callable)`

Add Domain DNSSEC Records

Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)

var domainDnssecRequest = DomainDnssecRequest.new()
# … fill model domainDnssecRequest with data

# Invoke an endpoint
api.add_domain_dnssec(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# domainDnssecRequest: DomainDnssecRequest
	domainDnssecRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "add_domain_dnssec", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **add_domain_nameserver**   { #add_domain_nameserver }
<a name="add_domain_nameserver"></a>

> `add_domain_nameserver(id: int,domainNameserverPostRequest: DomainNameserverPostRequest, on_success: Callable, on_failure: Callable)`

Add Registered Nameserver

Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)

var domainNameserverPostRequest = DomainNameserverPostRequest.new()
# … fill model domainNameserverPostRequest with data

# Invoke an endpoint
api.add_domain_nameserver(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# domainNameserverPostRequest: DomainNameserverPostRequest
	domainNameserverPostRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "add_domain_nameserver", response)
		assert(response.data is TextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **cancel_domain**   { #cancel_domain }
<a name="cancel_domain"></a>

> `cancel_domain(id: int, on_success: Callable, on_failure: Callable)`

Cancel Domain Order

Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.cancel_domain(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "cancel_domain", response)
		assert(response.data is CancelDomain_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **delete_domain_dnssec**   { #delete_domain_dnssec }
<a name="delete_domain_dnssec"></a>

> `delete_domain_dnssec(id: int,action: String, on_success: Callable, on_failure: Callable)`

Remove Domain DNSSEC Records

Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.delete_domain_dnssec(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# action: String = ""   Eg: action_example
	# Set to `delete` to remove all DNSSEC records.
	action,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "delete_domain_dnssec", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **delete_domain_nameserver**   { #delete_domain_nameserver }
<a name="delete_domain_nameserver"></a>

> `delete_domain_nameserver(id: int,index: int, on_success: Callable, on_failure: Callable)`

Delete Registered Nameserver

Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.delete_domain_nameserver(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# index: int   Eg: 56
	# The index of the registered nameserver from the registered nameservers list to delete.  
	index,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "delete_domain_nameserver", response)
		assert(response.data is TextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_domain_contact**   { #get_domain_contact }
<a name="get_domain_contact"></a>

> `get_domain_contact(id: int, on_success: Callable, on_failure: Callable)`

Get Domain Contact Details

Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.get_domain_contact(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_domain_contact", response)
		assert(response.data is DomainContactDetails)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_domain_dnssec**   { #get_domain_dnssec }
<a name="get_domain_dnssec"></a>

> `get_domain_dnssec(id: int, on_success: Callable, on_failure: Callable)`

Get Domain DNSSEC Records

Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.get_domain_dnssec(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_domain_dnssec", response)
		assert(response.data is DomainDnssecRecords)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_domain_info**   { #get_domain_info }
<a name="get_domain_info"></a>

> `get_domain_info(id: int, on_success: Callable, on_failure: Callable)`

Get Domain Order

Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.get_domain_info(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_domain_info", response)
		assert(response.data is Domain)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_domain_invoices**   { #get_domain_invoices }
<a name="get_domain_invoices"></a>

> `get_domain_invoices(id: int, on_success: Callable, on_failure: Callable)`

Get Domain Invoices

Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.get_domain_invoices(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_domain_invoices", response)
		assert(response.data is ChargeInvoiceRows)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_domain_lookup**   { #get_domain_lookup }
<a name="get_domain_lookup"></a>

> `get_domain_lookup(name: String, on_success: Callable, on_failure: Callable)`

Lookup Domain Availability and Pricing

Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.get_domain_lookup(
	# name: String = ""   Eg: name_example
	# The full domain name to look up (for example `example.com`).
	name,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_domain_lookup", response)
		assert(response.data is DomainLookupResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_domain_nameservers**   { #get_domain_nameservers }
<a name="get_domain_nameservers"></a>

> `get_domain_nameservers(id: int, on_success: Callable, on_failure: Callable)`

List Registered Nameservers

Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.get_domain_nameservers(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_domain_nameservers", response)
		assert(response.data is DomainNameserverGetResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_domain_order_fields**   { #get_domain_order_fields }
<a name="get_domain_order_fields"></a>

> `get_domain_order_fields(domain: String,regType: String, on_success: Callable, on_failure: Callable)`

Get Domain Order Fields

Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.get_domain_order_fields(
	# domain: String = ""   Eg: domain_example
	# The fully qualified domain name (e.g. `example.com`).
	domain,
	# regType: String = ""   Eg: regType_example
	# The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers.
	regType,
	# On Success
	func(response):
		prints("Success!", "get_domain_order_fields", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_domain_order_search_results**   { #get_domain_order_search_results }
<a name="get_domain_order_search_results"></a>

> `get_domain_order_search_results(domain: String, on_success: Callable, on_failure: Callable)`

Get Domain Order Search Results

Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.get_domain_order_search_results(
	# domain: String = ""   Eg: domain_example
	# The fully qualified domain name to look up (e.g. `example.com`).
	domain,
	# On Success
	func(response):
		prints("Success!", "get_domain_order_search_results", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_domain_renewal**   { #get_domain_renewal }
<a name="get_domain_renewal"></a>

> `get_domain_renewal(id: int, on_success: Callable, on_failure: Callable)`

Start Domain Renewal Flow

Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.get_domain_renewal(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_domain_renewal", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_domain_search**   { #get_domain_search }
<a name="get_domain_search"></a>

> `get_domain_search(name: String, on_success: Callable, on_failure: Callable)`

Search Domain Suggestions

Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.get_domain_search(
	# name: String = ""   Eg: name_example
	# The base domain name to search (for example `example` or `example.com`).
	name,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_domain_search", response)
		assert(response.data is DomainSearchResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_domain_transfer**   { #get_domain_transfer }
<a name="get_domain_transfer"></a>

> `get_domain_transfer(id: int, on_success: Callable, on_failure: Callable)`

Start Domain Transfer Flow

Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.get_domain_transfer(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_domain_transfer", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_domain_whois_privacy**   { #get_domain_whois_privacy }
<a name="get_domain_whois_privacy"></a>

> `get_domain_whois_privacy(id: int, on_success: Callable, on_failure: Callable)`

Get Whois Privacy Status

Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.get_domain_whois_privacy(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_domain_whois_privacy", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_domains_list**   { #get_domains_list }
<a name="get_domains_list"></a>

> `get_domains_list( on_success: Callable, on_failure: Callable)`

List Domain Orders

Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.get_domains_list(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_domains_list", response)
		assert(response.data is DomainRow)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_domains_welcome_email**   { #get_domains_welcome_email }
<a name="get_domains_welcome_email"></a>

> `get_domains_welcome_email(id: int, on_success: Callable, on_failure: Callable)`

Resend Domain Welcome Email

Resends the welcome email for the domain service. The email contains registration details and management instructions.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.get_domains_welcome_email(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_domains_welcome_email", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_new_domain**   { #get_new_domain }
<a name="get_new_domain"></a>

> `get_new_domain( on_success: Callable, on_failure: Callable)`

Get Domain Ordering Information

Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.get_new_domain(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_new_domain", response)
		assert(response.data is DomainOrder)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **patch_domains**   { #patch_domains }
<a name="patch_domains"></a>

> `patch_domains( on_success: Callable, on_failure: Callable)`

Validate Domain Order

Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.patch_domains(
	# On Success
	func(response):
		prints("Success!", "patch_domains", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_domain_renewal**   { #post_domain_renewal }
<a name="post_domain_renewal"></a>

> `post_domain_renewal(id: int, on_success: Callable, on_failure: Callable)`

Request Domain Renewal

Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.post_domain_renewal(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_domain_renewal", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_domain_transfer**   { #post_domain_transfer }
<a name="post_domain_transfer"></a>

> `post_domain_transfer(id: int, on_success: Callable, on_failure: Callable)`

Request Domain Transfer

Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.post_domain_transfer(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_domain_transfer", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **put_domains**   { #put_domains }
<a name="put_domains"></a>

> `put_domains( on_success: Callable, on_failure: Callable)`

Domain Order Search

Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.put_domains(
	# On Success
	func(response):
		prints("Success!", "put_domains", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_domain_contact**   { #update_domain_contact }
<a name="update_domain_contact"></a>

> `update_domain_contact(id: int,domainContactDetails: DomainContactDetails, on_success: Callable, on_failure: Callable)`

Update Domain Contact Details

Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)

var domainContactDetails = DomainContactDetails.new()
# … fill model domainContactDetails with data

# Invoke an endpoint
api.update_domain_contact(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# domainContactDetails: DomainContactDetails
	domainContactDetails,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_domain_contact", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_domain_info**   { #update_domain_info }
<a name="update_domain_info"></a>

> `update_domain_info(id: String, on_success: Callable, on_failure: Callable)`

Update Domain Order

Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)


# Invoke an endpoint
api.update_domain_info(
	# id: String = ""   Eg: id_example
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# On Success
	func(response):
		prints("Success!", "update_domain_info", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_domain_nameservers**   { #update_domain_nameservers }
<a name="update_domain_nameservers"></a>

> `update_domain_nameservers(id: int,domainNameserverPutRequest: DomainNameserverPutRequest, on_success: Callable, on_failure: Callable)`

Replace Nameserver Set

Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)

var domainNameserverPutRequest = DomainNameserverPutRequest.new()
# … fill model domainNameserverPutRequest with data

# Invoke an endpoint
api.update_domain_nameservers(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# domainNameserverPutRequest: DomainNameserverPutRequest
	domainNameserverPutRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_domain_nameservers", response)
		assert(response.data is TextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_domain_whois_privacy**   { #update_domain_whois_privacy }
<a name="update_domain_whois_privacy"></a>

> `update_domain_whois_privacy(id: int,domainWhoisPrivacyRequest: DomainWhoisPrivacyRequest, on_success: Callable, on_failure: Callable)`

Update Whois Privacy

Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.

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
var api = DomainsApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DomainsApi.new(config, client)

var domainWhoisPrivacyRequest = DomainWhoisPrivacyRequest.new()
# … fill model domainWhoisPrivacyRequest with data

# Invoke an endpoint
api.update_domain_whois_privacy(
	# id: int   Eg: 56
	# The domain service ID. Use `domain_id` from `GET /domains`.
	id,
	# domainWhoisPrivacyRequest: DomainWhoisPrivacyRequest
	domainWhoisPrivacyRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_domain_whois_privacy", response)
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

