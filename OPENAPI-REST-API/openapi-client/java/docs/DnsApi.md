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


<a id="addDnsDomain"></a>
# **addDnsDomain**
> addDnsDomain(domain, ip)

Create DNS Domain

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#39;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DnsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    DnsApi apiInstance = new DnsApi(defaultClient);
    String domain = "domain_example"; // String | The domain name.
    String ip = "ip_example"; // String | IP Address to point the domain to.
    try {
      apiInstance.addDnsDomain(domain, ip);
    } catch (ApiException e) {
      System.err.println("Exception when calling DnsApi#addDnsDomain");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **domain** | **String**| The domain name. | |
| **ip** | **String**| IP Address to point the domain to. | |

### Return type

null (empty response body)

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

<a id="addDnsRecord"></a>
# **addDnsRecord**
> addDnsRecord(id, name, type, content, ttl, prio)

Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DnsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    DnsApi apiInstance = new DnsApi(defaultClient);
    String id = "472"; // String | The DNS Domain ID.
    String name = "name_example"; // String | Name part of record
    DnsRecordType type = DnsRecordType.fromValue("A"); // DnsRecordType | 
    String content = "content_example"; // String | Content of record
    Integer ttl = 86400; // Integer | Time-to-live
    Integer prio = 0; // Integer | Priority
    try {
      apiInstance.addDnsRecord(id, name, type, content, ttl, prio);
    } catch (ApiException e) {
      System.err.println("Exception when calling DnsApi#addDnsRecord");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| The DNS Domain ID. | |
| **name** | **String**| Name part of record | |
| **type** | [**DnsRecordType**](DnsRecordType.md)|  | [enum: A, A6, AAAA, AFSDB, ALIAS, CAA, CDNSKEY, CDS, CERT, CNAME, DHCID, DLV, DNSKEY, DNAME, DS, EUI48, EUI64, HINFO, IPSECKEY, KEY, KX, LOC, MAILA, MAILB, MINFO, MR, MX, NAPTR, NS, NSEC, NSEC3, NSEC3PARAM, OPENPGPKEY, OPT, PTR, RKEY, RP, RRSIG, SIG, SOA, SPF, SRV, SSHFP, TLSA, TKEY, TSIG, TXT, WKS, URI⏎] |
| **content** | **String**| Content of record | |
| **ttl** | **Integer**| Time-to-live | [optional] [default to 86400] |
| **prio** | **Integer**| Priority | [optional] [default to 0] |

### Return type

null (empty response body)

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

<a id="deleteDnsDomain"></a>
# **deleteDnsDomain**
> deleteDnsDomain(id)

Delete DNS Domain

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DnsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    DnsApi apiInstance = new DnsApi(defaultClient);
    String id = "id_example"; // String | The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain.
    try {
      apiInstance.deleteDnsDomain(id);
    } catch (ApiException e) {
      System.err.println("Exception when calling DnsApi#deleteDnsDomain");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | |

### Return type

null (empty response body)

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

<a id="deleteDnsRecord"></a>
# **deleteDnsRecord**
> deleteDnsRecord(domainId, recordId)

Delete DNS Record

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; to verify the record has been removed.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DnsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    DnsApi apiInstance = new DnsApi(defaultClient);
    Integer domainId = 56; // Integer | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
    Integer recordId = 56; // Integer | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
    try {
      apiInstance.deleteDnsRecord(domainId, recordId);
    } catch (ApiException e) {
      System.err.println("Exception when calling DnsApi#deleteDnsRecord");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **domainId** | **Integer**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | |
| **recordId** | **Integer**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | |

### Return type

null (empty response body)

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

<a id="getDnsDomain"></a>
# **getDnsDomain**
> List&lt;DnsRecord&gt; getDnsDomain(id)

List Domain DNS Records

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record &#x60;id&#x60; values with &#x60;/dns/{domainId}/{recordId}&#x60; to update or delete individual records.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DnsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    DnsApi apiInstance = new DnsApi(defaultClient);
    Integer id = 56; // Integer | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
    try {
      List<DnsRecord> result = apiInstance.getDnsDomain(id);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DnsApi#getDnsDomain");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | |

### Return type

[**List&lt;DnsRecord&gt;**](DnsRecord.md)

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

<a id="getDnsList"></a>
# **getDnsList**
> List&lt;DnsListItem&gt; getDnsList()

List DNS Domains

Returns the DNS domains on your account along with their primary A record content. Use the &#x60;id&#x60; from each entry with &#x60;/dns/{id}&#x60; to retrieve the full record set, or to add, update, and delete individual records.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DnsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    DnsApi apiInstance = new DnsApi(defaultClient);
    try {
      List<DnsListItem> result = apiInstance.getDnsList();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DnsApi#getDnsList");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List&lt;DnsListItem&gt;**](DnsListItem.md)

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

<a id="updateDnsRecord"></a>
# **updateDnsRecord**
> updateDnsRecord(domainId, recordId, name, type, content, ttl, prio, disabled, ordername, auth)

Update DNS Record

Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DnsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    DnsApi apiInstance = new DnsApi(defaultClient);
    Integer domainId = 56; // Integer | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
    Integer recordId = 56; // Integer | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
    String name = "name_example"; // String | 
    DnsRecordType type = DnsRecordType.fromValue("A"); // DnsRecordType | 
    String content = "content_example"; // String | 
    String ttl = "ttl_example"; // String | 
    String prio = "prio_example"; // String | 
    String disabled = "disabled_example"; // String | 
    String ordername = "ordername_example"; // String | 
    String auth = "auth_example"; // String | 
    try {
      apiInstance.updateDnsRecord(domainId, recordId, name, type, content, ttl, prio, disabled, ordername, auth);
    } catch (ApiException e) {
      System.err.println("Exception when calling DnsApi#updateDnsRecord");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **domainId** | **Integer**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | |
| **recordId** | **Integer**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | |
| **name** | **String**|  | [optional] |
| **type** | [**DnsRecordType**](DnsRecordType.md)|  | [optional] [enum: A, A6, AAAA, AFSDB, ALIAS, CAA, CDNSKEY, CDS, CERT, CNAME, DHCID, DLV, DNSKEY, DNAME, DS, EUI48, EUI64, HINFO, IPSECKEY, KEY, KX, LOC, MAILA, MAILB, MINFO, MR, MX, NAPTR, NS, NSEC, NSEC3, NSEC3PARAM, OPENPGPKEY, OPT, PTR, RKEY, RP, RRSIG, SIG, SOA, SPF, SRV, SSHFP, TLSA, TKEY, TSIG, TXT, WKS, URI⏎] |
| **content** | **String**|  | [optional] |
| **ttl** | **String**|  | [optional] |
| **prio** | **String**|  | [optional] |
| **disabled** | **String**|  | [optional] |
| **ordername** | **String**|  | [optional] |
| **auth** | **String**|  | [optional] |

### Return type

null (empty response body)

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

