# DNSAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addDnsDomain**](DNSAPI.md#adddnsdomain) | **POST** /dns | Create DNS Domain
[**addDnsRecord**](DNSAPI.md#adddnsrecord) | **POST** /dns/{id} | Add DNS Record to Domain
[**deleteDnsDomain**](DNSAPI.md#deletednsdomain) | **DELETE** /dns/{id} | Delete DNS Domain
[**deleteDnsRecord**](DNSAPI.md#deletednsrecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record
[**getDnsDomain**](DNSAPI.md#getdnsdomain) | **GET** /dns/{id} | List Domain DNS Records
[**getDnsList**](DNSAPI.md#getdnslist) | **GET** /dns | List DNS Domains
[**updateDnsRecord**](DNSAPI.md#updatednsrecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record


# **addDnsDomain**
```swift
    open class func addDnsDomain(domain: String, ip: String, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Create DNS Domain

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let domain = "domain_example" // String | The domain name.
let ip = "ip_example" // String | IP Address to point the domain to.

// Create DNS Domain
DNSAPI.addDnsDomain(domain: domain, ip: ip) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **String** | The domain name. | 
 **ip** | **String** | IP Address to point the domain to. | 

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addDnsRecord**
```swift
    open class func addDnsRecord(id: String, name: String, type: DnsRecordType, content: String, ttl: Int? = nil, prio: Int? = nil, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = "id_example" // String | The DNS Domain ID.
let name = "name_example" // String | Name part of record
let type = DnsRecordType() // DnsRecordType | 
let content = "content_example" // String | Content of record
let ttl = 987 // Int | Time-to-live (optional) (default to 86400)
let prio = 987 // Int | Priority (optional) (default to 0)

// Add DNS Record to Domain
DNSAPI.addDnsRecord(id: id, name: name, type: type, content: content, ttl: ttl, prio: prio) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String** | The DNS Domain ID. | 
 **name** | **String** | Name part of record | 
 **type** | [**DnsRecordType**](DnsRecordType.md) |  | 
 **content** | **String** | Content of record | 
 **ttl** | **Int** | Time-to-live | [optional] [default to 86400]
 **prio** | **Int** | Priority | [optional] [default to 0]

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDnsDomain**
```swift
    open class func deleteDnsDomain(id: String, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Delete DNS Domain

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = "id_example" // String | The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain.

// Delete DNS Domain
DNSAPI.deleteDnsDomain(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String** | The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDnsRecord**
```swift
    open class func deleteDnsRecord(domainId: Int, recordId: Int, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Delete DNS Record

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let domainId = 987 // Int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
let recordId = 987 // Int | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.

// Delete DNS Record
DNSAPI.deleteDnsRecord(domainId: domainId, recordId: recordId) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domainId** | **Int** | The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 
 **recordId** | **Int** | The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | 

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDnsDomain**
```swift
    open class func getDnsDomain(id: Int, completion: @escaping (_ data: [DnsRecord]?, _ error: Error?) -> Void)
```

List Domain DNS Records

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.

// List Domain DNS Records
DNSAPI.getDnsDomain(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int** | The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 

### Return type

[**[DnsRecord]**](DnsRecord.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDnsList**
```swift
    open class func getDnsList(completion: @escaping (_ data: [DnsListItem]?, _ error: Error?) -> Void)
```

List DNS Domains

Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// List DNS Domains
DNSAPI.getDnsList() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**[DnsListItem]**](DnsListItem.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateDnsRecord**
```swift
    open class func updateDnsRecord(domainId: Int, recordId: Int, name: String? = nil, type: DnsRecordType? = nil, content: String? = nil, ttl: String? = nil, prio: String? = nil, disabled: String? = nil, ordername: String? = nil, auth: String? = nil, completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Update DNS Record

Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let domainId = 987 // Int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
let recordId = 987 // Int | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
let name = "name_example" // String |  (optional)
let type = DnsRecordType() // DnsRecordType |  (optional)
let content = "content_example" // String |  (optional)
let ttl = "ttl_example" // String |  (optional)
let prio = "prio_example" // String |  (optional)
let disabled = "disabled_example" // String |  (optional)
let ordername = "ordername_example" // String |  (optional)
let auth = "auth_example" // String |  (optional)

// Update DNS Record
DNSAPI.updateDnsRecord(domainId: domainId, recordId: recordId, name: name, type: type, content: content, ttl: ttl, prio: prio, disabled: disabled, ordername: ordername, auth: auth) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domainId** | **Int** | The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 
 **recordId** | **Int** | The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | 
 **name** | **String** |  | [optional] 
 **type** | [**DnsRecordType**](DnsRecordType.md) |  | [optional] 
 **content** | **String** |  | [optional] 
 **ttl** | **String** |  | [optional] 
 **prio** | **String** |  | [optional] 
 **disabled** | **String** |  | [optional] 
 **ordername** | **String** |  | [optional] 
 **auth** | **String** |  | [optional] 

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

