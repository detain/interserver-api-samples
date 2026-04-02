# .LicensesApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addLicense**](LicensesApi.md#addLicense) | **POST** /licenses/order | Place License Order
[**getLicenseInfo**](LicensesApi.md#getLicenseInfo) | **GET** /licenses/{id} | Get License
[**getLicenseInvoices**](LicensesApi.md#getLicenseInvoices) | **GET** /licenses/{id}/invoices | Get License Invoices
[**getLicenseList**](LicensesApi.md#getLicenseList) | **GET** /licenses | List Licenses
[**getLicenseOrderCatTagInfo**](LicensesApi.md#getLicenseOrderCatTagInfo) | **GET** /licenses/order/{catTag} | Get License Order Information for Category
[**getLicensesWelcomeEmail**](LicensesApi.md#getLicensesWelcomeEmail) | **GET** /licenses/{id}/welcome_email | Resend License Welcome Email
[**getNewLicense**](LicensesApi.md#getNewLicense) | **GET** /licenses/order | Get License Order Information
[**licensesCancel**](LicensesApi.md#licensesCancel) | **DELETE** /licenses/{id} | Cancel License
[**postLicenseChangeIp**](LicensesApi.md#postLicenseChangeIp) | **POST** /licenses/{id}/change_ip | Change License IP
[**putLicenses**](LicensesApi.md#putLicenses) | **PUT** /licenses/order | Validate License Order
[**updateLicenseInfo**](LicensesApi.md#updateLicenseInfo) | **POST** /licenses/{id} | Update License


# **addLicense**
> ServiceOrderPostResponse addLicense()

Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.

### Example


```typescript
import { createConfiguration, LicensesApi } from '';

const configuration = createConfiguration();
const apiInstance = new LicensesApi(configuration);

const request = {};

const data = await apiInstance.addLicense(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**ServiceOrderPostResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Order placed successfully. Use the invoice ID to proceed to payment via &#x60;/pay/{method}/{invoices}&#x60; or view the invoice at &#x60;/billing/invoices/{id}&#x60;. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getLicenseInfo**
> License getLicenseInfo()

Returns detailed information about a specific license including its type, IP assignment, and status.

### Example


```typescript
import { createConfiguration, LicensesApi } from '';
import type { LicensesApiGetLicenseInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new LicensesApi(configuration);

const request: LicensesApiGetLicenseInfoRequest = {
    // The license service ID. Use `license_id` from `GET /licenses`.
  id: 1,
};

const data = await apiInstance.getLicenseInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | defaults to undefined


### Return type

**License**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | License information. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getLicenseInvoices**
> ChargeInvoiceRows getLicenseInvoices()

Returns the billing invoices associated with this license service.

### Example


```typescript
import { createConfiguration, LicensesApi } from '';
import type { LicensesApiGetLicenseInvoicesRequest } from '';

const configuration = createConfiguration();
const apiInstance = new LicensesApi(configuration);

const request: LicensesApiGetLicenseInvoicesRequest = {
    // The license service ID. Use `license_id` from `GET /licenses`.
  id: 1,
};

const data = await apiInstance.getLicenseInvoices(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | defaults to undefined


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

# **getLicenseList**
> Array<LicenseRow> getLicenseList()

Returns all software license services on the account with their current status and IP assignments.

### Example


```typescript
import { createConfiguration, LicensesApi } from '';

const configuration = createConfiguration();
const apiInstance = new LicensesApi(configuration);

const request = {};

const data = await apiInstance.getLicenseList(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**Array<LicenseRow>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The listing of &#x60;Licenses&#x60; services on your account. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getLicenseOrderCatTagInfo**
> void getLicenseOrderCatTagInfo()

Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.

### Example


```typescript
import { createConfiguration, LicensesApi } from '';
import type { LicensesApiGetLicenseOrderCatTagInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new LicensesApi(configuration);

const request: LicensesApiGetLicenseOrderCatTagInfoRequest = {
    // The license category tag (e.g. `cpanel`, `plesk`). Obtain valid values from the `GET /licenses/order` response.
  catTag: "catTag_example",
};

const data = await apiInstance.getLicenseOrderCatTagInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **catTag** | [**string**] | The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response. | defaults to undefined


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
**200** | License types and pricing for the specified category. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getLicensesWelcomeEmail**
> SuccessTextResponse getLicensesWelcomeEmail()

Resends the welcome email for the license service. The email contains the license key and activation instructions.

### Example


```typescript
import { createConfiguration, LicensesApi } from '';
import type { LicensesApiGetLicensesWelcomeEmailRequest } from '';

const configuration = createConfiguration();
const apiInstance = new LicensesApi(configuration);

const request: LicensesApiGetLicensesWelcomeEmailRequest = {
    // The license service ID. Use `license_id` from `GET /licenses`.
  id: 1,
};

const data = await apiInstance.getLicensesWelcomeEmail(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | defaults to undefined


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

# **getNewLicense**
> LicensesOrder getNewLicense()

Retrieves available license types, categories, and pricing for ordering a new license.

### Example


```typescript
import { createConfiguration, LicensesApi } from '';

const configuration = createConfiguration();
const apiInstance = new LicensesApi(configuration);

const request = {};

const data = await apiInstance.getNewLicense(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**LicensesOrder**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | License ordering information. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **licensesCancel**
> LicensesCancel200Response licensesCancel()

Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Example


```typescript
import { createConfiguration, LicensesApi } from '';
import type { LicensesApiLicensesCancelRequest } from '';

const configuration = createConfiguration();
const apiInstance = new LicensesApi(configuration);

const request: LicensesApiLicensesCancelRequest = {
    // The license service ID. Use `license_id` from `GET /licenses`.
  id: 1,
};

const data = await apiInstance.licensesCancel(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | defaults to undefined


### Return type

**LicensesCancel200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | License Cancel |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postLicenseChangeIp**
> SuccessTextResponse postLicenseChangeIp(ipObject)

Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.

### Example


```typescript
import { createConfiguration, LicensesApi } from '';
import type { LicensesApiPostLicenseChangeIpRequest } from '';

const configuration = createConfiguration();
const apiInstance = new LicensesApi(configuration);

const request: LicensesApiPostLicenseChangeIpRequest = {
    // The license service ID. Use `license_id` from `GET /licenses`.
  id: 1,
  
  ipObject: {
    ip: "ip_example",
  },
};

const data = await apiInstance.postLicenseChangeIp(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ipObject** | **IpObject**|  |
 **id** | [**number**] | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | defaults to undefined


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

# **putLicenses**
> void putLicenses()

Validates a license order before placing it. Use this to check for errors before committing to a purchase.

### Example


```typescript
import { createConfiguration, LicensesApi } from '';

const configuration = createConfiguration();
const apiInstance = new LicensesApi(configuration);

const request = {};

const data = await apiInstance.putLicenses(request);
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
**200** | Validate Licenses order response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateLicenseInfo**
> SuccessTextResponse updateLicenseInfo()

Updates settings on a license service such as its assigned IP.

### Example


```typescript
import { createConfiguration, LicensesApi } from '';
import type { LicensesApiUpdateLicenseInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new LicensesApi(configuration);

const request: LicensesApiUpdateLicenseInfoRequest = {
    // The license service ID. Use `license_id` from `GET /licenses`.
  id: "id_example",
};

const data = await apiInstance.updateLicenseInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**string**] | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | defaults to undefined


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


