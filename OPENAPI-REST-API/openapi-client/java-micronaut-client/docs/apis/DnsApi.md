# DnsApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addDnsDomain**](DnsApi.md#addDnsDomain) | **POST** /dns | Create DNS Domain |
| [**addDnsRecord**](DnsApi.md#addDnsRecord) | **POST** /dns/{id} | Add DNS Record to Domain |
| [**deleteDnsDomain**](DnsApi.md#deleteDnsDomain) | **DELETE** /dns/{id} | Delete DNS Domain |
| [**deleteDnsRecord**](DnsApi.md#deleteDnsRecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record |
| [**getDnsDomain**](DnsApi.md#getDnsDomain) | **GET** /dns/{id} | List Domain DNS Records |
| [**getDnsList**](DnsApi.md#getDnsList) | **GET** /dns | List DNS Domains |
| [**updateDnsRecord**](DnsApi.md#updateDnsRecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record |


## Creating DnsApi

To initiate an instance of `DnsApi`, you can use micronaut's `ApplicationContext`:
```java
/* imports
import io.micronaut.runtime.Micronaut;
import io.micronaut.context.ApplicationContext;
import org.openapitools.api.DnsApi;
*/

ApplicationContext context = Micronaut.run(/* ... */);
PetApi apiInstance = context.getBean(DnsApi.class);
```

Or the `@Inject` annotation:
```java
@Singleton
class MyClass {
    @Inject
    DnsApi dnsApi;

    /* ... use the injected variable */
}
```
Note that the class needs to be annotated with one of Micronaut's [scope annotations](https://docs.micronaut.io/latest/guide/#scopes) like `Singleton` in order to be processed.

More information can be found inside [Inversion of Control guide section](https://docs.micronaut.io/latest/guide/#ioc).

<a id="addDnsDomain"></a>
# **addDnsDomain**
```java
Mono<Void> DnsApi.addDnsDomain(domainip)
```

Create DNS Domain

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#39;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **domain** | `String`| The domain name. | |
| **ip** | `String`| IP Address to point the domain to. | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="addDnsRecord"></a>
# **addDnsRecord**
```java
Mono<Void> DnsApi.addDnsRecord(idnametypecontentttlprio)
```

Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `String`| The DNS Domain ID. | |
| **name** | `String`| Name part of record | |
| **type** | [**DnsRecordType**](DnsRecordType.md)|  | [enum: `A`, `A6`, `AAAA`, `AFSDB`, `ALIAS`, `CAA`, `CDNSKEY`, `CDS`, `CERT`, `CNAME`, `DHCID`, `DLV`, `DNSKEY`, `DNAME`, `DS`, `EUI48`, `EUI64`, `HINFO`, `IPSECKEY`, `KEY`, `KX`, `LOC`, `MAILA`, `MAILB`, `MINFO`, `MR`, `MX`, `NAPTR`, `NS`, `NSEC`, `NSEC3`, `NSEC3PARAM`, `OPENPGPKEY`, `OPT`, `PTR`, `RKEY`, `RP`, `RRSIG`, `SIG`, `SOA`, `SPF`, `SRV`, `SSHFP`, `TLSA`, `TKEY`, `TSIG`, `TXT`, `WKS`, `URI⏎`] |
| **content** | `String`| Content of record | |
| **ttl** | `Integer`| Time-to-live | [optional parameter] [default to `86400`] |
| **prio** | `Integer`| Priority | [optional parameter] [default to `0`] |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="deleteDnsDomain"></a>
# **deleteDnsDomain**
```java
Mono<Void> DnsApi.deleteDnsDomain(id)
```

Delete DNS Domain

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `String`| The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="deleteDnsRecord"></a>
# **deleteDnsRecord**
```java
Mono<Void> DnsApi.deleteDnsRecord(domainIdrecordId)
```

Delete DNS Record

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; to verify the record has been removed.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **domainId** | `Integer`| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | |
| **recordId** | `Integer`| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getDnsDomain"></a>
# **getDnsDomain**
```java
Mono<List<DnsRecord>> DnsApi.getDnsDomain(id)
```

List Domain DNS Records

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record &#x60;id&#x60; values with &#x60;/dns/{domainId}/{recordId}&#x60; to update or delete individual records.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | |


### Return type
[**List&lt;DnsRecord&gt;**](DnsRecord.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getDnsList"></a>
# **getDnsList**
```java
Mono<List<DnsListItem>> DnsApi.getDnsList()
```

List DNS Domains

Returns the DNS domains on your account along with their primary A record content. Use the &#x60;id&#x60; from each entry with &#x60;/dns/{id}&#x60; to retrieve the full record set, or to add, update, and delete individual records.



### Return type
[**List&lt;DnsListItem&gt;**](DnsListItem.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="updateDnsRecord"></a>
# **updateDnsRecord**
```java
Mono<Void> DnsApi.updateDnsRecord(domainIdrecordIdnametypecontentttlpriodisabledordernameauth)
```

Update DNS Record

Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **domainId** | `Integer`| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | |
| **recordId** | `Integer`| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | |
| **name** | `String`|  | [optional parameter] |
| **type** | [**DnsRecordType**](DnsRecordType.md)|  | [optional parameter] [enum: `A`, `A6`, `AAAA`, `AFSDB`, `ALIAS`, `CAA`, `CDNSKEY`, `CDS`, `CERT`, `CNAME`, `DHCID`, `DLV`, `DNSKEY`, `DNAME`, `DS`, `EUI48`, `EUI64`, `HINFO`, `IPSECKEY`, `KEY`, `KX`, `LOC`, `MAILA`, `MAILB`, `MINFO`, `MR`, `MX`, `NAPTR`, `NS`, `NSEC`, `NSEC3`, `NSEC3PARAM`, `OPENPGPKEY`, `OPT`, `PTR`, `RKEY`, `RP`, `RRSIG`, `SIG`, `SOA`, `SPF`, `SRV`, `SSHFP`, `TLSA`, `TKEY`, `TSIG`, `TXT`, `WKS`, `URI⏎`] |
| **content** | `String`|  | [optional parameter] |
| **ttl** | `String`|  | [optional parameter] |
| **prio** | `String`|  | [optional parameter] |
| **disabled** | `String`|  | [optional parameter] |
| **ordername** | `String`|  | [optional parameter] |
| **auth** | `String`|  | [optional parameter] |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

