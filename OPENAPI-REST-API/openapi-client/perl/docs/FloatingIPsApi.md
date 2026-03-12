# OpenAPIClient::FloatingIPsApi

## Load the API package
```perl
use OpenAPIClient::Object::FloatingIPsApi;
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_floating_ip**](FloatingIPsApi.md#add_floating_ip) | **POST** /floating_ips/order | Place Floating IP Order
[**floating_ips_cancel**](FloatingIPsApi.md#floating_ips_cancel) | **DELETE** /floating_ips/{id} | Cancel Floating IP
[**get_floating_ip_info**](FloatingIPsApi.md#get_floating_ip_info) | **GET** /floating_ips/{id} | View Floating IP
[**get_floating_ip_invoices**](FloatingIPsApi.md#get_floating_ip_invoices) | **GET** /floating_ips/{id}/invoices | Get Floating IP Invoices
[**get_floating_ips_list**](FloatingIPsApi.md#get_floating_ips_list) | **GET** /floating_ips | List Floating IPs
[**get_floating_ips_welcome_email**](FloatingIPsApi.md#get_floating_ips_welcome_email) | **GET** /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email
[**get_new_floating_ip**](FloatingIPsApi.md#get_new_floating_ip) | **GET** /floating_ips/order | Get Floating IP Ordering Information
[**post_floating_ips_change_ip**](FloatingIPsApi.md#post_floating_ips_change_ip) | **POST** /floating_ips/{id}/change_ip | Change Floating IP Target
[**put_floating_ips**](FloatingIPsApi.md#put_floating_ips) | **PUT** /floating_ips/order | Validate Floating IP Order
[**update_floating_ip_info**](FloatingIPsApi.md#update_floating_ip_info) | **POST** /floating_ips/{id} | Update Floating IP


# **add_floating_ip**
> add_floating_ip()

Place Floating IP Order

Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::FloatingIPsApi;
my $api_instance = OpenAPIClient::FloatingIPsApi->new(

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
    $api_instance->add_floating_ip();
};
if ($@) {
    warn "Exception when calling FloatingIPsApi->add_floating_ip: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **floating_ips_cancel**
> FloatingIpsCancel200Response floating_ips_cancel(id => $id)

Cancel Floating IP

Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::FloatingIPsApi;
my $api_instance = OpenAPIClient::FloatingIPsApi->new(

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

my $id = 56; # int | The Floating IP service ID. Use the ID from `GET /floating_ips`.

eval {
    my $result = $api_instance->floating_ips_cancel(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling FloatingIPsApi->floating_ips_cancel: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

[**FloatingIpsCancel200Response**](FloatingIpsCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_floating_ip_info**
> get_floating_ip_info(id => $id)

View Floating IP

Returns detailed information about a specific Floating IP service including its current target IP assignment.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::FloatingIPsApi;
my $api_instance = OpenAPIClient::FloatingIPsApi->new(

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

my $id = 56; # int | The Floating IP service ID. Use the ID from `GET /floating_ips`.

eval {
    $api_instance->get_floating_ip_info(id => $id);
};
if ($@) {
    warn "Exception when calling FloatingIPsApi->get_floating_ip_info: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_floating_ip_invoices**
> ChargeInvoiceRows get_floating_ip_invoices(id => $id)

Get Floating IP Invoices

Returns the billing invoices associated with this Floating IP service.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::FloatingIPsApi;
my $api_instance = OpenAPIClient::FloatingIPsApi->new(

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

my $id = 56; # int | The Floating IP service ID. Use the ID from `GET /floating_ips`.

eval {
    my $result = $api_instance->get_floating_ip_invoices(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling FloatingIPsApi->get_floating_ip_invoices: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_floating_ips_list**
> get_floating_ips_list()

List Floating IPs

Returns all Floating IP services on the account with their current status and assignment details.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::FloatingIPsApi;
my $api_instance = OpenAPIClient::FloatingIPsApi->new(

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
    $api_instance->get_floating_ips_list();
};
if ($@) {
    warn "Exception when calling FloatingIPsApi->get_floating_ips_list: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_floating_ips_welcome_email**
> SuccessTextResponse get_floating_ips_welcome_email(id => $id)

Resend Floating IPs Welcome Email

Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::FloatingIPsApi;
my $api_instance = OpenAPIClient::FloatingIPsApi->new(

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

my $id = 56; # int | The Floating IP service ID. Use the ID from `GET /floating_ips`.

eval {
    my $result = $api_instance->get_floating_ips_welcome_email(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling FloatingIPsApi->get_floating_ips_welcome_email: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_new_floating_ip**
> get_new_floating_ip()

Get Floating IP Ordering Information

Retrieves available options and pricing for ordering a new Floating IP.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::FloatingIPsApi;
my $api_instance = OpenAPIClient::FloatingIPsApi->new(

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
    $api_instance->get_new_floating_ip();
};
if ($@) {
    warn "Exception when calling FloatingIPsApi->get_new_floating_ip: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_floating_ips_change_ip**
> SuccessTextResponse post_floating_ips_change_ip(id => $id, ip => $ip)

Change Floating IP Target

Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::FloatingIPsApi;
my $api_instance = OpenAPIClient::FloatingIPsApi->new(

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

my $id = 56; # int | The Floating IP service ID. Use the ID from `GET /floating_ips`.
my $ip = "ip_example"; # string | IP Address

eval {
    my $result = $api_instance->post_floating_ips_change_ip(id => $id, ip => $ip);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling FloatingIPsApi->post_floating_ips_change_ip: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 
 **ip** | **string**| IP Address | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_floating_ips**
> put_floating_ips()

Validate Floating IP Order

Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::FloatingIPsApi;
my $api_instance = OpenAPIClient::FloatingIPsApi->new(

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
    $api_instance->put_floating_ips();
};
if ($@) {
    warn "Exception when calling FloatingIPsApi->put_floating_ips: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_floating_ip_info**
> update_floating_ip_info(id => $id)

Update Floating IP

Updates settings on a Floating IP service, such as its label or configuration metadata.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::FloatingIPsApi;
my $api_instance = OpenAPIClient::FloatingIPsApi->new(

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

my $id = "id_example"; # string | The Floating IP service ID. Use the ID from `GET /floating_ips`.

eval {
    $api_instance->update_floating_ip_info(id => $id);
};
if ($@) {
    warn "Exception when calling FloatingIPsApi->update_floating_ip_info: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

