# DNS_API

All URIs are relative to *https://my.interserver.net/apiv2*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**add_dns_domain**](DNS_API.md#add_dns_domain) | **Post** /dns | Create DNS Domain
[**add_dns_record**](DNS_API.md#add_dns_record) | **Post** /dns/{id} | Add DNS Record to Domain
[**delete_dns_domain**](DNS_API.md#delete_dns_domain) | **Delete** /dns/{id} | Delete DNS Domain
[**delete_dns_record**](DNS_API.md#delete_dns_record) | **Delete** /dns/{domainId}/{recordId} | Delete DNS Record
[**dns_domain**](DNS_API.md#dns_domain) | **Get** /dns/{id} | List Domain DNS Records
[**dns_list**](DNS_API.md#dns_list) | **Get** /dns | List DNS Domains
[**update_dns_record**](DNS_API.md#update_dns_record) | **Post** /dns/{domainId}/{recordId} | Update DNS Record


# **add_dns_domain**
> add_dns_domain (domain: STRING_32 ; ip: STRING_32 )


Create DNS Domain

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **STRING_32**| The domain name. | [default to null]
 **ip** | **STRING_32**| IP Address to point the domain to. | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **add_dns_record**
> add_dns_record (id: STRING_32 ; name: STRING_32 ; type: DNS_RECORD_TYPE ; content: STRING_32 ; ttl:  detachable INTEGER_32 ; prio:  detachable INTEGER_32 )


Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| The DNS Domain ID. | [default to null]
 **name** | **STRING_32**| Name part of record | [default to null]
 **type** | [**DNS_RECORD_TYPE**](DnsRecordType.md)|  | [default to null]
 **content** | **STRING_32**| Content of record | [default to null]
 **ttl** | **INTEGER_32**| Time-to-live | [optional] [default to 86400]
 **prio** | **INTEGER_32**| Priority | [optional] [default to 0]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_dns_domain**
> delete_dns_domain (id: STRING_32 )


Delete DNS Domain

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_dns_record**
> delete_dns_record (domain_id: INTEGER_32 ; record_id: INTEGER_32 )


Delete DNS Record

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain_id** | **INTEGER_32**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | [default to null]
 **record_id** | **INTEGER_32**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **dns_domain**
> dns_domain (id: INTEGER_32 ): detachable LIST [DNS_RECORD]


List Domain DNS Records

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | [default to null]

### Return type

[**LIST [DNS_RECORD]**](DnsRecord.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **dns_list**
> dns_list : detachable LIST [DNS_LIST_ITEM]


List DNS Domains

Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.


### Parameters
This endpoint does not need any parameter.

### Return type

[**LIST [DNS_LIST_ITEM]**](DnsListItem.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_dns_record**
> update_dns_record (domain_id: INTEGER_32 ; record_id: INTEGER_32 ; name:  detachable STRING_32 ; type:  detachable DNS_RECORD_TYPE ; content:  detachable STRING_32 ; ttl:  detachable STRING_32 ; prio:  detachable STRING_32 ; disabled:  detachable STRING_32 ; ordername:  detachable STRING_32 ; auth:  detachable STRING_32 )


Update DNS Record

Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain_id** | **INTEGER_32**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | [default to null]
 **record_id** | **INTEGER_32**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | [default to null]
 **name** | **STRING_32**|  | [optional] [default to null]
 **type** | [**DNS_RECORD_TYPE**](DnsRecordType.md)|  | [optional] [default to null]
 **content** | **STRING_32**|  | [optional] [default to null]
 **ttl** | **STRING_32**|  | [optional] [default to null]
 **prio** | **STRING_32**|  | [optional] [default to null]
 **disabled** | **STRING_32**|  | [optional] [default to null]
 **ordername** | **STRING_32**|  | [optional] [default to null]
 **auth** | **STRING_32**|  | [optional] [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

