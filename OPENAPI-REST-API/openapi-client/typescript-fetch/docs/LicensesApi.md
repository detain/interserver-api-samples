# LicensesApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addLicense**](LicensesApi.md#addlicense) | **POST** /licenses/order | Place License Order |
| [**getLicenseInfo**](LicensesApi.md#getlicenseinfo) | **GET** /licenses/{id} | Get License |
| [**getLicenseInvoices**](LicensesApi.md#getlicenseinvoices) | **GET** /licenses/{id}/invoices | Get License Invoices |
| [**getLicenseList**](LicensesApi.md#getlicenselist) | **GET** /licenses | List Licenses |
| [**getLicenseOrderCatTagInfo**](LicensesApi.md#getlicenseordercattaginfo) | **GET** /licenses/order/{catTag} | Get License Order Information for Category |
| [**getLicensesWelcomeEmail**](LicensesApi.md#getlicenseswelcomeemail) | **GET** /licenses/{id}/welcome_email | Resend License Welcome Email |
| [**getNewLicense**](LicensesApi.md#getnewlicense) | **GET** /licenses/order | Get License Order Information |
| [**licensesCancel**](LicensesApi.md#licensescancel) | **DELETE** /licenses/{id} | Cancel License |
| [**postLicenseChangeIp**](LicensesApi.md#postlicensechangeip) | **POST** /licenses/{id}/change_ip | Change License IP |
| [**putLicenses**](LicensesApi.md#putlicenses) | **PUT** /licenses/order | Validate License Order |
| [**updateLicenseInfo**](LicensesApi.md#updatelicenseinfo) | **POST** /licenses/{id} | Update License |



## addLicense

> ServiceOrderPostResponse addLicense()

Place License Order

Places an order for a new software license. Use &#x60;PUT /licenses/order&#x60; to validate the order first.

### Example

```ts
import {
  Configuration,
  LicensesApi,
} from '';
import type { AddLicenseRequest } from '';

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
  const api = new LicensesApi(config);

  try {
    const data = await api.addLicense();
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


## getLicenseInfo

> License getLicenseInfo(id)

Get License

Returns detailed information about a specific license including its type, IP assignment, and status.

### Example

```ts
import {
  Configuration,
  LicensesApi,
} from '';
import type { GetLicenseInfoRequest } from '';

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
  const api = new LicensesApi(config);

  const body = {
    // number | The license service ID. Use `license_id` from `GET /licenses`.
    id: 56,
  } satisfies GetLicenseInfoRequest;

  try {
    const data = await api.getLicenseInfo(body);
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
| **id** | `number` | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [Defaults to `undefined`] |

### Return type

[**License**](License.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | License information. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getLicenseInvoices

> ChargeInvoiceRows getLicenseInvoices(id)

Get License Invoices

Returns the billing invoices associated with this license service.

### Example

```ts
import {
  Configuration,
  LicensesApi,
} from '';
import type { GetLicenseInvoicesRequest } from '';

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
  const api = new LicensesApi(config);

  const body = {
    // number | The license service ID. Use `license_id` from `GET /licenses`.
    id: 56,
  } satisfies GetLicenseInvoicesRequest;

  try {
    const data = await api.getLicenseInvoices(body);
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
| **id** | `number` | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [Defaults to `undefined`] |

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


## getLicenseList

> Array&lt;LicenseRow&gt; getLicenseList()

List Licenses

Returns all software license services on the account with their current status and IP assignments.

### Example

```ts
import {
  Configuration,
  LicensesApi,
} from '';
import type { GetLicenseListRequest } from '';

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
  const api = new LicensesApi(config);

  try {
    const data = await api.getLicenseList();
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

[**Array&lt;LicenseRow&gt;**](LicenseRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Licenses&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getLicenseOrderCatTagInfo

> getLicenseOrderCatTagInfo(catTag)

Get License Order Information for Category

Returns the available license types and pricing for a specific license category. Use the category tags from &#x60;GET /licenses/order&#x60; to identify valid values.

### Example

```ts
import {
  Configuration,
  LicensesApi,
} from '';
import type { GetLicenseOrderCatTagInfoRequest } from '';

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
  const api = new LicensesApi(config);

  const body = {
    // string | The license category tag (e.g. `cpanel`, `plesk`). Obtain valid values from the `GET /licenses/order` response.
    catTag: catTag_example,
  } satisfies GetLicenseOrderCatTagInfoRequest;

  try {
    const data = await api.getLicenseOrderCatTagInfo(body);
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
| **catTag** | `string` | The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response. | [Defaults to `undefined`] |

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
| **200** | License types and pricing for the specified category. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getLicensesWelcomeEmail

> SuccessTextResponse getLicensesWelcomeEmail(id)

Resend License Welcome Email

Resends the welcome email for the license service. The email contains the license key and activation instructions.

### Example

```ts
import {
  Configuration,
  LicensesApi,
} from '';
import type { GetLicensesWelcomeEmailRequest } from '';

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
  const api = new LicensesApi(config);

  const body = {
    // number | The license service ID. Use `license_id` from `GET /licenses`.
    id: 56,
  } satisfies GetLicensesWelcomeEmailRequest;

  try {
    const data = await api.getLicensesWelcomeEmail(body);
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
| **id** | `number` | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [Defaults to `undefined`] |

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


## getNewLicense

> LicensesOrder getNewLicense()

Get License Order Information

Retrieves available license types, categories, and pricing for ordering a new license.

### Example

```ts
import {
  Configuration,
  LicensesApi,
} from '';
import type { GetNewLicenseRequest } from '';

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
  const api = new LicensesApi(config);

  try {
    const data = await api.getNewLicense();
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

[**LicensesOrder**](LicensesOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | License ordering information. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## licensesCancel

> LicensesCancel200Response licensesCancel(id)

Cancel License

Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Example

```ts
import {
  Configuration,
  LicensesApi,
} from '';
import type { LicensesCancelRequest } from '';

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
  const api = new LicensesApi(config);

  const body = {
    // number | The license service ID. Use `license_id` from `GET /licenses`.
    id: 56,
  } satisfies LicensesCancelRequest;

  try {
    const data = await api.licensesCancel(body);
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
| **id** | `number` | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [Defaults to `undefined`] |

### Return type

[**LicensesCancel200Response**](LicensesCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | License Cancel |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postLicenseChangeIp

> SuccessTextResponse postLicenseChangeIp(id, ipObject)

Change License IP

Changes the IP address associated with the license. The service must be active. Use &#x60;GET /licenses/{id}&#x60; to view the current IP assignment before making changes.

### Example

```ts
import {
  Configuration,
  LicensesApi,
} from '';
import type { PostLicenseChangeIpRequest } from '';

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
  const api = new LicensesApi(config);

  const body = {
    // number | The license service ID. Use `license_id` from `GET /licenses`.
    id: 56,
    // IpObject
    ipObject: ...,
  } satisfies PostLicenseChangeIpRequest;

  try {
    const data = await api.postLicenseChangeIp(body);
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
| **id** | `number` | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [Defaults to `undefined`] |
| **ipObject** | [IpObject](IpObject.md) |  | |

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


## putLicenses

> putLicenses()

Validate License Order

Validates a license order before placing it. Use this to check for errors before committing to a purchase.

### Example

```ts
import {
  Configuration,
  LicensesApi,
} from '';
import type { PutLicensesRequest } from '';

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
  const api = new LicensesApi(config);

  try {
    const data = await api.putLicenses();
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
| **200** | Validate Licenses order response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateLicenseInfo

> SuccessTextResponse updateLicenseInfo(id)

Update License

Updates settings on a license service such as its assigned IP.

### Example

```ts
import {
  Configuration,
  LicensesApi,
} from '';
import type { UpdateLicenseInfoRequest } from '';

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
  const api = new LicensesApi(config);

  const body = {
    // string | The license service ID. Use `license_id` from `GET /licenses`.
    id: id_example,
  } satisfies UpdateLicenseInfoRequest;

  try {
    const data = await api.updateLicenseInfo(body);
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
| **id** | `string` | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [Defaults to `undefined`] |

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

