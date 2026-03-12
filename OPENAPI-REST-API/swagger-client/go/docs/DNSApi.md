# {{classname}}

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddDnsDomain**](DNSApi.md#AddDnsDomain) | **Post** /dns | Create DNS Domain
[**AddDnsRecord**](DNSApi.md#AddDnsRecord) | **Post** /dns/{id} | Add DNS Record to Domain
[**DeleteDnsDomain**](DNSApi.md#DeleteDnsDomain) | **Delete** /dns/{id} | Delete DNS Domain
[**DeleteDnsRecord**](DNSApi.md#DeleteDnsRecord) | **Delete** /dns/{domainId}/{recordId} | Delete DNS Record
[**GetDnsDomain**](DNSApi.md#GetDnsDomain) | **Get** /dns/{id} | List Domain DNS Records
[**GetDnsList**](DNSApi.md#GetDnsList) | **Get** /dns | List DNS Domains
[**UpdateDnsRecord**](DNSApi.md#UpdateDnsRecord) | **Post** /dns/{domainId}/{recordId} | Update DNS Record

# **AddDnsDomain**
> AddDnsDomain(ctx, domain, ip, body)
Create DNS Domain

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **domain** | **string**|  | 
  **ip** | **string**|  | 
  **body** | [**DnsNewDomain**](DnsNewDomain.md)|  | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AddDnsRecord**
> AddDnsRecord(ctx, name, type_, content, ttl, prio, body, id)
Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **name** | **string**|  | 
  **type_** | [**DnsRecordType**](.md)|  | 
  **content** | **string**|  | 
  **ttl** | **int32**|  | 
  **prio** | **int32**|  | 
  **body** | [**DnsNewRecord**](DnsNewRecord.md)|  | 
  **id** | **string**| The DNS Domain ID. | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeleteDnsDomain**
> DeleteDnsDomain(ctx, id)
Delete DNS Domain

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **string**| The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeleteDnsRecord**
> DeleteDnsRecord(ctx, domainId, recordId)
Delete DNS Record

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **domainId** | **int32**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 
  **recordId** | **int32**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetDnsDomain**
> []DnsRecord GetDnsDomain(ctx, id)
List Domain DNS Records

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 

### Return type

[**[]DnsRecord**](DnsRecord.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetDnsList**
> []DnsListItem GetDnsList(ctx, )
List DNS Domains

Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.

### Required Parameters
This endpoint does not need any parameter.

### Return type

[**[]DnsListItem**](DnsListItem.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UpdateDnsRecord**
> UpdateDnsRecord(ctx, name, type_, content, ttl, prio, disabled, ordername, auth, body, domainId, recordId)
Update DNS Record

Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **name** | **string**|  | 
  **type_** | [**DnsRecordType**](.md)|  | 
  **content** | **string**|  | 
  **ttl** | **string**|  | 
  **prio** | **string**|  | 
  **disabled** | **string**|  | 
  **ordername** | **string**|  | 
  **auth** | **string**|  | 
  **body** | [**DnsUpdateRecord**](DnsUpdateRecord.md)| The request data to update a dns record. | 
  **domainId** | **int32**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 
  **recordId** | **int32**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

