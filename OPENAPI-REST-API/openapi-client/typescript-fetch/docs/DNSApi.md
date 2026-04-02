# DNSApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addDnsDomain**](DNSApi.md#adddnsdomain) | **POST** /dns | Create DNS Domain |
| [**addDnsRecord**](DNSApi.md#adddnsrecord) | **POST** /dns/{id} | Add DNS Record to Domain |
| [**deleteDnsDomain**](DNSApi.md#deletednsdomain) | **DELETE** /dns/{id} | Delete DNS Domain |
| [**deleteDnsRecord**](DNSApi.md#deletednsrecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record |
| [**getDnsDomain**](DNSApi.md#getdnsdomain) | **GET** /dns/{id} | List Domain DNS Records |
| [**getDnsList**](DNSApi.md#getdnslist) | **GET** /dns | List DNS Domains |
| [**updateDnsRecord**](DNSApi.md#updatednsrecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record |



## addDnsDomain

> SuccessTextResponse addDnsDomain(domain, ip)

Create DNS Domain

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer\&#39;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.

### Example

```ts
import {
  Configuration,
  DNSApi,
} from '';
import type { AddDnsDomainRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DNSApi(config);

  const body = {
    // string | The domain name.
    domain: domain_example,
    // string | IP Address to point the domain to.
    ip: ip_example,
  } satisfies AddDnsDomainRequest;

  try {
    const data = await api.addDnsDomain(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **domain** | `string` | The domain name. | [Defaults to `undefined`] |
| **ip** | `string` | IP Address to point the domain to. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## addDnsRecord

> addDnsRecord(id, name, type, content, ttl, prio)

Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.

### Example

```ts
import {
  Configuration,
  DNSApi,
} from '';
import type { AddDnsRecordRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DNSApi(config);

  const body = {
    // string | The DNS Domain ID.
    id: 472,
    // string | Name part of record
    name: name_example,
    // DnsRecordType
    type: ...,
    // string | Content of record
    content: content_example,
    // number | Time-to-live (optional)
    ttl: 56,
    // number | Priority (optional)
    prio: 56,
  } satisfies AddDnsRecordRequest;

  try {
    const data = await api.addDnsRecord(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `string` | The DNS Domain ID. | [Defaults to `undefined`] |
| **name** | `string` | Name part of record | [Defaults to `undefined`] |
| **type** | `DnsRecordType` |  | [Defaults to `undefined`] [Enum: A, A6, AAAA, AFSDB, ALIAS, CAA, CDNSKEY, CDS, CERT, CNAME, DHCID, DLV, DNSKEY, DNAME, DS, EUI48, EUI64, HINFO, IPSECKEY, KEY, KX, LOC, MAILA, MAILB, MINFO, MR, MX, NAPTR, NS, NSEC, NSEC3, NSEC3PARAM, OPENPGPKEY, OPT, PTR, RKEY, RP, RRSIG, SIG, SOA, SPF, SRV, SSHFP, TLSA, TKEY, TSIG, TXT, WKS, URI⏎] |
| **content** | `string` | Content of record | [Defaults to `undefined`] |
| **ttl** | `number` | Time-to-live | [Optional] [Defaults to `86400`] |
| **prio** | `number` | Priority | [Optional] [Defaults to `0`] |

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Add DNS Domain Response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## deleteDnsDomain

> SuccessTextResponse deleteDnsDomain(id)

Delete DNS Domain

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

### Example

```ts
import {
  Configuration,
  DNSApi,
} from '';
import type { DeleteDnsDomainRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DNSApi(config);

  const body = {
    // string | The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain.
    id: id_example,
  } satisfies DeleteDnsDomainRequest;

  try {
    const data = await api.deleteDnsDomain(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `string` | The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## deleteDnsRecord

> SuccessTextResponse deleteDnsRecord(domainId, recordId)

Delete DNS Record

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; to verify the record has been removed.

### Example

```ts
import {
  Configuration,
  DNSApi,
} from '';
import type { DeleteDnsRecordRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DNSApi(config);

  const body = {
    // number | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
    domainId: 56,
    // number | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
    recordId: 56,
  } satisfies DeleteDnsRecordRequest;

  try {
    const data = await api.deleteDnsRecord(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **domainId** | `number` | The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | [Defaults to `undefined`] |
| **recordId** | `number` | The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getDnsDomain

> Array&lt;DnsRecord&gt; getDnsDomain(id)

List Domain DNS Records

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record &#x60;id&#x60; values with &#x60;/dns/{domainId}/{recordId}&#x60; to update or delete individual records.

### Example

```ts
import {
  Configuration,
  DNSApi,
} from '';
import type { GetDnsDomainRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DNSApi(config);

  const body = {
    // number | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
    id: 56,
  } satisfies GetDnsDomainRequest;

  try {
    const data = await api.getDnsDomain(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | [Defaults to `undefined`] |

### Return type

[**Array&lt;DnsRecord&gt;**](DnsRecord.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The DNS records for the specified domain. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getDnsList

> Array&lt;DnsListItem&gt; getDnsList()

List DNS Domains

Returns the DNS domains on your account along with their primary A record content. Use the &#x60;id&#x60; from each entry with &#x60;/dns/{id}&#x60; to retrieve the full record set, or to add, update, and delete individual records.

### Example

```ts
import {
  Configuration,
  DNSApi,
} from '';
import type { GetDnsListRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DNSApi(config);

  try {
    const data = await api.getDnsList();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Array&lt;DnsListItem&gt;**](DnsListItem.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Listing of DNS domains on the account with their primary A record. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateDnsRecord

> SuccessTextResponse updateDnsRecord(domainId, recordId, name, type, content, ttl, prio, disabled, ordername, auth)

Update DNS Record

Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Example

```ts
import {
  Configuration,
  DNSApi,
} from '';
import type { UpdateDnsRecordRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DNSApi(config);

  const body = {
    // number | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
    domainId: 56,
    // number | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
    recordId: 56,
    // string (optional)
    name: name_example,
    // DnsRecordType (optional)
    type: ...,
    // string (optional)
    content: content_example,
    // string (optional)
    ttl: ttl_example,
    // string (optional)
    prio: prio_example,
    // string (optional)
    disabled: disabled_example,
    // string (optional)
    ordername: ordername_example,
    // string (optional)
    auth: auth_example,
  } satisfies UpdateDnsRecordRequest;

  try {
    const data = await api.updateDnsRecord(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **domainId** | `number` | The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | [Defaults to `undefined`] |
| **recordId** | `number` | The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | [Defaults to `undefined`] |
| **name** | `string` |  | [Optional] [Defaults to `undefined`] |
| **type** | `DnsRecordType` |  | [Optional] [Defaults to `undefined`] [Enum: A, A6, AAAA, AFSDB, ALIAS, CAA, CDNSKEY, CDS, CERT, CNAME, DHCID, DLV, DNSKEY, DNAME, DS, EUI48, EUI64, HINFO, IPSECKEY, KEY, KX, LOC, MAILA, MAILB, MINFO, MR, MX, NAPTR, NS, NSEC, NSEC3, NSEC3PARAM, OPENPGPKEY, OPT, PTR, RKEY, RP, RRSIG, SIG, SOA, SPF, SRV, SSHFP, TLSA, TKEY, TSIG, TXT, WKS, URI⏎] |
| **content** | `string` |  | [Optional] [Defaults to `undefined`] |
| **ttl** | `string` |  | [Optional] [Defaults to `undefined`] |
| **prio** | `string` |  | [Optional] [Defaults to `undefined`] |
| **disabled** | `string` |  | [Optional] [Defaults to `undefined`] |
| **ordername** | `string` |  | [Optional] [Defaults to `undefined`] |
| **auth** | `string` |  | [Optional] [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)

