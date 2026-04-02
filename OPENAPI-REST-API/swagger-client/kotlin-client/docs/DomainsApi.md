# DomainsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addDomain**](DomainsApi.md#addDomain) | **POST** /domains/order | Place Domain Order
[**addDomainDnssec**](DomainsApi.md#addDomainDnssec) | **POST** /domains/{id}/dnssec | Add Domain DNSSEC Records
[**addDomainNameserver**](DomainsApi.md#addDomainNameserver) | **POST** /domains/{id}/nameservers | Add Registered Nameserver
[**cancelDomain**](DomainsApi.md#cancelDomain) | **DELETE** /domains/{id} | Cancel Domain Order
[**deleteDomainDnssec**](DomainsApi.md#deleteDomainDnssec) | **DELETE** /domains/{id}/dnssec | Remove Domain DNSSEC Records
[**deleteDomainNameserver**](DomainsApi.md#deleteDomainNameserver) | **DELETE** /domains/{id}/nameservers | Delete Registered Nameserver
[**getDomainContact**](DomainsApi.md#getDomainContact) | **GET** /domains/{id}/contact | Get Domain Contact Details
[**getDomainDnssec**](DomainsApi.md#getDomainDnssec) | **GET** /domains/{id}/dnssec | Get Domain DNSSEC Records
[**getDomainInfo**](DomainsApi.md#getDomainInfo) | **GET** /domains/{id} | Get Domain Order
[**getDomainInvoices**](DomainsApi.md#getDomainInvoices) | **GET** /domains/{id}/invoices | Get Domain Invoices
[**getDomainLookup**](DomainsApi.md#getDomainLookup) | **GET** /domains/lookup/{name} | Lookup Domain Availability and Pricing
[**getDomainNameservers**](DomainsApi.md#getDomainNameservers) | **GET** /domains/{id}/nameservers | List Registered Nameservers
[**getDomainOrderFields**](DomainsApi.md#getDomainOrderFields) | **GET** /domains/order/{domain}/{regType} | Get Domain Order Fields
[**getDomainOrderSearchResults**](DomainsApi.md#getDomainOrderSearchResults) | **GET** /domains/order/{domain} | Get Domain Order Search Results
[**getDomainRenewal**](DomainsApi.md#getDomainRenewal) | **GET** /domains/{id}/renew | Start Domain Renewal Flow
[**getDomainSearch**](DomainsApi.md#getDomainSearch) | **GET** /domains/search/{name} | Search Domain Suggestions
[**getDomainTransfer**](DomainsApi.md#getDomainTransfer) | **GET** /domains/{id}/transfer | Start Domain Transfer Flow
[**getDomainWhoisPrivacy**](DomainsApi.md#getDomainWhoisPrivacy) | **GET** /domains/{id}/whois | Get Whois Privacy Status
[**getDomainsList**](DomainsApi.md#getDomainsList) | **GET** /domains | List Domain Orders
[**getDomainsWelcomeEmail**](DomainsApi.md#getDomainsWelcomeEmail) | **GET** /domains/{id}/welcome_email | Resend Domain Welcome Email
[**getNewDomain**](DomainsApi.md#getNewDomain) | **GET** /domains/order | Get Domain Ordering Information
[**patchDomains**](DomainsApi.md#patchDomains) | **PATCH** /domains/order | Validate Domain Order
[**postDomainRenewal**](DomainsApi.md#postDomainRenewal) | **POST** /domains/{id}/renew | Request Domain Renewal
[**postDomainTransfer**](DomainsApi.md#postDomainTransfer) | **POST** /domains/{id}/transfer | Request Domain Transfer
[**putDomains**](DomainsApi.md#putDomains) | **PUT** /domains/order | Domain Order Search
[**updateDomainContact**](DomainsApi.md#updateDomainContact) | **POST** /domains/{id}/contact | Update Domain Contact Details
[**updateDomainInfo**](DomainsApi.md#updateDomainInfo) | **POST** /domains/{id} | Update Domain Order
[**updateDomainNameservers**](DomainsApi.md#updateDomainNameservers) | **PUT** /domains/{id}/nameservers | Replace Nameserver Set
[**updateDomainWhoisPrivacy**](DomainsApi.md#updateDomainWhoisPrivacy) | **POST** /domains/{id}/whois | Update Whois Privacy

<a name="addDomain"></a>
# **addDomain**
> ServiceOrderPostResponse addDomain()

Place Domain Order

Places a new domain registration or transfer order. Use the results from &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order/{domain}/{regType}&#x60; to populate the required domain fields before submitting the order.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DomainsApi()
try {
    val result : ServiceOrderPostResponse = apiInstance.addDomain()
    println(result)
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

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="addDomainDnssec"></a>
# **addDomainDnssec**
> SuccessTextResponse addDomainDnssec(body, id)

Add Domain DNSSEC Records

Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DomainsApi()
val body : DomainDnssecRequest =  // DomainDnssecRequest | 
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : SuccessTextResponse = apiInstance.addDomainDnssec(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DomainDnssecRequest**](DomainDnssecRequest.md)|  |
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="addDomainDnssec"></a>
# **addDomainDnssec**
> SuccessTextResponse addDomainDnssec(algorithm, digestType, digest, keyTag, id)

Add Domain DNSSEC Records

Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DomainsApi()
val algorithm : kotlin.Array<kotlin.Int> =  // kotlin.Array<kotlin.Int> | 
val digestType : kotlin.Array<kotlin.Int> =  // kotlin.Array<kotlin.Int> | 
val digest : kotlin.Array<kotlin.String> =  // kotlin.Array<kotlin.String> | 
val keyTag : kotlin.Array<kotlin.Int> =  // kotlin.Array<kotlin.Int> | 
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : SuccessTextResponse = apiInstance.addDomainDnssec(algorithm, digestType, digest, keyTag, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **algorithm** | [**kotlin.Array&lt;kotlin.Int&gt;**](kotlin.Int.md)|  |
 **digestType** | [**kotlin.Array&lt;kotlin.Int&gt;**](kotlin.Int.md)|  |
 **digest** | [**kotlin.Array&lt;kotlin.String&gt;**](kotlin.String.md)|  |
 **keyTag** | [**kotlin.Array&lt;kotlin.Int&gt;**](kotlin.Int.md)|  |
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="addDomainNameserver"></a>
# **addDomainNameserver**
> TextResponse addDomainNameserver(body, id)

Add Registered Nameserver

Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DomainsApi()
val body : DomainNameserverPostRequest =  // DomainNameserverPostRequest | 
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : TextResponse = apiInstance.addDomainNameserver(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DomainNameserverPostRequest**](DomainNameserverPostRequest.md)|  |
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="addDomainNameserver"></a>
# **addDomainNameserver**
> TextResponse addDomainNameserver(name, ipAddress, id)

Add Registered Nameserver

Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DomainsApi()
val name : kotlin.String = name_example // kotlin.String | 
val ipAddress : kotlin.String = ipAddress_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : TextResponse = apiInstance.addDomainNameserver(name, ipAddress, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **kotlin.String**|  |
 **ipAddress** | **kotlin.String**|  |
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="cancelDomain"></a>
# **cancelDomain**
> InlineResponse2002 cancelDomain(id)

Cancel Domain Order

Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a &#x60;canceled&#x60; status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DomainsApi()
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : InlineResponse2002 = apiInstance.cancelDomain(id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**InlineResponse2002**](InlineResponse2002.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteDomainDnssec"></a>
# **deleteDomainDnssec**
> SuccessTextResponse deleteDomainDnssec(id, action)

Remove Domain DNSSEC Records

Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |
 **action** | **kotlin.String**| Set to &#x60;delete&#x60; to remove all DNSSEC records. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteDomainNameserver"></a>
# **deleteDomainNameserver**
> TextResponse deleteDomainNameserver(id, index)

Delete Registered Nameserver

Removes a registered nameserver (glue record) from the domain. Specify the zero-based &#x60;index&#x60; of the nameserver to remove as returned by &#x60;GET /domains/{id}/nameservers&#x60;.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |
 **index** | **kotlin.Int**| The index of the registered nameserver from the registered nameservers list to delete.   |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDomainContact"></a>
# **getDomainContact**
> DomainContactDetails getDomainContact(id)

Get Domain Contact Details

Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**DomainContactDetails**](DomainContactDetails.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDomainDnssec"></a>
# **getDomainDnssec**
> DomainDnssecRecords getDomainDnssec(id)

Get Domain DNSSEC Records

Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**DomainDnssecRecords**](DomainDnssecRecords.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDomainInfo"></a>
# **getDomainInfo**
> Domain getDomainInfo(id)

Get Domain Order

Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the &#x60;domain_hostname&#x60; from this response when calling &#x60;/domains/lookup/{name}&#x60; or when interacting with nameserver and DNSSEC management endpoints.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**Domain**](Domain.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDomainInvoices"></a>
# **getDomainInvoices**
> ChargeInvoiceRows getDomainInvoices(id)

Get Domain Invoices

Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDomainLookup"></a>
# **getDomainLookup**
> DomainLookupResponse getDomainLookup(name)

Lookup Domain Availability and Pricing

Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to &#x60;/domains/order&#x60; when placing a registration or transfer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **kotlin.String**| The full domain name to look up (for example &#x60;example.com&#x60;). |

### Return type

[**DomainLookupResponse**](DomainLookupResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDomainNameservers"></a>
# **getDomainNameservers**
> DomainNameserverGetResponse getDomainNameservers(id)

List Registered Nameservers

Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**DomainNameserverGetResponse**](DomainNameserverGetResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDomainOrderFields"></a>
# **getDomainOrderFields**
> getDomainOrderFields(domain, regType)

Get Domain Order Fields

Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for &#x60;POST /domains/order&#x60;.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **kotlin.String**| The fully qualified domain name (e.g. &#x60;example.com&#x60;). |
 **regType** | **kotlin.String**| The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers. |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDomainOrderSearchResults"></a>
# **getDomainOrderSearchResults**
> getDomainOrderSearchResults(domain)

Get Domain Order Search Results

Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **kotlin.String**| The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;). |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDomainRenewal"></a>
# **getDomainRenewal**
> SuccessTextResponse getDomainRenewal(id)

Start Domain Renewal Flow

Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDomainSearch"></a>
# **getDomainSearch**
> DomainSearchResponse getDomainSearch(name)

Search Domain Suggestions

Queries the registrar for suggested domains and availability data. Use the returned &#x60;lookup&#x60; results to identify availability and then call &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order&#x60; to obtain pricing and order fields for the chosen domain.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **kotlin.String**| The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;). |

### Return type

[**DomainSearchResponse**](DomainSearchResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDomainTransfer"></a>
# **getDomainTransfer**
> SuccessTextResponse getDomainTransfer(id)

Start Domain Transfer Flow

Initiates the transfer workflow for a domain already in your account. Use this in coordination with &#x60;/domains/{id}/contact&#x60; to ensure registrant details are ready for the transfer request.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDomainWhoisPrivacy"></a>
# **getDomainWhoisPrivacy**
> SuccessTextResponse getDomainWhoisPrivacy(id)

Get Whois Privacy Status

Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDomainsList"></a>
# **getDomainsList**
> kotlin.Array&lt;DomainRow&gt; getDomainsList()

List Domain Orders

Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the &#x60;domain_id&#x60; from this response with &#x60;GET /domains/{id}&#x60; to fetch full service details, or with &#x60;/domains/{id}/nameservers&#x60;, &#x60;/domains/{id}/contact&#x60;, and &#x60;/domains/{id}/whois&#x60; to manage registration settings.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DomainsApi()
try {
    val result : kotlin.Array<DomainRow> = apiInstance.getDomainsList()
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

[**kotlin.Array&lt;DomainRow&gt;**](DomainRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDomainsWelcomeEmail"></a>
# **getDomainsWelcomeEmail**
> SuccessTextResponse getDomainsWelcomeEmail(id)

Resend Domain Welcome Email

Resends the welcome email for the domain service. The email contains registration details and management instructions.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getNewDomain"></a>
# **getNewDomain**
> DomainOrder getNewDomain()

Get Domain Ordering Information

Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the &#x60;tldServices&#x60; map to resolve a TLD into a service ID when you build an order request for &#x60;/domains/order&#x60; (POST) or the domain-field lookup endpoints.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="patchDomains"></a>
# **patchDomains**
> patchDomains()

Validate Domain Order

Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for &#x60;/domains/order&#x60; (POST).

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postDomainRenewal"></a>
# **postDomainRenewal**
> SuccessTextResponse postDomainRenewal(id)

Request Domain Renewal

Submits a domain renewal request for the order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices created as part of the renewal flow.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postDomainTransfer"></a>
# **postDomainTransfer**
> SuccessTextResponse postDomainTransfer(id)

Request Domain Transfer

Submits a transfer request for the domain order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices generated as part of the transfer process.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="putDomains"></a>
# **putDomains**
> putDomains()

Domain Order Search

Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="updateDomainContact"></a>
# **updateDomainContact**
> SuccessTextResponse updateDomainContact(body, id)

Update Domain Contact Details

Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DomainsApi()
val body : DomainContactDetails =  // DomainContactDetails | 
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : SuccessTextResponse = apiInstance.updateDomainContact(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DomainContactDetails**](DomainContactDetails.md)|  |
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="updateDomainContact"></a>
# **updateDomainContact**
> SuccessTextResponse updateDomainContact(status, state, orgName, country, postalCode, email, fax, address2, address3, address1, city, phone, firstName, lastName, id)

Update Domain Contact Details

Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DomainsApi()
val status : kotlin.String = status_example // kotlin.String | 
val state : kotlin.String = state_example // kotlin.String | 
val orgName : kotlin.String = orgName_example // kotlin.String | 
val country : kotlin.String = country_example // kotlin.String | 
val postalCode : kotlin.String = postalCode_example // kotlin.String | 
val email : kotlin.String = email_example // kotlin.String | 
val fax : kotlin.String = fax_example // kotlin.String | 
val address2 : kotlin.String = address2_example // kotlin.String | 
val address3 : kotlin.String = address3_example // kotlin.String | 
val address1 : kotlin.String = address1_example // kotlin.String | 
val city : kotlin.String = city_example // kotlin.String | 
val phone : kotlin.String = phone_example // kotlin.String | 
val firstName : kotlin.String = firstName_example // kotlin.String | 
val lastName : kotlin.String = lastName_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : SuccessTextResponse = apiInstance.updateDomainContact(status, state, orgName, country, postalCode, email, fax, address2, address3, address1, city, phone, firstName, lastName, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **status** | **kotlin.String**|  |
 **state** | **kotlin.String**|  |
 **orgName** | **kotlin.String**|  |
 **country** | **kotlin.String**|  |
 **postalCode** | **kotlin.String**|  |
 **email** | **kotlin.String**|  |
 **fax** | **kotlin.String**|  |
 **address2** | **kotlin.String**|  |
 **address3** | **kotlin.String**|  |
 **address1** | **kotlin.String**|  |
 **city** | **kotlin.String**|  |
 **phone** | **kotlin.String**|  |
 **firstName** | **kotlin.String**|  |
 **lastName** | **kotlin.String**|  |
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="updateDomainInfo"></a>
# **updateDomainInfo**
> SuccessTextResponse updateDomainInfo(id)

Update Domain Order

Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DomainsApi()
val id : kotlin.String = id_example // kotlin.String | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : SuccessTextResponse = apiInstance.updateDomainInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DomainsApi#updateDomainInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DomainsApi#updateDomainInfo")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.String**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="updateDomainNameservers"></a>
# **updateDomainNameservers**
> TextResponse updateDomainNameservers(body, id)

Replace Nameserver Set

Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DomainsApi()
val body : DomainNameserverPutRequest =  // DomainNameserverPutRequest | 
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : TextResponse = apiInstance.updateDomainNameservers(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DomainNameserverPutRequest**](DomainNameserverPutRequest.md)|  |
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="updateDomainNameservers"></a>
# **updateDomainNameservers**
> TextResponse updateDomainNameservers(nameserver, id)

Replace Nameserver Set

Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DomainsApi()
val nameserver : kotlin.Array<kotlin.String> =  // kotlin.Array<kotlin.String> | 
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : TextResponse = apiInstance.updateDomainNameservers(nameserver, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **nameserver** | [**kotlin.Array&lt;kotlin.String&gt;**](kotlin.String.md)|  |
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="updateDomainWhoisPrivacy"></a>
# **updateDomainWhoisPrivacy**
> SuccessTextResponse updateDomainWhoisPrivacy(body, id)

Update Whois Privacy

Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DomainsApi()
val body : DomainWhoisPrivacyRequest =  // DomainWhoisPrivacyRequest | 
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : SuccessTextResponse = apiInstance.updateDomainWhoisPrivacy(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DomainWhoisPrivacyRequest**](DomainWhoisPrivacyRequest.md)|  |
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="updateDomainWhoisPrivacy"></a>
# **updateDomainWhoisPrivacy**
> SuccessTextResponse updateDomainWhoisPrivacy(func, csrfToken, domainFirstname, domainLastname, domainEmail, domainAddress, domainAddress2, domainAddress3, domainCity, domainState, domainZip, domainCountry, domainPhone, domainFax, domainCompany, domainExtra, id)

Update Whois Privacy

Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = DomainsApi()
val func : kotlin.String = func_example // kotlin.String | 
val csrfToken : kotlin.String = csrfToken_example // kotlin.String | 
val domainFirstname : kotlin.String = domainFirstname_example // kotlin.String | 
val domainLastname : kotlin.String = domainLastname_example // kotlin.String | 
val domainEmail : kotlin.String = domainEmail_example // kotlin.String | 
val domainAddress : kotlin.String = domainAddress_example // kotlin.String | 
val domainAddress2 : kotlin.String = domainAddress2_example // kotlin.String | 
val domainAddress3 : kotlin.String = domainAddress3_example // kotlin.String | 
val domainCity : kotlin.String = domainCity_example // kotlin.String | 
val domainState : kotlin.String = domainState_example // kotlin.String | 
val domainZip : kotlin.String = domainZip_example // kotlin.String | 
val domainCountry : kotlin.String = domainCountry_example // kotlin.String | 
val domainPhone : kotlin.String = domainPhone_example // kotlin.String | 
val domainFax : kotlin.String = domainFax_example // kotlin.String | 
val domainCompany : kotlin.String = domainCompany_example // kotlin.String | 
val domainExtra : kotlin.String = domainExtra_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | The domain service ID. Use `domain_id` from `GET /domains`.
try {
    val result : SuccessTextResponse = apiInstance.updateDomainWhoisPrivacy(func, csrfToken, domainFirstname, domainLastname, domainEmail, domainAddress, domainAddress2, domainAddress3, domainCity, domainState, domainZip, domainCountry, domainPhone, domainFax, domainCompany, domainExtra, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **func** | **kotlin.String**|  |
 **csrfToken** | **kotlin.String**|  |
 **domainFirstname** | **kotlin.String**|  |
 **domainLastname** | **kotlin.String**|  |
 **domainEmail** | **kotlin.String**|  |
 **domainAddress** | **kotlin.String**|  |
 **domainAddress2** | **kotlin.String**|  |
 **domainAddress3** | **kotlin.String**|  |
 **domainCity** | **kotlin.String**|  |
 **domainState** | **kotlin.String**|  |
 **domainZip** | **kotlin.String**|  |
 **domainCountry** | **kotlin.String**|  |
 **domainPhone** | **kotlin.String**|  |
 **domainFax** | **kotlin.String**|  |
 **domainCompany** | **kotlin.String**|  |
 **domainExtra** | **kotlin.String**|  |
 **id** | **kotlin.Int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

