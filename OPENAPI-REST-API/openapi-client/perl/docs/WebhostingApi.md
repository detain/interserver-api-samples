# OpenAPIClient::WebhostingApi

## Load the API package
```perl
use OpenAPIClient::Object::WebhostingApi;
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_website**](WebhostingApi.md#add_website) | **POST** /websites/order | Place Website Order
[**get_new_website**](WebhostingApi.md#get_new_website) | **GET** /websites/order | Website Ordering Information
[**get_website_buy_ip**](WebhostingApi.md#get_website_buy_ip) | **GET** /websites/{id}/buy_ip | Get Website IP Information
[**get_website_info**](WebhostingApi.md#get_website_info) | **GET** /websites/{id} | Get Website Order
[**get_website_invoices**](WebhostingApi.md#get_website_invoices) | **GET** /websites/{id}/invoices | Get Website Invoices
[**get_website_list**](WebhostingApi.md#get_website_list) | **GET** /websites | Get Website Listing
[**get_websites_backups**](WebhostingApi.md#get_websites_backups) | **GET** /websites/{id}/backups | Get Website Backups
[**get_websites_login**](WebhostingApi.md#get_websites_login) | **GET** /websites/{id}/login | Hosting Panel Auto Login
[**get_websites_welcome_email**](WebhostingApi.md#get_websites_welcome_email) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email
[**gett_website_reverse_dns**](WebhostingApi.md#gett_website_reverse_dns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS
[**post_website_buy_ip**](WebhostingApi.md#post_website_buy_ip) | **POST** /websites/{id}/buy_ip | Update Website IP DNS
[**post_website_migration**](WebhostingApi.md#post_website_migration) | **POST** /websites/{id}/migration | Request Website Migration
[**post_websites_reverse_dns**](WebhostingApi.md#post_websites_reverse_dns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS
[**put_websites**](WebhostingApi.md#put_websites) | **PUT** /websites/order | Validate Webhosting Order
[**update_website_info**](WebhostingApi.md#update_website_info) | **POST** /websites/{id} | Update Website Order
[**webhosting_cancel**](WebhostingApi.md#webhosting_cancel) | **DELETE** /websites/{id} | Cancel Website


# **add_website**
> add_website()

Place Website Order

Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::WebhostingApi;
my $api_instance = OpenAPIClient::WebhostingApi->new(

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
    $api_instance->add_website();
};
if ($@) {
    warn "Exception when calling WebhostingApi->add_website: $@\n";
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

# **get_new_website**
> WebsitesOrder get_new_website()

Website Ordering Information

Retrieves available webhosting plans and pricing for ordering.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::WebhostingApi;
my $api_instance = OpenAPIClient::WebhostingApi->new(

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
    my $result = $api_instance->get_new_website();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling WebhostingApi->get_new_website: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**WebsitesOrder**](WebsitesOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_website_buy_ip**
> GetWebsiteBuyIp200Response get_website_buy_ip(id => $id)

Get Website IP Information

Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::WebhostingApi;
my $api_instance = OpenAPIClient::WebhostingApi->new(

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

my $id = 56; # int | The website service ID. Use `website_id` from `GET /websites`.

eval {
    my $result = $api_instance->get_website_buy_ip(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling WebhostingApi->get_website_buy_ip: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**GetWebsiteBuyIp200Response**](GetWebsiteBuyIp200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_website_info**
> Website get_website_info(id => $id)

Get Website Order

Returns detailed information about a specific webhosting order including its domain, plan, and status.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::WebhostingApi;
my $api_instance = OpenAPIClient::WebhostingApi->new(

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

my $id = 56; # int | The website service ID. Use `website_id` from `GET /websites`.

eval {
    my $result = $api_instance->get_website_info(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling WebhostingApi->get_website_info: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**Website**](Website.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_website_invoices**
> ChargeInvoiceRows get_website_invoices(id => $id)

Get Website Invoices

Returns the billing invoices associated with this webhosting service.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::WebhostingApi;
my $api_instance = OpenAPIClient::WebhostingApi->new(

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

my $id = 56; # int | The website service ID. Use `website_id` from `GET /websites`.

eval {
    my $result = $api_instance->get_website_invoices(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling WebhostingApi->get_website_invoices: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_website_list**
> ARRAY[WebsiteRow] get_website_list()

Get Website Listing

Gets a listing of your webhosting orders and service details.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::WebhostingApi;
my $api_instance = OpenAPIClient::WebhostingApi->new(

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
    my $result = $api_instance->get_website_list();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling WebhostingApi->get_website_list: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ARRAY[WebsiteRow]**](WebsiteRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_websites_backups**
> WebsiteBackups get_websites_backups(id => $id)

Get Website Backups

Gets a list of the backups that exist for a website and their sizes.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::WebhostingApi;
my $api_instance = OpenAPIClient::WebhostingApi->new(

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

my $id = 56; # int | The website service ID. Use `website_id` from `GET /websites`.

eval {
    my $result = $api_instance->get_websites_backups(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling WebhostingApi->get_websites_backups: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**WebsiteBackups**](WebsiteBackups.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_websites_login**
> WebsiteLoginResponse get_websites_login(id => $id)

Hosting Panel Auto Login

Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::WebhostingApi;
my $api_instance = OpenAPIClient::WebhostingApi->new(

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

my $id = 56; # int | The website service ID. Use `website_id` from `GET /websites`.

eval {
    my $result = $api_instance->get_websites_login(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling WebhostingApi->get_websites_login: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**WebsiteLoginResponse**](WebsiteLoginResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_websites_welcome_email**
> SuccessTextResponse get_websites_welcome_email(id => $id)

Resend Website Welcome Email

Resends the welcome email containing hosting credentials and panel access details for the webhosting order.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::WebhostingApi;
my $api_instance = OpenAPIClient::WebhostingApi->new(

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

my $id = 56; # int | The website service ID. Use `website_id` from `GET /websites`.

eval {
    my $result = $api_instance->get_websites_welcome_email(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling WebhostingApi->get_websites_welcome_email: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **gett_website_reverse_dns**
> ReverseDnsEntries gett_website_reverse_dns(id => $id)

Get Website Reverse DNS

Returns the current reverse DNS (PTR record) entries for the website's IP addresses.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::WebhostingApi;
my $api_instance = OpenAPIClient::WebhostingApi->new(

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

my $id = 56; # int | The website service ID. Use `website_id` from `GET /websites`.

eval {
    my $result = $api_instance->gett_website_reverse_dns(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling WebhostingApi->gett_website_reverse_dns: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_website_buy_ip**
> PostWebsiteBuyIp200Response post_website_buy_ip(id => $id, post_website_buy_ip_request => $post_website_buy_ip_request)

Update Website IP DNS

Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::WebhostingApi;
my $api_instance = OpenAPIClient::WebhostingApi->new(

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

my $id = 56; # int | The website service ID. Use `website_id` from `GET /websites`.
my $post_website_buy_ip_request = OpenAPIClient::Object::PostWebsiteBuyIpRequest->new(); # PostWebsiteBuyIpRequest | 

eval {
    my $result = $api_instance->post_website_buy_ip(id => $id, post_website_buy_ip_request => $post_website_buy_ip_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling WebhostingApi->post_website_buy_ip: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 
 **post_website_buy_ip_request** | [**PostWebsiteBuyIpRequest**](PostWebsiteBuyIpRequest.md)|  | 

### Return type

[**PostWebsiteBuyIp200Response**](PostWebsiteBuyIp200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_website_migration**
> PostWebsiteMigration200Response post_website_migration(id => $id, post_website_migration_request => $post_website_migration_request)

Request Website Migration

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::WebhostingApi;
my $api_instance = OpenAPIClient::WebhostingApi->new(

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

my $id = 56; # int | The website service ID. Use `website_id` from `GET /websites`.
my $post_website_migration_request = OpenAPIClient::Object::PostWebsiteMigrationRequest->new(); # PostWebsiteMigrationRequest | 

eval {
    my $result = $api_instance->post_website_migration(id => $id, post_website_migration_request => $post_website_migration_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling WebhostingApi->post_website_migration: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 
 **post_website_migration_request** | [**PostWebsiteMigrationRequest**](PostWebsiteMigrationRequest.md)|  | 

### Return type

[**PostWebsiteMigration200Response**](PostWebsiteMigration200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_websites_reverse_dns**
> TextResponse post_websites_reverse_dns(id => $id, reverse_dns_entries => $reverse_dns_entries)

Update Website Reverse DNS

Updates the reverse DNS entries for each of the IP addresses for the website.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::WebhostingApi;
my $api_instance = OpenAPIClient::WebhostingApi->new(

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

my $id = 56; # int | The website service ID. Use `website_id` from `GET /websites`.
my $reverse_dns_entries = OpenAPIClient::Object::ReverseDnsEntries->new(); # ReverseDnsEntries | 

eval {
    my $result = $api_instance->post_websites_reverse_dns(id => $id, reverse_dns_entries => $reverse_dns_entries);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling WebhostingApi->post_websites_reverse_dns: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 
 **reverse_dns_entries** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_websites**
> put_websites()

Validate Webhosting Order

Validates a webhosting order before placing it.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::WebhostingApi;
my $api_instance = OpenAPIClient::WebhostingApi->new(

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
    $api_instance->put_websites();
};
if ($@) {
    warn "Exception when calling WebhostingApi->put_websites: $@\n";
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

# **update_website_info**
> update_website_info(id => $id)

Update Website Order

Updates settings on a webhosting order.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::WebhostingApi;
my $api_instance = OpenAPIClient::WebhostingApi->new(

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

my $id = "id_example"; # string | The website service ID. Use `website_id` from `GET /websites`.

eval {
    $api_instance->update_website_info(id => $id);
};
if ($@) {
    warn "Exception when calling WebhostingApi->update_website_info: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **webhosting_cancel**
> WebhostingCancel200Response webhosting_cancel(id => $id)

Cancel Website

Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::WebhostingApi;
my $api_instance = OpenAPIClient::WebhostingApi->new(

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

my $id = 123; # string | The website service ID. Use `website_id` from `GET /websites`.

eval {
    my $result = $api_instance->webhosting_cancel(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling WebhostingApi->webhosting_cancel: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**WebhostingCancel200Response**](WebhostingCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

