# OpenAPIClient::SSLCertificatesApi

## Load the API package
```perl
use OpenAPIClient::Object::SSLCertificatesApi;
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_ssl**](SSLCertificatesApi.md#add_ssl) | **POST** /ssl/order | Place SSL Cert Order
[**get_new_ssl**](SSLCertificatesApi.md#get_new_ssl) | **GET** /ssl/order | SSL Cert Ordering Information
[**get_ssl_info**](SSLCertificatesApi.md#get_ssl_info) | **GET** /ssl/{id} | Get SSL Cert Info
[**get_ssl_invoices**](SSLCertificatesApi.md#get_ssl_invoices) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices
[**get_ssl_list**](SSLCertificatesApi.md#get_ssl_list) | **GET** /ssl | List SSL Certs
[**get_ssl_welcome_email**](SSLCertificatesApi.md#get_ssl_welcome_email) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email
[**put_ssl**](SSLCertificatesApi.md#put_ssl) | **PUT** /ssl/order | Validate SSL Cert Order
[**ssl_cancel**](SSLCertificatesApi.md#ssl_cancel) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service
[**update_ssl_info**](SSLCertificatesApi.md#update_ssl_info) | **POST** /ssl/{id} | Update SSL Cert Order


# **add_ssl**
> add_ssl()

Place SSL Cert Order

Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::SSLCertificatesApi;
my $api_instance = OpenAPIClient::SSLCertificatesApi->new(

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
    $api_instance->add_ssl();
};
if ($@) {
    warn "Exception when calling SSLCertificatesApi->add_ssl: $@\n";
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

# **get_new_ssl**
> get_new_ssl()

SSL Cert Ordering Information

Retrieves available SSL certificate types and pricing for ordering.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::SSLCertificatesApi;
my $api_instance = OpenAPIClient::SSLCertificatesApi->new(

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
    $api_instance->get_new_ssl();
};
if ($@) {
    warn "Exception when calling SSLCertificatesApi->get_new_ssl: $@\n";
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

# **get_ssl_info**
> get_ssl_info(id => $id)

Get SSL Cert Info

Returns detailed information about a specific SSL certificate including its domain and expiration.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::SSLCertificatesApi;
my $api_instance = OpenAPIClient::SSLCertificatesApi->new(

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

my $id = 56; # int | SSL certificate ID number.

eval {
    $api_instance->get_ssl_info(id => $id);
};
if ($@) {
    warn "Exception when calling SSLCertificatesApi->get_ssl_info: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| SSL certificate ID number. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_ssl_invoices**
> ChargeInvoiceRows get_ssl_invoices(id => $id)

Get SSL Cert Invoices

Returns the billing invoices associated with this SSL certificate.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::SSLCertificatesApi;
my $api_instance = OpenAPIClient::SSLCertificatesApi->new(

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

my $id = 56; # int | SSL Cert ID number

eval {
    my $result = $api_instance->get_ssl_invoices(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling SSLCertificatesApi->get_ssl_invoices: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| SSL Cert ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_ssl_list**
> get_ssl_list()

List SSL Certs

Returns all SSL certificate services on the account with their current status.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::SSLCertificatesApi;
my $api_instance = OpenAPIClient::SSLCertificatesApi->new(

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
    $api_instance->get_ssl_list();
};
if ($@) {
    warn "Exception when calling SSLCertificatesApi->get_ssl_list: $@\n";
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

# **get_ssl_welcome_email**
> SuccessTextResponse get_ssl_welcome_email(id => $id)

Resend SSL Welcome Email

Resends the welcome email for the order.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::SSLCertificatesApi;
my $api_instance = OpenAPIClient::SSLCertificatesApi->new(

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

my $id = 56; # int | SSL Cert ID number

eval {
    my $result = $api_instance->get_ssl_welcome_email(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling SSLCertificatesApi->get_ssl_welcome_email: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| SSL Cert ID number | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_ssl**
> put_ssl()

Validate SSL Cert Order

Validates an SSL certificate order before placing it.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::SSLCertificatesApi;
my $api_instance = OpenAPIClient::SSLCertificatesApi->new(

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
    $api_instance->put_ssl();
};
if ($@) {
    warn "Exception when calling SSLCertificatesApi->put_ssl: $@\n";
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

# **ssl_cancel**
> SslCancel200Response ssl_cancel(id => $id)

Cancel SSL Certificate Service

Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::SSLCertificatesApi;
my $api_instance = OpenAPIClient::SSLCertificatesApi->new(

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

my $id = 56; # int | SSL Cert ID number

eval {
    my $result = $api_instance->ssl_cancel(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling SSLCertificatesApi->ssl_cancel: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| SSL Cert ID number | 

### Return type

[**SslCancel200Response**](SslCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_ssl_info**
> update_ssl_info(id => $id)

Update SSL Cert Order

Updates settings on an SSL certificate order.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::SSLCertificatesApi;
my $api_instance = OpenAPIClient::SSLCertificatesApi->new(

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

my $id = "id_example"; # string | SSL certificate ID number.

eval {
    $api_instance->update_ssl_info(id => $id);
};
if ($@) {
    warn "Exception when calling SSLCertificatesApi->update_ssl_info: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| SSL certificate ID number. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

