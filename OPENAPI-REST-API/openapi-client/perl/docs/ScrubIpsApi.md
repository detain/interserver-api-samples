# OpenAPIClient::ScrubIpsApi

## Load the API package
```perl
use OpenAPIClient::Object::ScrubIpsApi;
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**cancel_scrub_ip**](ScrubIpsApi.md#cancel_scrub_ip) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service
[**create_filter**](ScrubIpsApi.md#create_filter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter
[**create_geo_rule**](ScrubIpsApi.md#create_geo_rule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule
[**create_rule**](ScrubIpsApi.md#create_rule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule
[**delete_filter**](ScrubIpsApi.md#delete_filter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter
[**disable_scrub**](ScrubIpsApi.md#disable_scrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection
[**enable_scrub**](ScrubIpsApi.md#enable_scrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection
[**get_order_detail**](ScrubIpsApi.md#get_order_detail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information
[**get_scrub_ip_details**](ScrubIpsApi.md#get_scrub_ip_details) | **GET** /scrub_ips/{id} | Get Scrub IP Details
[**get_scrub_ip_filter_types**](ScrubIpsApi.md#get_scrub_ip_filter_types) | **GET** /scrub_ips/filter_types | List Scrub Filter Types
[**get_scrub_ip_invoices**](ScrubIpsApi.md#get_scrub_ip_invoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices
[**get_scrub_ip_logs**](ScrubIpsApi.md#get_scrub_ip_logs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs
[**get_scrub_ips_list**](ScrubIpsApi.md#get_scrub_ips_list) | **GET** /scrub_ips | List Scrub IP Services
[**place_scrub_order**](ScrubIpsApi.md#place_scrub_order) | **POST** /scrub_ips/order | Place Scrub IP Order
[**scrub_ips_delete_geo_rule**](ScrubIpsApi.md#scrub_ips_delete_geo_rule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule
[**scrub_ips_delete_rule**](ScrubIpsApi.md#scrub_ips_delete_rule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule


# **cancel_scrub_ip**
> CancelScrubIp200Response cancel_scrub_ip(id => $id)

Cancel Scrub IP Service

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::ScrubIpsApi;
my $api_instance = OpenAPIClient::ScrubIpsApi->new(

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

my $id = 56; # int | ScrubIp ID number

eval {
    my $result = $api_instance->cancel_scrub_ip(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ScrubIpsApi->cancel_scrub_ip: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**CancelScrubIp200Response**](CancelScrubIp200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_filter**
> CreateFilter201Response create_filter(id => $id, create_filter => $create_filter)

Create Traffic Filter

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::ScrubIpsApi;
my $api_instance = OpenAPIClient::ScrubIpsApi->new(

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

my $id = 56; # int | ScrubIp ID number
my $create_filter = OpenAPIClient::Object::CreateFilter->new(); # CreateFilter | 

eval {
    my $result = $api_instance->create_filter(id => $id, create_filter => $create_filter);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ScrubIpsApi->create_filter: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 
 **create_filter** | [**CreateFilter**](CreateFilter.md)|  | 

### Return type

[**CreateFilter201Response**](CreateFilter201Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_geo_rule**
> CreateRule201Response create_geo_rule(id => $id, create_geo_firewall_rule => $create_geo_firewall_rule)

Create Geo Firewall Rule

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::ScrubIpsApi;
my $api_instance = OpenAPIClient::ScrubIpsApi->new(

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

my $id = 56; # int | ScrubIp ID number
my $create_geo_firewall_rule = OpenAPIClient::Object::CreateGeoFirewallRule->new(); # CreateGeoFirewallRule | 

eval {
    my $result = $api_instance->create_geo_rule(id => $id, create_geo_firewall_rule => $create_geo_firewall_rule);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ScrubIpsApi->create_geo_rule: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 
 **create_geo_firewall_rule** | [**CreateGeoFirewallRule**](CreateGeoFirewallRule.md)|  | 

### Return type

[**CreateRule201Response**](CreateRule201Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_rule**
> CreateRule201Response create_rule(id => $id, create_firewall_rule => $create_firewall_rule)

Create Firewall Rule

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::ScrubIpsApi;
my $api_instance = OpenAPIClient::ScrubIpsApi->new(

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

my $id = 56; # int | ScrubIp ID number
my $create_firewall_rule = OpenAPIClient::Object::CreateFirewallRule->new(); # CreateFirewallRule | 

eval {
    my $result = $api_instance->create_rule(id => $id, create_firewall_rule => $create_firewall_rule);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ScrubIpsApi->create_rule: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 
 **create_firewall_rule** | [**CreateFirewallRule**](CreateFirewallRule.md)|  | 

### Return type

[**CreateRule201Response**](CreateRule201Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_filter**
> DeleteFilter200Response delete_filter(id => $id, create_filter => $create_filter)

Delete Traffic Filter

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::ScrubIpsApi;
my $api_instance = OpenAPIClient::ScrubIpsApi->new(

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

my $id = 56; # int | ScrubIp ID number
my $create_filter = OpenAPIClient::Object::CreateFilter->new(); # CreateFilter | 

eval {
    my $result = $api_instance->delete_filter(id => $id, create_filter => $create_filter);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ScrubIpsApi->delete_filter: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 
 **create_filter** | [**CreateFilter**](CreateFilter.md)|  | 

### Return type

[**DeleteFilter200Response**](DeleteFilter200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **disable_scrub**
> DisableScrub200Response disable_scrub(id => $id)

Disable Scrub Protection

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::ScrubIpsApi;
my $api_instance = OpenAPIClient::ScrubIpsApi->new(

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

my $id = 56; # int | ScrubIp ID number

eval {
    my $result = $api_instance->disable_scrub(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ScrubIpsApi->disable_scrub: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**DisableScrub200Response**](DisableScrub200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **enable_scrub**
> EnableScrub200Response enable_scrub(id => $id)

Enable Scrub Protection

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::ScrubIpsApi;
my $api_instance = OpenAPIClient::ScrubIpsApi->new(

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

my $id = 56; # int | ScrubIp ID number

eval {
    my $result = $api_instance->enable_scrub(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ScrubIpsApi->enable_scrub: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**EnableScrub200Response**](EnableScrub200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_order_detail**
> GetOrderDetail200Response get_order_detail()

Get Scrub IP Ordering Information

Returns the available Scrub IP service plans and pricing information needed to build an order form.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::ScrubIpsApi;
my $api_instance = OpenAPIClient::ScrubIpsApi->new(

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
    my $result = $api_instance->get_order_detail();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ScrubIpsApi->get_order_detail: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**GetOrderDetail200Response**](GetOrderDetail200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_scrub_ip_details**
> GetScrubIpDetails200Response get_scrub_ip_details(id => $id)

Get Scrub IP Details

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::ScrubIpsApi;
my $api_instance = OpenAPIClient::ScrubIpsApi->new(

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

my $id = 56; # int | ScrubIp ID number

eval {
    my $result = $api_instance->get_scrub_ip_details(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ScrubIpsApi->get_scrub_ip_details: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**GetScrubIpDetails200Response**](GetScrubIpDetails200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_scrub_ip_filter_types**
> ScrubIpFilterTypes get_scrub_ip_filter_types()

List Scrub Filter Types

Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::ScrubIpsApi;
my $api_instance = OpenAPIClient::ScrubIpsApi->new(

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
    my $result = $api_instance->get_scrub_ip_filter_types();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ScrubIpsApi->get_scrub_ip_filter_types: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ScrubIpFilterTypes**](ScrubIpFilterTypes.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_scrub_ip_invoices**
> ChargeInvoiceRows get_scrub_ip_invoices(id => $id)

Get ScrubIp Invoices

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::ScrubIpsApi;
my $api_instance = OpenAPIClient::ScrubIpsApi->new(

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

my $id = 56; # int | ScrubIp ID number

eval {
    my $result = $api_instance->get_scrub_ip_invoices(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ScrubIpsApi->get_scrub_ip_invoices: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_scrub_ip_logs**
> ARRAY[ScrubIpsLogRowSchema] get_scrub_ip_logs(id => $id)

Get Scrub IP Logs

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::ScrubIpsApi;
my $api_instance = OpenAPIClient::ScrubIpsApi->new(

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

my $id = 413232  ; # string | Scrub Order ID

eval {
    my $result = $api_instance->get_scrub_ip_logs(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ScrubIpsApi->get_scrub_ip_logs: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| Scrub Order ID | 

### Return type

[**ARRAY[ScrubIpsLogRowSchema]**](ScrubIpsLogRowSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_scrub_ips_list**
> ARRAY[ScrubIpsRowSchema] get_scrub_ips_list()

List Scrub IP Services

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::ScrubIpsApi;
my $api_instance = OpenAPIClient::ScrubIpsApi->new(

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
    my $result = $api_instance->get_scrub_ips_list();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ScrubIpsApi->get_scrub_ips_list: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ARRAY[ScrubIpsRowSchema]**](ScrubIpsRowSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **place_scrub_order**
> PlaceScrubOrder201Response place_scrub_order(scrub_ip_place_order => $scrub_ip_place_order)

Place Scrub IP Order

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::ScrubIpsApi;
my $api_instance = OpenAPIClient::ScrubIpsApi->new(

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

my $scrub_ip_place_order = OpenAPIClient::Object::ScrubIpPlaceOrder->new(); # ScrubIpPlaceOrder | 

eval {
    my $result = $api_instance->place_scrub_order(scrub_ip_place_order => $scrub_ip_place_order);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ScrubIpsApi->place_scrub_order: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **scrub_ip_place_order** | [**ScrubIpPlaceOrder**](ScrubIpPlaceOrder.md)|  | 

### Return type

[**PlaceScrubOrder201Response**](PlaceScrubOrder201Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrub_ips_delete_geo_rule**
> ScrubIpsDeleteRule200Response scrub_ips_delete_geo_rule(id => $id, delete_geo_firewall_rule => $delete_geo_firewall_rule)

Delete Geo Firewall Rule

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::ScrubIpsApi;
my $api_instance = OpenAPIClient::ScrubIpsApi->new(

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

my $id = 56; # int | ScrubIp ID number
my $delete_geo_firewall_rule = OpenAPIClient::Object::DeleteGeoFirewallRule->new(); # DeleteGeoFirewallRule | 

eval {
    my $result = $api_instance->scrub_ips_delete_geo_rule(id => $id, delete_geo_firewall_rule => $delete_geo_firewall_rule);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ScrubIpsApi->scrub_ips_delete_geo_rule: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 
 **delete_geo_firewall_rule** | [**DeleteGeoFirewallRule**](DeleteGeoFirewallRule.md)|  | 

### Return type

[**ScrubIpsDeleteRule200Response**](ScrubIpsDeleteRule200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrub_ips_delete_rule**
> ScrubIpsDeleteRule200Response scrub_ips_delete_rule(id => $id, delete_firewall_rule => $delete_firewall_rule)

Delete Firewall Rule

Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::ScrubIpsApi;
my $api_instance = OpenAPIClient::ScrubIpsApi->new(

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

my $id = 56; # int | ScrubIp ID number
my $delete_firewall_rule = OpenAPIClient::Object::DeleteFirewallRule->new(); # DeleteFirewallRule | 

eval {
    my $result = $api_instance->scrub_ips_delete_rule(id => $id, delete_firewall_rule => $delete_firewall_rule);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ScrubIpsApi->scrub_ips_delete_rule: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 
 **delete_firewall_rule** | [**DeleteFirewallRule**](DeleteFirewallRule.md)|  | 

### Return type

[**ScrubIpsDeleteRule200Response**](ScrubIpsDeleteRule200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

