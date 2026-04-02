# WebhostingApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addWebsite**](WebhostingApi.md#addwebsite) | **POST** /websites/order | Place Website Order |
| [**getNewWebsite**](WebhostingApi.md#getnewwebsite) | **GET** /websites/order | Website Ordering Information |
| [**getWebsiteBuyIp**](WebhostingApi.md#getwebsitebuyip) | **GET** /websites/{id}/buy_ip | Get Website IP Information |
| [**getWebsiteInfo**](WebhostingApi.md#getwebsiteinfo) | **GET** /websites/{id} | Get Website Order |
| [**getWebsiteInvoices**](WebhostingApi.md#getwebsiteinvoices) | **GET** /websites/{id}/invoices | Get Website Invoices |
| [**getWebsiteList**](WebhostingApi.md#getwebsitelist) | **GET** /websites | Get Website Listing |
| [**getWebsitesBackups**](WebhostingApi.md#getwebsitesbackups) | **GET** /websites/{id}/backups | Get Website Backups |
| [**getWebsitesLogin**](WebhostingApi.md#getwebsiteslogin) | **GET** /websites/{id}/login | Hosting Panel Auto Login |
| [**getWebsitesWelcomeEmail**](WebhostingApi.md#getwebsiteswelcomeemail) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email |
| [**gettWebsiteReverseDns**](WebhostingApi.md#gettwebsitereversedns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS |
| [**postWebsiteBuyIp**](WebhostingApi.md#postwebsitebuyipoperation) | **POST** /websites/{id}/buy_ip | Update Website IP DNS |
| [**postWebsiteMigration**](WebhostingApi.md#postwebsitemigrationoperation) | **POST** /websites/{id}/migration | Request Website Migration |
| [**postWebsitesReverseDns**](WebhostingApi.md#postwebsitesreversedns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS |
| [**putWebsites**](WebhostingApi.md#putwebsites) | **PUT** /websites/order | Validate Webhosting Order |
| [**updateWebsiteInfo**](WebhostingApi.md#updatewebsiteinfo) | **POST** /websites/{id} | Update Website Order |
| [**webhostingCancel**](WebhostingApi.md#webhostingcancel) | **DELETE** /websites/{id} | Cancel Website |



## addWebsite

> ServiceOrderPostResponse addWebsite()

Place Website Order

Places an order for a new webhosting package. Use &#x60;PUT /websites/order&#x60; to validate the order first.

### Example

```ts
import {
  Configuration,
  WebhostingApi,
} from '';
import type { AddWebsiteRequest } from '';

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
  const api = new WebhostingApi(config);

  try {
    const data = await api.addWebsite();
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


## getNewWebsite

> WebsitesOrder getNewWebsite()

Website Ordering Information

Retrieves available webhosting plans and pricing for ordering.

### Example

```ts
import {
  Configuration,
  WebhostingApi,
} from '';
import type { GetNewWebsiteRequest } from '';

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
  const api = new WebhostingApi(config);

  try {
    const data = await api.getNewWebsite();
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

[**WebsitesOrder**](WebsitesOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Website ordering details including available plans and pricing. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getWebsiteBuyIp

> GetWebsiteBuyIp200Response getWebsiteBuyIp(id)

Get Website IP Information

Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via &#x60;POST /websites/{id}/buy_ip&#x60;.

### Example

```ts
import {
  Configuration,
  WebhostingApi,
} from '';
import type { GetWebsiteBuyIpRequest } from '';

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
  const api = new WebhostingApi(config);

  const body = {
    // number | The website service ID. Use `website_id` from `GET /websites`.
    id: 56,
  } satisfies GetWebsiteBuyIpRequest;

  try {
    const data = await api.getWebsiteBuyIp(body);
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
| **id** | `number` | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [Defaults to `undefined`] |

### Return type

[**GetWebsiteBuyIp200Response**](GetWebsiteBuyIp200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Current IP addresses and their reverse DNS hostnames for the website. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getWebsiteInfo

> Website getWebsiteInfo(id)

Get Website Order

Returns detailed information about a specific webhosting order including its domain, plan, and status.

### Example

```ts
import {
  Configuration,
  WebhostingApi,
} from '';
import type { GetWebsiteInfoRequest } from '';

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
  const api = new WebhostingApi(config);

  const body = {
    // number | The website service ID. Use `website_id` from `GET /websites`.
    id: 56,
  } satisfies GetWebsiteInfoRequest;

  try {
    const data = await api.getWebsiteInfo(body);
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
| **id** | `number` | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [Defaults to `undefined`] |

### Return type

[**Website**](Website.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Website details |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getWebsiteInvoices

> ChargeInvoiceRows getWebsiteInvoices(id)

Get Website Invoices

Returns the billing invoices associated with this webhosting service.

### Example

```ts
import {
  Configuration,
  WebhostingApi,
} from '';
import type { GetWebsiteInvoicesRequest } from '';

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
  const api = new WebhostingApi(config);

  const body = {
    // number | The website service ID. Use `website_id` from `GET /websites`.
    id: 56,
  } satisfies GetWebsiteInvoicesRequest;

  try {
    const data = await api.getWebsiteInvoices(body);
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
| **id** | `number` | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [Defaults to `undefined`] |

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


## getWebsiteList

> Array&lt;WebsiteRow&gt; getWebsiteList()

Get Website Listing

Gets a listing of your webhosting orders and service details.

### Example

```ts
import {
  Configuration,
  WebhostingApi,
} from '';
import type { GetWebsiteListRequest } from '';

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
  const api = new WebhostingApi(config);

  try {
    const data = await api.getWebsiteList();
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

[**Array&lt;WebsiteRow&gt;**](WebsiteRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`, `multipart/form-data`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Websites&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getWebsitesBackups

> WebsiteBackups getWebsitesBackups(id)

Get Website Backups

Gets a list of the backups that exist for a website and their sizes.

### Example

```ts
import {
  Configuration,
  WebhostingApi,
} from '';
import type { GetWebsitesBackupsRequest } from '';

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
  const api = new WebhostingApi(config);

  const body = {
    // number | The website service ID. Use `website_id` from `GET /websites`.
    id: 56,
  } satisfies GetWebsitesBackupsRequest;

  try {
    const data = await api.getWebsitesBackups(body);
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
| **id** | `number` | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [Defaults to `undefined`] |

### Return type

[**WebsiteBackups**](WebsiteBackups.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get Website Backups response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getWebsitesLogin

> WebsiteLoginResponse getWebsitesLogin(id)

Hosting Panel Auto Login

Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.

### Example

```ts
import {
  Configuration,
  WebhostingApi,
} from '';
import type { GetWebsitesLoginRequest } from '';

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
  const api = new WebhostingApi(config);

  const body = {
    // number | The website service ID. Use `website_id` from `GET /websites`.
    id: 56,
  } satisfies GetWebsitesLoginRequest;

  try {
    const data = await api.getWebsitesLogin(body);
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
| **id** | `number` | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [Defaults to `undefined`] |

### Return type

[**WebsiteLoginResponse**](WebsiteLoginResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get Website Login response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getWebsitesWelcomeEmail

> SuccessTextResponse getWebsitesWelcomeEmail(id)

Resend Website Welcome Email

Resends the welcome email containing hosting credentials and panel access details for the webhosting order.

### Example

```ts
import {
  Configuration,
  WebhostingApi,
} from '';
import type { GetWebsitesWelcomeEmailRequest } from '';

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
  const api = new WebhostingApi(config);

  const body = {
    // number | The website service ID. Use `website_id` from `GET /websites`.
    id: 56,
  } satisfies GetWebsitesWelcomeEmailRequest;

  try {
    const data = await api.getWebsitesWelcomeEmail(body);
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
| **id** | `number` | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [Defaults to `undefined`] |

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


## gettWebsiteReverseDns

> ReverseDnsEntries gettWebsiteReverseDns(id)

Get Website Reverse DNS

Returns the current reverse DNS (PTR record) entries for the website\&#39;s IP addresses.

### Example

```ts
import {
  Configuration,
  WebhostingApi,
} from '';
import type { GettWebsiteReverseDnsRequest } from '';

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
  const api = new WebhostingApi(config);

  const body = {
    // number | The website service ID. Use `website_id` from `GET /websites`.
    id: 56,
  } satisfies GettWebsiteReverseDnsRequest;

  try {
    const data = await api.gettWebsiteReverseDns(body);
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
| **id** | `number` | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [Defaults to `undefined`] |

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | List of reverse dns entries |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postWebsiteBuyIp

> PostWebsiteBuyIp200Response postWebsiteBuyIp(id, postWebsiteBuyIpRequest)

Update Website IP DNS

Updates the reverse DNS hostnames for the website\&#39;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.

### Example

```ts
import {
  Configuration,
  WebhostingApi,
} from '';
import type { PostWebsiteBuyIpOperationRequest } from '';

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
  const api = new WebhostingApi(config);

  const body = {
    // number | The website service ID. Use `website_id` from `GET /websites`.
    id: 56,
    // PostWebsiteBuyIpRequest
    postWebsiteBuyIpRequest: ...,
  } satisfies PostWebsiteBuyIpOperationRequest;

  try {
    const data = await api.postWebsiteBuyIp(body);
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
| **id** | `number` | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [Defaults to `undefined`] |
| **postWebsiteBuyIpRequest** | [PostWebsiteBuyIpRequest](PostWebsiteBuyIpRequest.md) |  | |

### Return type

[**PostWebsiteBuyIp200Response**](PostWebsiteBuyIp200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | DNS update result. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postWebsiteMigration

> PostWebsiteMigration200Response postWebsiteMigration(id, postWebsiteMigrationRequest)

Request Website Migration

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.

### Example

```ts
import {
  Configuration,
  WebhostingApi,
} from '';
import type { PostWebsiteMigrationOperationRequest } from '';

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
  const api = new WebhostingApi(config);

  const body = {
    // number | The website service ID. Use `website_id` from `GET /websites`.
    id: 56,
    // PostWebsiteMigrationRequest
    postWebsiteMigrationRequest: ...,
  } satisfies PostWebsiteMigrationOperationRequest;

  try {
    const data = await api.postWebsiteMigration(body);
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
| **id** | `number` | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [Defaults to `undefined`] |
| **postWebsiteMigrationRequest** | [PostWebsiteMigrationRequest](PostWebsiteMigrationRequest.md) |  | |

### Return type

[**PostWebsiteMigration200Response**](PostWebsiteMigration200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Migration request submitted. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postWebsitesReverseDns

> TextResponse postWebsitesReverseDns(id, reverseDnsEntries)

Update Website Reverse DNS

Updates the reverse DNS entries for each of the IP addresses for the website.

### Example

```ts
import {
  Configuration,
  WebhostingApi,
} from '';
import type { PostWebsitesReverseDnsRequest } from '';

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
  const api = new WebhostingApi(config);

  const body = {
    // number | The website service ID. Use `website_id` from `GET /websites`.
    id: 56,
    // ReverseDnsEntries
    reverseDnsEntries: ...,
  } satisfies PostWebsitesReverseDnsRequest;

  try {
    const data = await api.postWebsitesReverseDns(body);
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
| **id** | `number` | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [Defaults to `undefined`] |
| **reverseDnsEntries** | [ReverseDnsEntries](ReverseDnsEntries.md) |  | |

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
| **200** | Response from the update reverse DNS call. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## putWebsites

> putWebsites()

Validate Webhosting Order

Validates a webhosting order before placing it.

### Example

```ts
import {
  Configuration,
  WebhostingApi,
} from '';
import type { PutWebsitesRequest } from '';

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
  const api = new WebhostingApi(config);

  try {
    const data = await api.putWebsites();
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
| **200** | Validate Website order response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateWebsiteInfo

> SuccessTextResponse updateWebsiteInfo(id)

Update Website Order

Updates settings on a webhosting order.

### Example

```ts
import {
  Configuration,
  WebhostingApi,
} from '';
import type { UpdateWebsiteInfoRequest } from '';

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
  const api = new WebhostingApi(config);

  const body = {
    // string | The website service ID. Use `website_id` from `GET /websites`.
    id: id_example,
  } satisfies UpdateWebsiteInfoRequest;

  try {
    const data = await api.updateWebsiteInfo(body);
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
| **id** | `string` | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [Defaults to `undefined`] |

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


## webhostingCancel

> WebhostingCancel200Response webhostingCancel(id)

Cancel Website

Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.

### Example

```ts
import {
  Configuration,
  WebhostingApi,
} from '';
import type { WebhostingCancelRequest } from '';

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
  const api = new WebhostingApi(config);

  const body = {
    // string | The website service ID. Use `website_id` from `GET /websites`.
    id: 123,
  } satisfies WebhostingCancelRequest;

  try {
    const data = await api.webhostingCancel(body);
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
| **id** | `string` | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [Defaults to `undefined`] |

### Return type

[**WebhostingCancel200Response**](WebhostingCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Website cancel |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)

