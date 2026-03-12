# OpenAPIClient::DNSApi

## Load the API package
```perl
use OpenAPIClient::Object::DNSApi;
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_dns_domain**](DNSApi.md#add_dns_domain) | **POST** /dns | Create DNS Domain
[**add_dns_record**](DNSApi.md#add_dns_record) | **POST** /dns/{id} | Add DNS Record to Domain
[**delete_dns_domain**](DNSApi.md#delete_dns_domain) | **DELETE** /dns/{id} | Delete DNS Domain
[**delete_dns_record**](DNSApi.md#delete_dns_record) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record
[**get_dns_domain**](DNSApi.md#get_dns_domain) | **GET** /dns/{id} | List Domain DNS Records
[**get_dns_list**](DNSApi.md#get_dns_list) | **GET** /dns | List DNS Domains
[**update_dns_record**](DNSApi.md#update_dns_record) | **POST** /dns/{domainId}/{recordId} | Update DNS Record


# **add_dns_domain**
> add_dns_domain(domain => $domain, ip => $ip)

Create DNS Domain

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DNSApi;
my $api_instance = OpenAPIClient::DNSApi->new(

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

my $domain = "domain_example"; # string | The domain name.
my $ip = "ip_example"; # string | IP Address to point the domain to.

eval {
    $api_instance->add_dns_domain(domain => $domain, ip => $ip);
};
if ($@) {
    warn "Exception when calling DNSApi->add_dns_domain: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **string**| The domain name. | 
 **ip** | **string**| IP Address to point the domain to. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **add_dns_record**
> add_dns_record(id => $id, name => $name, type => $type, content => $content, ttl => $ttl, prio => $prio)

Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DNSApi;
my $api_instance = OpenAPIClient::DNSApi->new(

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

my $id = 472; # string | The DNS Domain ID.
my $name = "name_example"; # string | Name part of record
my $type = new OpenAPIClient.DnsRecordType(); # DnsRecordType | 
my $content = "content_example"; # string | Content of record
my $ttl = 86400; # int | Time-to-live
my $prio = 0; # int | Priority

eval {
    $api_instance->add_dns_record(id => $id, name => $name, type => $type, content => $content, ttl => $ttl, prio => $prio);
};
if ($@) {
    warn "Exception when calling DNSApi->add_dns_record: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| The DNS Domain ID. | 
 **name** | **string**| Name part of record | 
 **type** | [**DnsRecordType**](DnsRecordType.md)|  | 
 **content** | **string**| Content of record | 
 **ttl** | **int**| Time-to-live | [optional] [default to 86400]
 **prio** | **int**| Priority | [optional] [default to 0]

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_dns_domain**
> delete_dns_domain(id => $id)

Delete DNS Domain

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DNSApi;
my $api_instance = OpenAPIClient::DNSApi->new(

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

my $id = "id_example"; # string | The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain.

eval {
    $api_instance->delete_dns_domain(id => $id);
};
if ($@) {
    warn "Exception when calling DNSApi->delete_dns_domain: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_dns_record**
> delete_dns_record(domain_id => $domain_id, record_id => $record_id)

Delete DNS Record

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DNSApi;
my $api_instance = OpenAPIClient::DNSApi->new(

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

my $domain_id = 56; # int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
my $record_id = 56; # int | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.

eval {
    $api_instance->delete_dns_record(domain_id => $domain_id, record_id => $record_id);
};
if ($@) {
    warn "Exception when calling DNSApi->delete_dns_record: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain_id** | **int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 
 **record_id** | **int**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_dns_domain**
> ARRAY[DnsRecord] get_dns_domain(id => $id)

List Domain DNS Records

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DNSApi;
my $api_instance = OpenAPIClient::DNSApi->new(

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

my $id = 56; # int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.

eval {
    my $result = $api_instance->get_dns_domain(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DNSApi->get_dns_domain: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 

### Return type

[**ARRAY[DnsRecord]**](DnsRecord.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_dns_list**
> ARRAY[DnsListItem] get_dns_list()

List DNS Domains

Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DNSApi;
my $api_instance = OpenAPIClient::DNSApi->new(

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
    my $result = $api_instance->get_dns_list();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DNSApi->get_dns_list: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ARRAY[DnsListItem]**](DnsListItem.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_dns_record**
> update_dns_record(domain_id => $domain_id, record_id => $record_id, name => $name, type => $type, content => $content, ttl => $ttl, prio => $prio, disabled => $disabled, ordername => $ordername, auth => $auth)

Update DNS Record

Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::DNSApi;
my $api_instance = OpenAPIClient::DNSApi->new(

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

my $domain_id = 56; # int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
my $record_id = 56; # int | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
my $name = "name_example"; # string | 
my $type = new OpenAPIClient.DnsRecordType(); # DnsRecordType | 
my $content = "content_example"; # string | 
my $ttl = "ttl_example"; # string | 
my $prio = "prio_example"; # string | 
my $disabled = "disabled_example"; # string | 
my $ordername = "ordername_example"; # string | 
my $auth = "auth_example"; # string | 

eval {
    $api_instance->update_dns_record(domain_id => $domain_id, record_id => $record_id, name => $name, type => $type, content => $content, ttl => $ttl, prio => $prio, disabled => $disabled, ordername => $ordername, auth => $auth);
};
if ($@) {
    warn "Exception when calling DNSApi->update_dns_record: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain_id** | **int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 
 **record_id** | **int**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | 
 **name** | **string**|  | [optional] 
 **type** | [**DnsRecordType**](DnsRecordType.md)|  | [optional] 
 **content** | **string**|  | [optional] 
 **ttl** | **string**|  | [optional] 
 **prio** | **string**|  | [optional] 
 **disabled** | **string**|  | [optional] 
 **ordername** | **string**|  | [optional] 
 **auth** | **string**|  | [optional] 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

