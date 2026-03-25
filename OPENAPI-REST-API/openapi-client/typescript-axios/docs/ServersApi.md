# ServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|[**addServer**](#addserver) | **POST** /servers/order | Place Server Order|
|[**buyItNowServerOrder**](#buyitnowserverorder) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options|
|[**getMPServers**](#getmpservers) | **GET** /buy_now_servers_list | List Marketplace Servers|
|[**getNewServer**](#getnewserver) | **GET** /servers/order | Server Ordering Information|
|[**getServerInfo**](#getserverinfo) | **GET** /servers/{id} | Get Server Order|
|[**getServerInvoices**](#getserverinvoices) | **GET** /servers/{id}/invoices | Get Server Invoices|
|[**getServerList**](#getserverlist) | **GET** /servers | List Servers|
|[**getServerReverseDns**](#getserverreversedns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info|
|[**getServersWelcomeEmail**](#getserverswelcomeemail) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email|
|[**placeBuyNowServer**](#placebuynowserver) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order|
|[**postServerReverseDns**](#postserverreversedns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS|
|[**putServers**](#putservers) | **PUT** /servers/order | Validate Server Order|
|[**serverIpmiLiveGet**](#serveripmiliveget) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information|
|[**serverIpmiLivePost**](#serveripmilivepost) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup|
|[**serverIpmiPowerGet**](#serveripmipowerget) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status|
|[**serverIpmiPowerPost**](#serveripmipowerpost) | **POST** /servers/{id}/ipmi_power | Server IPMI Power|
|[**serversCancel**](#serverscancel) | **DELETE** /servers/{id} | Cancel Server Service|
|[**updateServerInfo**](#updateserverinfo) | **POST** /servers/{id} | Update Server Order|

# **addServer**
> addServer()

Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.

### Example

```typescript
import {
    ServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

const { status, data } = await apiInstance.addServer();
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

# **buyItNowServerOrder**
> BuyItNowServerOrder200Response buyItNowServerOrder()

Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.

### Example

```typescript
import {
    ServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

const { status, data } = await apiInstance.buyItNowServerOrder();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**BuyItNowServerOrder200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Available server configurations with pricing and hardware options. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMPServers**
> BuyItNowList getMPServers()

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example

```typescript
import {
    ServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

const { status, data } = await apiInstance.getMPServers();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**BuyItNowList**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Marketplace Buy it now servers list |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getNewServer**
> ServerOrder getNewServer()

Retrieves available server configurations and pricing for ordering a new dedicated server.

### Example

```typescript
import {
    ServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

const { status, data } = await apiInstance.getNewServer();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**ServerOrder**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Server Ordering details |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getServerInfo**
> Server getServerInfo()

Returns detailed information about a specific server including its hardware configuration, IPs, and status.

### Example

```typescript
import {
    ServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

let id: number; //Server ID number. (default to undefined)

const { status, data } = await apiInstance.getServerInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | Server ID number. | defaults to undefined|


### Return type

**Server**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Server details |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getServerInvoices**
> ChargeInvoiceRows getServerInvoices()

Returns the billing invoices associated with this dedicated server.

### Example

```typescript
import {
    ServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

let id: number; //Server ID number (default to undefined)

const { status, data } = await apiInstance.getServerInvoices(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | Server ID number | defaults to undefined|


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

# **getServerList**
> Array<ServerRow> getServerList()

Returns all dedicated server services on the account with their current status and configuration.

### Example

```typescript
import {
    ServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

const { status, data } = await apiInstance.getServerList();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**Array<ServerRow>**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | The listing of &#x60;Servers&#x60; services on your account. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getServerReverseDns**
> ReverseDnsEntries getServerReverseDns()

Returns the current reverse DNS (PTR record) entries for the server\'s IP addresses.

### Example

```typescript
import {
    ServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

let id: number; //Server ID number (default to undefined)

const { status, data } = await apiInstance.getServerReverseDns(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | Server ID number | defaults to undefined|


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
|**200** | Servers Reverse DNS info response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getServersWelcomeEmail**
> SuccessTextResponse getServersWelcomeEmail()

Resends the welcome email for the order.

### Example

```typescript
import {
    ServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

let id: number; //Server ID number (default to undefined)

const { status, data } = await apiInstance.getServersWelcomeEmail(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | Server ID number | defaults to undefined|


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

# **placeBuyNowServer**
> ServersBuyNowResponse placeBuyNowServer()

Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.

### Example

```typescript
import {
    ServersApi,
    Configuration,
    PlaceBuyNowServerRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

let placeBuyNowServerRequest: PlaceBuyNowServerRequest; // (optional)

const { status, data } = await apiInstance.placeBuyNowServer(
    placeBuyNowServerRequest
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **placeBuyNowServerRequest** | **PlaceBuyNowServerRequest**|  | |


### Return type

**ServersBuyNowResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Order placed successfully. |  -  |
|**400** | Order validation failed. |  -  |
|**401** | Unauthorized |  -  |
|**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postServerReverseDns**
> TextResponse postServerReverseDns(reverseDnsEntries)

Updates the reverse DNS (PTR record) entries for the server\'s IP addresses.

### Example

```typescript
import {
    ServersApi,
    Configuration,
    ReverseDnsEntries
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

let id: number; //Server ID number (default to undefined)
let reverseDnsEntries: ReverseDnsEntries; //

const { status, data } = await apiInstance.postServerReverseDns(
    id,
    reverseDnsEntries
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **reverseDnsEntries** | **ReverseDnsEntries**|  | |
| **id** | [**number**] | Server ID number | defaults to undefined|


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
|**200** | Update Server Reverse DNS response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **putServers**
> putServers()

Validates a server order before placing it. Use this to check for errors before committing to a purchase.

### Example

```typescript
import {
    ServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

const { status, data } = await apiInstance.putServers();
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
|**200** | Validate Server order response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **serverIpmiLiveGet**
> ServerIpmiLiveInfo serverIpmiLiveGet()

Returns the current IPMI live connection information for the server.

### Example

```typescript
import {
    ServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

let id: number; //Server ID number (default to undefined)

const { status, data } = await apiInstance.serverIpmiLiveGet(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | Server ID number | defaults to undefined|


### Return type

**ServerIpmiLiveInfo**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response from the Servers IPMI Live information request. |  -  |
|**404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **serverIpmiLivePost**
> ServerIpmiLiveInfo serverIpmiLivePost()

Configures IPMI live access by whitelisting your current IP address for connections to the server\'s IPMI management interface.

### Example

```typescript
import {
    ServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

let id: number; //Server ID number (default to undefined)
let ip: string; //Your IP Address you wish to connect to the IPMI system from. (default to undefined)
let asset: number; //Asset ID (optional) (default to undefined)

const { status, data } = await apiInstance.serverIpmiLivePost(
    id,
    ip,
    asset
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | Server ID number | defaults to undefined|
| **ip** | [**string**] | Your IP Address you wish to connect to the IPMI system from. | defaults to undefined|
| **asset** | [**number**] | Asset ID | (optional) defaults to undefined|


### Return type

**ServerIpmiLiveInfo**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response from the Servers IPMI Live information request. |  -  |
|**404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **serverIpmiPowerGet**
> TextResponse serverIpmiPowerGet()

Returns the chassis power status from ipmi.

### Example

```typescript
import {
    ServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

let id: number; //Server ID number (default to undefined)

const { status, data } = await apiInstance.serverIpmiPowerGet(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | Server ID number | defaults to undefined|


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

# **serverIpmiPowerPost**
> TextResponse serverIpmiPowerPost()

Uses the IPMI interface to set the Power status on the server.

### Example

```typescript
import {
    ServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

let id: number; //Server ID number (default to undefined)
let action: string; //The power action to send to the ipmi controller. (default to undefined)
let asset: number; //The Asset ID (optional) (default to undefined)

const { status, data } = await apiInstance.serverIpmiPowerPost(
    id,
    action,
    asset
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | Server ID number | defaults to undefined|
| **action** | [**string**]**Array<&#39;cycle&#39; &#124; &#39;reset&#39; &#124; &#39;on&#39; &#124; &#39;off&#39; &#124; &#39;soft&#39;>** | The power action to send to the ipmi controller. | defaults to undefined|
| **asset** | [**number**] | The Asset ID | (optional) defaults to undefined|


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response with a text message field. |  -  |
|**400** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **serversCancel**
> ServersCancel200Response serversCancel()

Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example

```typescript
import {
    ServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

let id: number; //Server ID number (default to undefined)

const { status, data } = await apiInstance.serversCancel(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | Server ID number | defaults to undefined|


### Return type

**ServersCancel200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Servers Cancel |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateServerInfo**
> updateServerInfo()

Updates settings on a dedicated server order.

### Example

```typescript
import {
    ServersApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ServersApi(configuration);

let id: string; //Server ID number. (default to undefined)

const { status, data } = await apiInstance.updateServerInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**string**] | Server ID number. | defaults to undefined|


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

