# OpenAPIClient::DomainsApi

## Load the API package
```perl
use OpenAPIClient::Object::DomainsApi;
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_domain**](DomainsApi.md#add_domain) | **POST** /domains/order | Place Domain Order
[**add_domain_dnssec**](DomainsApi.md#add_domain_dnssec) | **POST** /domains/{id}/dnssec | Add Domain DNSSEC Records
[**add_domain_nameserver**](DomainsApi.md#add_domain_nameserver) | **POST** /domains/{id}/nameservers | Add Registered Nameserver
[**cancel_domain**](DomainsApi.md#cancel_domain) | **DELETE** /domains/{id} | Cancel Domain Order
[**delete_domain_dnssec**](DomainsApi.md#delete_domain_dnssec) | **DELETE** /domains/{id}/dnssec | Remove Domain DNSSEC Records
[**delete_domain_nameserver**](DomainsApi.md#delete_domain_nameserver) | **DELETE** /domains/{id}/nameservers | Delete Registered Nameserver
[**get_domain_contact**](DomainsApi.md#get_domain_contact) | **GET** /domains/{id}/contact | Get Domain Contact Details
[**get_domain_dnssec**](DomainsApi.md#get_domain_dnssec) | **GET** /domains/{id}/dnssec | Get Domain DNSSEC Records
[**get_domain_info**](DomainsApi.md#get_domain_info) | **GET** /domains/{id} | Get Domain Order
[**get_domain_invoices**](DomainsApi.md#get_domain_invoices) | **GET** /domains/{id}/invoices | Get Domain Invoices
[**get_domain_lookup**](DomainsApi.md#get_domain_lookup) | **GET** /domains/lookup/{name} | Lookup Domain Availability and Pricing
[**get_domain_nameservers**](DomainsApi.md#get_domain_nameservers) | **GET** /domains/{id}/nameservers | List Registered Nameservers
[**get_domain_order_fields**](DomainsApi.md#get_domain_order_fields) | **GET** /domains/order/{domain}/{regType} | Get Domain Order Fields
[**get_domain_order_search_results**](DomainsApi.md#get_domain_order_search_results) | **GET** /domains/order/{domain} | Get Domain Order Search Results
[**get_domain_renewal**](DomainsApi.md#get_domain_renewal) | **GET** /domains/{id}/renew | Start Domain Renewal Flow
[**get_domain_search**](DomainsApi.md#get_domain_search) | **GET** /domains/search/{name} | Search Domain Suggestions
[**get_domain_transfer**](DomainsApi.md#get_domain_transfer) | **GET** /domains/{id}/transfer | Start Domain Transfer Flow
[**get_domain_whois_privacy**](DomainsApi.md#get_domain_whois_privacy) | **GET** /domains/{id}/whois | Get Whois Privacy Status
[**get_domains_list**](DomainsApi.md#get_domains_list) | **GET** /domains | List Domain Orders
[**get_domains_welcome_email**](DomainsApi.md#get_domains_welcome_email) | **GET** /domains/{id}/welcome_email | Resend Domain Welcome Email
[**get_new_domain**](DomainsApi.md#get_new_domain) | **GET** /domains/order | Get Domain Ordering Information
[**patch_domains**](DomainsApi.md#patch_domains) | **PATCH** /domains/order | Validate Domain Order
[**post_domain_renewal**](DomainsApi.md#post_domain_renewal) | **POST** /domains/{id}/renew | Request Domain Renewal
[**post_domain_transfer**](DomainsApi.md#post_domain_transfer) | **POST** /domains/{id}/transfer | Request Domain Transfer
[**put_domains**](DomainsApi.md#put_domains) | **PUT** /domains/order | Domain Order Search
[**update_domain_contact**](DomainsApi.md#update_domain_contact) | **POST** /domains/{id}/contact | Update Domain Contact Details
[**update_domain_info**](DomainsApi.md#update_domain_info) | **POST** /domains/{id} | Update Domain Order
[**update_domain_nameservers**](DomainsApi.md#update_domain_nameservers) | **PUT** /domains/{id}/nameservers | Replace Nameserver Set
[**update_domain_whois_privacy**](DomainsApi.md#update_domain_whois_privacy) | **POST** /domains/{id}/whois | Update Whois Privacy


# **add_domain**
> add_domain()

Place Domain Order

Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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
    $api_instance->add_domain();
};
if ($@) {
    warn "Exception when calling DomainsApi->add_domain: $@\n";
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

# **add_domain_dnssec**
> SuccessTextResponse add_domain_dnssec(id => $id, domain_dnssec_request => $domain_dnssec_request)

Add Domain DNSSEC Records

Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.
my $domain_dnssec_request = OpenAPIClient::Object::DomainDnssecRequest->new(); # DomainDnssecRequest | 

eval {
    my $result = $api_instance->add_domain_dnssec(id => $id, domain_dnssec_request => $domain_dnssec_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->add_domain_dnssec: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **domain_dnssec_request** | [**DomainDnssecRequest**](DomainDnssecRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **add_domain_nameserver**
> TextResponse add_domain_nameserver(id => $id, domain_nameserver_post_request => $domain_nameserver_post_request)

Add Registered Nameserver

Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.
my $domain_nameserver_post_request = OpenAPIClient::Object::DomainNameserverPostRequest->new(); # DomainNameserverPostRequest | 

eval {
    my $result = $api_instance->add_domain_nameserver(id => $id, domain_nameserver_post_request => $domain_nameserver_post_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->add_domain_nameserver: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **domain_nameserver_post_request** | [**DomainNameserverPostRequest**](DomainNameserverPostRequest.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cancel_domain**
> CancelDomain200Response cancel_domain(id => $id)

Cancel Domain Order

Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.

eval {
    my $result = $api_instance->cancel_domain(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->cancel_domain: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**CancelDomain200Response**](CancelDomain200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_domain_dnssec**
> SuccessTextResponse delete_domain_dnssec(id => $id, action => $action)

Remove Domain DNSSEC Records

Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.
my $action = "action_example"; # string | Set to `delete` to remove all DNSSEC records.

eval {
    my $result = $api_instance->delete_domain_dnssec(id => $id, action => $action);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->delete_domain_dnssec: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **action** | **string**| Set to &#x60;delete&#x60; to remove all DNSSEC records. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_domain_nameserver**
> TextResponse delete_domain_nameserver(id => $id, index => $index)

Delete Registered Nameserver

Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.
my $index = 56; # int | The index of the registered nameserver from the registered nameservers list to delete.  

eval {
    my $result = $api_instance->delete_domain_nameserver(id => $id, index => $index);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->delete_domain_nameserver: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **index** | **int**| The index of the registered nameserver from the registered nameservers list to delete.   | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_domain_contact**
> DomainContactDetails get_domain_contact(id => $id)

Get Domain Contact Details

Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.

eval {
    my $result = $api_instance->get_domain_contact(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->get_domain_contact: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**DomainContactDetails**](DomainContactDetails.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_domain_dnssec**
> DomainDnssecRecords get_domain_dnssec(id => $id)

Get Domain DNSSEC Records

Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.

eval {
    my $result = $api_instance->get_domain_dnssec(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->get_domain_dnssec: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**DomainDnssecRecords**](DomainDnssecRecords.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_domain_info**
> Domain get_domain_info(id => $id)

Get Domain Order

Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.

eval {
    my $result = $api_instance->get_domain_info(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->get_domain_info: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**Domain**](Domain.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_domain_invoices**
> ChargeInvoiceRows get_domain_invoices(id => $id)

Get Domain Invoices

Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.

eval {
    my $result = $api_instance->get_domain_invoices(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->get_domain_invoices: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_domain_lookup**
> DomainLookupResponse get_domain_lookup(name => $name)

Lookup Domain Availability and Pricing

Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $name = "name_example"; # string | The full domain name to look up (for example `example.com`).

eval {
    my $result = $api_instance->get_domain_lookup(name => $name);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->get_domain_lookup: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string**| The full domain name to look up (for example &#x60;example.com&#x60;). | 

### Return type

[**DomainLookupResponse**](DomainLookupResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_domain_nameservers**
> DomainNameserverGetResponse get_domain_nameservers(id => $id)

List Registered Nameservers

Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.

eval {
    my $result = $api_instance->get_domain_nameservers(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->get_domain_nameservers: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**DomainNameserverGetResponse**](DomainNameserverGetResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_domain_order_fields**
> get_domain_order_fields(domain => $domain, reg_type => $reg_type)

Get Domain Order Fields

Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $domain = "domain_example"; # string | The fully qualified domain name (e.g. `example.com`).
my $reg_type = "reg_type_example"; # string | The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers.

eval {
    $api_instance->get_domain_order_fields(domain => $domain, reg_type => $reg_type);
};
if ($@) {
    warn "Exception when calling DomainsApi->get_domain_order_fields: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **string**| The fully qualified domain name (e.g. &#x60;example.com&#x60;). | 
 **reg_type** | **string**| The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_domain_order_search_results**
> get_domain_order_search_results(domain => $domain)

Get Domain Order Search Results

Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $domain = "domain_example"; # string | The fully qualified domain name to look up (e.g. `example.com`).

eval {
    $api_instance->get_domain_order_search_results(domain => $domain);
};
if ($@) {
    warn "Exception when calling DomainsApi->get_domain_order_search_results: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **string**| The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;). | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_domain_renewal**
> SuccessTextResponse get_domain_renewal(id => $id)

Start Domain Renewal Flow

Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.

eval {
    my $result = $api_instance->get_domain_renewal(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->get_domain_renewal: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_domain_search**
> DomainSearchResponse get_domain_search(name => $name)

Search Domain Suggestions

Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $name = "name_example"; # string | The base domain name to search (for example `example` or `example.com`).

eval {
    my $result = $api_instance->get_domain_search(name => $name);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->get_domain_search: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string**| The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;). | 

### Return type

[**DomainSearchResponse**](DomainSearchResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_domain_transfer**
> SuccessTextResponse get_domain_transfer(id => $id)

Start Domain Transfer Flow

Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.

eval {
    my $result = $api_instance->get_domain_transfer(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->get_domain_transfer: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_domain_whois_privacy**
> SuccessTextResponse get_domain_whois_privacy(id => $id)

Get Whois Privacy Status

Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.

eval {
    my $result = $api_instance->get_domain_whois_privacy(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->get_domain_whois_privacy: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_domains_list**
> ARRAY[DomainRow] get_domains_list()

List Domain Orders

Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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
    my $result = $api_instance->get_domains_list();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->get_domains_list: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ARRAY[DomainRow]**](DomainRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_domains_welcome_email**
> SuccessTextResponse get_domains_welcome_email(id => $id)

Resend Domain Welcome Email

Resends the welcome email for the domain service. The email contains registration details and management instructions.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.

eval {
    my $result = $api_instance->get_domains_welcome_email(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->get_domains_welcome_email: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_new_domain**
> DomainOrder get_new_domain()

Get Domain Ordering Information

Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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
    my $result = $api_instance->get_new_domain();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->get_new_domain: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**DomainOrder**](DomainOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **patch_domains**
> patch_domains()

Validate Domain Order

Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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
    $api_instance->patch_domains();
};
if ($@) {
    warn "Exception when calling DomainsApi->patch_domains: $@\n";
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

# **post_domain_renewal**
> SuccessTextResponse post_domain_renewal(id => $id)

Request Domain Renewal

Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.

eval {
    my $result = $api_instance->post_domain_renewal(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->post_domain_renewal: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_domain_transfer**
> SuccessTextResponse post_domain_transfer(id => $id)

Request Domain Transfer

Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.

eval {
    my $result = $api_instance->post_domain_transfer(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->post_domain_transfer: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_domains**
> put_domains()

Domain Order Search

Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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
    $api_instance->put_domains();
};
if ($@) {
    warn "Exception when calling DomainsApi->put_domains: $@\n";
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

# **update_domain_contact**
> SuccessTextResponse update_domain_contact(id => $id, domain_contact_details => $domain_contact_details)

Update Domain Contact Details

Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.
my $domain_contact_details = OpenAPIClient::Object::DomainContactDetails->new(); # DomainContactDetails | 

eval {
    my $result = $api_instance->update_domain_contact(id => $id, domain_contact_details => $domain_contact_details);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->update_domain_contact: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **domain_contact_details** | [**DomainContactDetails**](DomainContactDetails.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_domain_info**
> update_domain_info(id => $id)

Update Domain Order

Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = "id_example"; # string | The domain service ID. Use `domain_id` from `GET /domains`.

eval {
    $api_instance->update_domain_info(id => $id);
};
if ($@) {
    warn "Exception when calling DomainsApi->update_domain_info: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_domain_nameservers**
> TextResponse update_domain_nameservers(id => $id, domain_nameserver_put_request => $domain_nameserver_put_request)

Replace Nameserver Set

Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.
my $domain_nameserver_put_request = OpenAPIClient::Object::DomainNameserverPutRequest->new(); # DomainNameserverPutRequest | 

eval {
    my $result = $api_instance->update_domain_nameservers(id => $id, domain_nameserver_put_request => $domain_nameserver_put_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->update_domain_nameservers: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **domain_nameserver_put_request** | [**DomainNameserverPutRequest**](DomainNameserverPutRequest.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_domain_whois_privacy**
> SuccessTextResponse update_domain_whois_privacy(id => $id, domain_whois_privacy_request => $domain_whois_privacy_request)

Update Whois Privacy

Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DomainsApi;
my $api_instance = OpenAPIClient::DomainsApi->new(

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

my $id = 56; # int | The domain service ID. Use `domain_id` from `GET /domains`.
my $domain_whois_privacy_request = OpenAPIClient::Object::DomainWhoisPrivacyRequest->new(); # DomainWhoisPrivacyRequest | 

eval {
    my $result = $api_instance->update_domain_whois_privacy(id => $id, domain_whois_privacy_request => $domain_whois_privacy_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DomainsApi->update_domain_whois_privacy: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **domain_whois_privacy_request** | [**DomainWhoisPrivacyRequest**](DomainWhoisPrivacyRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

