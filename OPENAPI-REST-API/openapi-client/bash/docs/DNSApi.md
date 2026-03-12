# DNSApi

All URIs are relative to */apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addDnsDomain**](DNSApi.md#addDnsDomain) | **POST** /dns | Create DNS Domain
[**addDnsRecord**](DNSApi.md#addDnsRecord) | **POST** /dns/{id} | Add DNS Record to Domain
[**deleteDnsDomain**](DNSApi.md#deleteDnsDomain) | **DELETE** /dns/{id} | Delete DNS Domain
[**deleteDnsRecord**](DNSApi.md#deleteDnsRecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record
[**getDnsDomain**](DNSApi.md#getDnsDomain) | **GET** /dns/{id} | List Domain DNS Records
[**getDnsList**](DNSApi.md#getDnsList) | **GET** /dns | List DNS Domains
[**updateDnsRecord**](DNSApi.md#updateDnsRecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record



## addDnsDomain

Create DNS Domain

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use '/dns/{id}' to manage records after creation.

### Example

```bash
 addDnsDomain
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **string** | The domain name. | [default to null]
 **ip** | **string** | IP Address to point the domain to. | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## addDnsRecord

Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use 'GET /dns/{id}' afterward to confirm the record was created.

### Example

```bash
 addDnsRecord id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string** | The DNS Domain ID. | [default to null]
 **name** | **string** | Name part of record | [default to null]
 **type** | [**DnsRecordType**](DnsRecordType.md) |  | [default to null]
 **content** | **string** | Content of record | [default to null]
 **ttl** | **integer** | Time-to-live | [optional] [default to 86400]
 **prio** | **integer** | Priority | [optional] [default to 0]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## deleteDnsDomain

Delete DNS Domain

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

### Example

```bash
 deleteDnsDomain id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string** | The DNS domain ID to delete. Use the 'id' from 'GET /dns' to identify the domain. | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## deleteDnsRecord

Delete DNS Record

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use 'GET /dns/{id}' to verify the record has been removed.

### Example

```bash
 deleteDnsRecord domainId=value recordId=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domainId** | **integer** | The DNS domain ID. Use the 'id' from 'GET /dns' to identify the domain. | [default to null]
 **recordId** | **integer** | The DNS record ID within the domain. Use the record 'id' from 'GET /dns/{id}' to identify the record. | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getDnsDomain

List Domain DNS Records

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record 'id' values with '/dns/{domainId}/{recordId}' to update or delete individual records.

### Example

```bash
 getDnsDomain id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The DNS domain ID. Use the 'id' from 'GET /dns' to identify the domain. | [default to null]

### Return type

[**array[DnsRecord]**](DnsRecord.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getDnsList

List DNS Domains

Returns the DNS domains on your account along with their primary A record content. Use the 'id' from each entry with '/dns/{id}' to retrieve the full record set, or to add, update, and delete individual records.

### Example

```bash
 getDnsList
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**array[DnsListItem]**](DnsListItem.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## updateDnsRecord

Update DNS Record

Updates an existing DNS record with new values. Use 'GET /dns/{id}' to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Example

```bash
 updateDnsRecord domainId=value recordId=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domainId** | **integer** | The DNS domain ID. Use the 'id' from 'GET /dns' to identify the domain. | [default to null]
 **recordId** | **integer** | The DNS record ID within the domain. Use the record 'id' from 'GET /dns/{id}' to identify the record. | [default to null]
 **name** | **string** |  | [optional] [default to null]
 **type** | [**DnsRecordType**](DnsRecordType.md) |  | [optional] [default to null]
 **content** | **string** |  | [optional] [default to null]
 **ttl** | **string** |  | [optional] [default to null]
 **prio** | **string** |  | [optional] [default to null]
 **disabled** | **string** |  | [optional] [default to null]
 **ordername** | **string** |  | [optional] [default to null]
 **auth** | **string** |  | [optional] [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

