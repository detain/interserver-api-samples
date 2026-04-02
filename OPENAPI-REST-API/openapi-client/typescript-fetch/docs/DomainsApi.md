# DomainsApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addDomain**](DomainsApi.md#adddomain) | **POST** /domains/order | Place Domain Order |
| [**addDomainDnssec**](DomainsApi.md#adddomaindnssec) | **POST** /domains/{id}/dnssec | Add Domain DNSSEC Records |
| [**addDomainNameserver**](DomainsApi.md#adddomainnameserver) | **POST** /domains/{id}/nameservers | Add Registered Nameserver |
| [**cancelDomain**](DomainsApi.md#canceldomain) | **DELETE** /domains/{id} | Cancel Domain Order |
| [**deleteDomainDnssec**](DomainsApi.md#deletedomaindnssec) | **DELETE** /domains/{id}/dnssec | Remove Domain DNSSEC Records |
| [**deleteDomainNameserver**](DomainsApi.md#deletedomainnameserver) | **DELETE** /domains/{id}/nameservers | Delete Registered Nameserver |
| [**getDomainContact**](DomainsApi.md#getdomaincontact) | **GET** /domains/{id}/contact | Get Domain Contact Details |
| [**getDomainDnssec**](DomainsApi.md#getdomaindnssec) | **GET** /domains/{id}/dnssec | Get Domain DNSSEC Records |
| [**getDomainInfo**](DomainsApi.md#getdomaininfo) | **GET** /domains/{id} | Get Domain Order |
| [**getDomainInvoices**](DomainsApi.md#getdomaininvoices) | **GET** /domains/{id}/invoices | Get Domain Invoices |
| [**getDomainLookup**](DomainsApi.md#getdomainlookup) | **GET** /domains/lookup/{name} | Lookup Domain Availability and Pricing |
| [**getDomainNameservers**](DomainsApi.md#getdomainnameservers) | **GET** /domains/{id}/nameservers | List Registered Nameservers |
| [**getDomainOrderFields**](DomainsApi.md#getdomainorderfields) | **GET** /domains/order/{domain}/{regType} | Get Domain Order Fields |
| [**getDomainOrderSearchResults**](DomainsApi.md#getdomainordersearchresults) | **GET** /domains/order/{domain} | Get Domain Order Search Results |
| [**getDomainRenewal**](DomainsApi.md#getdomainrenewal) | **GET** /domains/{id}/renew | Start Domain Renewal Flow |
| [**getDomainSearch**](DomainsApi.md#getdomainsearch) | **GET** /domains/search/{name} | Search Domain Suggestions |
| [**getDomainTransfer**](DomainsApi.md#getdomaintransfer) | **GET** /domains/{id}/transfer | Start Domain Transfer Flow |
| [**getDomainWhoisPrivacy**](DomainsApi.md#getdomainwhoisprivacy) | **GET** /domains/{id}/whois | Get Whois Privacy Status |
| [**getDomainsList**](DomainsApi.md#getdomainslist) | **GET** /domains | List Domain Orders |
| [**getDomainsWelcomeEmail**](DomainsApi.md#getdomainswelcomeemail) | **GET** /domains/{id}/welcome_email | Resend Domain Welcome Email |
| [**getNewDomain**](DomainsApi.md#getnewdomain) | **GET** /domains/order | Get Domain Ordering Information |
| [**patchDomains**](DomainsApi.md#patchdomains) | **PATCH** /domains/order | Validate Domain Order |
| [**postDomainRenewal**](DomainsApi.md#postdomainrenewal) | **POST** /domains/{id}/renew | Request Domain Renewal |
| [**postDomainTransfer**](DomainsApi.md#postdomaintransfer) | **POST** /domains/{id}/transfer | Request Domain Transfer |
| [**putDomains**](DomainsApi.md#putdomains) | **PUT** /domains/order | Domain Order Search |
| [**updateDomainContact**](DomainsApi.md#updatedomaincontact) | **POST** /domains/{id}/contact | Update Domain Contact Details |
| [**updateDomainInfo**](DomainsApi.md#updatedomaininfo) | **POST** /domains/{id} | Update Domain Order |
| [**updateDomainNameservers**](DomainsApi.md#updatedomainnameservers) | **PUT** /domains/{id}/nameservers | Replace Nameserver Set |
| [**updateDomainWhoisPrivacy**](DomainsApi.md#updatedomainwhoisprivacy) | **POST** /domains/{id}/whois | Update Whois Privacy |



## addDomain

> ServiceOrderPostResponse addDomain()

Place Domain Order

Places a new domain registration or transfer order. Use the results from &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order/{domain}/{regType}&#x60; to populate the required domain fields before submitting the order.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { AddDomainRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  try {
    const data = await api.addDomain();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Order placed successfully. Use the invoice ID to proceed to payment via &#x60;/pay/{method}/{invoices}&#x60; or view the invoice at &#x60;/billing/invoices/{id}&#x60;. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## addDomainDnssec

> SuccessTextResponse addDomainDnssec(id, domainDnssecRequest)

Add Domain DNSSEC Records

Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { AddDomainDnssecRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
    // DomainDnssecRequest
    domainDnssecRequest: ...,
  } satisfies AddDomainDnssecRequest;

  try {
    const data = await api.addDomainDnssec(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |
| **domainDnssecRequest** | [DomainDnssecRequest](DomainDnssecRequest.md) |  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## addDomainNameserver

> TextResponse addDomainNameserver(id, domainNameserverPostRequest)

Add Registered Nameserver

Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { AddDomainNameserverRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
    // DomainNameserverPostRequest
    domainNameserverPostRequest: ...,
  } satisfies AddDomainNameserverRequest;

  try {
    const data = await api.addDomainNameserver(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |
| **domainNameserverPostRequest** | [DomainNameserverPostRequest](DomainNameserverPostRequest.md) |  | |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## cancelDomain

> CancelDomain200Response cancelDomain(id)

Cancel Domain Order

Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a &#x60;canceled&#x60; status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { CancelDomainRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
  } satisfies CancelDomainRequest;

  try {
    const data = await api.cancelDomain(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |

### Return type

[**CancelDomain200Response**](CancelDomain200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Domains Cancel |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## deleteDomainDnssec

> SuccessTextResponse deleteDomainDnssec(id, action)

Remove Domain DNSSEC Records

Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { DeleteDomainDnssecRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
    // string | Set to `delete` to remove all DNSSEC records.
    action: action_example,
  } satisfies DeleteDomainDnssecRequest;

  try {
    const data = await api.deleteDomainDnssec(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |
| **action** | `string` | Set to &#x60;delete&#x60; to remove all DNSSEC records. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## deleteDomainNameserver

> TextResponse deleteDomainNameserver(id, index)

Delete Registered Nameserver

Removes a registered nameserver (glue record) from the domain. Specify the zero-based &#x60;index&#x60; of the nameserver to remove as returned by &#x60;GET /domains/{id}/nameservers&#x60;.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { DeleteDomainNameserverRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
    // number | The index of the registered nameserver from the registered nameservers list to delete.  
    index: 56,
  } satisfies DeleteDomainNameserverRequest;

  try {
    const data = await api.deleteDomainNameserver(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |
| **index** | `number` | The index of the registered nameserver from the registered nameservers list to delete.   | [Defaults to `undefined`] |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getDomainContact

> DomainContactDetails getDomainContact(id)

Get Domain Contact Details

Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { GetDomainContactRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
  } satisfies GetDomainContactRequest;

  try {
    const data = await api.getDomainContact(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |

### Return type

[**DomainContactDetails**](DomainContactDetails.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The registrant/admin contact details for the domain. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getDomainDnssec

> DomainDnssecRecords getDomainDnssec(id)

Get Domain DNSSEC Records

Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { GetDomainDnssecRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
  } satisfies GetDomainDnssecRequest;

  try {
    const data = await api.getDomainDnssec(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |

### Return type

[**DomainDnssecRecords**](DomainDnssecRecords.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | DNSSEC records currently applied to the domain. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getDomainInfo

> Domain getDomainInfo(id)

Get Domain Order

Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the &#x60;domain_hostname&#x60; from this response when calling &#x60;/domains/lookup/{name}&#x60; or when interacting with nameserver and DNSSEC management endpoints.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { GetDomainInfoRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
  } satisfies GetDomainInfoRequest;

  try {
    const data = await api.getDomainInfo(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |

### Return type

[**Domain**](Domain.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Domain Information. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getDomainInvoices

> ChargeInvoiceRows getDomainInvoices(id)

Get Domain Invoices

Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { GetDomainInvoicesRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
  } satisfies GetDomainInvoicesRequest;

  try {
    const data = await api.getDomainInvoices(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get Invoices response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getDomainLookup

> DomainLookupResponse getDomainLookup(name)

Lookup Domain Availability and Pricing

Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to &#x60;/domains/order&#x60; when placing a registration or transfer.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { GetDomainLookupRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // string | The full domain name to look up (for example `example.com`).
    name: name_example,
  } satisfies GetDomainLookupRequest;

  try {
    const data = await api.getDomainLookup(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | `string` | The full domain name to look up (for example &#x60;example.com&#x60;). | [Defaults to `undefined`] |

### Return type

[**DomainLookupResponse**](DomainLookupResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Availability, pricing, and field metadata for the requested domain. |  -  |
| **401** | Unauthorized |  -  |
| **422** | The domain input was invalid. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getDomainNameservers

> DomainNameserverGetResponse getDomainNameservers(id)

List Registered Nameservers

Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { GetDomainNameserversRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
  } satisfies GetDomainNameserversRequest;

  try {
    const data = await api.getDomainNameservers(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |

### Return type

[**DomainNameserverGetResponse**](DomainNameserverGetResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Domain registered nameservers list response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getDomainOrderFields

> getDomainOrderFields(domain, regType)

Get Domain Order Fields

Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for &#x60;POST /domains/order&#x60;.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { GetDomainOrderFieldsRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // string | The fully qualified domain name (e.g. `example.com`).
    domain: domain_example,
    // string | The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers.
    regType: regType_example,
  } satisfies GetDomainOrderFieldsRequest;

  try {
    const data = await api.getDomainOrderFields(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **domain** | `string` | The fully qualified domain name (e.g. &#x60;example.com&#x60;). | [Defaults to `undefined`] |
| **regType** | `string` | The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers. | [Defaults to `undefined`] |

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Registration-type-specific form field definitions. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getDomainOrderSearchResults

> getDomainOrderSearchResults(domain)

Get Domain Order Search Results

Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { GetDomainOrderSearchResultsRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // string | The fully qualified domain name to look up (e.g. `example.com`).
    domain: domain_example,
  } satisfies GetDomainOrderSearchResultsRequest;

  try {
    const data = await api.getDomainOrderSearchResults(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **domain** | `string` | The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;). | [Defaults to `undefined`] |

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Domain availability and pricing information. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getDomainRenewal

> SuccessTextResponse getDomainRenewal(id)

Start Domain Renewal Flow

Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { GetDomainRenewalRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
  } satisfies GetDomainRenewalRequest;

  try {
    const data = await api.getDomainRenewal(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getDomainSearch

> DomainSearchResponse getDomainSearch(name)

Search Domain Suggestions

Queries the registrar for suggested domains and availability data. Use the returned &#x60;lookup&#x60; results to identify availability and then call &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order&#x60; to obtain pricing and order fields for the chosen domain.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { GetDomainSearchRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // string | The base domain name to search (for example `example` or `example.com`).
    name: name_example,
  } satisfies GetDomainSearchRequest;

  try {
    const data = await api.getDomainSearch(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | `string` | The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;). | [Defaults to `undefined`] |

### Return type

[**DomainSearchResponse**](DomainSearchResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Suggested and lookup results for the supplied search term. |  -  |
| **401** | Unauthorized |  -  |
| **404** | No search suggestions or registrar response available. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getDomainTransfer

> SuccessTextResponse getDomainTransfer(id)

Start Domain Transfer Flow

Initiates the transfer workflow for a domain already in your account. Use this in coordination with &#x60;/domains/{id}/contact&#x60; to ensure registrant details are ready for the transfer request.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { GetDomainTransferRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
  } satisfies GetDomainTransferRequest;

  try {
    const data = await api.getDomainTransfer(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getDomainWhoisPrivacy

> SuccessTextResponse getDomainWhoisPrivacy(id)

Get Whois Privacy Status

Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { GetDomainWhoisPrivacyRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
  } satisfies GetDomainWhoisPrivacyRequest;

  try {
    const data = await api.getDomainWhoisPrivacy(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getDomainsList

> Array&lt;DomainRow&gt; getDomainsList()

List Domain Orders

Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the &#x60;domain_id&#x60; from this response with &#x60;GET /domains/{id}&#x60; to fetch full service details, or with &#x60;/domains/{id}/nameservers&#x60;, &#x60;/domains/{id}/contact&#x60;, and &#x60;/domains/{id}/whois&#x60; to manage registration settings.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { GetDomainsListRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  try {
    const data = await api.getDomainsList();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Array&lt;DomainRow&gt;**](DomainRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Domains&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getDomainsWelcomeEmail

> SuccessTextResponse getDomainsWelcomeEmail(id)

Resend Domain Welcome Email

Resends the welcome email for the domain service. The email contains registration details and management instructions.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { GetDomainsWelcomeEmailRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
  } satisfies GetDomainsWelcomeEmailRequest;

  try {
    const data = await api.getDomainsWelcomeEmail(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getNewDomain

> DomainOrder getNewDomain()

Get Domain Ordering Information

Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the &#x60;tldServices&#x60; map to resolve a TLD into a service ID when you build an order request for &#x60;/domains/order&#x60; (POST) or the domain-field lookup endpoints.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { GetNewDomainRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  try {
    const data = await api.getNewDomain();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**DomainOrder**](DomainOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Domain registration order information. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## patchDomains

> patchDomains()

Validate Domain Order

Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for &#x60;/domains/order&#x60; (POST).

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { PatchDomainsRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  try {
    const data = await api.patchDomains();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Validate Domain order response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postDomainRenewal

> SuccessTextResponse postDomainRenewal(id)

Request Domain Renewal

Submits a domain renewal request for the order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices created as part of the renewal flow.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { PostDomainRenewalRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
  } satisfies PostDomainRenewalRequest;

  try {
    const data = await api.postDomainRenewal(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postDomainTransfer

> SuccessTextResponse postDomainTransfer(id)

Request Domain Transfer

Submits a transfer request for the domain order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices generated as part of the transfer process.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { PostDomainTransferRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
  } satisfies PostDomainTransferRequest;

  try {
    const data = await api.postDomainTransfer(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## putDomains

> putDomains()

Domain Order Search

Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { PutDomainsRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  try {
    const data = await api.putDomains();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Validate Domain Order response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateDomainContact

> SuccessTextResponse updateDomainContact(id, domainContactDetails)

Update Domain Contact Details

Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { UpdateDomainContactRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
    // DomainContactDetails
    domainContactDetails: ...,
  } satisfies UpdateDomainContactRequest;

  try {
    const data = await api.updateDomainContact(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |
| **domainContactDetails** | [DomainContactDetails](DomainContactDetails.md) |  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateDomainInfo

> SuccessTextResponse updateDomainInfo(id)

Update Domain Order

Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { UpdateDomainInfoRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // string | The domain service ID. Use `domain_id` from `GET /domains`.
    id: id_example,
  } satisfies UpdateDomainInfoRequest;

  try {
    const data = await api.updateDomainInfo(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `string` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateDomainNameservers

> TextResponse updateDomainNameservers(id, domainNameserverPutRequest)

Replace Nameserver Set

Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { UpdateDomainNameserversRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
    // DomainNameserverPutRequest
    domainNameserverPutRequest: ...,
  } satisfies UpdateDomainNameserversRequest;

  try {
    const data = await api.updateDomainNameservers(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |
| **domainNameserverPutRequest** | [DomainNameserverPutRequest](DomainNameserverPutRequest.md) |  | |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateDomainWhoisPrivacy

> SuccessTextResponse updateDomainWhoisPrivacy(id, domainWhoisPrivacyRequest)

Update Whois Privacy

Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.

### Example

```ts
import {
  Configuration,
  DomainsApi,
} from '';
import type { UpdateDomainWhoisPrivacyRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new DomainsApi(config);

  const body = {
    // number | The domain service ID. Use `domain_id` from `GET /domains`.
    id: 56,
    // DomainWhoisPrivacyRequest
    domainWhoisPrivacyRequest: ...,
  } satisfies UpdateDomainWhoisPrivacyRequest;

  try {
    const data = await api.updateDomainWhoisPrivacy(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [Defaults to `undefined`] |
| **domainWhoisPrivacyRequest** | [DomainWhoisPrivacyRequest](DomainWhoisPrivacyRequest.md) |  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)

