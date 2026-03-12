# DNSApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addDnsDomain**](DNSApi.md#addDnsDomain) | **POST** /dns | Create DNS Domain
[**addDnsDomainWithHttpInfo**](DNSApi.md#addDnsDomainWithHttpInfo) | **POST** /dns | Create DNS Domain
[**addDnsRecord**](DNSApi.md#addDnsRecord) | **POST** /dns/{id} | Add DNS Record to Domain
[**addDnsRecordWithHttpInfo**](DNSApi.md#addDnsRecordWithHttpInfo) | **POST** /dns/{id} | Add DNS Record to Domain
[**deleteDnsDomain**](DNSApi.md#deleteDnsDomain) | **DELETE** /dns/{id} | Delete DNS Domain
[**deleteDnsDomainWithHttpInfo**](DNSApi.md#deleteDnsDomainWithHttpInfo) | **DELETE** /dns/{id} | Delete DNS Domain
[**deleteDnsRecord**](DNSApi.md#deleteDnsRecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record
[**deleteDnsRecordWithHttpInfo**](DNSApi.md#deleteDnsRecordWithHttpInfo) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record
[**getDnsDomain**](DNSApi.md#getDnsDomain) | **GET** /dns/{id} | List Domain DNS Records
[**getDnsDomainWithHttpInfo**](DNSApi.md#getDnsDomainWithHttpInfo) | **GET** /dns/{id} | List Domain DNS Records
[**getDnsList**](DNSApi.md#getDnsList) | **GET** /dns | List DNS Domains
[**getDnsListWithHttpInfo**](DNSApi.md#getDnsListWithHttpInfo) | **GET** /dns | List DNS Domains
[**updateDnsRecord**](DNSApi.md#updateDnsRecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record
[**updateDnsRecordWithHttpInfo**](DNSApi.md#updateDnsRecordWithHttpInfo) | **POST** /dns/{domainId}/{recordId} | Update DNS Record



## addDnsDomain

> addDnsDomain(addDnsDomainRequest): ApiRequest[Unit]

Create DNS Domain

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#39;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import org.apache.pekko.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = DNSApi("https://my.interserver.net/apiv2")
    val domain: String = domain_example // String | The domain name.

    val ip: String = ip_example // String | IP Address to point the domain to.
    
    val request = apiInstance.addDnsDomain(domain, ip)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling DNSApi#addDnsDomain")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling DNSApi#addDnsDomain")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **String**| The domain name. |
 **ip** | **String**| IP Address to point the domain to. |

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |


## addDnsRecord

> addDnsRecord(addDnsRecordRequest): ApiRequest[Unit]

Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import org.apache.pekko.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = DNSApi("https://my.interserver.net/apiv2")
    val id: String = 472 // String | The DNS Domain ID.

    val name: String = name_example // String | Name part of record

    val `type`: DnsRecordType =  // DnsRecordType | 

    val content: String = content_example // String | Content of record

    val ttl: Int = 56 // Int | Time-to-live

    val prio: Int = 56 // Int | Priority
    
    val request = apiInstance.addDnsRecord(id, name, `type`, content, ttl, prio)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling DNSApi#addDnsRecord")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling DNSApi#addDnsRecord")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| The DNS Domain ID. |
 **name** | **String**| Name part of record |
 **`type`** | [**DnsRecordType**](DnsRecordType.md)|  | [enum: A, A6, AAAA, AFSDB, ALIAS, CAA, CDNSKEY, CDS, CERT, CNAME, DHCID, DLV, DNSKEY, DNAME, DS, EUI48, EUI64, HINFO, IPSECKEY, KEY, KX, LOC, MAILA, MAILB, MINFO, MR, MX, NAPTR, NS, NSEC, NSEC3, NSEC3PARAM, OPENPGPKEY, OPT, PTR, RKEY, RP, RRSIG, SIG, SOA, SPF, SRV, SSHFP, TLSA, TKEY, TSIG, TXT, WKS, URI⏎]
 **content** | **String**| Content of record |
 **ttl** | **Int**| Time-to-live | [optional]
 **prio** | **Int**| Priority | [optional]

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Add DNS Domain Response |  -  |
| **401** | Unauthorized |  -  |


## deleteDnsDomain

> deleteDnsDomain(deleteDnsDomainRequest): ApiRequest[Unit]

Delete DNS Domain

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import org.apache.pekko.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = DNSApi("https://my.interserver.net/apiv2")
    val id: String = id_example // String | The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain.
    
    val request = apiInstance.deleteDnsDomain(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling DNSApi#deleteDnsDomain")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling DNSApi#deleteDnsDomain")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. |

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |


## deleteDnsRecord

> deleteDnsRecord(deleteDnsRecordRequest): ApiRequest[Unit]

Delete DNS Record

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; to verify the record has been removed.

### Example

```scala
// Import classes:
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import org.apache.pekko.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = DNSApi("https://my.interserver.net/apiv2")
    val domainId: Int = 56 // Int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.

    val recordId: Int = 56 // Int | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
    
    val request = apiInstance.deleteDnsRecord(domainId, recordId)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling DNSApi#deleteDnsRecord")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling DNSApi#deleteDnsRecord")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domainId** | **Int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. |
 **recordId** | **Int**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. |

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |


## getDnsDomain

> getDnsDomain(getDnsDomainRequest): ApiRequest[Seq[DnsRecord]]

List Domain DNS Records

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record &#x60;id&#x60; values with &#x60;/dns/{domainId}/{recordId}&#x60; to update or delete individual records.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import org.apache.pekko.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = DNSApi("https://my.interserver.net/apiv2")
    val id: Int = 56 // Int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
    
    val request = apiInstance.getDnsDomain(id)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling DNSApi#getDnsDomain")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling DNSApi#getDnsDomain")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. |

### Return type

ApiRequest[[**Seq[DnsRecord]**](DnsRecord.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The DNS records for the specified domain. |  -  |
| **401** | Unauthorized |  -  |


## getDnsList

> getDnsList(): ApiRequest[Seq[DnsListItem]]

List DNS Domains

Returns the DNS domains on your account along with their primary A record content. Use the &#x60;id&#x60; from each entry with &#x60;/dns/{id}&#x60; to retrieve the full record set, or to add, update, and delete individual records.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import org.apache.pekko.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = DNSApi("https://my.interserver.net/apiv2")    
    val request = apiInstance.getDnsList()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling DNSApi#getDnsList")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling DNSApi#getDnsList")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

ApiRequest[[**Seq[DnsListItem]**](DnsListItem.md)]


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Listing of DNS domains on the account with their primary A record. |  -  |
| **401** | Unauthorized |  -  |


## updateDnsRecord

> updateDnsRecord(updateDnsRecordRequest): ApiRequest[Unit]

Update DNS Record

Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Example

```scala
// Import classes:
import 
import 
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import org.apache.pekko.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: sessionIdCookieAuth
    implicit val sessionIdCookieAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: apiKeyAuth
    implicit val apiKeyAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure API key authorization: sessionIdHeaderAuth
    implicit val sessionIdHeaderAuth: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    val apiInvoker = ApiInvoker()
    val apiInstance = DNSApi("https://my.interserver.net/apiv2")
    val domainId: Int = 56 // Int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.

    val recordId: Int = 56 // Int | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.

    val name: String = name_example // String | 

    val `type`: DnsRecordType =  // DnsRecordType | 

    val content: String = content_example // String | 

    val ttl: String = ttl_example // String | 

    val prio: String = prio_example // String | 

    val disabled: String = disabled_example // String | 

    val ordername: String = ordername_example // String | 

    val auth: String = auth_example // String | 
    
    val request = apiInstance.updateDnsRecord(domainId, recordId, name, `type`, content, ttl, prio, disabled, ordername, auth)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling DNSApi#updateDnsRecord")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling DNSApi#updateDnsRecord")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domainId** | **Int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. |
 **recordId** | **Int**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. |
 **name** | **String**|  | [optional]
 **`type`** | [**DnsRecordType**](DnsRecordType.md)|  | [optional] [enum: A, A6, AAAA, AFSDB, ALIAS, CAA, CDNSKEY, CDS, CERT, CNAME, DHCID, DLV, DNSKEY, DNAME, DS, EUI48, EUI64, HINFO, IPSECKEY, KEY, KX, LOC, MAILA, MAILB, MINFO, MR, MX, NAPTR, NS, NSEC, NSEC3, NSEC3PARAM, OPENPGPKEY, OPT, PTR, RKEY, RP, RRSIG, SIG, SOA, SPF, SRV, SSHFP, TLSA, TKEY, TSIG, TXT, WKS, URI⏎]
 **content** | **String**|  | [optional]
 **ttl** | **String**|  | [optional]
 **prio** | **String**|  | [optional]
 **disabled** | **String**|  | [optional]
 **ordername** | **String**|  | [optional]
 **auth** | **String**|  | [optional]

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

