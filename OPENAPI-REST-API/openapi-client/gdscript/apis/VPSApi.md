<a name="__pageTop"></a>
# VPSApi   { #VPSApi }


All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_vps**](#add_vps) | **POST** `/vps/order` | Place VPS Order
[**delete_vps_backup**](#delete_vps_backup) | **DELETE** `/vps/{id}/backups` | Delete VPS Backup
[**do_vps_block_smtp**](#do_vps_block_smtp) | **GET** `/vps/{id}/block_smtp` | Blocks SMTP
[**do_vps_disable_cd**](#do_vps_disable_cd) | **GET** `/vps/{id}/disable_cd` | Disable CD Drive
[**do_vps_disable_quota**](#do_vps_disable_quota) | **GET** `/vps/{id}/disable_quota` | Disable Quotas
[**do_vps_eject_cd**](#do_vps_eject_cd) | **GET** `/vps/{id}/eject_cd` | Eject CD Drive
[**do_vps_enable_quota**](#do_vps_enable_quota) | **GET** `/vps/{id}/enable_quota` | Enable Quotas
[**do_vps_restart**](#do_vps_restart) | **GET** `/vps/{id}/restart` | Restart VPS
[**do_vps_start**](#do_vps_start) | **GET** `/vps/{id}/start` | Start VPS
[**do_vps_stop**](#do_vps_stop) | **GET** `/vps/{id}/stop` | Stop VPS
[**download_vps_backup**](#download_vps_backup) | **PATCH** `/vps/{id}/backups` | Download VPS Backup
[**get_new_vps**](#get_new_vps) | **GET** `/vps/order` | VPS Ordering Information
[**get_vps_backups**](#get_vps_backups) | **GET** `/vps/{id}/backups` | Get VPS Backups List
[**get_vps_buy_hd_space**](#get_vps_buy_hd_space) | **GET** `/vps/{id}/buy_hd_space` | HD Space Addon Info
[**get_vps_buy_ip**](#get_vps_buy_ip) | **GET** `/vps/{id}/buy_ip` | Additional IP Addon Info
[**get_vps_change_timezone**](#get_vps_change_timezone) | **GET** `/vps/{id}/change_timezone` | Get Timezone Info
[**get_vps_info**](#get_vps_info) | **GET** `/vps/{id}` | Get VPS Order
[**get_vps_invoices**](#get_vps_invoices) | **GET** `/vps/{id}/invoices` | Get VPS Invoices
[**get_vps_list**](#get_vps_list) | **GET** `/vps` | List VPS Orders
[**get_vps_reinstall_os**](#get_vps_reinstall_os) | **GET** `/vps/{id}/reinstall_os` | VPS Reinstall OS Options
[**get_vps_reverse_dns**](#get_vps_reverse_dns) | **GET** `/vps/{id}/reverse_dns` | Reverse DNS Info
[**get_vps_setup_vnc**](#get_vps_setup_vnc) | **GET** `/vps/{id}/setup_vnc` | VNC Setup Info
[**get_vps_slices**](#get_vps_slices) | **GET** `/vps/{id}/slices` | Slice Upgrade Info
[**get_vps_traffic_usage**](#get_vps_traffic_usage) | **GET** `/vps/{id}/traffic_usage` | Get Traffic Usage
[**get_vps_view_desktop**](#get_vps_view_desktop) | **GET** `/vps/{id}/view_desktop` | Get View Desktop Info
[**get_vps_welcome_email**](#get_vps_welcome_email) | **GET** `/vps/{id}/welcome_email` | Resend VPS Welcome Email
[**post_vps_backup**](#post_vps_backup) | **GET** `/vps/{id}/backup` | Start a VPS Backup
[**post_vps_buy_hd_space**](#post_vps_buy_hd_space) | **POST** `/vps/{id}/buy_hd_space` | Purchase HD Space Addon
[**post_vps_buy_ip**](#post_vps_buy_ip) | **POST** `/vps/{id}/buy_ip` | Purchase Additional IP
[**post_vps_change_hostname**](#post_vps_change_hostname) | **POST** `/vps/{id}/change_hostname` | Update VPS Hostname
[**post_vps_change_root_password**](#post_vps_change_root_password) | **POST** `/vps/{id}/change_root_password` | Change VPS Root Password
[**post_vps_change_timezone**](#post_vps_change_timezone) | **POST** `/vps/{id}/change_timezone` | Change VPS Timezone
[**post_vps_change_webuzo_password**](#post_vps_change_webuzo_password) | **POST** `/vps/{id}/change_webuzo_password` | Change Webuzo Password
[**post_vps_insert_cd**](#post_vps_insert_cd) | **POST** `/vps/{id}/insert_cd` | Insert CD in VPS
[**post_vps_reinstall_os**](#post_vps_reinstall_os) | **POST** `/vps/{id}/reinstall_os` | Reinstall VPS OS
[**post_vps_reset_password**](#post_vps_reset_password) | **POST** `/vps/{id}/reset_password` | Reset VPS Password
[**post_vps_restore**](#post_vps_restore) | **POST** `/vps/{id}/restore` | Restore VPS from Backup
[**post_vps_reverse_dns**](#post_vps_reverse_dns) | **POST** `/vps/{id}/reverse_dns` | Update Reverse DNS
[**post_vps_setup_vnc**](#post_vps_setup_vnc) | **POST** `/vps/{id}/setup_vnc` | Setup VNC
[**post_vps_slices**](#post_vps_slices) | **POST** `/vps/{id}/slices` | Purchase Slice Upgrade
[**post_vps_view_desktop**](#post_vps_view_desktop) | **POST** `/vps/{id}/view_desktop` | Update View Desktop
[**put_vps**](#put_vps) | **PUT** `/vps/order` | Validate VPS Order
[**update_vps_info**](#update_vps_info) | **POST** `/vps/{id}` | Update VPS Order
[**v_ps_cancel**](#v_ps_cancel) | **DELETE** `/vps/{id}` | Cancel VPS Service

# **add_vps**   { #add_vps }
<a name="add_vps"></a>

> `add_vps(vpsOrderPostRequest = null, on_success: Callable, on_failure: Callable)`

Place VPS Order

Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)

var vpsOrderPostRequest = VpsOrderPostRequest.new()
# … fill model vpsOrderPostRequest with data

# Invoke an endpoint
api.add_vps(
	# vpsOrderPostRequest: VpsOrderPostRequest
	vpsOrderPostRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "add_vps", response)
		assert(response.data is ServiceOrderPostResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **delete_vps_backup**   { #delete_vps_backup }
<a name="delete_vps_backup"></a>

> `delete_vps_backup(id: int,file: String,all = "", on_success: Callable, on_failure: Callable)`

Delete VPS Backup

Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.delete_vps_backup(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# file: String = ""   Eg: file_example
	# The backup filename to delete.
	file,
	# all: String = ""   Eg: all_example
	# Set to `1` to list all backups across all services, not just the ones for the given VPS.
	all,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "delete_vps_backup", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **do_vps_block_smtp**   { #do_vps_block_smtp }
<a name="do_vps_block_smtp"></a>

> `do_vps_block_smtp(id: int, on_success: Callable, on_failure: Callable)`

Blocks SMTP

Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.do_vps_block_smtp(
	# id: int   Eg: 56
	# VPS ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "do_vps_block_smtp", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **do_vps_disable_cd**   { #do_vps_disable_cd }
<a name="do_vps_disable_cd"></a>

> `do_vps_disable_cd(id: int, on_success: Callable, on_failure: Callable)`

Disable CD Drive

Disables the virtual CD drive on the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.do_vps_disable_cd(
	# id: int   Eg: 56
	# VPS ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "do_vps_disable_cd", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **do_vps_disable_quota**   { #do_vps_disable_quota }
<a name="do_vps_disable_quota"></a>

> `do_vps_disable_quota(id: int, on_success: Callable, on_failure: Callable)`

Disable Quotas

Disables disk quota enforcement on the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.do_vps_disable_quota(
	# id: int   Eg: 56
	# VPS ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "do_vps_disable_quota", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **do_vps_eject_cd**   { #do_vps_eject_cd }
<a name="do_vps_eject_cd"></a>

> `do_vps_eject_cd(id: int, on_success: Callable, on_failure: Callable)`

Eject CD Drive

Ejects the virtual CD from the VPS CD drive.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.do_vps_eject_cd(
	# id: int   Eg: 56
	# VPS ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "do_vps_eject_cd", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **do_vps_enable_quota**   { #do_vps_enable_quota }
<a name="do_vps_enable_quota"></a>

> `do_vps_enable_quota(id: int, on_success: Callable, on_failure: Callable)`

Enable Quotas

Enables disk quota enforcement on the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.do_vps_enable_quota(
	# id: int   Eg: 56
	# VPS ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "do_vps_enable_quota", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **do_vps_restart**   { #do_vps_restart }
<a name="do_vps_restart"></a>

> `do_vps_restart(id: int, on_success: Callable, on_failure: Callable)`

Restart VPS

Restarts the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.do_vps_restart(
	# id: int   Eg: 56
	# VPS ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "do_vps_restart", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **do_vps_start**   { #do_vps_start }
<a name="do_vps_start"></a>

> `do_vps_start(id: int, on_success: Callable, on_failure: Callable)`

Start VPS

Powers on the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.do_vps_start(
	# id: int   Eg: 56
	# VPS ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "do_vps_start", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **do_vps_stop**   { #do_vps_stop }
<a name="do_vps_stop"></a>

> `do_vps_stop(id: int, on_success: Callable, on_failure: Callable)`

Stop VPS

Powers off the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.do_vps_stop(
	# id: int   Eg: 56
	# VPS ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "do_vps_stop", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **download_vps_backup**   { #download_vps_backup }
<a name="download_vps_backup"></a>

> `download_vps_backup(id: int,downloadQsBackupRequest: DownloadQsBackupRequest,all = "", on_success: Callable, on_failure: Callable)`

Download VPS Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)

var downloadQsBackupRequest = DownloadQsBackupRequest.new()
# … fill model downloadQsBackupRequest with data

# Invoke an endpoint
api.download_vps_backup(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# downloadQsBackupRequest: DownloadQsBackupRequest
	downloadQsBackupRequest,
	# all: String = ""   Eg: all_example
	# Set to `1` to list all backups across all services, not just the ones for the given VPS.
	all,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "download_vps_backup", response)
		assert(response.data is downloadQsBackup_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_new_vps**   { #get_new_vps }
<a name="get_new_vps"></a>

> `get_new_vps( on_success: Callable, on_failure: Callable)`

VPS Ordering Information

Retrieves available VPS configurations, OS templates, and pricing for ordering.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.get_new_vps(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_new_vps", response)
		assert(response.data is VpsOrder)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_vps_backups**   { #get_vps_backups }
<a name="get_vps_backups"></a>

> `get_vps_backups(id: int,all = "", on_success: Callable, on_failure: Callable)`

Get VPS Backups List

Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.get_vps_backups(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# all: String = ""   Eg: all_example
	# Set to `1` to list all backups across all services, not just the ones for the given VPS.
	all,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_vps_backups", response)
		assert(response.data is VpsBackupRows)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_vps_buy_hd_space**   { #get_vps_buy_hd_space }
<a name="get_vps_buy_hd_space"></a>

> `get_vps_buy_hd_space(id: int, on_success: Callable, on_failure: Callable)`

HD Space Addon Info

Returns available hard drive space addon options and pricing for the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.get_vps_buy_hd_space(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):
		prints("Success!", "get_vps_buy_hd_space", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_vps_buy_ip**   { #get_vps_buy_ip }
<a name="get_vps_buy_ip"></a>

> `get_vps_buy_ip(id: int, on_success: Callable, on_failure: Callable)`

Additional IP Addon Info

Returns available additional IP address options and pricing for the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.get_vps_buy_ip(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):
		prints("Success!", "get_vps_buy_ip", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_vps_change_timezone**   { #get_vps_change_timezone }
<a name="get_vps_change_timezone"></a>

> `get_vps_change_timezone(id: int, on_success: Callable, on_failure: Callable)`

Get Timezone Info

Returns the list of available timezones that can be set on the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.get_vps_change_timezone(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_vps_change_timezone", response)
		assert(response.data is string)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_vps_info**   { #get_vps_info }
<a name="get_vps_info"></a>

> `get_vps_info(id: int, on_success: Callable, on_failure: Callable)`

Get VPS Order

Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.get_vps_info(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_vps_info", response)
		assert(response.data is Vps)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_vps_invoices**   { #get_vps_invoices }
<a name="get_vps_invoices"></a>

> `get_vps_invoices(id: int, on_success: Callable, on_failure: Callable)`

Get VPS Invoices

Returns the billing invoices associated with this VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.get_vps_invoices(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_vps_invoices", response)
		assert(response.data is ChargeInvoiceRows)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_vps_list**   { #get_vps_list }
<a name="get_vps_list"></a>

> `get_vps_list( on_success: Callable, on_failure: Callable)`

List VPS Orders

Returns all VPS services on the account with their current status and configuration.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.get_vps_list(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_vps_list", response)
		assert(response.data is VpsRow)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_vps_reinstall_os**   { #get_vps_reinstall_os }
<a name="get_vps_reinstall_os"></a>

> `get_vps_reinstall_os(id: int, on_success: Callable, on_failure: Callable)`

VPS Reinstall OS Options

Returns the list of available OS templates for reinstalling the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.get_vps_reinstall_os(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_vps_reinstall_os", response)
		assert(response.data is VpsTemplatesList)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_vps_reverse_dns**   { #get_vps_reverse_dns }
<a name="get_vps_reverse_dns"></a>

> `get_vps_reverse_dns(id: int, on_success: Callable, on_failure: Callable)`

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.get_vps_reverse_dns(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_vps_reverse_dns", response)
		assert(response.data is ReverseDnsEntries)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_vps_setup_vnc**   { #get_vps_setup_vnc }
<a name="get_vps_setup_vnc"></a>

> `get_vps_setup_vnc(id: int, on_success: Callable, on_failure: Callable)`

VNC Setup Info

Returns the current VNC connection information for the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.get_vps_setup_vnc(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):
		prints("Success!", "get_vps_setup_vnc", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_vps_slices**   { #get_vps_slices }
<a name="get_vps_slices"></a>

> `get_vps_slices(id: int, on_success: Callable, on_failure: Callable)`

Slice Upgrade Info

Returns available slice upgrade options and pricing for the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.get_vps_slices(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):
		prints("Success!", "get_vps_slices", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_vps_traffic_usage**   { #get_vps_traffic_usage }
<a name="get_vps_traffic_usage"></a>

> `get_vps_traffic_usage(id: int, on_success: Callable, on_failure: Callable)`

Get Traffic Usage

Returns bandwidth traffic usage data for the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.get_vps_traffic_usage(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_vps_traffic_usage", response)
		assert(response.data is VpsTrafficResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_vps_view_desktop**   { #get_vps_view_desktop }
<a name="get_vps_view_desktop"></a>

> `get_vps_view_desktop(id: int, on_success: Callable, on_failure: Callable)`

Get View Desktop Info

Returns remote desktop connection information for the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.get_vps_view_desktop(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):
		prints("Success!", "get_vps_view_desktop", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_vps_welcome_email**   { #get_vps_welcome_email }
<a name="get_vps_welcome_email"></a>

> `get_vps_welcome_email(id: String, on_success: Callable, on_failure: Callable)`

Resend VPS Welcome Email

Resends the welcome email containing connection details and credentials for the VPS order.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.get_vps_welcome_email(
	# id: String = ""   Eg: 4813
	# VPS ID
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_vps_welcome_email", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_vps_backup**   { #post_vps_backup }
<a name="post_vps_backup"></a>

> `post_vps_backup(id: int, on_success: Callable, on_failure: Callable)`

Start a VPS Backup

Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.post_vps_backup(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_vps_backup", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_vps_buy_hd_space**   { #post_vps_buy_hd_space }
<a name="post_vps_buy_hd_space"></a>

> `post_vps_buy_hd_space(id: int, on_success: Callable, on_failure: Callable)`

Purchase HD Space Addon

Purchases additional hard drive space for the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.post_vps_buy_hd_space(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):
		prints("Success!", "post_vps_buy_hd_space", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_vps_buy_ip**   { #post_vps_buy_ip }
<a name="post_vps_buy_ip"></a>

> `post_vps_buy_ip(id: int, on_success: Callable, on_failure: Callable)`

Purchase Additional IP

Purchases an additional IP address for the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.post_vps_buy_ip(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):
		prints("Success!", "post_vps_buy_ip", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_vps_change_hostname**   { #post_vps_change_hostname }
<a name="post_vps_change_hostname"></a>

> `post_vps_change_hostname(id: int,hostname = "", on_success: Callable, on_failure: Callable)`

Update VPS Hostname

Changes the hostname of the VPS. This queues a background task to update the server.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.post_vps_change_hostname(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# hostname: String = ""   Eg: hostname_example
	hostname,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_vps_change_hostname", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_vps_change_root_password**   { #post_vps_change_root_password }
<a name="post_vps_change_root_password"></a>

> `post_vps_change_root_password(id: int,password: String, on_success: Callable, on_failure: Callable)`

Change VPS Root Password

Changes the root password of the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.post_vps_change_root_password(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# password: String = ""   Eg: password_example
	password,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_vps_change_root_password", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_vps_change_timezone**   { #post_vps_change_timezone }
<a name="post_vps_change_timezone"></a>

> `post_vps_change_timezone(id: int,timezone: String, on_success: Callable, on_failure: Callable)`

Change VPS Timezone

Changes the system timezone on the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.post_vps_change_timezone(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# timezone: String = ""   Eg: timezone_example
	# The time zone
	timezone,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_vps_change_timezone", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_vps_change_webuzo_password**   { #post_vps_change_webuzo_password }
<a name="post_vps_change_webuzo_password"></a>

> `post_vps_change_webuzo_password(id: int,password: String, on_success: Callable, on_failure: Callable)`

Change Webuzo Password

Changes the Webuzo control panel password on the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.post_vps_change_webuzo_password(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# password: String = ""   Eg: password_example
	password,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_vps_change_webuzo_password", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_vps_insert_cd**   { #post_vps_insert_cd }
<a name="post_vps_insert_cd"></a>

> `post_vps_insert_cd(id: int,url = "", on_success: Callable, on_failure: Callable)`

Insert CD in VPS

Mounts an ISO image in the VPS virtual CD drive from the given URL.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.post_vps_insert_cd(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# url: String = ""   Eg: url_example
	url,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_vps_insert_cd", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_vps_reinstall_os**   { #post_vps_reinstall_os }
<a name="post_vps_reinstall_os"></a>

> `post_vps_reinstall_os(id: int,template: String,localPassword: String,password = null, on_success: Callable, on_failure: Callable)`

Reinstall VPS OS

Reinstalls the operating system on the VPS. Warning - all data will be erased.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.post_vps_reinstall_os(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# template: String = ""   Eg: template_example
	# OS Template Filename
	template,
	# localPassword: String   Eg: localPassword_example
	# Password for this account.
	localPassword,
	# password: String   Eg: password_example
	# Password for Root / Administrator Account.
	password,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_vps_reinstall_os", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_vps_reset_password**   { #post_vps_reset_password }
<a name="post_vps_reset_password"></a>

> `post_vps_reset_password(id: int, on_success: Callable, on_failure: Callable)`

Reset VPS Password

Resets the root password on the VPS to a new randomly generated password.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.post_vps_reset_password(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_vps_reset_password", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_vps_restore**   { #post_vps_restore }
<a name="post_vps_restore"></a>

> `post_vps_restore(id: int,restoreRequest: RestoreRequest, on_success: Callable, on_failure: Callable)`

Restore VPS from Backup

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)

var restoreRequest = RestoreRequest.new()
# … fill model restoreRequest with data

# Invoke an endpoint
api.post_vps_restore(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# restoreRequest: RestoreRequest
	# VPS Restore request
	restoreRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_vps_restore", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_vps_reverse_dns**   { #post_vps_reverse_dns }
<a name="post_vps_reverse_dns"></a>

> `post_vps_reverse_dns(id: int,reverseDnsEntries: ReverseDnsEntries, on_success: Callable, on_failure: Callable)`

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)

var reverseDnsEntries = ReverseDnsEntries.new()
# … fill model reverseDnsEntries with data

# Invoke an endpoint
api.post_vps_reverse_dns(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# reverseDnsEntries: ReverseDnsEntries
	reverseDnsEntries,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_vps_reverse_dns", response)
		assert(response.data is TextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_vps_setup_vnc**   { #post_vps_setup_vnc }
<a name="post_vps_setup_vnc"></a>

> `post_vps_setup_vnc(id: int, on_success: Callable, on_failure: Callable)`

Setup VNC

Sets up or refreshes the VNC console connection for the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.post_vps_setup_vnc(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_vps_setup_vnc", response)
		assert(response.data is QueueResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_vps_slices**   { #post_vps_slices }
<a name="post_vps_slices"></a>

> `post_vps_slices(id: int, on_success: Callable, on_failure: Callable)`

Purchase Slice Upgrade

Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.post_vps_slices(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):
		prints("Success!", "post_vps_slices", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_vps_view_desktop**   { #post_vps_view_desktop }
<a name="post_vps_view_desktop"></a>

> `post_vps_view_desktop(id: int, on_success: Callable, on_failure: Callable)`

Update View Desktop

Updates or refreshes the remote desktop session for the VPS.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.post_vps_view_desktop(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):
		prints("Success!", "post_vps_view_desktop", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **put_vps**   { #put_vps }
<a name="put_vps"></a>

> `put_vps(vpsOrderPutRequest = null, on_success: Callable, on_failure: Callable)`

Validate VPS Order

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)

var vpsOrderPutRequest = VpsOrderPutRequest.new()
# … fill model vpsOrderPutRequest with data

# Invoke an endpoint
api.put_vps(
	# vpsOrderPutRequest: VpsOrderPutRequest
	vpsOrderPutRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "put_vps", response)
		assert(response.data is VpsOrderPutResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_vps_info**   { #update_vps_info }
<a name="update_vps_info"></a>

> `update_vps_info(id: String, on_success: Callable, on_failure: Callable)`

Update VPS Order

Updates settings on a VPS order.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.update_vps_info(
	# id: String = ""   Eg: id_example
	# VPS ID number.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_vps_info", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **v_ps_cancel**   { #v_ps_cancel }
<a name="v_ps_cancel"></a>

> `v_ps_cancel(id: int, on_success: Callable, on_failure: Callable)`

Cancel VPS Service

Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

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
var api = VPSApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = VPSApi.new(config, client)


# Invoke an endpoint
api.v_ps_cancel(
	# id: int   Eg: 56
	# VPS ID number
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "v_ps_cancel", response)
		assert(response.data is VPSCancel_200_response)
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

