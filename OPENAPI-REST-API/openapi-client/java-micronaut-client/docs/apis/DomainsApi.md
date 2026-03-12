# DomainsApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
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


## Creating DomainsApi

To initiate an instance of `DomainsApi`, you can use micronaut's `ApplicationContext`:
```java
/* imports
import io.micronaut.runtime.Micronaut;
import io.micronaut.context.ApplicationContext;
import org.openapitools.api.DomainsApi;
*/

ApplicationContext context = Micronaut.run(/* ... */);
PetApi apiInstance = context.getBean(DomainsApi.class);
```

Or the `@Inject` annotation:
```java
@Singleton
class MyClass {
    @Inject
    DomainsApi domainsApi;

    /* ... use the injected variable */
}
```
Note that the class needs to be annotated with one of Micronaut's [scope annotations](https://docs.micronaut.io/latest/guide/#scopes) like `Singleton` in order to be processed.

More information can be found inside [Inversion of Control guide section](https://docs.micronaut.io/latest/guide/#ioc).

<a id="addDomain"></a>
# **addDomain**
```java
Mono<Void> DomainsApi.addDomain()
```

Place Domain Order

Places a new domain registration or transfer order. Use the results from &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order/{domain}/{regType}&#x60; to populate the required domain fields before submitting the order.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="addDomainDnssec"></a>
# **addDomainDnssec**
```java
Mono<SuccessTextResponse> DomainsApi.addDomainDnssec(iddomainDnssecRequest)
```

Add Domain DNSSEC Records

Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| **domainDnssecRequest** | [**DomainDnssecRequest**](DomainDnssecRequest.md)|  | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="addDomainNameserver"></a>
# **addDomainNameserver**
```java
Mono<TextResponse> DomainsApi.addDomainNameserver(iddomainNameserverPostRequest)
```

Add Registered Nameserver

Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| **domainNameserverPostRequest** | [**DomainNameserverPostRequest**](DomainNameserverPostRequest.md)|  | |


### Return type
[**TextResponse**](TextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="cancelDomain"></a>
# **cancelDomain**
```java
Mono<CancelDomain200Response> DomainsApi.cancelDomain(id)
```

Cancel Domain Order

Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a &#x60;canceled&#x60; status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |


### Return type
[**CancelDomain200Response**](CancelDomain200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="deleteDomainDnssec"></a>
# **deleteDomainDnssec**
```java
Mono<SuccessTextResponse> DomainsApi.deleteDomainDnssec(idaction)
```

Remove Domain DNSSEC Records

Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| **action** | `String`| Set to &#x60;delete&#x60; to remove all DNSSEC records. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="deleteDomainNameserver"></a>
# **deleteDomainNameserver**
```java
Mono<TextResponse> DomainsApi.deleteDomainNameserver(idindex)
```

Delete Registered Nameserver

Removes a registered nameserver (glue record) from the domain. Specify the zero-based &#x60;index&#x60; of the nameserver to remove as returned by &#x60;GET /domains/{id}/nameservers&#x60;.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| **index** | `Integer`| The index of the registered nameserver from the registered nameservers list to delete.   | |


### Return type
[**TextResponse**](TextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getDomainContact"></a>
# **getDomainContact**
```java
Mono<DomainContactDetails> DomainsApi.getDomainContact(id)
```

Get Domain Contact Details

Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |


### Return type
[**DomainContactDetails**](DomainContactDetails.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getDomainDnssec"></a>
# **getDomainDnssec**
```java
Mono<DomainDnssecRecords> DomainsApi.getDomainDnssec(id)
```

Get Domain DNSSEC Records

Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |


### Return type
[**DomainDnssecRecords**](DomainDnssecRecords.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getDomainInfo"></a>
# **getDomainInfo**
```java
Mono<Domain> DomainsApi.getDomainInfo(id)
```

Get Domain Order

Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the &#x60;domain_hostname&#x60; from this response when calling &#x60;/domains/lookup/{name}&#x60; or when interacting with nameserver and DNSSEC management endpoints.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |


### Return type
[**Domain**](Domain.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getDomainInvoices"></a>
# **getDomainInvoices**
```java
Mono<ChargeInvoiceRows> DomainsApi.getDomainInvoices(id)
```

Get Domain Invoices

Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |


### Return type
[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getDomainLookup"></a>
# **getDomainLookup**
```java
Mono<DomainLookupResponse> DomainsApi.getDomainLookup(name)
```

Lookup Domain Availability and Pricing

Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to &#x60;/domains/order&#x60; when placing a registration or transfer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | `String`| The full domain name to look up (for example &#x60;example.com&#x60;). | |


### Return type
[**DomainLookupResponse**](DomainLookupResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getDomainNameservers"></a>
# **getDomainNameservers**
```java
Mono<DomainNameserverGetResponse> DomainsApi.getDomainNameservers(id)
```

List Registered Nameservers

Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |


### Return type
[**DomainNameserverGetResponse**](DomainNameserverGetResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getDomainOrderFields"></a>
# **getDomainOrderFields**
```java
Mono<Void> DomainsApi.getDomainOrderFields(domainregType)
```

Get Domain Order Fields

Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for &#x60;POST /domains/order&#x60;.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **domain** | `String`| The fully qualified domain name (e.g. &#x60;example.com&#x60;). | |
| **regType** | `String`| The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers. | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getDomainOrderSearchResults"></a>
# **getDomainOrderSearchResults**
```java
Mono<Void> DomainsApi.getDomainOrderSearchResults(domain)
```

Get Domain Order Search Results

Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **domain** | `String`| The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;). | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getDomainRenewal"></a>
# **getDomainRenewal**
```java
Mono<SuccessTextResponse> DomainsApi.getDomainRenewal(id)
```

Start Domain Renewal Flow

Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getDomainSearch"></a>
# **getDomainSearch**
```java
Mono<DomainSearchResponse> DomainsApi.getDomainSearch(name)
```

Search Domain Suggestions

Queries the registrar for suggested domains and availability data. Use the returned &#x60;lookup&#x60; results to identify availability and then call &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order&#x60; to obtain pricing and order fields for the chosen domain.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | `String`| The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;). | |


### Return type
[**DomainSearchResponse**](DomainSearchResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getDomainTransfer"></a>
# **getDomainTransfer**
```java
Mono<SuccessTextResponse> DomainsApi.getDomainTransfer(id)
```

Start Domain Transfer Flow

Initiates the transfer workflow for a domain already in your account. Use this in coordination with &#x60;/domains/{id}/contact&#x60; to ensure registrant details are ready for the transfer request.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getDomainWhoisPrivacy"></a>
# **getDomainWhoisPrivacy**
```java
Mono<SuccessTextResponse> DomainsApi.getDomainWhoisPrivacy(id)
```

Get Whois Privacy Status

Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getDomainsList"></a>
# **getDomainsList**
```java
Mono<List<DomainRow>> DomainsApi.getDomainsList()
```

List Domain Orders

Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the &#x60;domain_id&#x60; from this response with &#x60;GET /domains/{id}&#x60; to fetch full service details, or with &#x60;/domains/{id}/nameservers&#x60;, &#x60;/domains/{id}/contact&#x60;, and &#x60;/domains/{id}/whois&#x60; to manage registration settings.



### Return type
[**List&lt;DomainRow&gt;**](DomainRow.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getDomainsWelcomeEmail"></a>
# **getDomainsWelcomeEmail**
```java
Mono<SuccessTextResponse> DomainsApi.getDomainsWelcomeEmail(id)
```

Resend Domain Welcome Email

Resends the welcome email for the domain service. The email contains registration details and management instructions.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getNewDomain"></a>
# **getNewDomain**
```java
Mono<DomainOrder> DomainsApi.getNewDomain()
```

Get Domain Ordering Information

Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the &#x60;tldServices&#x60; map to resolve a TLD into a service ID when you build an order request for &#x60;/domains/order&#x60; (POST) or the domain-field lookup endpoints.



### Return type
[**DomainOrder**](DomainOrder.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="patchDomains"></a>
# **patchDomains**
```java
Mono<Void> DomainsApi.patchDomains()
```

Validate Domain Order

Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for &#x60;/domains/order&#x60; (POST).





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postDomainRenewal"></a>
# **postDomainRenewal**
```java
Mono<SuccessTextResponse> DomainsApi.postDomainRenewal(id)
```

Request Domain Renewal

Submits a domain renewal request for the order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices created as part of the renewal flow.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postDomainTransfer"></a>
# **postDomainTransfer**
```java
Mono<SuccessTextResponse> DomainsApi.postDomainTransfer(id)
```

Request Domain Transfer

Submits a transfer request for the domain order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices generated as part of the transfer process.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="putDomains"></a>
# **putDomains**
```java
Mono<Void> DomainsApi.putDomains()
```

Domain Order Search

Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="updateDomainContact"></a>
# **updateDomainContact**
```java
Mono<SuccessTextResponse> DomainsApi.updateDomainContact(iddomainContactDetails)
```

Update Domain Contact Details

Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| **domainContactDetails** | [**DomainContactDetails**](DomainContactDetails.md)|  | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="updateDomainInfo"></a>
# **updateDomainInfo**
```java
Mono<Void> DomainsApi.updateDomainInfo(id)
```

Update Domain Order

Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `String`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="updateDomainNameservers"></a>
# **updateDomainNameservers**
```java
Mono<TextResponse> DomainsApi.updateDomainNameservers(iddomainNameserverPutRequest)
```

Replace Nameserver Set

Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| **domainNameserverPutRequest** | [**DomainNameserverPutRequest**](DomainNameserverPutRequest.md)|  | |


### Return type
[**TextResponse**](TextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="updateDomainWhoisPrivacy"></a>
# **updateDomainWhoisPrivacy**
```java
Mono<SuccessTextResponse> DomainsApi.updateDomainWhoisPrivacy(iddomainWhoisPrivacyRequest)
```

Update Whois Privacy

Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| **domainWhoisPrivacyRequest** | [**DomainWhoisPrivacyRequest**](DomainWhoisPrivacyRequest.md)|  | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

