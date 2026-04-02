# .WebhostingApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addWebsite**](WebhostingApi.md#addWebsite) | **POST** /websites/order | Place Website Order
[**getNewWebsite**](WebhostingApi.md#getNewWebsite) | **GET** /websites/order | Website Ordering Information
[**getWebsiteBuyIp**](WebhostingApi.md#getWebsiteBuyIp) | **GET** /websites/{id}/buy_ip | Get Website IP Information
[**getWebsiteInfo**](WebhostingApi.md#getWebsiteInfo) | **GET** /websites/{id} | Get Website Order
[**getWebsiteInvoices**](WebhostingApi.md#getWebsiteInvoices) | **GET** /websites/{id}/invoices | Get Website Invoices
[**getWebsiteList**](WebhostingApi.md#getWebsiteList) | **GET** /websites | Get Website Listing
[**getWebsitesBackups**](WebhostingApi.md#getWebsitesBackups) | **GET** /websites/{id}/backups | Get Website Backups
[**getWebsitesLogin**](WebhostingApi.md#getWebsitesLogin) | **GET** /websites/{id}/login | Hosting Panel Auto Login
[**getWebsitesWelcomeEmail**](WebhostingApi.md#getWebsitesWelcomeEmail) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email
[**gettWebsiteReverseDns**](WebhostingApi.md#gettWebsiteReverseDns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS
[**postWebsiteBuyIp**](WebhostingApi.md#postWebsiteBuyIp) | **POST** /websites/{id}/buy_ip | Update Website IP DNS
[**postWebsiteMigration**](WebhostingApi.md#postWebsiteMigration) | **POST** /websites/{id}/migration | Request Website Migration
[**postWebsitesReverseDns**](WebhostingApi.md#postWebsitesReverseDns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS
[**putWebsites**](WebhostingApi.md#putWebsites) | **PUT** /websites/order | Validate Webhosting Order
[**updateWebsiteInfo**](WebhostingApi.md#updateWebsiteInfo) | **POST** /websites/{id} | Update Website Order
[**webhostingCancel**](WebhostingApi.md#webhostingCancel) | **DELETE** /websites/{id} | Cancel Website


# **addWebsite**
> ServiceOrderPostResponse addWebsite()

Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.

### Example


```typescript
import { createConfiguration, WebhostingApi } from '';

const configuration = createConfiguration();
const apiInstance = new WebhostingApi(configuration);

const request = {};

const data = await apiInstance.addWebsite(request);
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

# **getNewWebsite**
> WebsitesOrder getNewWebsite()

Retrieves available webhosting plans and pricing for ordering.

### Example


```typescript
import { createConfiguration, WebhostingApi } from '';

const configuration = createConfiguration();
const apiInstance = new WebhostingApi(configuration);

const request = {};

const data = await apiInstance.getNewWebsite(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**WebsitesOrder**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Website ordering details including available plans and pricing. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getWebsiteBuyIp**
> GetWebsiteBuyIp200Response getWebsiteBuyIp()

Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.

### Example


```typescript
import { createConfiguration, WebhostingApi } from '';
import type { WebhostingApiGetWebsiteBuyIpRequest } from '';

const configuration = createConfiguration();
const apiInstance = new WebhostingApi(configuration);

const request: WebhostingApiGetWebsiteBuyIpRequest = {
    // The website service ID. Use `website_id` from `GET /websites`.
  id: 1,
};

const data = await apiInstance.getWebsiteBuyIp(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined


### Return type

**GetWebsiteBuyIp200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Current IP addresses and their reverse DNS hostnames for the website. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getWebsiteInfo**
> Website getWebsiteInfo()

Returns detailed information about a specific webhosting order including its domain, plan, and status.

### Example


```typescript
import { createConfiguration, WebhostingApi } from '';
import type { WebhostingApiGetWebsiteInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new WebhostingApi(configuration);

const request: WebhostingApiGetWebsiteInfoRequest = {
    // The website service ID. Use `website_id` from `GET /websites`.
  id: 1,
};

const data = await apiInstance.getWebsiteInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined


### Return type

**Website**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Website details |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getWebsiteInvoices**
> ChargeInvoiceRows getWebsiteInvoices()

Returns the billing invoices associated with this webhosting service.

### Example


```typescript
import { createConfiguration, WebhostingApi } from '';
import type { WebhostingApiGetWebsiteInvoicesRequest } from '';

const configuration = createConfiguration();
const apiInstance = new WebhostingApi(configuration);

const request: WebhostingApiGetWebsiteInvoicesRequest = {
    // The website service ID. Use `website_id` from `GET /websites`.
  id: 1,
};

const data = await apiInstance.getWebsiteInvoices(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined


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

# **getWebsiteList**
> Array<WebsiteRow> getWebsiteList()

Gets a listing of your webhosting orders and service details.

### Example


```typescript
import { createConfiguration, WebhostingApi } from '';

const configuration = createConfiguration();
const apiInstance = new WebhostingApi(configuration);

const request = {};

const data = await apiInstance.getWebsiteList(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**Array<WebsiteRow>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, multipart/form-data


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The listing of &#x60;Websites&#x60; services on your account. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getWebsitesBackups**
> WebsiteBackups getWebsitesBackups()

Gets a list of the backups that exist for a website and their sizes.

### Example


```typescript
import { createConfiguration, WebhostingApi } from '';
import type { WebhostingApiGetWebsitesBackupsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new WebhostingApi(configuration);

const request: WebhostingApiGetWebsitesBackupsRequest = {
    // The website service ID. Use `website_id` from `GET /websites`.
  id: 1,
};

const data = await apiInstance.getWebsitesBackups(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined


### Return type

**WebsiteBackups**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Get Website Backups response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getWebsitesLogin**
> WebsiteLoginResponse getWebsitesLogin()

Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.

### Example


```typescript
import { createConfiguration, WebhostingApi } from '';
import type { WebhostingApiGetWebsitesLoginRequest } from '';

const configuration = createConfiguration();
const apiInstance = new WebhostingApi(configuration);

const request: WebhostingApiGetWebsitesLoginRequest = {
    // The website service ID. Use `website_id` from `GET /websites`.
  id: 1,
};

const data = await apiInstance.getWebsitesLogin(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined


### Return type

**WebsiteLoginResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Get Website Login response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getWebsitesWelcomeEmail**
> SuccessTextResponse getWebsitesWelcomeEmail()

Resends the welcome email containing hosting credentials and panel access details for the webhosting order.

### Example


```typescript
import { createConfiguration, WebhostingApi } from '';
import type { WebhostingApiGetWebsitesWelcomeEmailRequest } from '';

const configuration = createConfiguration();
const apiInstance = new WebhostingApi(configuration);

const request: WebhostingApiGetWebsitesWelcomeEmailRequest = {
    // The website service ID. Use `website_id` from `GET /websites`.
  id: 1,
};

const data = await apiInstance.getWebsitesWelcomeEmail(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined


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

# **gettWebsiteReverseDns**
> ReverseDnsEntries gettWebsiteReverseDns()

Returns the current reverse DNS (PTR record) entries for the website\'s IP addresses.

### Example


```typescript
import { createConfiguration, WebhostingApi } from '';
import type { WebhostingApiGettWebsiteReverseDnsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new WebhostingApi(configuration);

const request: WebhostingApiGettWebsiteReverseDnsRequest = {
    // The website service ID. Use `website_id` from `GET /websites`.
  id: 1,
};

const data = await apiInstance.gettWebsiteReverseDns(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined


### Return type

**ReverseDnsEntries**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | List of reverse dns entries |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postWebsiteBuyIp**
> PostWebsiteBuyIp200Response postWebsiteBuyIp(postWebsiteBuyIpRequest)

Updates the reverse DNS hostnames for the website\'s IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.

### Example


```typescript
import { createConfiguration, WebhostingApi } from '';
import type { WebhostingApiPostWebsiteBuyIpRequest } from '';

const configuration = createConfiguration();
const apiInstance = new WebhostingApi(configuration);

const request: WebhostingApiPostWebsiteBuyIpRequest = {
    // The website service ID. Use `website_id` from `GET /websites`.
  id: 1,
  
  postWebsiteBuyIpRequest: {
    ips: {
      "key": "key_example",
    },
  },
};

const data = await apiInstance.postWebsiteBuyIp(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **postWebsiteBuyIpRequest** | **PostWebsiteBuyIpRequest**|  |
 **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined


### Return type

**PostWebsiteBuyIp200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | DNS update result. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postWebsiteMigration**
> PostWebsiteMigration200Response postWebsiteMigration(postWebsiteMigrationRequest)

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.

### Example


```typescript
import { createConfiguration, WebhostingApi } from '';
import type { WebhostingApiPostWebsiteMigrationRequest } from '';

const configuration = createConfiguration();
const apiInstance = new WebhostingApi(configuration);

const request: WebhostingApiPostWebsiteMigrationRequest = {
    // The website service ID. Use `website_id` from `GET /websites`.
  id: 1,
  
  postWebsiteMigrationRequest: {
    custPortal: "custPortal_example",
    regEmail: "regEmail_example",
    password: "password_example",
    ctrlPanel: "ctrlPanel_example",
    ftpUsername: "ftpUsername_example",
    ftpPassword: "ftpPassword_example",
    siteBusyMig: "siteBusyMig_example",
    splReqMig: "splReqMig_example",
    domainReg: "domainReg_example",
    dataMig: "dataMig_example",
    domainRegPortal: "domainRegPortal_example",
    domainRegEmail: "domainRegEmail_example",
    domainRegPassword: "domainRegPassword_example",
  },
};

const data = await apiInstance.postWebsiteMigration(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **postWebsiteMigrationRequest** | **PostWebsiteMigrationRequest**|  |
 **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined


### Return type

**PostWebsiteMigration200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Migration request submitted. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postWebsitesReverseDns**
> TextResponse postWebsitesReverseDns(reverseDnsEntries)

Updates the reverse DNS entries for each of the IP addresses for the website.

### Example


```typescript
import { createConfiguration, WebhostingApi } from '';
import type { WebhostingApiPostWebsitesReverseDnsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new WebhostingApi(configuration);

const request: WebhostingApiPostWebsitesReverseDnsRequest = {
    // The website service ID. Use `website_id` from `GET /websites`.
  id: 1,
  
  reverseDnsEntries: {
    ips: {},
  },
};

const data = await apiInstance.postWebsitesReverseDns(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **reverseDnsEntries** | **ReverseDnsEntries**|  |
 **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined


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
**200** | Response from the update reverse DNS call. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **putWebsites**
> void putWebsites()

Validates a webhosting order before placing it.

### Example


```typescript
import { createConfiguration, WebhostingApi } from '';

const configuration = createConfiguration();
const apiInstance = new WebhostingApi(configuration);

const request = {};

const data = await apiInstance.putWebsites(request);
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
**200** | Validate Website order response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateWebsiteInfo**
> SuccessTextResponse updateWebsiteInfo()

Updates settings on a webhosting order.

### Example


```typescript
import { createConfiguration, WebhostingApi } from '';
import type { WebhostingApiUpdateWebsiteInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new WebhostingApi(configuration);

const request: WebhostingApiUpdateWebsiteInfoRequest = {
    // The website service ID. Use `website_id` from `GET /websites`.
  id: "id_example",
};

const data = await apiInstance.updateWebsiteInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**string**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined


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

# **webhostingCancel**
> WebhostingCancel200Response webhostingCancel()

Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.

### Example


```typescript
import { createConfiguration, WebhostingApi } from '';
import type { WebhostingApiWebhostingCancelRequest } from '';

const configuration = createConfiguration();
const apiInstance = new WebhostingApi(configuration);

const request: WebhostingApiWebhostingCancelRequest = {
    // The website service ID. Use `website_id` from `GET /websites`.
  id: "123",
};

const data = await apiInstance.webhostingCancel(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**string**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined


### Return type

**WebhostingCancel200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Website cancel |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)


