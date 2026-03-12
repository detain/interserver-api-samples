# OpenAPIClient::VPSApi

## Load the API package
```perl
use OpenAPIClient::Object::VPSApi;
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_vps**](VPSApi.md#add_vps) | **POST** /vps/order | Place VPS Order
[**delete_vps_backup**](VPSApi.md#delete_vps_backup) | **DELETE** /vps/{id}/backups | Delete VPS Backup
[**do_vps_block_smtp**](VPSApi.md#do_vps_block_smtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP
[**do_vps_disable_cd**](VPSApi.md#do_vps_disable_cd) | **GET** /vps/{id}/disable_cd | Disable CD Drive
[**do_vps_disable_quota**](VPSApi.md#do_vps_disable_quota) | **GET** /vps/{id}/disable_quota | Disable Quotas
[**do_vps_eject_cd**](VPSApi.md#do_vps_eject_cd) | **GET** /vps/{id}/eject_cd | Eject CD Drive
[**do_vps_enable_quota**](VPSApi.md#do_vps_enable_quota) | **GET** /vps/{id}/enable_quota | Enable Quotas
[**do_vps_restart**](VPSApi.md#do_vps_restart) | **GET** /vps/{id}/restart | Restart VPS
[**do_vps_start**](VPSApi.md#do_vps_start) | **GET** /vps/{id}/start | Start VPS
[**do_vps_stop**](VPSApi.md#do_vps_stop) | **GET** /vps/{id}/stop | Stop VPS
[**download_vps_backup**](VPSApi.md#download_vps_backup) | **PATCH** /vps/{id}/backups | Download VPS Backup
[**get_new_vps**](VPSApi.md#get_new_vps) | **GET** /vps/order | VPS Ordering Information
[**get_vps_backups**](VPSApi.md#get_vps_backups) | **GET** /vps/{id}/backups | Get VPS Backups List
[**get_vps_buy_hd_space**](VPSApi.md#get_vps_buy_hd_space) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info
[**get_vps_buy_ip**](VPSApi.md#get_vps_buy_ip) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info
[**get_vps_change_timezone**](VPSApi.md#get_vps_change_timezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info
[**get_vps_info**](VPSApi.md#get_vps_info) | **GET** /vps/{id} | Get VPS Order
[**get_vps_invoices**](VPSApi.md#get_vps_invoices) | **GET** /vps/{id}/invoices | Get VPS Invoices
[**get_vps_list**](VPSApi.md#get_vps_list) | **GET** /vps | List VPS Orders
[**get_vps_reinstall_os**](VPSApi.md#get_vps_reinstall_os) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options
[**get_vps_reverse_dns**](VPSApi.md#get_vps_reverse_dns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info
[**get_vps_setup_vnc**](VPSApi.md#get_vps_setup_vnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info
[**get_vps_slices**](VPSApi.md#get_vps_slices) | **GET** /vps/{id}/slices | Slice Upgrade Info
[**get_vps_traffic_usage**](VPSApi.md#get_vps_traffic_usage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage
[**get_vps_view_desktop**](VPSApi.md#get_vps_view_desktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info
[**get_vps_welcome_email**](VPSApi.md#get_vps_welcome_email) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email
[**post_vps_backup**](VPSApi.md#post_vps_backup) | **GET** /vps/{id}/backup | Start a VPS Backup
[**post_vps_buy_hd_space**](VPSApi.md#post_vps_buy_hd_space) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon
[**post_vps_buy_ip**](VPSApi.md#post_vps_buy_ip) | **POST** /vps/{id}/buy_ip | Purchase Additional IP
[**post_vps_change_hostname**](VPSApi.md#post_vps_change_hostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname
[**post_vps_change_root_password**](VPSApi.md#post_vps_change_root_password) | **POST** /vps/{id}/change_root_password | Change VPS Root Password
[**post_vps_change_timezone**](VPSApi.md#post_vps_change_timezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone
[**post_vps_change_webuzo_password**](VPSApi.md#post_vps_change_webuzo_password) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password
[**post_vps_insert_cd**](VPSApi.md#post_vps_insert_cd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS
[**post_vps_reinstall_os**](VPSApi.md#post_vps_reinstall_os) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS
[**post_vps_reset_password**](VPSApi.md#post_vps_reset_password) | **POST** /vps/{id}/reset_password | Reset VPS Password
[**post_vps_restore**](VPSApi.md#post_vps_restore) | **POST** /vps/{id}/restore | Restore VPS from Backup
[**post_vps_reverse_dns**](VPSApi.md#post_vps_reverse_dns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS
[**post_vps_setup_vnc**](VPSApi.md#post_vps_setup_vnc) | **POST** /vps/{id}/setup_vnc | Setup VNC
[**post_vps_slices**](VPSApi.md#post_vps_slices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade
[**post_vps_view_desktop**](VPSApi.md#post_vps_view_desktop) | **POST** /vps/{id}/view_desktop | Update View Desktop
[**put_vps**](VPSApi.md#put_vps) | **PUT** /vps/order | Validate VPS Order
[**update_vps_info**](VPSApi.md#update_vps_info) | **POST** /vps/{id} | Update VPS Order
[**v_ps_cancel**](VPSApi.md#v_ps_cancel) | **DELETE** /vps/{id} | Cancel VPS Service


# **add_vps**
> add_vps(vps_order_post_request => $vps_order_post_request)

Place VPS Order

Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $vps_order_post_request = OpenAPIClient::Object::VpsOrderPostRequest->new(); # VpsOrderPostRequest | 

eval {
    $api_instance->add_vps(vps_order_post_request => $vps_order_post_request);
};
if ($@) {
    warn "Exception when calling VPSApi->add_vps: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vps_order_post_request** | [**VpsOrderPostRequest**](VpsOrderPostRequest.md)|  | [optional] 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_vps_backup**
> SuccessTextResponse delete_vps_backup(id => $id, file => $file, all => $all)

Delete VPS Backup

Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number
my $file = "file_example"; # string | The backup filename to delete.
my $all = "all_example"; # string | Set to `1` to list all backups across all services, not just the ones for the given VPS.

eval {
    my $result = $api_instance->delete_vps_backup(id => $id, file => $file, all => $all);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->delete_vps_backup: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **file** | **string**| The backup filename to delete. | 
 **all** | **string**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_vps_block_smtp**
> QueueResponse do_vps_block_smtp(id => $id)

Blocks SMTP

Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number.

eval {
    my $result = $api_instance->do_vps_block_smtp(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->do_vps_block_smtp: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_vps_disable_cd**
> QueueResponse do_vps_disable_cd(id => $id)

Disable CD Drive

Disables the virtual CD drive on the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number.

eval {
    my $result = $api_instance->do_vps_disable_cd(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->do_vps_disable_cd: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_vps_disable_quota**
> QueueResponse do_vps_disable_quota(id => $id)

Disable Quotas

Disables disk quota enforcement on the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number.

eval {
    my $result = $api_instance->do_vps_disable_quota(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->do_vps_disable_quota: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_vps_eject_cd**
> QueueResponse do_vps_eject_cd(id => $id)

Eject CD Drive

Ejects the virtual CD from the VPS CD drive.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number.

eval {
    my $result = $api_instance->do_vps_eject_cd(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->do_vps_eject_cd: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_vps_enable_quota**
> QueueResponse do_vps_enable_quota(id => $id)

Enable Quotas

Enables disk quota enforcement on the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number.

eval {
    my $result = $api_instance->do_vps_enable_quota(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->do_vps_enable_quota: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_vps_restart**
> QueueResponse do_vps_restart(id => $id)

Restart VPS

Restarts the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number.

eval {
    my $result = $api_instance->do_vps_restart(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->do_vps_restart: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_vps_start**
> QueueResponse do_vps_start(id => $id)

Start VPS

Powers on the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number.

eval {
    my $result = $api_instance->do_vps_start(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->do_vps_start: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **do_vps_stop**
> QueueResponse do_vps_stop(id => $id)

Stop VPS

Powers off the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number.

eval {
    my $result = $api_instance->do_vps_stop(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->do_vps_stop: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number. | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **download_vps_backup**
> DownloadQsBackup200Response download_vps_backup(id => $id, download_qs_backup_request => $download_qs_backup_request, all => $all)

Download VPS Backup

Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number
my $download_qs_backup_request = OpenAPIClient::Object::DownloadQsBackupRequest->new(); # DownloadQsBackupRequest | 
my $all = "all_example"; # string | Set to `1` to list all backups across all services, not just the ones for the given VPS.

eval {
    my $result = $api_instance->download_vps_backup(id => $id, download_qs_backup_request => $download_qs_backup_request, all => $all);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->download_vps_backup: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **download_qs_backup_request** | [**DownloadQsBackupRequest**](DownloadQsBackupRequest.md)|  | 
 **all** | **string**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] 

### Return type

[**DownloadQsBackup200Response**](DownloadQsBackup200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_new_vps**
> VpsOrder get_new_vps()

VPS Ordering Information

Retrieves available VPS configurations, OS templates, and pricing for ordering.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->get_new_vps();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->get_new_vps: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**VpsOrder**](VpsOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_vps_backups**
> VpsBackupRows get_vps_backups(id => $id, all => $all)

Get VPS Backups List

Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number
my $all = "all_example"; # string | Set to `1` to list all backups across all services, not just the ones for the given VPS.

eval {
    my $result = $api_instance->get_vps_backups(id => $id, all => $all);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->get_vps_backups: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **all** | **string**| Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS. | [optional] 

### Return type

[**VpsBackupRows**](VpsBackupRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_vps_buy_hd_space**
> get_vps_buy_hd_space(id => $id)

HD Space Addon Info

Returns available hard drive space addon options and pricing for the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    $api_instance->get_vps_buy_hd_space(id => $id);
};
if ($@) {
    warn "Exception when calling VPSApi->get_vps_buy_hd_space: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_vps_buy_ip**
> get_vps_buy_ip(id => $id)

Additional IP Addon Info

Returns available additional IP address options and pricing for the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    $api_instance->get_vps_buy_ip(id => $id);
};
if ($@) {
    warn "Exception when calling VPSApi->get_vps_buy_ip: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_vps_change_timezone**
> ARRAY[string] get_vps_change_timezone(id => $id)

Get Timezone Info

Returns the list of available timezones that can be set on the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    my $result = $api_instance->get_vps_change_timezone(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->get_vps_change_timezone: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

**ARRAY[string]**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_vps_info**
> Vps get_vps_info(id => $id)

Get VPS Order

Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    my $result = $api_instance->get_vps_info(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->get_vps_info: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**Vps**](Vps.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_vps_invoices**
> ChargeInvoiceRows get_vps_invoices(id => $id)

Get VPS Invoices

Returns the billing invoices associated with this VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    my $result = $api_instance->get_vps_invoices(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->get_vps_invoices: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_vps_list**
> ARRAY[VpsRow] get_vps_list()

List VPS Orders

Returns all VPS services on the account with their current status and configuration.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->get_vps_list();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->get_vps_list: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ARRAY[VpsRow]**](VpsRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_vps_reinstall_os**
> VpsTemplatesList get_vps_reinstall_os(id => $id)

VPS Reinstall OS Options

Returns the list of available OS templates for reinstalling the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    my $result = $api_instance->get_vps_reinstall_os(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->get_vps_reinstall_os: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**VpsTemplatesList**](VpsTemplatesList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_vps_reverse_dns**
> ReverseDnsEntries get_vps_reverse_dns(id => $id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    my $result = $api_instance->get_vps_reverse_dns(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->get_vps_reverse_dns: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_vps_setup_vnc**
> get_vps_setup_vnc(id => $id)

VNC Setup Info

Returns the current VNC connection information for the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    $api_instance->get_vps_setup_vnc(id => $id);
};
if ($@) {
    warn "Exception when calling VPSApi->get_vps_setup_vnc: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_vps_slices**
> get_vps_slices(id => $id)

Slice Upgrade Info

Returns available slice upgrade options and pricing for the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    $api_instance->get_vps_slices(id => $id);
};
if ($@) {
    warn "Exception when calling VPSApi->get_vps_slices: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_vps_traffic_usage**
> VpsTrafficResponse get_vps_traffic_usage(id => $id)

Get Traffic Usage

Returns bandwidth traffic usage data for the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    my $result = $api_instance->get_vps_traffic_usage(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->get_vps_traffic_usage: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**VpsTrafficResponse**](VpsTrafficResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_vps_view_desktop**
> get_vps_view_desktop(id => $id)

Get View Desktop Info

Returns remote desktop connection information for the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    $api_instance->get_vps_view_desktop(id => $id);
};
if ($@) {
    warn "Exception when calling VPSApi->get_vps_view_desktop: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_vps_welcome_email**
> SuccessTextResponse get_vps_welcome_email(id => $id)

Resend VPS Welcome Email

Resends the welcome email containing connection details and credentials for the VPS order.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 4813; # string | VPS ID

eval {
    my $result = $api_instance->get_vps_welcome_email(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->get_vps_welcome_email: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| VPS ID | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_backup**
> QueueResponse post_vps_backup(id => $id)

Start a VPS Backup

Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    my $result = $api_instance->post_vps_backup(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->post_vps_backup: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_buy_hd_space**
> post_vps_buy_hd_space(id => $id)

Purchase HD Space Addon

Purchases additional hard drive space for the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    $api_instance->post_vps_buy_hd_space(id => $id);
};
if ($@) {
    warn "Exception when calling VPSApi->post_vps_buy_hd_space: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_buy_ip**
> post_vps_buy_ip(id => $id)

Purchase Additional IP

Purchases an additional IP address for the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    $api_instance->post_vps_buy_ip(id => $id);
};
if ($@) {
    warn "Exception when calling VPSApi->post_vps_buy_ip: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_change_hostname**
> QueueResponse post_vps_change_hostname(id => $id, hostname => $hostname)

Update VPS Hostname

Changes the hostname of the VPS. This queues a background task to update the server.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number
my $hostname = "hostname_example"; # string | 

eval {
    my $result = $api_instance->post_vps_change_hostname(id => $id, hostname => $hostname);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->post_vps_change_hostname: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **hostname** | **string**|  | [optional] 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_change_root_password**
> QueueResponse post_vps_change_root_password(id => $id, password => $password)

Change VPS Root Password

Changes the root password of the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number
my $password = "password_example"; # string | 

eval {
    my $result = $api_instance->post_vps_change_root_password(id => $id, password => $password);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->post_vps_change_root_password: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **password** | **string**|  | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_change_timezone**
> QueueResponse post_vps_change_timezone(id => $id, timezone => $timezone)

Change VPS Timezone

Changes the system timezone on the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number
my $timezone = "timezone_example"; # string | The time zone

eval {
    my $result = $api_instance->post_vps_change_timezone(id => $id, timezone => $timezone);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->post_vps_change_timezone: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **timezone** | **string**| The time zone | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_change_webuzo_password**
> QueueResponse post_vps_change_webuzo_password(id => $id, password => $password)

Change Webuzo Password

Changes the Webuzo control panel password on the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number
my $password = "password_example"; # string | 

eval {
    my $result = $api_instance->post_vps_change_webuzo_password(id => $id, password => $password);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->post_vps_change_webuzo_password: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **password** | **string**|  | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_insert_cd**
> QueueResponse post_vps_insert_cd(id => $id, url => $url)

Insert CD in VPS

Mounts an ISO image in the VPS virtual CD drive from the given URL.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number
my $url = "url_example"; # string | 

eval {
    my $result = $api_instance->post_vps_insert_cd(id => $id, url => $url);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->post_vps_insert_cd: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **url** | **string**|  | [optional] 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_reinstall_os**
> QueueResponse post_vps_reinstall_os(id => $id, template => $template, local_password => $local_password, password => $password)

Reinstall VPS OS

Reinstalls the operating system on the VPS. Warning - all data will be erased.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number
my $template = "template_example"; # string | OS Template Filename
my $local_password = "local_password_example"; # string | Password for this account.
my $password = "password_example"; # string | Password for Root / Administrator Account.

eval {
    my $result = $api_instance->post_vps_reinstall_os(id => $id, template => $template, local_password => $local_password, password => $password);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->post_vps_reinstall_os: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **template** | **string**| OS Template Filename | 
 **local_password** | **string**| Password for this account. | 
 **password** | **string**| Password for Root / Administrator Account. | [optional] 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_reset_password**
> QueueResponse post_vps_reset_password(id => $id)

Reset VPS Password

Resets the root password on the VPS to a new randomly generated password.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    my $result = $api_instance->post_vps_reset_password(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->post_vps_reset_password: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_restore**
> QueueResponse post_vps_restore(id => $id, restore_request => $restore_request)

Restore VPS from Backup

Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number
my $restore_request = OpenAPIClient::Object::RestoreRequest->new(); # RestoreRequest | VPS Restore request

eval {
    my $result = $api_instance->post_vps_restore(id => $id, restore_request => $restore_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->post_vps_restore: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **restore_request** | [**RestoreRequest**](RestoreRequest.md)| VPS Restore request | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_reverse_dns**
> TextResponse post_vps_reverse_dns(id => $id, reverse_dns_entries => $reverse_dns_entries)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the VPS IP addresses.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number
my $reverse_dns_entries = OpenAPIClient::Object::ReverseDnsEntries->new(); # ReverseDnsEntries | 

eval {
    my $result = $api_instance->post_vps_reverse_dns(id => $id, reverse_dns_entries => $reverse_dns_entries);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->post_vps_reverse_dns: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 
 **reverse_dns_entries** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_setup_vnc**
> QueueResponse post_vps_setup_vnc(id => $id)

Setup VNC

Sets up or refreshes the VNC console connection for the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    my $result = $api_instance->post_vps_setup_vnc(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->post_vps_setup_vnc: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**QueueResponse**](QueueResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_slices**
> post_vps_slices(id => $id)

Purchase Slice Upgrade

Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    $api_instance->post_vps_slices(id => $id);
};
if ($@) {
    warn "Exception when calling VPSApi->post_vps_slices: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_vps_view_desktop**
> post_vps_view_desktop(id => $id)

Update View Desktop

Updates or refreshes the remote desktop session for the VPS.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    $api_instance->post_vps_view_desktop(id => $id);
};
if ($@) {
    warn "Exception when calling VPSApi->post_vps_view_desktop: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_vps**
> VpsOrderPutResponse put_vps(vps_order_put_request => $vps_order_put_request)

Validate VPS Order

Validates a VPS order before placing it. Returns cost breakdown and any validation errors.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $vps_order_put_request = OpenAPIClient::Object::VpsOrderPutRequest->new(); # VpsOrderPutRequest | 

eval {
    my $result = $api_instance->put_vps(vps_order_put_request => $vps_order_put_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->put_vps: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vps_order_put_request** | [**VpsOrderPutRequest**](VpsOrderPutRequest.md)|  | [optional] 

### Return type

[**VpsOrderPutResponse**](VpsOrderPutResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_vps_info**
> update_vps_info(id => $id)

Update VPS Order

Updates settings on a VPS order.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = "id_example"; # string | VPS ID number.

eval {
    $api_instance->update_vps_info(id => $id);
};
if ($@) {
    warn "Exception when calling VPSApi->update_vps_info: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| VPS ID number. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v_ps_cancel**
> VPSCancel200Response v_ps_cancel(id => $id)

Cancel VPS Service

Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::VPSApi;
my $api_instance = OpenAPIClient::VPSApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 56; # int | VPS ID number

eval {
    my $result = $api_instance->v_ps_cancel(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling VPSApi->v_ps_cancel: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| VPS ID number | 

### Return type

[**VPSCancel200Response**](VPSCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

