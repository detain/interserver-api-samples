# .ServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addServer**](ServersApi.md#addServer) | **POST** /servers/order | Place Server Order
[**buyItNowServerOrder**](ServersApi.md#buyItNowServerOrder) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options
[**getMPServers**](ServersApi.md#getMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers
[**getNewServer**](ServersApi.md#getNewServer) | **GET** /servers/order | Server Ordering Information
[**getServerInfo**](ServersApi.md#getServerInfo) | **GET** /servers/{id} | Get Server Order
[**getServerInvoices**](ServersApi.md#getServerInvoices) | **GET** /servers/{id}/invoices | Get Server Invoices
[**getServerList**](ServersApi.md#getServerList) | **GET** /servers | List Servers
[**getServerReverseDns**](ServersApi.md#getServerReverseDns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info
[**getServersWelcomeEmail**](ServersApi.md#getServersWelcomeEmail) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email
[**placeBuyNowServer**](ServersApi.md#placeBuyNowServer) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order
[**postServerReverseDns**](ServersApi.md#postServerReverseDns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS
[**putServers**](ServersApi.md#putServers) | **PUT** /servers/order | Validate Server Order
[**serverIpmiLiveGet**](ServersApi.md#serverIpmiLiveGet) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information
[**serverIpmiLivePost**](ServersApi.md#serverIpmiLivePost) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup
[**serverIpmiPowerGet**](ServersApi.md#serverIpmiPowerGet) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status
[**serverIpmiPowerPost**](ServersApi.md#serverIpmiPowerPost) | **POST** /servers/{id}/ipmi_power | Server IPMI Power
[**serversCancel**](ServersApi.md#serversCancel) | **DELETE** /servers/{id} | Cancel Server Service
[**updateServerInfo**](ServersApi.md#updateServerInfo) | **POST** /servers/{id} | Update Server Order


# **addServer**
> addServer()

Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.

### Example


```typescript
import { createConfiguration, ServersApi } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request = {};

const data = await apiInstance.addServer(request);
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

# **buyItNowServerOrder**
> BuyItNowServerOrder200Response buyItNowServerOrder()

Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.

### Example


```typescript
import { createConfiguration, ServersApi } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request = {};

const data = await apiInstance.buyItNowServerOrder(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**BuyItNowServerOrder200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Available server configurations with pricing and hardware options. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getMPServers**
> BuyItNowList getMPServers()

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example


```typescript
import { createConfiguration, ServersApi } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request = {};

const data = await apiInstance.getMPServers(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**BuyItNowList**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Marketplace Buy it now servers list |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getNewServer**
> ServerOrder getNewServer()

Retrieves available server configurations and pricing for ordering a new dedicated server.

### Example


```typescript
import { createConfiguration, ServersApi } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request = {};

const data = await apiInstance.getNewServer(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**ServerOrder**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Server Ordering details |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getServerInfo**
> Server getServerInfo()

Returns detailed information about a specific server including its hardware configuration, IPs, and status.

### Example


```typescript
import { createConfiguration, ServersApi } from '';
import type { ServersApiGetServerInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request: ServersApiGetServerInfoRequest = {
    // Server ID number.
  id: 1,
};

const data = await apiInstance.getServerInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | Server ID number. | defaults to undefined


### Return type

**Server**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Server details |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getServerInvoices**
> ChargeInvoiceRows getServerInvoices()

Returns the billing invoices associated with this dedicated server.

### Example


```typescript
import { createConfiguration, ServersApi } from '';
import type { ServersApiGetServerInvoicesRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request: ServersApiGetServerInvoicesRequest = {
    // Server ID number
  id: 1,
};

const data = await apiInstance.getServerInvoices(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | Server ID number | defaults to undefined


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

# **getServerList**
> Array<ServerRow> getServerList()

Returns all dedicated server services on the account with their current status and configuration.

### Example


```typescript
import { createConfiguration, ServersApi } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request = {};

const data = await apiInstance.getServerList(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**Array<ServerRow>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The listing of &#x60;Servers&#x60; services on your account. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getServerReverseDns**
> ReverseDnsEntries getServerReverseDns()

Returns the current reverse DNS (PTR record) entries for the server\'s IP addresses.

### Example


```typescript
import { createConfiguration, ServersApi } from '';
import type { ServersApiGetServerReverseDnsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request: ServersApiGetServerReverseDnsRequest = {
    // Server ID number
  id: 1,
};

const data = await apiInstance.getServerReverseDns(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | Server ID number | defaults to undefined


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
**200** | Servers Reverse DNS info response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getServersWelcomeEmail**
> SuccessTextResponse getServersWelcomeEmail()

Resends the welcome email for the order.

### Example


```typescript
import { createConfiguration, ServersApi } from '';
import type { ServersApiGetServersWelcomeEmailRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request: ServersApiGetServersWelcomeEmailRequest = {
    // Server ID number
  id: 1,
};

const data = await apiInstance.getServersWelcomeEmail(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | Server ID number | defaults to undefined


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

# **placeBuyNowServer**
> ServersBuyNowResponse placeBuyNowServer()

Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.

### Example


```typescript
import { createConfiguration, ServersApi } from '';
import type { ServersApiPlaceBuyNowServerRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request: ServersApiPlaceBuyNowServerRequest = {
  
  placeBuyNowServerRequest: {
    server_id: 2343,
    server_hostname: "server.int.com",
    server_root_password: "uD1c!@cgD",
  },
};

const data = await apiInstance.placeBuyNowServer(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **placeBuyNowServerRequest** | **PlaceBuyNowServerRequest**|  |


### Return type

**ServersBuyNowResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Order placed successfully. |  -  |
**400** | Order validation failed. |  -  |
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postServerReverseDns**
> TextResponse postServerReverseDns(reverseDnsEntries)

Updates the reverse DNS (PTR record) entries for the server\'s IP addresses.

### Example


```typescript
import { createConfiguration, ServersApi } from '';
import type { ServersApiPostServerReverseDnsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request: ServersApiPostServerReverseDnsRequest = {
    // Server ID number
  id: 1,
  
  reverseDnsEntries: {
    ips: {},
  },
};

const data = await apiInstance.postServerReverseDns(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **reverseDnsEntries** | **ReverseDnsEntries**|  |
 **id** | [**number**] | Server ID number | defaults to undefined


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
**200** | Update Server Reverse DNS response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **putServers**
> void putServers()

Validates a server order before placing it. Use this to check for errors before committing to a purchase.

### Example


```typescript
import { createConfiguration, ServersApi } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request = {};

const data = await apiInstance.putServers(request);
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
**200** | Validate Server order response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **serverIpmiLiveGet**
> ServerIpmiLiveInfo serverIpmiLiveGet()

Returns the current IPMI live connection information for the server.

### Example


```typescript
import { createConfiguration, ServersApi } from '';
import type { ServersApiServerIpmiLiveGetRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request: ServersApiServerIpmiLiveGetRequest = {
    // Server ID number
  id: 1,
};

const data = await apiInstance.serverIpmiLiveGet(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | Server ID number | defaults to undefined


### Return type

**ServerIpmiLiveInfo**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response from the Servers IPMI Live information request. |  -  |
**404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **serverIpmiLivePost**
> ServerIpmiLiveInfo serverIpmiLivePost()

Configures IPMI live access by whitelisting your current IP address for connections to the server\'s IPMI management interface.

### Example


```typescript
import { createConfiguration, ServersApi } from '';
import type { ServersApiServerIpmiLivePostRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request: ServersApiServerIpmiLivePostRequest = {
    // Server ID number
  id: 1,
    // Your IP Address you wish to connect to the IPMI system from.
  ip: "1.2.3.4",
    // Asset ID (optional)
  asset: 5431,
};

const data = await apiInstance.serverIpmiLivePost(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | Server ID number | defaults to undefined
 **ip** | [**string**] | Your IP Address you wish to connect to the IPMI system from. | defaults to undefined
 **asset** | [**number**] | Asset ID | (optional) defaults to undefined


### Return type

**ServerIpmiLiveInfo**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response from the Servers IPMI Live information request. |  -  |
**404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **serverIpmiPowerGet**
> TextResponse serverIpmiPowerGet()

Returns the chassis power status from ipmi.

### Example


```typescript
import { createConfiguration, ServersApi } from '';
import type { ServersApiServerIpmiPowerGetRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request: ServersApiServerIpmiPowerGetRequest = {
    // Server ID number
  id: 1,
};

const data = await apiInstance.serverIpmiPowerGet(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | Server ID number | defaults to undefined


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

# **serverIpmiPowerPost**
> TextResponse serverIpmiPowerPost()

Uses the IPMI interface to set the Power status on the server.

### Example


```typescript
import { createConfiguration, ServersApi } from '';
import type { ServersApiServerIpmiPowerPostRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request: ServersApiServerIpmiPowerPostRequest = {
    // Server ID number
  id: 1,
    // The power action to send to the ipmi controller.
  action: "on",
    // The Asset ID (optional)
  asset: 5432,
};

const data = await apiInstance.serverIpmiPowerPost(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | Server ID number | defaults to undefined
 **action** | [**string**]**Array<&#39;cycle&#39; &#124; &#39;reset&#39; &#124; &#39;on&#39; &#124; &#39;off&#39; &#124; &#39;soft&#39;>** | The power action to send to the ipmi controller. | defaults to undefined
 **asset** | [**number**] | The Asset ID | (optional) defaults to undefined


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response with a text message field. |  -  |
**400** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **serversCancel**
> ServersCancel200Response serversCancel()

Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example


```typescript
import { createConfiguration, ServersApi } from '';
import type { ServersApiServersCancelRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request: ServersApiServersCancelRequest = {
    // Server ID number
  id: 1,
};

const data = await apiInstance.serversCancel(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | Server ID number | defaults to undefined


### Return type

**ServersCancel200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Servers Cancel |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateServerInfo**
> updateServerInfo()

Updates settings on a dedicated server order.

### Example


```typescript
import { createConfiguration, ServersApi } from '';
import type { ServersApiUpdateServerInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ServersApi(configuration);

const request: ServersApiUpdateServerInfoRequest = {
    // Server ID number.
  id: "id_example",
};

const data = await apiInstance.updateServerInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**string**] | Server ID number. | defaults to undefined


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


