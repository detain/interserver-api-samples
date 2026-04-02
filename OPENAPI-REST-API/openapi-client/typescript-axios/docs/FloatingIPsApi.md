# FloatingIPsApi

All URIs are relative to *https://my.interserver.net/apiv2*

|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|[**addFloatingIp**](#addfloatingip) | **POST** /floating_ips/order | Place Floating IP Order|
|[**floatingIpsCancel**](#floatingipscancel) | **DELETE** /floating_ips/{id} | Cancel Floating IP|
|[**getFloatingIpInfo**](#getfloatingipinfo) | **GET** /floating_ips/{id} | View Floating IP|
|[**getFloatingIpInvoices**](#getfloatingipinvoices) | **GET** /floating_ips/{id}/invoices | Get Floating IP Invoices|
|[**getFloatingIpsList**](#getfloatingipslist) | **GET** /floating_ips | List Floating IPs|
|[**getFloatingIpsWelcomeEmail**](#getfloatingipswelcomeemail) | **GET** /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email|
|[**getNewFloatingIp**](#getnewfloatingip) | **GET** /floating_ips/order | Get Floating IP Ordering Information|
|[**postFloatingIpsChangeIp**](#postfloatingipschangeip) | **POST** /floating_ips/{id}/change_ip | Change Floating IP Target|
|[**putFloatingIps**](#putfloatingips) | **PUT** /floating_ips/order | Validate Floating IP Order|
|[**updateFloatingIpInfo**](#updatefloatingipinfo) | **POST** /floating_ips/{id} | Update Floating IP|

# **addFloatingIp**
> ServiceOrderPostResponse addFloatingIp()

Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.

### Example

```typescript
import {
    FloatingIPsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new FloatingIPsApi(configuration);

const { status, data } = await apiInstance.addFloatingIp();
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

# **floatingIpsCancel**
> FloatingIpsCancel200Response floatingIpsCancel()

Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.

### Example

```typescript
import {
    FloatingIPsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new FloatingIPsApi(configuration);

let id: number; //The Floating IP service ID. Use the ID from `GET /floating_ips`. (default to undefined)

const { status, data } = await apiInstance.floatingIpsCancel(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | defaults to undefined|


### Return type

**FloatingIpsCancel200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Floating Ip Cancel |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getFloatingIpInfo**
> object getFloatingIpInfo()

Returns detailed information about a specific Floating IP service including its current target IP assignment.

### Example

```typescript
import {
    FloatingIPsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new FloatingIPsApi(configuration);

let id: number; //The Floating IP service ID. Use the ID from `GET /floating_ips`. (default to undefined)

const { status, data } = await apiInstance.getFloatingIpInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | defaults to undefined|


### Return type

**object**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Detailed Floating IP service information. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getFloatingIpInvoices**
> ChargeInvoiceRows getFloatingIpInvoices()

Returns the billing invoices associated with this Floating IP service.

### Example

```typescript
import {
    FloatingIPsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new FloatingIPsApi(configuration);

let id: number; //The Floating IP service ID. Use the ID from `GET /floating_ips`. (default to undefined)

const { status, data } = await apiInstance.getFloatingIpInvoices(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | defaults to undefined|


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

# **getFloatingIpsList**
> getFloatingIpsList()

Returns all Floating IP services on the account with their current status and assignment details.

### Example

```typescript
import {
    FloatingIPsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new FloatingIPsApi(configuration);

const { status, data } = await apiInstance.getFloatingIpsList();
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
|**200** | The listing of &#x60;Floating IPs&#x60; services on your account. |  -  |
|**401** | Unauthorized |  -  |
|**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getFloatingIpsWelcomeEmail**
> SuccessTextResponse getFloatingIpsWelcomeEmail()

Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.

### Example

```typescript
import {
    FloatingIPsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new FloatingIPsApi(configuration);

let id: number; //The Floating IP service ID. Use the ID from `GET /floating_ips`. (default to undefined)

const { status, data } = await apiInstance.getFloatingIpsWelcomeEmail(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | defaults to undefined|


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

# **getNewFloatingIp**
> object getNewFloatingIp()

Retrieves available options and pricing for ordering a new Floating IP.

### Example

```typescript
import {
    FloatingIPsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new FloatingIPsApi(configuration);

const { status, data } = await apiInstance.getNewFloatingIp();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**object**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Available options and pricing for ordering a Floating IP. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postFloatingIpsChangeIp**
> SuccessTextResponse postFloatingIpsChangeIp()

Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.

### Example

```typescript
import {
    FloatingIPsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new FloatingIPsApi(configuration);

let id: number; //The Floating IP service ID. Use the ID from `GET /floating_ips`. (default to undefined)
let ip: string; //IP Address (default to undefined)

const { status, data } = await apiInstance.postFloatingIpsChangeIp(
    id,
    ip
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | defaults to undefined|
| **ip** | [**string**] | IP Address | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **putFloatingIps**
> putFloatingIps()

Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.

### Example

```typescript
import {
    FloatingIPsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new FloatingIPsApi(configuration);

const { status, data } = await apiInstance.putFloatingIps();
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
|**200** | Validate Floating IPs order response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateFloatingIpInfo**
> SuccessTextResponse updateFloatingIpInfo()

Updates settings on a Floating IP service, such as its label or configuration metadata.

### Example

```typescript
import {
    FloatingIPsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new FloatingIPsApi(configuration);

let id: string; //The Floating IP service ID. Use the ID from `GET /floating_ips`. (default to undefined)

const { status, data } = await apiInstance.updateFloatingIpInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**string**] | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | defaults to undefined|


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

