# DomainsApi

All URIs are relative to *https://my.interserver.net/apiv2*

|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|[**addDomain**](#adddomain) | **POST** /domains/order | Place Domain Order|
|[**addDomainDnssec**](#adddomaindnssec) | **POST** /domains/{id}/dnssec | Add Domain DNSSEC Records|
|[**addDomainNameserver**](#adddomainnameserver) | **POST** /domains/{id}/nameservers | Add Registered Nameserver|
|[**cancelDomain**](#canceldomain) | **DELETE** /domains/{id} | Cancel Domain Order|
|[**deleteDomainDnssec**](#deletedomaindnssec) | **DELETE** /domains/{id}/dnssec | Remove Domain DNSSEC Records|
|[**deleteDomainNameserver**](#deletedomainnameserver) | **DELETE** /domains/{id}/nameservers | Delete Registered Nameserver|
|[**getDomainContact**](#getdomaincontact) | **GET** /domains/{id}/contact | Get Domain Contact Details|
|[**getDomainDnssec**](#getdomaindnssec) | **GET** /domains/{id}/dnssec | Get Domain DNSSEC Records|
|[**getDomainInfo**](#getdomaininfo) | **GET** /domains/{id} | Get Domain Order|
|[**getDomainInvoices**](#getdomaininvoices) | **GET** /domains/{id}/invoices | Get Domain Invoices|
|[**getDomainLookup**](#getdomainlookup) | **GET** /domains/lookup/{name} | Lookup Domain Availability and Pricing|
|[**getDomainNameservers**](#getdomainnameservers) | **GET** /domains/{id}/nameservers | List Registered Nameservers|
|[**getDomainOrderFields**](#getdomainorderfields) | **GET** /domains/order/{domain}/{regType} | Get Domain Order Fields|
|[**getDomainOrderSearchResults**](#getdomainordersearchresults) | **GET** /domains/order/{domain} | Get Domain Order Search Results|
|[**getDomainRenewal**](#getdomainrenewal) | **GET** /domains/{id}/renew | Start Domain Renewal Flow|
|[**getDomainSearch**](#getdomainsearch) | **GET** /domains/search/{name} | Search Domain Suggestions|
|[**getDomainTransfer**](#getdomaintransfer) | **GET** /domains/{id}/transfer | Start Domain Transfer Flow|
|[**getDomainWhoisPrivacy**](#getdomainwhoisprivacy) | **GET** /domains/{id}/whois | Get Whois Privacy Status|
|[**getDomainsList**](#getdomainslist) | **GET** /domains | List Domain Orders|
|[**getDomainsWelcomeEmail**](#getdomainswelcomeemail) | **GET** /domains/{id}/welcome_email | Resend Domain Welcome Email|
|[**getNewDomain**](#getnewdomain) | **GET** /domains/order | Get Domain Ordering Information|
|[**patchDomains**](#patchdomains) | **PATCH** /domains/order | Validate Domain Order|
|[**postDomainRenewal**](#postdomainrenewal) | **POST** /domains/{id}/renew | Request Domain Renewal|
|[**postDomainTransfer**](#postdomaintransfer) | **POST** /domains/{id}/transfer | Request Domain Transfer|
|[**putDomains**](#putdomains) | **PUT** /domains/order | Domain Order Search|
|[**updateDomainContact**](#updatedomaincontact) | **POST** /domains/{id}/contact | Update Domain Contact Details|
|[**updateDomainInfo**](#updatedomaininfo) | **POST** /domains/{id} | Update Domain Order|
|[**updateDomainNameservers**](#updatedomainnameservers) | **PUT** /domains/{id}/nameservers | Replace Nameserver Set|
|[**updateDomainWhoisPrivacy**](#updatedomainwhoisprivacy) | **POST** /domains/{id}/whois | Update Whois Privacy|

# **addDomain**
> ServiceOrderPostResponse addDomain()

Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

const { status, data } = await apiInstance.addDomain();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**ServiceOrderPostResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Order placed successfully. Use the invoice ID to proceed to payment via &#x60;/pay/{method}/{invoices}&#x60; or view the invoice at &#x60;/billing/invoices/{id}&#x60;. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addDomainDnssec**
> SuccessTextResponse addDomainDnssec(domainDnssecRequest)

Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.

### Example

```typescript
import {
    DomainsApi,
    Configuration,
    DomainDnssecRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)
let domainDnssecRequest: DomainDnssecRequest; //

const { status, data } = await apiInstance.addDomainDnssec(
    id,
    domainDnssecRequest
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **domainDnssecRequest** | **DomainDnssecRequest**|  | |
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addDomainNameserver**
> TextResponse addDomainNameserver(domainNameserverPostRequest)

Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.

### Example

```typescript
import {
    DomainsApi,
    Configuration,
    DomainNameserverPostRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)
let domainNameserverPostRequest: DomainNameserverPostRequest; //

const { status, data } = await apiInstance.addDomainNameserver(
    id,
    domainNameserverPostRequest
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **domainNameserverPostRequest** | **DomainNameserverPostRequest**|  | |
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response with a text message field. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cancelDomain**
> CancelDomain200Response cancelDomain()

Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)

const { status, data } = await apiInstance.cancelDomain(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**CancelDomain200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Domains Cancel |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDomainDnssec**
> SuccessTextResponse deleteDomainDnssec()

Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)
let action: string; //Set to `delete` to remove all DNSSEC records. (default to undefined)

const { status, data } = await apiInstance.deleteDomainDnssec(
    id,
    action
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|
| **action** | [**string**] | Set to &#x60;delete&#x60; to remove all DNSSEC records. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDomainNameserver**
> TextResponse deleteDomainNameserver()

Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)
let index: number; //The index of the registered nameserver from the registered nameservers list to delete.   (default to undefined)

const { status, data } = await apiInstance.deleteDomainNameserver(
    id,
    index
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|
| **index** | [**number**] | The index of the registered nameserver from the registered nameservers list to delete.   | defaults to undefined|


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response with a text message field. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainContact**
> DomainContactDetails getDomainContact()

Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)

const { status, data } = await apiInstance.getDomainContact(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**DomainContactDetails**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | The registrant/admin contact details for the domain. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainDnssec**
> DomainDnssecRecords getDomainDnssec()

Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)

const { status, data } = await apiInstance.getDomainDnssec(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**DomainDnssecRecords**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | DNSSEC records currently applied to the domain. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainInfo**
> Domain getDomainInfo()

Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)

const { status, data } = await apiInstance.getDomainInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**Domain**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Domain Information. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainInvoices**
> ChargeInvoiceRows getDomainInvoices()

Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)

const { status, data } = await apiInstance.getDomainInvoices(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**ChargeInvoiceRows**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Get Invoices response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainLookup**
> DomainLookupResponse getDomainLookup()

Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let name: string; //The full domain name to look up (for example `example.com`). (default to undefined)

const { status, data } = await apiInstance.getDomainLookup(
    name
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **name** | [**string**] | The full domain name to look up (for example &#x60;example.com&#x60;). | defaults to undefined|


### Return type

**DomainLookupResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Availability, pricing, and field metadata for the requested domain. |  -  |
|**401** | Unauthorized |  -  |
|**422** | The domain input was invalid. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainNameservers**
> DomainNameserverGetResponse getDomainNameservers()

Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)

const { status, data } = await apiInstance.getDomainNameservers(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**DomainNameserverGetResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Domain registered nameservers list response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainOrderFields**
> getDomainOrderFields()

Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let domain: string; //The fully qualified domain name (e.g. `example.com`). (default to undefined)
let regType: string; //The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers. (default to undefined)

const { status, data } = await apiInstance.getDomainOrderFields(
    domain,
    regType
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **domain** | [**string**] | The fully qualified domain name (e.g. &#x60;example.com&#x60;). | defaults to undefined|
| **regType** | [**string**] | The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers. | defaults to undefined|


### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Registration-type-specific form field definitions. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainOrderSearchResults**
> getDomainOrderSearchResults()

Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let domain: string; //The fully qualified domain name to look up (e.g. `example.com`). (default to undefined)

const { status, data } = await apiInstance.getDomainOrderSearchResults(
    domain
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **domain** | [**string**] | The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;). | defaults to undefined|


### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Domain availability and pricing information. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainRenewal**
> SuccessTextResponse getDomainRenewal()

Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)

const { status, data } = await apiInstance.getDomainRenewal(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainSearch**
> DomainSearchResponse getDomainSearch()

Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let name: string; //The base domain name to search (for example `example` or `example.com`). (default to undefined)

const { status, data } = await apiInstance.getDomainSearch(
    name
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **name** | [**string**] | The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;). | defaults to undefined|


### Return type

**DomainSearchResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Suggested and lookup results for the supplied search term. |  -  |
|**401** | Unauthorized |  -  |
|**404** | No search suggestions or registrar response available. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainTransfer**
> SuccessTextResponse getDomainTransfer()

Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)

const { status, data } = await apiInstance.getDomainTransfer(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainWhoisPrivacy**
> SuccessTextResponse getDomainWhoisPrivacy()

Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)

const { status, data } = await apiInstance.getDomainWhoisPrivacy(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainsList**
> Array<DomainRow> getDomainsList()

Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

const { status, data } = await apiInstance.getDomainsList();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**Array<DomainRow>**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | The listing of &#x60;Domains&#x60; services on your account. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainsWelcomeEmail**
> SuccessTextResponse getDomainsWelcomeEmail()

Resends the welcome email for the domain service. The email contains registration details and management instructions.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)

const { status, data } = await apiInstance.getDomainsWelcomeEmail(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getNewDomain**
> DomainOrder getNewDomain()

Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

const { status, data } = await apiInstance.getNewDomain();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**DomainOrder**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Domain registration order information. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **patchDomains**
> patchDomains()

Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

const { status, data } = await apiInstance.patchDomains();
```

### Parameters
This endpoint does not have any parameters.


### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Validate Domain order response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postDomainRenewal**
> SuccessTextResponse postDomainRenewal()

Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)

const { status, data } = await apiInstance.postDomainRenewal(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postDomainTransfer**
> SuccessTextResponse postDomainTransfer()

Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)

const { status, data } = await apiInstance.postDomainTransfer(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **putDomains**
> putDomains()

Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

const { status, data } = await apiInstance.putDomains();
```

### Parameters
This endpoint does not have any parameters.


### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Validate Domain Order response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateDomainContact**
> SuccessTextResponse updateDomainContact(domainContactDetails)

Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.

### Example

```typescript
import {
    DomainsApi,
    Configuration,
    DomainContactDetails
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)
let domainContactDetails: DomainContactDetails; //

const { status, data } = await apiInstance.updateDomainContact(
    id,
    domainContactDetails
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **domainContactDetails** | **DomainContactDetails**|  | |
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateDomainInfo**
> SuccessTextResponse updateDomainInfo()

Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.

### Example

```typescript
import {
    DomainsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: string; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)

const { status, data } = await apiInstance.updateDomainInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**string**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateDomainNameservers**
> TextResponse updateDomainNameservers(domainNameserverPutRequest)

Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.

### Example

```typescript
import {
    DomainsApi,
    Configuration,
    DomainNameserverPutRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)
let domainNameserverPutRequest: DomainNameserverPutRequest; //

const { status, data } = await apiInstance.updateDomainNameservers(
    id,
    domainNameserverPutRequest
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **domainNameserverPutRequest** | **DomainNameserverPutRequest**|  | |
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response with a text message field. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateDomainWhoisPrivacy**
> SuccessTextResponse updateDomainWhoisPrivacy(domainWhoisPrivacyRequest)

Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.

### Example

```typescript
import {
    DomainsApi,
    Configuration,
    DomainWhoisPrivacyRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new DomainsApi(configuration);

let id: number; //The domain service ID. Use `domain_id` from `GET /domains`. (default to undefined)
let domainWhoisPrivacyRequest: DomainWhoisPrivacyRequest; //

const { status, data } = await apiInstance.updateDomainWhoisPrivacy(
    id,
    domainWhoisPrivacyRequest
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **domainWhoisPrivacyRequest** | **DomainWhoisPrivacyRequest**|  | |
| **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

