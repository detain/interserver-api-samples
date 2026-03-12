<a name="__pageTop"></a>
# QuickServersApi   { #QuickServersApi }


All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_qs**](#add_qs) | **POST** `/qs/order` | Place QuickServer Order
[**delete_qs_backup**](#delete_qs_backup) | **DELETE** `/qs/{id}/backups` | Delete QuickServer Backup
[**do_qs_block_smtp**](#do_qs_block_smtp) | **GET** `/qs/{id}/block_smtp` | Block QuickServer SMTP
[**do_qs_disable_cd**](#do_qs_disable_cd) | **GET** `/qs/{id}/disable_cd` | Disable CD Drive
[**do_qs_disable_quota**](#do_qs_disable_quota) | **GET** `/qs/{id}/disable_quota` | Disable Quotas
[**do_qs_eject_cd**](#do_qs_eject_cd) | **GET** `/qs/{id}/eject_cd` | Eject CD Drive
[**do_qs_enable_quota**](#do_qs_enable_quota) | **GET** `/qs/{id}/enable_quota` | Enable Quotas
[**do_qs_restart**](#do_qs_restart) | **GET** `/qs/{id}/restart` | Restart QuickServer
[**do_qs_start**](#do_qs_start) | **GET** `/qs/{id}/start` | Start QuickServer
[**do_qs_stop**](#do_qs_stop) | **GET** `/qs/{id}/stop` | Stop QuickServer
[**download_qs_backup**](#download_qs_backup) | **PATCH** `/qs/{id}/backups` | Download QuickServer Backup
[**get_new_qs**](#get_new_qs) | **GET** `/qs/order` | Get QuickServer Ordering Information
[**get_qs_backups**](#get_qs_backups) | **GET** `/qs/{id}/backups` | List QuickServer Backups
[**get_qs_change_hostname**](#get_qs_change_hostname) | **GET** `/qs/{id}/change_hostname` | Get QuickServer Hostname
[**get_qs_change_root_password**](#get_qs_change_root_password) | **GET** `/qs/{id}/change_root_password` | Get Change Root Password Info
[**get_qs_change_timezone**](#get_qs_change_timezone) | **GET** `/qs/{id}/change_timezone` | Get Timezone Info
[**get_qs_change_webuzo_password**](#get_qs_change_webuzo_password) | **GET** `/qs/{id}/change_webuzo_password` | Webuzo Change Pass Info
[**get_qs_info**](#get_qs_info) | **GET** `/qs/{id}` | Get QuickServer Order
[**get_qs_insert_cd**](#get_qs_insert_cd) | **GET** `/qs/{id}/insert_cd` | Insert CD Information
[**get_qs_invoices**](#get_qs_invoices) | **GET** `/qs/{id}/invoices` | Get QuickServer Invoices
[**get_qs_list**](#get_qs_list) | **GET** `/qs` | List QuickServers
[**get_qs_reinstall_os**](#get_qs_reinstall_os) | **GET** `/qs/{id}/reinstall_os` | QuickServer Reinstall OS Options
[**get_qs_reset_password**](#get_qs_reset_password) | **GET** `/qs/{id}/reset_password` | Reset QuickServer Password Info
[**get_qs_reverse_dns**](#get_qs_reverse_dns) | **GET** `/qs/{id}/reverse_dns` | Reverse DNS Info
[**get_qs_setup_vnc**](#get_qs_setup_vnc) | **GET** `/qs/{id}/setup_vnc` | VNC Setup Info
[**get_qs_traffic_usage**](#get_qs_traffic_usage) | **GET** `/qs/{id}/traffic_usage` | Get Traffic Usage
[**get_qs_view_desktop**](#get_qs_view_desktop) | **GET** `/qs/{id}/view_desktop` | Get View Desktop Info
[**get_qs_welcome_email**](#get_qs_welcome_email) | **GET** `/qs/{id}/welcome_email` | Resend QuickServer Welcome Email
[**post_qs_backup**](#post_qs_backup) | **POST** `/qs/{id}/backup` | Create QuickServer Backup
[**post_qs_change_hostname**](#post_qs_change_hostname) | **POST** `/qs/{id}/change_hostname` | Update QuickServer Hostname
[**post_qs_change_root_password**](#post_qs_change_root_password) | **POST** `/qs/{id}/change_root_password` | Change Root Password
[**post_qs_change_timezone**](#post_qs_change_timezone) | **POST** `/qs/{id}/change_timezone` | Change QuickServer Timezone
[**post_qs_change_webuzo_password**](#post_qs_change_webuzo_password) | **POST** `/qs/{id}/change_webuzo_password` | Change Webuzo Password
[**post_qs_insert_cd**](#post_qs_insert_cd) | **POST** `/qs/{id}/insert_cd` | Insert CD in QuickServer
[**post_qs_reinstall_os**](#post_qs_reinstall_os) | **POST** `/qs/{id}/reinstall_os` | Reinstall QuickServer OS
[**post_qs_reset_password**](#post_qs_reset_password) | **POST** `/qs/{id}/reset_password` | Reset QuickServer Password
[**post_qs_reverse_dns**](#post_qs_reverse_dns) | **POST** `/qs/{id}/reverse_dns` | Update Reverse DNS
[**post_qs_setup_vnc**](#post_qs_setup_vnc) | **POST** `/qs/{id}/setup_vnc` | Setup VNC
[**post_qs_traffic_usage**](#post_qs_traffic_usage) | **POST** `/qs/{id}/traffic_usage` | Search Traffic Usage
[**post_qs_view_desktop**](#post_qs_view_desktop) | **POST** `/qs/{id}/view_desktop` | Update View Desktop
[**post_quick_server_restore**](#post_quick_server_restore) | **POST** `/qs/{id}/restore` | Restore QuickServer from Backup
[**put_qs**](#put_qs) | **PUT** `/qs/order` | Validate QuickServer Order
[**quickservers_cancel**](#quickservers_cancel) | **DELETE** `/qs/{id}` | Cancel QuickServer Order
[**update_qs_info**](#update_qs_info) | **POST** `/qs/{id}` | Update QuickServer Order

# **add_qs**   { #add_qs }
<a name="add_qs"></a>

> `add_qs( on_success: Callable, on_failure: Callable)`

Place QuickServer Order

Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.add_qs(
	# On Success
	func(response):
		prints("Success!", "add_qs", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **delete_qs_backup**   { #delete_qs_backup }
<a name="delete_qs_backup"></a>

> `delete_qs_backup(id: int,file: String,all = "", on_success: Callable, on_failure: Callable)`

Delete QuickServer Backup

Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.delete_qs_backup(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# file: String = ""   Eg: file_example
	# The backup filename to delete.
	file,
	# all: String = ""   Eg: all_example
	# Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
	all,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "delete_qs_backup", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **do_qs_block_smtp**   { #do_qs_block_smtp }
<a name="do_qs_block_smtp"></a>

> `do_qs_block_smtp(id: int, on_success: Callable, on_failure: Callable)`

Block QuickServer SMTP

Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.do_qs_block_smtp(
	# id: int   Eg: 56
	# QuickServer ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "do_qs_block_smtp", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **do_qs_disable_cd**   { #do_qs_disable_cd }
<a name="do_qs_disable_cd"></a>

> `do_qs_disable_cd(id: int, on_success: Callable, on_failure: Callable)`

Disable CD Drive

Disables the virtual CD drive for the QuickServer.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.do_qs_disable_cd(
	# id: int   Eg: 56
	# QuickServer ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "do_qs_disable_cd", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **do_qs_disable_quota**   { #do_qs_disable_quota }
<a name="do_qs_disable_quota"></a>

> `do_qs_disable_quota(id: int, on_success: Callable, on_failure: Callable)`

Disable Quotas

Disables disk quota enforcement for the QuickServer.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.do_qs_disable_quota(
	# id: int   Eg: 56
	# QuickServer ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "do_qs_disable_quota", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **do_qs_eject_cd**   { #do_qs_eject_cd }
<a name="do_qs_eject_cd"></a>

> `do_qs_eject_cd(id: int, on_success: Callable, on_failure: Callable)`

Eject CD Drive

Ejects the virtual CD from the QuickServer's CD drive.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.do_qs_eject_cd(
	# id: int   Eg: 56
	# QuickServer ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "do_qs_eject_cd", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **do_qs_enable_quota**   { #do_qs_enable_quota }
<a name="do_qs_enable_quota"></a>

> `do_qs_enable_quota(id: int, on_success: Callable, on_failure: Callable)`

Enable Quotas

Enables disk quota enforcement for the QuickServer.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.do_qs_enable_quota(
	# id: int   Eg: 56
	# QuickServer ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "do_qs_enable_quota", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **do_qs_restart**   { #do_qs_restart }
<a name="do_qs_restart"></a>

> `do_qs_restart(id: int, on_success: Callable, on_failure: Callable)`

Restart QuickServer

Restarts the QuickServer. The server will be shut down and started again.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.do_qs_restart(
	# id: int   Eg: 56
	# QuickServer ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "do_qs_restart", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **do_qs_start**   { #do_qs_start }
<a name="do_qs_start"></a>

> `do_qs_start(id: int, on_success: Callable, on_failure: Callable)`

Start QuickServer

Powers on the QuickServer.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.do_qs_start(
	# id: int   Eg: 56
	# QuickServer ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "do_qs_start", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **do_qs_stop**   { #do_qs_stop }
<a name="do_qs_stop"></a>

> `do_qs_stop(id: int, on_success: Callable, on_failure: Callable)`

Stop QuickServer

Powers off the QuickServer.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.do_qs_stop(
	# id: int   Eg: 56
	# QuickServer ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "do_qs_stop", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **download_qs_backup**   { #download_qs_backup }
<a name="download_qs_backup"></a>

> `download_qs_backup(id: int,downloadQsBackupRequest: DownloadQsBackupRequest,all = "", on_success: Callable, on_failure: Callable)`

Download QuickServer Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)

var downloadQsBackupRequest = DownloadQsBackupRequest.new()
# … fill model downloadQsBackupRequest with data

# Invoke an endpoint
api.download_qs_backup(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# downloadQsBackupRequest: DownloadQsBackupRequest
	downloadQsBackupRequest,
	# all: String = ""   Eg: all_example
	# Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
	all,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "download_qs_backup", response)
		assert(response.data is downloadQsBackup_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_new_qs**   { #get_new_qs }
<a name="get_new_qs"></a>

> `get_new_qs( on_success: Callable, on_failure: Callable)`

Get QuickServer Ordering Information

Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_new_qs(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_new_qs", response)
		assert(response.data is QuickserverOrder)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_qs_backups**   { #get_qs_backups }
<a name="get_qs_backups"></a>

> `get_qs_backups(id: int,all = "", on_success: Callable, on_failure: Callable)`

List QuickServer Backups

Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_qs_backups(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# all: String = ""   Eg: all_example
	# Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
	all,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_qs_backups", response)
		assert(response.data is VpsBackupRows)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_qs_change_hostname**   { #get_qs_change_hostname }
<a name="get_qs_change_hostname"></a>

> `get_qs_change_hostname(id: int, on_success: Callable, on_failure: Callable)`

Get QuickServer Hostname

Retrieves the current hostname and any validation requirements for changing it.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_qs_change_hostname(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):
		prints("Success!", "get_qs_change_hostname", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_qs_change_root_password**   { #get_qs_change_root_password }
<a name="get_qs_change_root_password"></a>

> `get_qs_change_root_password(id: int, on_success: Callable, on_failure: Callable)`

Get Change Root Password Info

Retrieves instructions or metadata needed to reset the root password.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_qs_change_root_password(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):
		prints("Success!", "get_qs_change_root_password", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_qs_change_timezone**   { #get_qs_change_timezone }
<a name="get_qs_change_timezone"></a>

> `get_qs_change_timezone(id: int, on_success: Callable, on_failure: Callable)`

Get Timezone Info

Returns the list of available timezones that can be set on the QuickServer.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_qs_change_timezone(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_qs_change_timezone", response)
		assert(response.data is string)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_qs_change_webuzo_password**   { #get_qs_change_webuzo_password }
<a name="get_qs_change_webuzo_password"></a>

> `get_qs_change_webuzo_password(id: int, on_success: Callable, on_failure: Callable)`

Webuzo Change Pass Info

Retrieves instructions or metadata for changing the Webuzo control panel password.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_qs_change_webuzo_password(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):
		prints("Success!", "get_qs_change_webuzo_password", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_qs_info**   { #get_qs_info }
<a name="get_qs_info"></a>

> `get_qs_info(id: int, on_success: Callable, on_failure: Callable)`

Get QuickServer Order

Returns detailed QuickServer information, including credentials, IPs, and available client actions.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_qs_info(
	# id: int   Eg: 56
	# QuickServer ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_qs_info", response)
		assert(response.data is Quickserver)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_qs_insert_cd**   { #get_qs_insert_cd }
<a name="get_qs_insert_cd"></a>

> `get_qs_insert_cd(id: int, on_success: Callable, on_failure: Callable)`

Insert CD Information

Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_qs_insert_cd(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):
		prints("Success!", "get_qs_insert_cd", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_qs_invoices**   { #get_qs_invoices }
<a name="get_qs_invoices"></a>

> `get_qs_invoices(id: int, on_success: Callable, on_failure: Callable)`

Get QuickServer Invoices

Returns the billing invoices associated with this QuickServer.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_qs_invoices(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_qs_invoices", response)
		assert(response.data is ChargeInvoiceRows)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_qs_list**   { #get_qs_list }
<a name="get_qs_list"></a>

> `get_qs_list( on_success: Callable, on_failure: Callable)`

List QuickServers

Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_qs_list(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_qs_list", response)
		assert(response.data is QuickserverRow)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_qs_reinstall_os**   { #get_qs_reinstall_os }
<a name="get_qs_reinstall_os"></a>

> `get_qs_reinstall_os(id: int, on_success: Callable, on_failure: Callable)`

QuickServer Reinstall OS Options

Returns the list of available operating system templates for reinstalling the QuickServer.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_qs_reinstall_os(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_qs_reinstall_os", response)
		assert(response.data is VpsTemplatesList)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_qs_reset_password**   { #get_qs_reset_password }
<a name="get_qs_reset_password"></a>

> `get_qs_reset_password(id: int, on_success: Callable, on_failure: Callable)`

Reset QuickServer Password Info

Returns information needed before resetting the QuickServer's root password.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_qs_reset_password(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):
		prints("Success!", "get_qs_reset_password", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_qs_reverse_dns**   { #get_qs_reverse_dns }
<a name="get_qs_reverse_dns"></a>

> `get_qs_reverse_dns(id: int, on_success: Callable, on_failure: Callable)`

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_qs_reverse_dns(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_qs_reverse_dns", response)
		assert(response.data is ReverseDnsEntries)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_qs_setup_vnc**   { #get_qs_setup_vnc }
<a name="get_qs_setup_vnc"></a>

> `get_qs_setup_vnc(id: int, on_success: Callable, on_failure: Callable)`

VNC Setup Info

Returns the current VNC connection information for the QuickServer.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_qs_setup_vnc(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):
		prints("Success!", "get_qs_setup_vnc", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_qs_traffic_usage**   { #get_qs_traffic_usage }
<a name="get_qs_traffic_usage"></a>

> `get_qs_traffic_usage(id: int, on_success: Callable, on_failure: Callable)`

Get Traffic Usage

Returns bandwidth traffic usage data for the QuickServer.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_qs_traffic_usage(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):
		prints("Success!", "get_qs_traffic_usage", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_qs_view_desktop**   { #get_qs_view_desktop }
<a name="get_qs_view_desktop"></a>

> `get_qs_view_desktop(id: int, on_success: Callable, on_failure: Callable)`

Get View Desktop Info

Returns remote desktop connection information for the QuickServer.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_qs_view_desktop(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):
		prints("Success!", "get_qs_view_desktop", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_qs_welcome_email**   { #get_qs_welcome_email }
<a name="get_qs_welcome_email"></a>

> `get_qs_welcome_email(id: String, on_success: Callable, on_failure: Callable)`

Resend QuickServer Welcome Email

Resends the welcome email containing connection details and credentials for the QuickServer order.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.get_qs_welcome_email(
	# id: String = ""   Eg: 133123
	# Quickserver ID
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_qs_welcome_email", response)
		assert(response.data is TextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_qs_backup**   { #post_qs_backup }
<a name="post_qs_backup"></a>

> `post_qs_backup(id: int, on_success: Callable, on_failure: Callable)`

Create QuickServer Backup

Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.post_qs_backup(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_qs_backup", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_qs_change_hostname**   { #post_qs_change_hostname }
<a name="post_qs_change_hostname"></a>

> `post_qs_change_hostname(id: int, on_success: Callable, on_failure: Callable)`

Update QuickServer Hostname

Submits a hostname change request for the QuickServer.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.post_qs_change_hostname(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_qs_change_hostname", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_qs_change_root_password**   { #post_qs_change_root_password }
<a name="post_qs_change_root_password"></a>

> `post_qs_change_root_password(id: int, on_success: Callable, on_failure: Callable)`

Change Root Password

Triggers a root password reset for the QuickServer.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.post_qs_change_root_password(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_qs_change_root_password", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_qs_change_timezone**   { #post_qs_change_timezone }
<a name="post_qs_change_timezone"></a>

> `post_qs_change_timezone(id: int,timezone: String, on_success: Callable, on_failure: Callable)`

Change QuickServer Timezone

Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.post_qs_change_timezone(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# timezone: String = ""   Eg: timezone_example
	# The time zone
	timezone,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_qs_change_timezone", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_qs_change_webuzo_password**   { #post_qs_change_webuzo_password }
<a name="post_qs_change_webuzo_password"></a>

> `post_qs_change_webuzo_password(id: int, on_success: Callable, on_failure: Callable)`

Change Webuzo Password

Resets the Webuzo control panel password for the QuickServer.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.post_qs_change_webuzo_password(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_qs_change_webuzo_password", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_qs_insert_cd**   { #post_qs_insert_cd }
<a name="post_qs_insert_cd"></a>

> `post_qs_insert_cd(id: int, on_success: Callable, on_failure: Callable)`

Insert CD in QuickServer

Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.post_qs_insert_cd(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_qs_insert_cd", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_qs_reinstall_os**   { #post_qs_reinstall_os }
<a name="post_qs_reinstall_os"></a>

> `post_qs_reinstall_os(id: int, on_success: Callable, on_failure: Callable)`

Reinstall QuickServer OS

Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.post_qs_reinstall_os(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_qs_reinstall_os", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_qs_reset_password**   { #post_qs_reset_password }
<a name="post_qs_reset_password"></a>

> `post_qs_reset_password(id: int, on_success: Callable, on_failure: Callable)`

Reset QuickServer Password

Resets the root password on the QuickServer to a new randomly generated password.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.post_qs_reset_password(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_qs_reset_password", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_qs_reverse_dns**   { #post_qs_reverse_dns }
<a name="post_qs_reverse_dns"></a>

> `post_qs_reverse_dns(id: int,reverseDnsEntries: ReverseDnsEntries, on_success: Callable, on_failure: Callable)`

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)

var reverseDnsEntries = ReverseDnsEntries.new()
# … fill model reverseDnsEntries with data

# Invoke an endpoint
api.post_qs_reverse_dns(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# reverseDnsEntries: ReverseDnsEntries
	reverseDnsEntries,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_qs_reverse_dns", response)
		assert(response.data is TextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_qs_setup_vnc**   { #post_qs_setup_vnc }
<a name="post_qs_setup_vnc"></a>

> `post_qs_setup_vnc(id: int, on_success: Callable, on_failure: Callable)`

Setup VNC

Sets up or refreshes the VNC console connection for the QuickServer.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.post_qs_setup_vnc(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_qs_setup_vnc", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_qs_traffic_usage**   { #post_qs_traffic_usage }
<a name="post_qs_traffic_usage"></a>

> `post_qs_traffic_usage(id: int, on_success: Callable, on_failure: Callable)`

Search Traffic Usage

Searches and filters the QuickServer's bandwidth traffic usage data by date range.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.post_qs_traffic_usage(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):
		prints("Success!", "post_qs_traffic_usage", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_qs_view_desktop**   { #post_qs_view_desktop }
<a name="post_qs_view_desktop"></a>

> `post_qs_view_desktop(id: int, on_success: Callable, on_failure: Callable)`

Update View Desktop

Updates or refreshes the remote desktop session for the QuickServer.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.post_qs_view_desktop(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):
		prints("Success!", "post_qs_view_desktop", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_quick_server_restore**   { #post_quick_server_restore }
<a name="post_quick_server_restore"></a>

> `post_quick_server_restore(id: int,restoreRequest: RestoreRequest, on_success: Callable, on_failure: Callable)`

Restore QuickServer from Backup

Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)

var restoreRequest = RestoreRequest.new()
# … fill model restoreRequest with data

# Invoke an endpoint
api.post_quick_server_restore(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# restoreRequest: RestoreRequest
	# QuickServer Restore request
	restoreRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_quick_server_restore", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **put_qs**   { #put_qs }
<a name="put_qs"></a>

> `put_qs( on_success: Callable, on_failure: Callable)`

Validate QuickServer Order

Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.put_qs(
	# On Success
	func(response):
		prints("Success!", "put_qs", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **quickservers_cancel**   { #quickservers_cancel }
<a name="quickservers_cancel"></a>

> `quickservers_cancel(id: int, on_success: Callable, on_failure: Callable)`

Cancel QuickServer Order

Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.quickservers_cancel(
	# id: int   Eg: 56
	# QuickServer ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "quickservers_cancel", response)
		assert(response.data is quickserversCancel_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_qs_info**   { #update_qs_info }
<a name="update_qs_info"></a>

> `update_qs_info(id: String, on_success: Callable, on_failure: Callable)`

Update QuickServer Order

Updates QuickServer metadata or stored settings associated with the order.

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
var api = QuickServersApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = QuickServersApi.new(config, client)


# Invoke an endpoint
api.update_qs_info(
	# id: String = ""   Eg: id_example
	# QuickServer ID number.
	id,
	# On Success
	func(response):
		prints("Success!", "update_qs_info", response)
		
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

