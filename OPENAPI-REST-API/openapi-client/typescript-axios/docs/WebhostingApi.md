# WebhostingApi

All URIs are relative to *https://my.interserver.net/apiv2*

|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|[**addWebsite**](#addwebsite) | **POST** /websites/order | Place Website Order|
|[**getNewWebsite**](#getnewwebsite) | **GET** /websites/order | Website Ordering Information|
|[**getWebsiteBuyIp**](#getwebsitebuyip) | **GET** /websites/{id}/buy_ip | Get Website IP Information|
|[**getWebsiteInfo**](#getwebsiteinfo) | **GET** /websites/{id} | Get Website Order|
|[**getWebsiteInvoices**](#getwebsiteinvoices) | **GET** /websites/{id}/invoices | Get Website Invoices|
|[**getWebsiteList**](#getwebsitelist) | **GET** /websites | Get Website Listing|
|[**getWebsitesBackups**](#getwebsitesbackups) | **GET** /websites/{id}/backups | Get Website Backups|
|[**getWebsitesLogin**](#getwebsiteslogin) | **GET** /websites/{id}/login | Hosting Panel Auto Login|
|[**getWebsitesWelcomeEmail**](#getwebsiteswelcomeemail) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email|
|[**gettWebsiteReverseDns**](#gettwebsitereversedns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS|
|[**postWebsiteBuyIp**](#postwebsitebuyip) | **POST** /websites/{id}/buy_ip | Update Website IP DNS|
|[**postWebsiteMigration**](#postwebsitemigration) | **POST** /websites/{id}/migration | Request Website Migration|
|[**postWebsitesReverseDns**](#postwebsitesreversedns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS|
|[**putWebsites**](#putwebsites) | **PUT** /websites/order | Validate Webhosting Order|
|[**updateWebsiteInfo**](#updatewebsiteinfo) | **POST** /websites/{id} | Update Website Order|
|[**webhostingCancel**](#webhostingcancel) | **DELETE** /websites/{id} | Cancel Website|

# **addWebsite**
> addWebsite()

Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.

### Example

```typescript
import {
    WebhostingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new WebhostingApi(configuration);

const { status, data } = await apiInstance.addWebsite();
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
|**401** | Unauthorized |  -  |
|**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getNewWebsite**
> WebsitesOrder getNewWebsite()

Retrieves available webhosting plans and pricing for ordering.

### Example

```typescript
import {
    WebhostingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new WebhostingApi(configuration);

const { status, data } = await apiInstance.getNewWebsite();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**WebsitesOrder**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Website ordering details including available plans and pricing. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getWebsiteBuyIp**
> GetWebsiteBuyIp200Response getWebsiteBuyIp()

Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.

### Example

```typescript
import {
    WebhostingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new WebhostingApi(configuration);

let id: number; //The website service ID. Use `website_id` from `GET /websites`. (default to undefined)

const { status, data } = await apiInstance.getWebsiteBuyIp(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined|


### Return type

**GetWebsiteBuyIp200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Current IP addresses and their reverse DNS hostnames for the website. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getWebsiteInfo**
> Website getWebsiteInfo()

Returns detailed information about a specific webhosting order including its domain, plan, and status.

### Example

```typescript
import {
    WebhostingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new WebhostingApi(configuration);

let id: number; //The website service ID. Use `website_id` from `GET /websites`. (default to undefined)

const { status, data } = await apiInstance.getWebsiteInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined|


### Return type

**Website**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Website details |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getWebsiteInvoices**
> ChargeInvoiceRows getWebsiteInvoices()

Returns the billing invoices associated with this webhosting service.

### Example

```typescript
import {
    WebhostingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new WebhostingApi(configuration);

let id: number; //The website service ID. Use `website_id` from `GET /websites`. (default to undefined)

const { status, data } = await apiInstance.getWebsiteInvoices(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined|


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

# **getWebsiteList**
> Array<WebsiteRow> getWebsiteList()

Gets a listing of your webhosting orders and service details.

### Example

```typescript
import {
    WebhostingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new WebhostingApi(configuration);

const { status, data } = await apiInstance.getWebsiteList();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**Array<WebsiteRow>**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, multipart/form-data


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | The listing of &#x60;Websites&#x60; services on your account. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getWebsitesBackups**
> WebsiteBackups getWebsitesBackups()

Gets a list of the backups that exist for a website and their sizes.

### Example

```typescript
import {
    WebhostingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new WebhostingApi(configuration);

let id: number; //The website service ID. Use `website_id` from `GET /websites`. (default to undefined)

const { status, data } = await apiInstance.getWebsitesBackups(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined|


### Return type

**WebsiteBackups**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Get Website Backups response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getWebsitesLogin**
> WebsiteLoginResponse getWebsitesLogin()

Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.

### Example

```typescript
import {
    WebhostingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new WebhostingApi(configuration);

let id: number; //The website service ID. Use `website_id` from `GET /websites`. (default to undefined)

const { status, data } = await apiInstance.getWebsitesLogin(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined|


### Return type

**WebsiteLoginResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Get Website Login response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getWebsitesWelcomeEmail**
> SuccessTextResponse getWebsitesWelcomeEmail()

Resends the welcome email containing hosting credentials and panel access details for the webhosting order.

### Example

```typescript
import {
    WebhostingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new WebhostingApi(configuration);

let id: number; //The website service ID. Use `website_id` from `GET /websites`. (default to undefined)

const { status, data } = await apiInstance.getWebsitesWelcomeEmail(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined|


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

# **gettWebsiteReverseDns**
> ReverseDnsEntries gettWebsiteReverseDns()

Returns the current reverse DNS (PTR record) entries for the website\'s IP addresses.

### Example

```typescript
import {
    WebhostingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new WebhostingApi(configuration);

let id: number; //The website service ID. Use `website_id` from `GET /websites`. (default to undefined)

const { status, data } = await apiInstance.gettWebsiteReverseDns(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined|


### Return type

**ReverseDnsEntries**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | List of reverse dns entries |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postWebsiteBuyIp**
> PostWebsiteBuyIp200Response postWebsiteBuyIp(postWebsiteBuyIpRequest)

Updates the reverse DNS hostnames for the website\'s IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.

### Example

```typescript
import {
    WebhostingApi,
    Configuration,
    PostWebsiteBuyIpRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new WebhostingApi(configuration);

let id: number; //The website service ID. Use `website_id` from `GET /websites`. (default to undefined)
let postWebsiteBuyIpRequest: PostWebsiteBuyIpRequest; //

const { status, data } = await apiInstance.postWebsiteBuyIp(
    id,
    postWebsiteBuyIpRequest
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **postWebsiteBuyIpRequest** | **PostWebsiteBuyIpRequest**|  | |
| **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined|


### Return type

**PostWebsiteBuyIp200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | DNS update result. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postWebsiteMigration**
> PostWebsiteMigration200Response postWebsiteMigration(postWebsiteMigrationRequest)

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.

### Example

```typescript
import {
    WebhostingApi,
    Configuration,
    PostWebsiteMigrationRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new WebhostingApi(configuration);

let id: number; //The website service ID. Use `website_id` from `GET /websites`. (default to undefined)
let postWebsiteMigrationRequest: PostWebsiteMigrationRequest; //

const { status, data } = await apiInstance.postWebsiteMigration(
    id,
    postWebsiteMigrationRequest
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **postWebsiteMigrationRequest** | **PostWebsiteMigrationRequest**|  | |
| **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined|


### Return type

**PostWebsiteMigration200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Migration request submitted. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postWebsitesReverseDns**
> TextResponse postWebsitesReverseDns(reverseDnsEntries)

Updates the reverse DNS entries for each of the IP addresses for the website.

### Example

```typescript
import {
    WebhostingApi,
    Configuration,
    ReverseDnsEntries
} from './api';

const configuration = new Configuration();
const apiInstance = new WebhostingApi(configuration);

let id: number; //The website service ID. Use `website_id` from `GET /websites`. (default to undefined)
let reverseDnsEntries: ReverseDnsEntries; //

const { status, data } = await apiInstance.postWebsitesReverseDns(
    id,
    reverseDnsEntries
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **reverseDnsEntries** | **ReverseDnsEntries**|  | |
| **id** | [**number**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined|


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
|**200** | Response from the update reverse DNS call. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **putWebsites**
> putWebsites()

Validates a webhosting order before placing it.

### Example

```typescript
import {
    WebhostingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new WebhostingApi(configuration);

const { status, data } = await apiInstance.putWebsites();
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
|**200** | Validate Website order response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateWebsiteInfo**
> updateWebsiteInfo()

Updates settings on a webhosting order.

### Example

```typescript
import {
    WebhostingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new WebhostingApi(configuration);

let id: string; //The website service ID. Use `website_id` from `GET /websites`. (default to undefined)

const { status, data } = await apiInstance.updateWebsiteInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**string**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined|


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
|**401** | Unauthorized |  -  |
|**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **webhostingCancel**
> WebhostingCancel200Response webhostingCancel()

Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.

### Example

```typescript
import {
    WebhostingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new WebhostingApi(configuration);

let id: string; //The website service ID. Use `website_id` from `GET /websites`. (default to undefined)

const { status, data } = await apiInstance.webhostingCancel(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**string**] | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | defaults to undefined|


### Return type

**WebhostingCancel200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Website cancel |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

