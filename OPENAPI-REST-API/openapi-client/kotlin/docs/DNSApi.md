# DNSApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**addDnsDomain**](DNSApi.md#addDnsDomain) | **POST** /dns | Create DNS Domain |
| [**addDnsRecord**](DNSApi.md#addDnsRecord) | **POST** /dns/{id} | Add DNS Record to Domain |
| [**deleteDnsDomain**](DNSApi.md#deleteDnsDomain) | **DELETE** /dns/{id} | Delete DNS Domain |
| [**deleteDnsRecord**](DNSApi.md#deleteDnsRecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record |
| [**getDnsDomain**](DNSApi.md#getDnsDomain) | **GET** /dns/{id} | List Domain DNS Records |
| [**getDnsList**](DNSApi.md#getDnsList) | **GET** /dns | List DNS Domains |
| [**updateDnsRecord**](DNSApi.md#updateDnsRecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record |


<a id="addDnsDomain"></a>
# **addDnsDomain**
> SuccessTextResponse addDnsDomain(domain, ip)

Create DNS Domain

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#39;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DNSApi()
val domain : kotlin.String = domain_example // kotlin.String | The domain name.
val ip : kotlin.String = ip_example // kotlin.String | IP Address to point the domain to.
try {
    val result : SuccessTextResponse = apiInstance.addDnsDomain(domain, ip)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DNSApi#addDnsDomain")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DNSApi#addDnsDomain")
    e.printStackTrace()
}
```

### Parameters
| **domain** | **kotlin.String**| The domain name. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **ip** | **kotlin.String**| IP Address to point the domain to. | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="addDnsRecord"></a>
# **addDnsRecord**
> addDnsRecord(id, name, type, content, ttl, prio)

Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DNSApi()
val id : kotlin.String = 472 // kotlin.String | The DNS Domain ID.
val name : kotlin.String = name_example // kotlin.String | Name part of record
val type : DnsRecordType =  // DnsRecordType | 
val content : kotlin.String = content_example // kotlin.String | Content of record
val ttl : kotlin.Int = 56 // kotlin.Int | Time-to-live
val prio : kotlin.Int = 56 // kotlin.Int | Priority
try {
    apiInstance.addDnsRecord(id, name, type, content, ttl, prio)
} catch (e: ClientException) {
    println("4xx response calling DNSApi#addDnsRecord")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DNSApi#addDnsRecord")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.String**| The DNS Domain ID. | |
| **name** | **kotlin.String**| Name part of record | |
| **type** | [**DnsRecordType**](DnsRecordType.md)|  | [enum: A, A6, AAAA, AFSDB, ALIAS, CAA, CDNSKEY, CDS, CERT, CNAME, DHCID, DLV, DNSKEY, DNAME, DS, EUI48, EUI64, HINFO, IPSECKEY, KEY, KX, LOC, MAILA, MAILB, MINFO, MR, MX, NAPTR, NS, NSEC, NSEC3, NSEC3PARAM, OPENPGPKEY, OPT, PTR, RKEY, RP, RRSIG, SIG, SOA, SPF, SRV, SSHFP, TLSA, TKEY, TSIG, TXT, WKS, URI⏎] |
| **content** | **kotlin.String**| Content of record | |
| **ttl** | **kotlin.Int**| Time-to-live | [optional] [default to 86400] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **prio** | **kotlin.Int**| Priority | [optional] [default to 0] |

### Return type

null (empty response body)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="deleteDnsDomain"></a>
# **deleteDnsDomain**
> SuccessTextResponse deleteDnsDomain(id)

Delete DNS Domain

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DNSApi()
val id : kotlin.String = id_example // kotlin.String | The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain.
try {
    val result : SuccessTextResponse = apiInstance.deleteDnsDomain(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DNSApi#deleteDnsDomain")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DNSApi#deleteDnsDomain")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.String**| The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="deleteDnsRecord"></a>
# **deleteDnsRecord**
> SuccessTextResponse deleteDnsRecord(domainId, recordId)

Delete DNS Record

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; to verify the record has been removed.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DNSApi()
val domainId : kotlin.Int = 56 // kotlin.Int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
val recordId : kotlin.Int = 56 // kotlin.Int | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
try {
    val result : SuccessTextResponse = apiInstance.deleteDnsRecord(domainId, recordId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DNSApi#deleteDnsRecord")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DNSApi#deleteDnsRecord")
    e.printStackTrace()
}
```

### Parameters
| **domainId** | **kotlin.Int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **recordId** | **kotlin.Int**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getDnsDomain"></a>
# **getDnsDomain**
> kotlin.collections.List&lt;DnsRecord&gt; getDnsDomain(id)

List Domain DNS Records

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record &#x60;id&#x60; values with &#x60;/dns/{domainId}/{recordId}&#x60; to update or delete individual records.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DNSApi()
val id : kotlin.Int = 56 // kotlin.Int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
try {
    val result : kotlin.collections.List<DnsRecord> = apiInstance.getDnsDomain(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DNSApi#getDnsDomain")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DNSApi#getDnsDomain")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | |

### Return type

[**kotlin.collections.List&lt;DnsRecord&gt;**](DnsRecord.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getDnsList"></a>
# **getDnsList**
> kotlin.collections.List&lt;DnsListItem&gt; getDnsList()

List DNS Domains

Returns the DNS domains on your account along with their primary A record content. Use the &#x60;id&#x60; from each entry with &#x60;/dns/{id}&#x60; to retrieve the full record set, or to add, update, and delete individual records.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DNSApi()
try {
    val result : kotlin.collections.List<DnsListItem> = apiInstance.getDnsList()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DNSApi#getDnsList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DNSApi#getDnsList")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.collections.List&lt;DnsListItem&gt;**](DnsListItem.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="updateDnsRecord"></a>
# **updateDnsRecord**
> SuccessTextResponse updateDnsRecord(domainId, recordId, name, type, content, ttl, prio, disabled, ordername, auth)

Update DNS Record

Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DNSApi()
val domainId : kotlin.Int = 56 // kotlin.Int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
val recordId : kotlin.Int = 56 // kotlin.Int | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
val name : kotlin.String = name_example // kotlin.String | 
val type : DnsRecordType =  // DnsRecordType | 
val content : kotlin.String = content_example // kotlin.String | 
val ttl : kotlin.String = ttl_example // kotlin.String | 
val prio : kotlin.String = prio_example // kotlin.String | 
val disabled : kotlin.String = disabled_example // kotlin.String | 
val ordername : kotlin.String = ordername_example // kotlin.String | 
val auth : kotlin.String = auth_example // kotlin.String | 
try {
    val result : SuccessTextResponse = apiInstance.updateDnsRecord(domainId, recordId, name, type, content, ttl, prio, disabled, ordername, auth)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DNSApi#updateDnsRecord")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DNSApi#updateDnsRecord")
    e.printStackTrace()
}
```

### Parameters
| **domainId** | **kotlin.Int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | |
| **recordId** | **kotlin.Int**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | |
| **name** | **kotlin.String**|  | [optional] |
| **type** | [**DnsRecordType**](DnsRecordType.md)|  | [optional] [enum: A, A6, AAAA, AFSDB, ALIAS, CAA, CDNSKEY, CDS, CERT, CNAME, DHCID, DLV, DNSKEY, DNAME, DS, EUI48, EUI64, HINFO, IPSECKEY, KEY, KX, LOC, MAILA, MAILB, MINFO, MR, MX, NAPTR, NS, NSEC, NSEC3, NSEC3PARAM, OPENPGPKEY, OPT, PTR, RKEY, RP, RRSIG, SIG, SOA, SPF, SRV, SSHFP, TLSA, TKEY, TSIG, TXT, WKS, URI⏎] |
| **content** | **kotlin.String**|  | [optional] |
| **ttl** | **kotlin.String**|  | [optional] |
| **prio** | **kotlin.String**|  | [optional] |
| **disabled** | **kotlin.String**|  | [optional] |
| **ordername** | **kotlin.String**|  | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **auth** | **kotlin.String**|  | [optional] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

