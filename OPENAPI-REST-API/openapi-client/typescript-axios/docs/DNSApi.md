# DNSApi

All URIs are relative to *https://my.interserver.net/apiv2*

|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|[**addDnsDomain**](#adddnsdomain) | **POST** /dns | Create DNS Domain|
|[**addDnsRecord**](#adddnsrecord) | **POST** /dns/{id} | Add DNS Record to Domain|
|[**deleteDnsDomain**](#deletednsdomain) | **DELETE** /dns/{id} | Delete DNS Domain|
|[**deleteDnsRecord**](#deletednsrecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record|
|[**getDnsDomain**](#getdnsdomain) | **GET** /dns/{id} | List Domain DNS Records|
|[**getDnsList**](#getdnslist) | **GET** /dns | List DNS Domains|
|[**updateDnsRecord**](#updatednsrecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record|

# **addDnsDomain**
> SuccessTextResponse addDnsDomain()

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer\'s DNS servers. Use `/dns/{id}` to manage records after creation.

### Example

```typescript
import {
    DNSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DNSApi(configuration);

let domain: string; //The domain name. (default to undefined)
let ip: string; //IP Address to point the domain to. (default to undefined)

const { status, data } = await apiInstance.addDnsDomain(
    domain,
    ip
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **domain** | [**string**] | The domain name. | defaults to undefined|
| **ip** | [**string**] | IP Address to point the domain to. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addDnsRecord**
> addDnsRecord()

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.

### Example

```typescript
import {
    DNSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DNSApi(configuration);

let id: string; //The DNS Domain ID. (default to undefined)
let name: string; //Name part of record (default to undefined)
let type: DnsRecordType; // (default to undefined)
let content: string; //Content of record (default to undefined)
let ttl: number; //Time-to-live (optional) (default to 86400)
let prio: number; //Priority (optional) (default to 0)

const { status, data } = await apiInstance.addDnsRecord(
    id,
    name,
    type,
    content,
    ttl,
    prio
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**string**] | The DNS Domain ID. | defaults to undefined|
| **name** | [**string**] | Name part of record | defaults to undefined|
| **type** | **DnsRecordType** |  | defaults to undefined|
| **content** | [**string**] | Content of record | defaults to undefined|
| **ttl** | [**number**] | Time-to-live | (optional) defaults to 86400|
| **prio** | [**number**] | Priority | (optional) defaults to 0|


### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Add DNS Domain Response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDnsDomain**
> SuccessTextResponse deleteDnsDomain()

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

### Example

```typescript
import {
    DNSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DNSApi(configuration);

let id: string; //The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain. (default to undefined)

const { status, data } = await apiInstance.deleteDnsDomain(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**string**] | The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDnsRecord**
> SuccessTextResponse deleteDnsRecord()

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.

### Example

```typescript
import {
    DNSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DNSApi(configuration);

let domainId: number; //The DNS domain ID. Use the `id` from `GET /dns` to identify the domain. (default to undefined)
let recordId: number; //The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record. (default to undefined)

const { status, data } = await apiInstance.deleteDnsRecord(
    domainId,
    recordId
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **domainId** | [**number**] | The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | defaults to undefined|
| **recordId** | [**number**] | The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDnsDomain**
> Array<DnsRecord> getDnsDomain()

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.

### Example

```typescript
import {
    DNSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DNSApi(configuration);

let id: number; //The DNS domain ID. Use the `id` from `GET /dns` to identify the domain. (default to undefined)

const { status, data } = await apiInstance.getDnsDomain(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | defaults to undefined|


### Return type

**Array<DnsRecord>**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | The DNS records for the specified domain. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDnsList**
> Array<DnsListItem> getDnsList()

Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.

### Example

```typescript
import {
    DNSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DNSApi(configuration);

const { status, data } = await apiInstance.getDnsList();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**Array<DnsListItem>**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Listing of DNS domains on the account with their primary A record. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateDnsRecord**
> SuccessTextResponse updateDnsRecord()

Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Example

```typescript
import {
    DNSApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DNSApi(configuration);

let domainId: number; //The DNS domain ID. Use the `id` from `GET /dns` to identify the domain. (default to undefined)
let recordId: number; //The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record. (default to undefined)
let name: string; // (optional) (default to undefined)
let type: DnsRecordType; // (optional) (default to undefined)
let content: string; // (optional) (default to undefined)
let ttl: string; // (optional) (default to undefined)
let prio: string; // (optional) (default to undefined)
let disabled: string; // (optional) (default to undefined)
let ordername: string; // (optional) (default to undefined)
let auth: string; // (optional) (default to undefined)

const { status, data } = await apiInstance.updateDnsRecord(
    domainId,
    recordId,
    name,
    type,
    content,
    ttl,
    prio,
    disabled,
    ordername,
    auth
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **domainId** | [**number**] | The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | defaults to undefined|
| **recordId** | [**number**] | The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | defaults to undefined|
| **name** | [**string**] |  | (optional) defaults to undefined|
| **type** | **DnsRecordType** |  | (optional) defaults to undefined|
| **content** | [**string**] |  | (optional) defaults to undefined|
| **ttl** | [**string**] |  | (optional) defaults to undefined|
| **prio** | [**string**] |  | (optional) defaults to undefined|
| **disabled** | [**string**] |  | (optional) defaults to undefined|
| **ordername** | [**string**] |  | (optional) defaults to undefined|
| **auth** | [**string**] |  | (optional) defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

