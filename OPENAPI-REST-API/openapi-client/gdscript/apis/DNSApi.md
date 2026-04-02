<a name="__pageTop"></a>
# DNSApi   { #DNSApi }


All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_dns_domain**](#add_dns_domain) | **POST** `/dns` | Create DNS Domain
[**add_dns_record**](#add_dns_record) | **POST** `/dns/{id}` | Add DNS Record to Domain
[**delete_dns_domain**](#delete_dns_domain) | **DELETE** `/dns/{id}` | Delete DNS Domain
[**delete_dns_record**](#delete_dns_record) | **DELETE** `/dns/{domainId}/{recordId}` | Delete DNS Record
[**get_dns_domain**](#get_dns_domain) | **GET** `/dns/{id}` | List Domain DNS Records
[**get_dns_list**](#get_dns_list) | **GET** `/dns` | List DNS Domains
[**update_dns_record**](#update_dns_record) | **POST** `/dns/{domainId}/{recordId}` | Update DNS Record

# **add_dns_domain**   { #add_dns_domain }
<a name="add_dns_domain"></a>

> `add_dns_domain(domain: String,some_ipnull: String, on_success: Callable, on_failure: Callable)`

Create DNS Domain

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.

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
var api = DNSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DNSApi.new(config, client)


# Invoke an endpoint
api.add_dns_domain(
	# domain: String = ""   Eg: domain_example
	# The domain name.
	domain,
	# some_ipnull: String = ""   Eg: some_ipnull_example
	# IP Address to point the domain to.
	some_ipnull,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "add_dns_domain", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **add_dns_record**   { #add_dns_record }
<a name="add_dns_record"></a>

> `add_dns_record(id: String,name: String,type: DnsRecordType,content: String,ttl = 86400,prio = 0, on_success: Callable, on_failure: Callable)`

Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.

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
var api = DNSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DNSApi.new(config, client)


# Invoke an endpoint
api.add_dns_record(
	# id: String = ""   Eg: 472
	# The DNS Domain ID.
	id,
	# name: String = ""   Eg: name_example
	# Name part of record
	name,
	# type: DnsRecordType
	type,
	# content: String = ""   Eg: content_example
	# Content of record
	content,
	# ttl: int = 86400   Eg: 56
	# Time-to-live
	ttl,
	# prio: int = 0   Eg: 56
	# Priority
	prio,
	# On Success
	func(response):
		prints("Success!", "add_dns_record", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **delete_dns_domain**   { #delete_dns_domain }
<a name="delete_dns_domain"></a>

> `delete_dns_domain(id: String, on_success: Callable, on_failure: Callable)`

Delete DNS Domain

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

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
var api = DNSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DNSApi.new(config, client)


# Invoke an endpoint
api.delete_dns_domain(
	# id: String = ""   Eg: id_example
	# The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "delete_dns_domain", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **delete_dns_record**   { #delete_dns_record }
<a name="delete_dns_record"></a>

> `delete_dns_record(domainId: int,recordId: int, on_success: Callable, on_failure: Callable)`

Delete DNS Record

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.

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
var api = DNSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DNSApi.new(config, client)


# Invoke an endpoint
api.delete_dns_record(
	# domainId: int   Eg: 56
	# The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
	domainId,
	# recordId: int   Eg: 56
	# The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
	recordId,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "delete_dns_record", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_dns_domain**   { #get_dns_domain }
<a name="get_dns_domain"></a>

> `get_dns_domain(id: int, on_success: Callable, on_failure: Callable)`

List Domain DNS Records

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.

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
var api = DNSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DNSApi.new(config, client)


# Invoke an endpoint
api.get_dns_domain(
	# id: int   Eg: 56
	# The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_dns_domain", response)
		assert(response.data is DnsRecord)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_dns_list**   { #get_dns_list }
<a name="get_dns_list"></a>

> `get_dns_list( on_success: Callable, on_failure: Callable)`

List DNS Domains

Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.

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
var api = DNSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DNSApi.new(config, client)


# Invoke an endpoint
api.get_dns_list(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_dns_list", response)
		assert(response.data is DnsListItem)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_dns_record**   { #update_dns_record }
<a name="update_dns_record"></a>

> `update_dns_record(domainId: int,recordId: int,name = "",type = null,content = "",ttl = "",prio = "",disabled = "",ordername = "",auth = "", on_success: Callable, on_failure: Callable)`

Update DNS Record

Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

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
var api = DNSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = DNSApi.new(config, client)


# Invoke an endpoint
api.update_dns_record(
	# domainId: int   Eg: 56
	# The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
	domainId,
	# recordId: int   Eg: 56
	# The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
	recordId,
	# name: String = ""   Eg: name_example
	name,
	# type: DnsRecordType
	type,
	# content: String = ""   Eg: content_example
	content,
	# ttl: String = ""   Eg: ttl_example
	ttl,
	# prio: String = ""   Eg: prio_example
	prio,
	# disabled: String = ""   Eg: disabled_example
	disabled,
	# ordername: String = ""   Eg: ordername_example
	ordername,
	# auth: String = ""   Eg: auth_example
	auth,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_dns_record", response)
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

