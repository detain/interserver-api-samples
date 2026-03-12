# DomainsApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**addDomain**](DomainsApi.md#addDomain) | **POST** /domains/order | Place Domain Order |
| [**addDomainDnssec**](DomainsApi.md#addDomainDnssec) | **POST** /domains/{id}/dnssec | Add Domain DNSSEC Records |
| [**addDomainNameserver**](DomainsApi.md#addDomainNameserver) | **POST** /domains/{id}/nameservers | Add Registered Nameserver |
| [**cancelDomain**](DomainsApi.md#cancelDomain) | **DELETE** /domains/{id} | Cancel Domain Order |
| [**deleteDomainDnssec**](DomainsApi.md#deleteDomainDnssec) | **DELETE** /domains/{id}/dnssec | Remove Domain DNSSEC Records |
| [**deleteDomainNameserver**](DomainsApi.md#deleteDomainNameserver) | **DELETE** /domains/{id}/nameservers | Delete Registered Nameserver |
| [**getDomainContact**](DomainsApi.md#getDomainContact) | **GET** /domains/{id}/contact | Get Domain Contact Details |
| [**getDomainDnssec**](DomainsApi.md#getDomainDnssec) | **GET** /domains/{id}/dnssec | Get Domain DNSSEC Records |
| [**getDomainInfo**](DomainsApi.md#getDomainInfo) | **GET** /domains/{id} | Get Domain Order |
| [**getDomainInvoices**](DomainsApi.md#getDomainInvoices) | **GET** /domains/{id}/invoices | Get Domain Invoices |
| [**getDomainLookup**](DomainsApi.md#getDomainLookup) | **GET** /domains/lookup/{name} | Lookup Domain Availability and Pricing |
| [**getDomainNameservers**](DomainsApi.md#getDomainNameservers) | **GET** /domains/{id}/nameservers | List Registered Nameservers |
| [**getDomainOrderFields**](DomainsApi.md#getDomainOrderFields) | **GET** /domains/order/{domain}/{regType} | Get Domain Order Fields |
| [**getDomainOrderSearchResults**](DomainsApi.md#getDomainOrderSearchResults) | **GET** /domains/order/{domain} | Get Domain Order Search Results |
| [**getDomainRenewal**](DomainsApi.md#getDomainRenewal) | **GET** /domains/{id}/renew | Start Domain Renewal Flow |
| [**getDomainSearch**](DomainsApi.md#getDomainSearch) | **GET** /domains/search/{name} | Search Domain Suggestions |
| [**getDomainTransfer**](DomainsApi.md#getDomainTransfer) | **GET** /domains/{id}/transfer | Start Domain Transfer Flow |
| [**getDomainWhoisPrivacy**](DomainsApi.md#getDomainWhoisPrivacy) | **GET** /domains/{id}/whois | Get Whois Privacy Status |
| [**getDomainsList**](DomainsApi.md#getDomainsList) | **GET** /domains | List Domain Orders |
| [**getDomainsWelcomeEmail**](DomainsApi.md#getDomainsWelcomeEmail) | **GET** /domains/{id}/welcome_email | Resend Domain Welcome Email |
| [**getNewDomain**](DomainsApi.md#getNewDomain) | **GET** /domains/order | Get Domain Ordering Information |
| [**patchDomains**](DomainsApi.md#patchDomains) | **PATCH** /domains/order | Validate Domain Order |
| [**postDomainRenewal**](DomainsApi.md#postDomainRenewal) | **POST** /domains/{id}/renew | Request Domain Renewal |
| [**postDomainTransfer**](DomainsApi.md#postDomainTransfer) | **POST** /domains/{id}/transfer | Request Domain Transfer |
| [**putDomains**](DomainsApi.md#putDomains) | **PUT** /domains/order | Domain Order Search |
| [**updateDomainContact**](DomainsApi.md#updateDomainContact) | **POST** /domains/{id}/contact | Update Domain Contact Details |
| [**updateDomainInfo**](DomainsApi.md#updateDomainInfo) | **POST** /domains/{id} | Update Domain Order |
| [**updateDomainNameservers**](DomainsApi.md#updateDomainNameservers) | **PUT** /domains/{id}/nameservers | Replace Nameserver Set |
| [**updateDomainWhoisPrivacy**](DomainsApi.md#updateDomainWhoisPrivacy) | **POST** /domains/{id}/whois | Update Whois Privacy |


<a id="addDomain"></a>
# **addDomain**
> addDomain()

Place Domain Order

Places a new domain registration or transfer order. Use the results from &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order/{domain}/{regType}&#x60; to populate the required domain fields before submitting the order.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
try {
    apiInstance.addDomain()
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#addDomain")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#addDomain")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

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

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="addDomainDnssec"></a>
# **addDomainDnssec**
> SuccessTextResponse addDomainDnssec(id, domainDnssecRequest)

Add Domain DNSSEC Records

Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
val domainDnssecRequest : DomainDnssecRequest =  // DomainDnssecRequest | 
try {
    val result : SuccessTextResponse = apiInstance.addDomainDnssec(id, domainDnssecRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#addDomainDnssec")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#addDomainDnssec")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **domainDnssecRequest** | [**DomainDnssecRequest**](DomainDnssecRequest.md)|  | |

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

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="addDomainNameserver"></a>
# **addDomainNameserver**
> TextResponse addDomainNameserver(id, domainNameserverPostRequest)

Add Registered Nameserver

Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
val domainNameserverPostRequest : DomainNameserverPostRequest =  // DomainNameserverPostRequest | 
try {
    val result : TextResponse = apiInstance.addDomainNameserver(id, domainNameserverPostRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#addDomainNameserver")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#addDomainNameserver")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **domainNameserverPostRequest** | [**DomainNameserverPostRequest**](DomainNameserverPostRequest.md)|  | |

### Return type

[**TextResponse**](TextResponse.md)

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

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="cancelDomain"></a>
# **cancelDomain**
> CancelDomain200Response cancelDomain(id)

Cancel Domain Order

Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a &#x60;canceled&#x60; status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : CancelDomain200Response = apiInstance.cancelDomain(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#cancelDomain")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#cancelDomain")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**CancelDomain200Response**](CancelDomain200Response.md)

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

<a id="deleteDomainDnssec"></a>
# **deleteDomainDnssec**
> SuccessTextResponse deleteDomainDnssec(id, action)

Remove Domain DNSSEC Records

Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
val action : kotlin.String = action_example // kotlin.String | Set to `delete` to remove all DNSSEC records.
try {
    val result : SuccessTextResponse = apiInstance.deleteDomainDnssec(id, action)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#deleteDomainDnssec")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#deleteDomainDnssec")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **action** | **kotlin.String**| Set to &#x60;delete&#x60; to remove all DNSSEC records. | |

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

<a id="deleteDomainNameserver"></a>
# **deleteDomainNameserver**
> TextResponse deleteDomainNameserver(id, index)

Delete Registered Nameserver

Removes a registered nameserver (glue record) from the domain. Specify the zero-based &#x60;index&#x60; of the nameserver to remove as returned by &#x60;GET /domains/{id}/nameservers&#x60;.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
val index : kotlin.Int = 56 // kotlin.Int | The index of the registered nameserver from the registered nameservers list to delete.  
try {
    val result : TextResponse = apiInstance.deleteDomainNameserver(id, index)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#deleteDomainNameserver")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#deleteDomainNameserver")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **index** | **kotlin.Int**| The index of the registered nameserver from the registered nameservers list to delete.   | |

### Return type

[**TextResponse**](TextResponse.md)

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

<a id="getDomainContact"></a>
# **getDomainContact**
> DomainContactDetails getDomainContact(id)

Get Domain Contact Details

Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : DomainContactDetails = apiInstance.getDomainContact(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#getDomainContact")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#getDomainContact")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**DomainContactDetails**](DomainContactDetails.md)

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

<a id="getDomainDnssec"></a>
# **getDomainDnssec**
> DomainDnssecRecords getDomainDnssec(id)

Get Domain DNSSEC Records

Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : DomainDnssecRecords = apiInstance.getDomainDnssec(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#getDomainDnssec")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#getDomainDnssec")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**DomainDnssecRecords**](DomainDnssecRecords.md)

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

<a id="getDomainInfo"></a>
# **getDomainInfo**
> Domain getDomainInfo(id)

Get Domain Order

Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the &#x60;domain_hostname&#x60; from this response when calling &#x60;/domains/lookup/{name}&#x60; or when interacting with nameserver and DNSSEC management endpoints.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : Domain = apiInstance.getDomainInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#getDomainInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#getDomainInfo")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**Domain**](Domain.md)

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

<a id="getDomainInvoices"></a>
# **getDomainInvoices**
> ChargeInvoiceRows getDomainInvoices(id)

Get Domain Invoices

Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : ChargeInvoiceRows = apiInstance.getDomainInvoices(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#getDomainInvoices")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#getDomainInvoices")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

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

<a id="getDomainLookup"></a>
# **getDomainLookup**
> DomainLookupResponse getDomainLookup(name)

Lookup Domain Availability and Pricing

Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to &#x60;/domains/order&#x60; when placing a registration or transfer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val name : kotlin.String = name_example // kotlin.String | The full domain name to look up (for example `example.com`).
try {
    val result : DomainLookupResponse = apiInstance.getDomainLookup(name)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#getDomainLookup")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#getDomainLookup")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **name** | **kotlin.String**| The full domain name to look up (for example &#x60;example.com&#x60;). | |

### Return type

[**DomainLookupResponse**](DomainLookupResponse.md)

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

<a id="getDomainNameservers"></a>
# **getDomainNameservers**
> DomainNameserverGetResponse getDomainNameservers(id)

List Registered Nameservers

Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : DomainNameserverGetResponse = apiInstance.getDomainNameservers(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#getDomainNameservers")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#getDomainNameservers")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**DomainNameserverGetResponse**](DomainNameserverGetResponse.md)

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

<a id="getDomainOrderFields"></a>
# **getDomainOrderFields**
> getDomainOrderFields(domain, regType)

Get Domain Order Fields

Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for &#x60;POST /domains/order&#x60;.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val domain : kotlin.String = domain_example // kotlin.String | The fully qualified domain name (e.g. `example.com`).
val regType : kotlin.String = regType_example // kotlin.String | The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers.
try {
    apiInstance.getDomainOrderFields(domain, regType)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#getDomainOrderFields")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#getDomainOrderFields")
    e.printStackTrace()
}
```

### Parameters
| **domain** | **kotlin.String**| The fully qualified domain name (e.g. &#x60;example.com&#x60;). | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **regType** | **kotlin.String**| The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers. | |

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

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getDomainOrderSearchResults"></a>
# **getDomainOrderSearchResults**
> getDomainOrderSearchResults(domain)

Get Domain Order Search Results

Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val domain : kotlin.String = domain_example // kotlin.String | The fully qualified domain name to look up (e.g. `example.com`).
try {
    apiInstance.getDomainOrderSearchResults(domain)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#getDomainOrderSearchResults")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#getDomainOrderSearchResults")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **domain** | **kotlin.String**| The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;). | |

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

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getDomainRenewal"></a>
# **getDomainRenewal**
> SuccessTextResponse getDomainRenewal(id)

Start Domain Renewal Flow

Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : SuccessTextResponse = apiInstance.getDomainRenewal(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#getDomainRenewal")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#getDomainRenewal")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

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

<a id="getDomainSearch"></a>
# **getDomainSearch**
> DomainSearchResponse getDomainSearch(name)

Search Domain Suggestions

Queries the registrar for suggested domains and availability data. Use the returned &#x60;lookup&#x60; results to identify availability and then call &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order&#x60; to obtain pricing and order fields for the chosen domain.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val name : kotlin.String = name_example // kotlin.String | The base domain name to search (for example `example` or `example.com`).
try {
    val result : DomainSearchResponse = apiInstance.getDomainSearch(name)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#getDomainSearch")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#getDomainSearch")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **name** | **kotlin.String**| The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;). | |

### Return type

[**DomainSearchResponse**](DomainSearchResponse.md)

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

<a id="getDomainTransfer"></a>
# **getDomainTransfer**
> SuccessTextResponse getDomainTransfer(id)

Start Domain Transfer Flow

Initiates the transfer workflow for a domain already in your account. Use this in coordination with &#x60;/domains/{id}/contact&#x60; to ensure registrant details are ready for the transfer request.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : SuccessTextResponse = apiInstance.getDomainTransfer(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#getDomainTransfer")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#getDomainTransfer")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

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

<a id="getDomainWhoisPrivacy"></a>
# **getDomainWhoisPrivacy**
> SuccessTextResponse getDomainWhoisPrivacy(id)

Get Whois Privacy Status

Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : SuccessTextResponse = apiInstance.getDomainWhoisPrivacy(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#getDomainWhoisPrivacy")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#getDomainWhoisPrivacy")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

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

<a id="getDomainsList"></a>
# **getDomainsList**
> kotlin.collections.List&lt;DomainRow&gt; getDomainsList()

List Domain Orders

Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the &#x60;domain_id&#x60; from this response with &#x60;GET /domains/{id}&#x60; to fetch full service details, or with &#x60;/domains/{id}/nameservers&#x60;, &#x60;/domains/{id}/contact&#x60;, and &#x60;/domains/{id}/whois&#x60; to manage registration settings.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
try {
    val result : kotlin.collections.List<DomainRow> = apiInstance.getDomainsList()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#getDomainsList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#getDomainsList")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.collections.List&lt;DomainRow&gt;**](DomainRow.md)

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

<a id="getDomainsWelcomeEmail"></a>
# **getDomainsWelcomeEmail**
> SuccessTextResponse getDomainsWelcomeEmail(id)

Resend Domain Welcome Email

Resends the welcome email for the domain service. The email contains registration details and management instructions.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : SuccessTextResponse = apiInstance.getDomainsWelcomeEmail(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#getDomainsWelcomeEmail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#getDomainsWelcomeEmail")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

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

<a id="getNewDomain"></a>
# **getNewDomain**
> DomainOrder getNewDomain()

Get Domain Ordering Information

Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the &#x60;tldServices&#x60; map to resolve a TLD into a service ID when you build an order request for &#x60;/domains/order&#x60; (POST) or the domain-field lookup endpoints.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
try {
    val result : DomainOrder = apiInstance.getNewDomain()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#getNewDomain")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#getNewDomain")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**DomainOrder**](DomainOrder.md)

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

<a id="patchDomains"></a>
# **patchDomains**
> patchDomains()

Validate Domain Order

Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for &#x60;/domains/order&#x60; (POST).

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
try {
    apiInstance.patchDomains()
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#patchDomains")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#patchDomains")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

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

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="postDomainRenewal"></a>
# **postDomainRenewal**
> SuccessTextResponse postDomainRenewal(id)

Request Domain Renewal

Submits a domain renewal request for the order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices created as part of the renewal flow.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : SuccessTextResponse = apiInstance.postDomainRenewal(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#postDomainRenewal")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#postDomainRenewal")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

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

<a id="postDomainTransfer"></a>
# **postDomainTransfer**
> SuccessTextResponse postDomainTransfer(id)

Request Domain Transfer

Submits a transfer request for the domain order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices generated as part of the transfer process.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : SuccessTextResponse = apiInstance.postDomainTransfer(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#postDomainTransfer")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#postDomainTransfer")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

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

<a id="putDomains"></a>
# **putDomains**
> putDomains()

Domain Order Search

Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
try {
    apiInstance.putDomains()
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#putDomains")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#putDomains")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

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

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="updateDomainContact"></a>
# **updateDomainContact**
> SuccessTextResponse updateDomainContact(id, domainContactDetails)

Update Domain Contact Details

Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
val domainContactDetails : DomainContactDetails =  // DomainContactDetails | 
try {
    val result : SuccessTextResponse = apiInstance.updateDomainContact(id, domainContactDetails)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#updateDomainContact")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#updateDomainContact")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **domainContactDetails** | [**DomainContactDetails**](DomainContactDetails.md)|  | |

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

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="updateDomainInfo"></a>
# **updateDomainInfo**
> updateDomainInfo(id)

Update Domain Order

Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.String = id_example // kotlin.String | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    apiInstance.updateDomainInfo(id)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#updateDomainInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#updateDomainInfo")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.String**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

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

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="updateDomainNameservers"></a>
# **updateDomainNameservers**
> TextResponse updateDomainNameservers(id, domainNameserverPutRequest)

Replace Nameserver Set

Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
val domainNameserverPutRequest : DomainNameserverPutRequest =  // DomainNameserverPutRequest | 
try {
    val result : TextResponse = apiInstance.updateDomainNameservers(id, domainNameserverPutRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#updateDomainNameservers")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#updateDomainNameservers")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **domainNameserverPutRequest** | [**DomainNameserverPutRequest**](DomainNameserverPutRequest.md)|  | |

### Return type

[**TextResponse**](TextResponse.md)

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

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="updateDomainWhoisPrivacy"></a>
# **updateDomainWhoisPrivacy**
> SuccessTextResponse updateDomainWhoisPrivacy(id, domainWhoisPrivacyRequest)

Update Whois Privacy

Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
val domainWhoisPrivacyRequest : DomainWhoisPrivacyRequest =  // DomainWhoisPrivacyRequest | 
try {
    val result : SuccessTextResponse = apiInstance.updateDomainWhoisPrivacy(id, domainWhoisPrivacyRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#updateDomainWhoisPrivacy")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#updateDomainWhoisPrivacy")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **domainWhoisPrivacyRequest** | [**DomainWhoisPrivacyRequest**](DomainWhoisPrivacyRequest.md)|  | |

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

 - **Content-Type**: application/json
 - **Accept**: application/json

