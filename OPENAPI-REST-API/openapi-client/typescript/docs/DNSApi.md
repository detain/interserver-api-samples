# .DNSApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addDnsDomain**](DNSApi.md#addDnsDomain) | **POST** /dns | Create DNS Domain
[**addDnsRecord**](DNSApi.md#addDnsRecord) | **POST** /dns/{id} | Add DNS Record to Domain
[**deleteDnsDomain**](DNSApi.md#deleteDnsDomain) | **DELETE** /dns/{id} | Delete DNS Domain
[**deleteDnsRecord**](DNSApi.md#deleteDnsRecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record
[**getDnsDomain**](DNSApi.md#getDnsDomain) | **GET** /dns/{id} | List Domain DNS Records
[**getDnsList**](DNSApi.md#getDnsList) | **GET** /dns | List DNS Domains
[**updateDnsRecord**](DNSApi.md#updateDnsRecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record


# **addDnsDomain**
> addDnsDomain()

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer\'s DNS servers. Use `/dns/{id}` to manage records after creation.

### Example


```typescript
import { createConfiguration, DNSApi } from '';
import type { DNSApiAddDnsDomainRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DNSApi(configuration);

const request: DNSApiAddDnsDomainRequest = {
    // The domain name.
  domain: "mydomain.com",
    // IP Address to point the domain to.
  ip: "1.2.3.4",
};

const data = await apiInstance.addDnsDomain(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | [**string**] | The domain name. | defaults to undefined
 **ip** | [**string**] | IP Address to point the domain to. | defaults to undefined


### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **addDnsRecord**
> void addDnsRecord()

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.

### Example


```typescript
import { createConfiguration, DNSApi } from '';
import type { DNSApiAddDnsRecordRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DNSApi(configuration);

const request: DNSApiAddDnsRecordRequest = {
    // The DNS Domain ID.
  id: "472",
    // Name part of record
  name: "myfamily.com",
  
  type: "NS",
    // Content of record
  content: "127.0.0.1",
    // Time-to-live (optional)
  ttl: 86400,
    // Priority (optional)
  prio: 0,
};

const data = await apiInstance.addDnsRecord(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**string**] | The DNS Domain ID. | defaults to undefined
 **name** | [**string**] | Name part of record | defaults to undefined
 **type** | **DnsRecordType** |  | defaults to undefined
 **content** | [**string**] | Content of record | defaults to undefined
 **ttl** | [**number**] | Time-to-live | (optional) defaults to 86400
 **prio** | [**number**] | Priority | (optional) defaults to 0


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Add DNS Domain Response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **deleteDnsDomain**
> deleteDnsDomain()

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

### Example


```typescript
import { createConfiguration, DNSApi } from '';
import type { DNSApiDeleteDnsDomainRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DNSApi(configuration);

const request: DNSApiDeleteDnsDomainRequest = {
    // The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain.
  id: "id_example",
};

const data = await apiInstance.deleteDnsDomain(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**string**] | The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | defaults to undefined


### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **deleteDnsRecord**
> deleteDnsRecord()

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.

### Example


```typescript
import { createConfiguration, DNSApi } from '';
import type { DNSApiDeleteDnsRecordRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DNSApi(configuration);

const request: DNSApiDeleteDnsRecordRequest = {
    // The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
  domainId: 1,
    // The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
  recordId: 1,
};

const data = await apiInstance.deleteDnsRecord(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domainId** | [**number**] | The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | defaults to undefined
 **recordId** | [**number**] | The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | defaults to undefined


### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getDnsDomain**
> Array<DnsRecord> getDnsDomain()

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.

### Example


```typescript
import { createConfiguration, DNSApi } from '';
import type { DNSApiGetDnsDomainRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DNSApi(configuration);

const request: DNSApiGetDnsDomainRequest = {
    // The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
  id: 1,
};

const data = await apiInstance.getDnsDomain(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | defaults to undefined


### Return type

**Array<DnsRecord>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The DNS records for the specified domain. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getDnsList**
> Array<DnsListItem> getDnsList()

Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.

### Example


```typescript
import { createConfiguration, DNSApi } from '';

const configuration = createConfiguration();
const apiInstance = new DNSApi(configuration);

const request = {};

const data = await apiInstance.getDnsList(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**Array<DnsListItem>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Listing of DNS domains on the account with their primary A record. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateDnsRecord**
> updateDnsRecord()

Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Example


```typescript
import { createConfiguration, DNSApi } from '';
import type { DNSApiUpdateDnsRecordRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DNSApi(configuration);

const request: DNSApiUpdateDnsRecordRequest = {
    // The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
  domainId: 1,
    // The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
  recordId: 1,
  
  name: "name_example",
  
  type: "NS",
  
  content: "content_example",
  
  ttl: "ttl_example",
  
  prio: "prio_example",
  
  disabled: "disabled_example",
  
  ordername: "ordername_example",
  
  auth: "auth_example",
};

const data = await apiInstance.updateDnsRecord(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domainId** | [**number**] | The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | defaults to undefined
 **recordId** | [**number**] | The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | defaults to undefined
 **name** | [**string**] |  | (optional) defaults to undefined
 **type** | **DnsRecordType** |  | (optional) defaults to undefined
 **content** | [**string**] |  | (optional) defaults to undefined
 **ttl** | [**string**] |  | (optional) defaults to undefined
 **prio** | [**string**] |  | (optional) defaults to undefined
 **disabled** | [**string**] |  | (optional) defaults to undefined
 **ordername** | [**string**] |  | (optional) defaults to undefined
 **auth** | [**string**] |  | (optional) defaults to undefined


### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)


