# LicensesApi

All URIs are relative to *https://my.interserver.net/apiv2*

|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|[**addLicense**](#addlicense) | **POST** /licenses/order | Place License Order|
|[**getLicenseInfo**](#getlicenseinfo) | **GET** /licenses/{id} | Get License|
|[**getLicenseInvoices**](#getlicenseinvoices) | **GET** /licenses/{id}/invoices | Get License Invoices|
|[**getLicenseList**](#getlicenselist) | **GET** /licenses | List Licenses|
|[**getLicenseOrderCatTagInfo**](#getlicenseordercattaginfo) | **GET** /licenses/order/{catTag} | Get License Order Information for Category|
|[**getLicensesWelcomeEmail**](#getlicenseswelcomeemail) | **GET** /licenses/{id}/welcome_email | Resend License Welcome Email|
|[**getNewLicense**](#getnewlicense) | **GET** /licenses/order | Get License Order Information|
|[**licensesCancel**](#licensescancel) | **DELETE** /licenses/{id} | Cancel License|
|[**postLicenseChangeIp**](#postlicensechangeip) | **POST** /licenses/{id}/change_ip | Change License IP|
|[**putLicenses**](#putlicenses) | **PUT** /licenses/order | Validate License Order|
|[**updateLicenseInfo**](#updatelicenseinfo) | **POST** /licenses/{id} | Update License|

# **addLicense**
> ServiceOrderPostResponse addLicense()

Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.

### Example

```typescript
import {
    LicensesApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new LicensesApi(configuration);

const { status, data } = await apiInstance.addLicense();
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

# **getLicenseInfo**
> License getLicenseInfo()

Returns detailed information about a specific license including its type, IP assignment, and status.

### Example

```typescript
import {
    LicensesApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new LicensesApi(configuration);

let id: number; //The license service ID. Use `license_id` from `GET /licenses`. (default to undefined)

const { status, data } = await apiInstance.getLicenseInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | defaults to undefined|


### Return type

**License**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | License information. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getLicenseInvoices**
> ChargeInvoiceRows getLicenseInvoices()

Returns the billing invoices associated with this license service.

### Example

```typescript
import {
    LicensesApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new LicensesApi(configuration);

let id: number; //The license service ID. Use `license_id` from `GET /licenses`. (default to undefined)

const { status, data } = await apiInstance.getLicenseInvoices(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | defaults to undefined|


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

# **getLicenseList**
> Array<LicenseRow> getLicenseList()

Returns all software license services on the account with their current status and IP assignments.

### Example

```typescript
import {
    LicensesApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new LicensesApi(configuration);

const { status, data } = await apiInstance.getLicenseList();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**Array<LicenseRow>**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | The listing of &#x60;Licenses&#x60; services on your account. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getLicenseOrderCatTagInfo**
> getLicenseOrderCatTagInfo()

Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.

### Example

```typescript
import {
    LicensesApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new LicensesApi(configuration);

let catTag: string; //The license category tag (e.g. `cpanel`, `plesk`). Obtain valid values from the `GET /licenses/order` response. (default to undefined)

const { status, data } = await apiInstance.getLicenseOrderCatTagInfo(
    catTag
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **catTag** | [**string**] | The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response. | defaults to undefined|


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
|**200** | License types and pricing for the specified category. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getLicensesWelcomeEmail**
> SuccessTextResponse getLicensesWelcomeEmail()

Resends the welcome email for the license service. The email contains the license key and activation instructions.

### Example

```typescript
import {
    LicensesApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new LicensesApi(configuration);

let id: number; //The license service ID. Use `license_id` from `GET /licenses`. (default to undefined)

const { status, data } = await apiInstance.getLicensesWelcomeEmail(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | defaults to undefined|


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

# **getNewLicense**
> LicensesOrder getNewLicense()

Retrieves available license types, categories, and pricing for ordering a new license.

### Example

```typescript
import {
    LicensesApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new LicensesApi(configuration);

const { status, data } = await apiInstance.getNewLicense();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**LicensesOrder**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | License ordering information. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **licensesCancel**
> LicensesCancel200Response licensesCancel()

Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Example

```typescript
import {
    LicensesApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new LicensesApi(configuration);

let id: number; //The license service ID. Use `license_id` from `GET /licenses`. (default to undefined)

const { status, data } = await apiInstance.licensesCancel(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | defaults to undefined|


### Return type

**LicensesCancel200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | License Cancel |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postLicenseChangeIp**
> SuccessTextResponse postLicenseChangeIp(ipObject)

Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.

### Example

```typescript
import {
    LicensesApi,
    Configuration,
    IpObject
} from './api';

const configuration = new Configuration();
const apiInstance = new LicensesApi(configuration);

let id: number; //The license service ID. Use `license_id` from `GET /licenses`. (default to undefined)
let ipObject: IpObject; //

const { status, data } = await apiInstance.postLicenseChangeIp(
    id,
    ipObject
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **ipObject** | **IpObject**|  | |
| **id** | [**number**] | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | defaults to undefined|


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

# **putLicenses**
> putLicenses()

Validates a license order before placing it. Use this to check for errors before committing to a purchase.

### Example

```typescript
import {
    LicensesApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new LicensesApi(configuration);

const { status, data } = await apiInstance.putLicenses();
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
|**200** | Validate Licenses order response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateLicenseInfo**
> SuccessTextResponse updateLicenseInfo()

Updates settings on a license service such as its assigned IP.

### Example

```typescript
import {
    LicensesApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new LicensesApi(configuration);

let id: string; //The license service ID. Use `license_id` from `GET /licenses`. (default to undefined)

const { status, data } = await apiInstance.updateLicenseInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**string**] | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | defaults to undefined|


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

