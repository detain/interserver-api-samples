# DNSApi

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

<a name="addDnsDomain"></a>
# **addDnsDomain**
> SuccessTextResponse addDnsDomain(domain, ip)

Create DNS Domain

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#x27;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DNSApi()
val domain : kotlin.String = domain_example // kotlin.String | 
val ip : kotlin.String = ip_example // kotlin.String | 
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **kotlin.String**|  |
 **ip** | **kotlin.String**|  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="addDnsDomain"></a>
# **addDnsDomain**
> SuccessTextResponse addDnsDomain(body)

Create DNS Domain

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#x27;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DNSApi()
val body : DnsNewDomain = {
  "value" : {
    "domain" : "mydomain.com",
    "ip" : "1.2.3.4"
  }
} // DnsNewDomain | 
try {
    val result : SuccessTextResponse = apiInstance.addDnsDomain(body)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DnsNewDomain**](DnsNewDomain.md)|  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="addDnsRecord"></a>
# **addDnsRecord**
> addDnsRecord(name, type, content, ttl, prio, id)

Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DNSApi()
val name : kotlin.String = name_example // kotlin.String | 
val type : DnsRecordType =  // DnsRecordType | 
val content : kotlin.String = content_example // kotlin.String | 
val ttl : kotlin.Int = 56 // kotlin.Int | 
val prio : kotlin.Int = 56 // kotlin.Int | 
val id : kotlin.String = id_example // kotlin.String | The DNS Domain ID.
try {
    apiInstance.addDnsRecord(name, type, content, ttl, prio, id)
} catch (e: ClientException) {
    println("4xx response calling DNSApi#addDnsRecord")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DNSApi#addDnsRecord")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **kotlin.String**|  |
 **type** | [**DnsRecordType**](.md)|  |
 **content** | **kotlin.String**|  |
 **ttl** | **kotlin.Int**|  |
 **prio** | **kotlin.Int**|  |
 **id** | **kotlin.String**| The DNS Domain ID. |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="addDnsRecord"></a>
# **addDnsRecord**
> addDnsRecord(body, id)

Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DNSApi()
val body : DnsNewRecord =  // DnsNewRecord | 
val id : kotlin.String = id_example // kotlin.String | The DNS Domain ID.
try {
    apiInstance.addDnsRecord(body, id)
} catch (e: ClientException) {
    println("4xx response calling DNSApi#addDnsRecord")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DNSApi#addDnsRecord")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DnsNewRecord**](DnsNewRecord.md)|  |
 **id** | **kotlin.String**| The DNS Domain ID. |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="deleteDnsDomain"></a>
# **deleteDnsDomain**
> SuccessTextResponse deleteDnsDomain(id)

Delete DNS Domain

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.String**| The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteDnsRecord"></a>
# **deleteDnsRecord**
> SuccessTextResponse deleteDnsRecord(domainId, recordId)

Delete DNS Record

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; to verify the record has been removed.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domainId** | **kotlin.Int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. |
 **recordId** | **kotlin.Int**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDnsDomain"></a>
# **getDnsDomain**
> kotlin.Array&lt;DnsRecord&gt; getDnsDomain(id)

List Domain DNS Records

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record &#x60;id&#x60; values with &#x60;/dns/{domainId}/{recordId}&#x60; to update or delete individual records.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DNSApi()
val id : kotlin.Int = 56 // kotlin.Int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
try {
    val result : kotlin.Array<DnsRecord> = apiInstance.getDnsDomain(id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. |

### Return type

[**kotlin.Array&lt;DnsRecord&gt;**](DnsRecord.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDnsList"></a>
# **getDnsList**
> kotlin.Array&lt;DnsListItem&gt; getDnsList()

List DNS Domains

Returns the DNS domains on your account along with their primary A record content. Use the &#x60;id&#x60; from each entry with &#x60;/dns/{id}&#x60; to retrieve the full record set, or to add, update, and delete individual records.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DNSApi()
try {
    val result : kotlin.Array<DnsListItem> = apiInstance.getDnsList()
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

[**kotlin.Array&lt;DnsListItem&gt;**](DnsListItem.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="updateDnsRecord"></a>
# **updateDnsRecord**
> SuccessTextResponse updateDnsRecord(name, type, content, ttl, prio, disabled, ordername, auth, domainId, recordId)

Update DNS Record

Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DNSApi()
val name : kotlin.String = name_example // kotlin.String | 
val type : DnsRecordType =  // DnsRecordType | 
val content : kotlin.String = content_example // kotlin.String | 
val ttl : kotlin.String = ttl_example // kotlin.String | 
val prio : kotlin.String = prio_example // kotlin.String | 
val disabled : kotlin.String = disabled_example // kotlin.String | 
val ordername : kotlin.String = ordername_example // kotlin.String | 
val auth : kotlin.String = auth_example // kotlin.String | 
val domainId : kotlin.Int = 56 // kotlin.Int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
val recordId : kotlin.Int = 56 // kotlin.Int | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
try {
    val result : SuccessTextResponse = apiInstance.updateDnsRecord(name, type, content, ttl, prio, disabled, ordername, auth, domainId, recordId)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **kotlin.String**|  |
 **type** | [**DnsRecordType**](.md)|  |
 **content** | **kotlin.String**|  |
 **ttl** | **kotlin.String**|  |
 **prio** | **kotlin.String**|  |
 **disabled** | **kotlin.String**|  |
 **ordername** | **kotlin.String**|  |
 **auth** | **kotlin.String**|  |
 **domainId** | **kotlin.Int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. |
 **recordId** | **kotlin.Int**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="updateDnsRecord"></a>
# **updateDnsRecord**
> SuccessTextResponse updateDnsRecord(body, domainId, recordId)

Update DNS Record

Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DNSApi()
val body : DnsUpdateRecord =  // DnsUpdateRecord | The request data to update a dns record.
val domainId : kotlin.Int = 56 // kotlin.Int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
val recordId : kotlin.Int = 56 // kotlin.Int | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
try {
    val result : SuccessTextResponse = apiInstance.updateDnsRecord(body, domainId, recordId)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DnsUpdateRecord**](DnsUpdateRecord.md)| The request data to update a dns record. |
 **domainId** | **kotlin.Int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. |
 **recordId** | **kotlin.Int**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

