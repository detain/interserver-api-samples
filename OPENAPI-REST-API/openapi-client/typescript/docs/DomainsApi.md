# .DomainsApi

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


# **addDomain**
> addDomain()

Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request = {};

const data = await apiInstance.addDomain(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **addDomainDnssec**
> SuccessTextResponse addDomainDnssec(domainDnssecRequest)

Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiAddDomainDnssecRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiAddDomainDnssecRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
  
  domainDnssecRequest: {
    algorithm: [
      1,
    ],
    digest_type: [
      1,
    ],
    digest: [
      "digest_example",
    ],
    key_tag: [
      1,
    ],
  },
};

const data = await apiInstance.addDomainDnssec(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domainDnssecRequest** | **DomainDnssecRequest**|  |
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **addDomainNameserver**
> TextResponse addDomainNameserver(domainNameserverPostRequest)

Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiAddDomainNameserverRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiAddDomainNameserverRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
  
  domainNameserverPostRequest: {
    name: "ns1.host.com",
    ipAddress: "1.2.3.4Get",
  },
};

const data = await apiInstance.addDomainNameserver(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domainNameserverPostRequest** | **DomainNameserverPostRequest**|  |
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response with a text message field. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **cancelDomain**
> CancelDomain200Response cancelDomain()

Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiCancelDomainRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiCancelDomainRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
};

const data = await apiInstance.cancelDomain(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**CancelDomain200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Domains Cancel |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **deleteDomainDnssec**
> SuccessTextResponse deleteDomainDnssec()

Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiDeleteDomainDnssecRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiDeleteDomainDnssecRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
    // Set to `delete` to remove all DNSSEC records.
  action: "action_example",
};

const data = await apiInstance.deleteDomainDnssec(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined
 **action** | [**string**] | Set to &#x60;delete&#x60; to remove all DNSSEC records. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **deleteDomainNameserver**
> TextResponse deleteDomainNameserver()

Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiDeleteDomainNameserverRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiDeleteDomainNameserverRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
    // The index of the registered nameserver from the registered nameservers list to delete.  
  index: 1,
};

const data = await apiInstance.deleteDomainNameserver(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined
 **index** | [**number**] | The index of the registered nameserver from the registered nameservers list to delete.   | defaults to undefined


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response with a text message field. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getDomainContact**
> DomainContactDetails getDomainContact()

Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiGetDomainContactRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiGetDomainContactRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
};

const data = await apiInstance.getDomainContact(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**DomainContactDetails**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The registrant/admin contact details for the domain. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getDomainDnssec**
> DomainDnssecRecords getDomainDnssec()

Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiGetDomainDnssecRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiGetDomainDnssecRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
};

const data = await apiInstance.getDomainDnssec(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**DomainDnssecRecords**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | DNSSEC records currently applied to the domain. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getDomainInfo**
> Domain getDomainInfo()

Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiGetDomainInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiGetDomainInfoRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
};

const data = await apiInstance.getDomainInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**Domain**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Domain Information. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getDomainInvoices**
> ChargeInvoiceRows getDomainInvoices()

Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiGetDomainInvoicesRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiGetDomainInvoicesRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
};

