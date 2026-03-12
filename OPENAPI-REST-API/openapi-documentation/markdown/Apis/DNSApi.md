# DNSApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addDnsDomain**](DNSApi.md#addDnsDomain) | **POST** /dns | Create DNS Domain |
| [**addDnsRecord**](DNSApi.md#addDnsRecord) | **POST** /dns/{id} | Add DNS Record to Domain |
| [**deleteDnsDomain**](DNSApi.md#deleteDnsDomain) | **DELETE** /dns/{id} | Delete DNS Domain |
| [**deleteDnsRecord**](DNSApi.md#deleteDnsRecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record |
| [**getDnsDomain**](DNSApi.md#getDnsDomain) | **GET** /dns/{id} | List Domain DNS Records |
| [**getDnsList**](DNSApi.md#getDnsList) | **GET** /dns | List DNS Domains |
| [**updateDnsRecord**](DNSApi.md#updateDnsRecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record |


<a name="addDnsDomain"></a>
# **addDnsDomain**
> addDnsDomain(domain, ip)

Create DNS Domain

    Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#39;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **domain** | **String**| The domain name. | [default to null] |
| **ip** | **String**| IP Address to point the domain to. | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="addDnsRecord"></a>
# **addDnsRecord**
> addDnsRecord(id, name, type, content, ttl, prio)

Add DNS Record to Domain

    Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| The DNS Domain ID. | [default to null] |
| **name** | **String**| Name part of record | [default to null] |
| **type** | [**DnsRecordType**](../Models/DnsRecordType.md)|  | [default to null] [enum: A, A6, AAAA, AFSDB, ALIAS, CAA, CDNSKEY, CDS, CERT, CNAME, DHCID, DLV, DNSKEY, DNAME, DS, EUI48, EUI64, HINFO, IPSECKEY, KEY, KX, LOC, MAILA, MAILB, MINFO, MR, MX, NAPTR, NS, NSEC, NSEC3, NSEC3PARAM, OPENPGPKEY, OPT, PTR, RKEY, RP, RRSIG, SIG, SOA, SPF, SRV, SSHFP, TLSA, TKEY, TSIG, TXT, WKS, URI⏎] |
| **content** | **String**| Content of record | [default to null] |
| **ttl** | **Integer**| Time-to-live | [optional] [default to 86400] |
| **prio** | **Integer**| Priority | [optional] [default to 0] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="deleteDnsDomain"></a>
# **deleteDnsDomain**
> deleteDnsDomain(id)

Delete DNS Domain

    Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteDnsRecord"></a>
# **deleteDnsRecord**
> deleteDnsRecord(domainId, recordId)

Delete DNS Record

    Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; to verify the record has been removed.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **domainId** | **Integer**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | [default to null] |
| **recordId** | **Integer**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getDnsDomain"></a>
# **getDnsDomain**
> List getDnsDomain(id)

List Domain DNS Records

    Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record &#x60;id&#x60; values with &#x60;/dns/{domainId}/{recordId}&#x60; to update or delete individual records.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | [default to null] |

### Return type

[**List**](../Models/DnsRecord.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getDnsList"></a>
# **getDnsList**
> List getDnsList()

List DNS Domains

    Returns the DNS domains on your account along with their primary A record content. Use the &#x60;id&#x60; from each entry with &#x60;/dns/{id}&#x60; to retrieve the full record set, or to add, update, and delete individual records.

### Parameters
This endpoint does not need any parameter.

### Return type

[**List**](../Models/DnsListItem.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateDnsRecord"></a>
# **updateDnsRecord**
> updateDnsRecord(domainId, recordId, name, type, content, ttl, prio, disabled, ordername, auth)

Update DNS Record

    Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **domainId** | **Integer**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | [default to null] |
| **recordId** | **Integer**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | [default to null] |
| **name** | **String**|  | [optional] [default to null] |
| **type** | [**DnsRecordType**](../Models/DnsRecordType.md)|  | [optional] [default to null] [enum: A, A6, AAAA, AFSDB, ALIAS, CAA, CDNSKEY, CDS, CERT, CNAME, DHCID, DLV, DNSKEY, DNAME, DS, EUI48, EUI64, HINFO, IPSECKEY, KEY, KX, LOC, MAILA, MAILB, MINFO, MR, MX, NAPTR, NS, NSEC, NSEC3, NSEC3PARAM, OPENPGPKEY, OPT, PTR, RKEY, RP, RRSIG, SIG, SOA, SPF, SRV, SSHFP, TLSA, TKEY, TSIG, TXT, WKS, URI⏎] |
| **content** | **String**|  | [optional] [default to null] |
| **ttl** | **String**|  | [optional] [default to null] |
| **prio** | **String**|  | [optional] [default to null] |
| **disabled** | **String**|  | [optional] [default to null] |
| **ordername** | **String**|  | [optional] [default to null] |
| **auth** | **String**|  | [optional] [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