const data = await apiInstance.getDomainInvoices(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**ChargeInvoiceRows**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Get Invoices response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getDomainLookup**
> DomainLookupResponse getDomainLookup()

Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiGetDomainLookupRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiGetDomainLookupRequest = {
    // The full domain name to look up (for example `example.com`).
  name: "name_example",
};

const data = await apiInstance.getDomainLookup(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | [**string**] | The full domain name to look up (for example &#x60;example.com&#x60;). | defaults to undefined


### Return type

**DomainLookupResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Availability, pricing, and field metadata for the requested domain. |  -  |
**401** | Unauthorized |  -  |
**422** | The domain input was invalid. |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getDomainNameservers**
> DomainNameserverGetResponse getDomainNameservers()

Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiGetDomainNameserversRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiGetDomainNameserversRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
};

const data = await apiInstance.getDomainNameservers(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**DomainNameserverGetResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Domain registered nameservers list response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getDomainOrderFields**
> void getDomainOrderFields()

Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiGetDomainOrderFieldsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiGetDomainOrderFieldsRequest = {
    // The fully qualified domain name (e.g. `example.com`).
  domain: "domain_example",
    // The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers.
  regType: "regType_example",
};

const data = await apiInstance.getDomainOrderFields(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | [**string**] | The fully qualified domain name (e.g. &#x60;example.com&#x60;). | defaults to undefined
 **regType** | [**string**] | The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers. | defaults to undefined


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Registration-type-specific form field definitions. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getDomainOrderSearchResults**
> void getDomainOrderSearchResults()

Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiGetDomainOrderSearchResultsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiGetDomainOrderSearchResultsRequest = {
    // The fully qualified domain name to look up (e.g. `example.com`).
  domain: "domain_example",
};

const data = await apiInstance.getDomainOrderSearchResults(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | [**string**] | The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;). | defaults to undefined


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Domain availability and pricing information. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getDomainRenewal**
> SuccessTextResponse getDomainRenewal()

Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiGetDomainRenewalRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiGetDomainRenewalRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
};

const data = await apiInstance.getDomainRenewal(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getDomainSearch**
> DomainSearchResponse getDomainSearch()

Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiGetDomainSearchRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiGetDomainSearchRequest = {
    // The base domain name to search (for example `example` or `example.com`).
  name: "name_example",
};

const data = await apiInstance.getDomainSearch(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | [**string**] | The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;). | defaults to undefined


### Return type

**DomainSearchResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Suggested and lookup results for the supplied search term. |  -  |
**401** | Unauthorized |  -  |
**404** | No search suggestions or registrar response available. |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getDomainTransfer**
> SuccessTextResponse getDomainTransfer()

Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiGetDomainTransferRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiGetDomainTransferRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
};

const data = await apiInstance.getDomainTransfer(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getDomainWhoisPrivacy**
> SuccessTextResponse getDomainWhoisPrivacy()

Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiGetDomainWhoisPrivacyRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiGetDomainWhoisPrivacyRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
};

const data = await apiInstance.getDomainWhoisPrivacy(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getDomainsList**
> Array<DomainRow> getDomainsList()

Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request = {};

const data = await apiInstance.getDomainsList(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**Array<DomainRow>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The listing of &#x60;Domains&#x60; services on your account. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getDomainsWelcomeEmail**
> SuccessTextResponse getDomainsWelcomeEmail()

Resends the welcome email for the domain service. The email contains registration details and management instructions.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiGetDomainsWelcomeEmailRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiGetDomainsWelcomeEmailRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
};

const data = await apiInstance.getDomainsWelcomeEmail(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getNewDomain**
> DomainOrder getNewDomain()

Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request = {};

const data = await apiInstance.getNewDomain(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**DomainOrder**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Domain registration order information. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **patchDomains**
> void patchDomains()

Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).

### Example


```typescript
import { createConfiguration, DomainsApi } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request = {};

const data = await apiInstance.patchDomains(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Validate Domain order response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postDomainRenewal**
> SuccessTextResponse postDomainRenewal()

Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiPostDomainRenewalRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiPostDomainRenewalRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
};

const data = await apiInstance.postDomainRenewal(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postDomainTransfer**
> SuccessTextResponse postDomainTransfer()

Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiPostDomainTransferRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiPostDomainTransferRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
};

const data = await apiInstance.postDomainTransfer(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **putDomains**
> void putDomains()

Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request = {};

const data = await apiInstance.putDomains(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Validate Domain Order response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateDomainContact**
> SuccessTextResponse updateDomainContact(domainContactDetails)

Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiUpdateDomainContactRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiUpdateDomainContactRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
  
  domainContactDetails: {
    status: "status_example",
    state: "state_example",
    org_name: "org_name_example",
    country: "country_example",
    postal_code: "postal_code_example",
    email: "email_example",
    fax: "fax_example",
    address2: "address2_example",
    address3: "address3_example",
    address1: "address1_example",
    city: "city_example",
    phone: "phone_example",
    first_name: "first_name_example",
    last_name: "last_name_example",
  },
};

const data = await apiInstance.updateDomainContact(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domainContactDetails** | **DomainContactDetails**|  |
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateDomainInfo**
> updateDomainInfo()

Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiUpdateDomainInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiUpdateDomainInfoRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: "id_example",
};

const data = await apiInstance.updateDomainInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**string**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateDomainNameservers**
> TextResponse updateDomainNameservers(domainNameserverPutRequest)

Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiUpdateDomainNameserversRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiUpdateDomainNameserversRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
  
  domainNameserverPutRequest: {
    nameserver: [
      "ns1.example.com",
    ],
  },
};

const data = await apiInstance.updateDomainNameservers(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domainNameserverPutRequest** | **DomainNameserverPutRequest**|  |
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response with a text message field. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateDomainWhoisPrivacy**
> SuccessTextResponse updateDomainWhoisPrivacy(domainWhoisPrivacyRequest)

Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.

### Example


```typescript
import { createConfiguration, DomainsApi } from '';
import type { DomainsApiUpdateDomainWhoisPrivacyRequest } from '';

const configuration = createConfiguration();
const apiInstance = new DomainsApi(configuration);

const request: DomainsApiUpdateDomainWhoisPrivacyRequest = {
    // The domain service ID. Use `domain_id` from `GET /domains`.
  id: 1,
  
  domainWhoisPrivacyRequest: {
    func: "enable",
    csrf_token: "csrf_token_example",
    domain_firstname: "domain_firstname_example",
    domain_lastname: "domain_lastname_example",
    domain_email: "domain_email_example",
    domain_address: "domain_address_example",
    domain_address2: "domain_address2_example",
    domain_address3: "domain_address3_example",
    domain_city: "domain_city_example",
    domain_state: "domain_state_example",
    domain_zip: "domain_zip_example",
    domain_country: "domain_country_example",
    domain_phone: "domain_phone_example",
    domain_fax: "domain_fax_example",
    domain_company: "domain_company_example",
    domain_extra: "domain_extra_example",
  },
};

const data = await apiInstance.updateDomainWhoisPrivacy(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domainWhoisPrivacyRequest** | **DomainWhoisPrivacyRequest**|  |
 **id** | [**number**] | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)


