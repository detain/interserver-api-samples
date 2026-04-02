# ServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addServer**](ServersApi.md#addserver) | **POST** /servers/order | Place Server Order |
| [**buyItNowServerOrder**](ServersApi.md#buyitnowserverorder) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options |
| [**getMPServers**](ServersApi.md#getmpservers) | **GET** /buy_now_servers_list | List Marketplace Servers |
| [**getNewServer**](ServersApi.md#getnewserver) | **GET** /servers/order | Server Ordering Information |
| [**getServerInfo**](ServersApi.md#getserverinfo) | **GET** /servers/{id} | Get Server Order |
| [**getServerInvoices**](ServersApi.md#getserverinvoices) | **GET** /servers/{id}/invoices | Get Server Invoices |
| [**getServerList**](ServersApi.md#getserverlist) | **GET** /servers | List Servers |
| [**getServerReverseDns**](ServersApi.md#getserverreversedns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info |
| [**getServersWelcomeEmail**](ServersApi.md#getserverswelcomeemail) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email |
| [**placeBuyNowServer**](ServersApi.md#placebuynowserveroperation) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order |
| [**postServerReverseDns**](ServersApi.md#postserverreversedns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS |
| [**putServers**](ServersApi.md#putservers) | **PUT** /servers/order | Validate Server Order |
| [**serverIpmiLiveGet**](ServersApi.md#serveripmiliveget) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information |
| [**serverIpmiLivePost**](ServersApi.md#serveripmilivepost) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup |
| [**serverIpmiPowerGet**](ServersApi.md#serveripmipowerget) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status |
| [**serverIpmiPowerPost**](ServersApi.md#serveripmipowerpost) | **POST** /servers/{id}/ipmi_power | Server IPMI Power |
| [**serversCancel**](ServersApi.md#serverscancel) | **DELETE** /servers/{id} | Cancel Server Service |
| [**updateServerInfo**](ServersApi.md#updateserverinfo) | **POST** /servers/{id} | Update Server Order |



## addServer

> AddServer200Response addServer()

Place Server Order

Places an order for a new dedicated server. Use &#x60;PUT /servers/order&#x60; to validate the order first.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { AddServerRequest } from '';

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
  const api = new ServersApi(config);

  try {
    const data = await api.addServer();
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

[**AddServer200Response**](AddServer200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Server order placed successfully. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## buyItNowServerOrder

> BuyItNowServerOrder200Response buyItNowServerOrder()

Get Buy Now Server Options

Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via &#x60;POST /servers/order/buy_now_server&#x60;.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { BuyItNowServerOrderRequest } from '';

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
  const api = new ServersApi(config);

  try {
    const data = await api.buyItNowServerOrder();
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

[**BuyItNowServerOrder200Response**](BuyItNowServerOrder200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Available server configurations with pricing and hardware options. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getMPServers

> BuyItNowList getMPServers()

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { GetMPServersRequest } from '';

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
  const api = new ServersApi(config);

  try {
    const data = await api.getMPServers();
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

[**BuyItNowList**](BuyItNowList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Marketplace Buy it now servers list |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getNewServer

> ServerOrder getNewServer()

Server Ordering Information

Retrieves available server configurations and pricing for ordering a new dedicated server.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { GetNewServerRequest } from '';

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
  const api = new ServersApi(config);

  try {
    const data = await api.getNewServer();
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

[**ServerOrder**](ServerOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Server Ordering details |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getServerInfo

> Server getServerInfo(id)

Get Server Order

Returns detailed information about a specific server including its hardware configuration, IPs, and status.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { GetServerInfoRequest } from '';

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
  const api = new ServersApi(config);

  const body = {
    // number | Server ID number.
    id: 56,
  } satisfies GetServerInfoRequest;

  try {
    const data = await api.getServerInfo(body);
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
| **id** | `number` | Server ID number. | [Defaults to `undefined`] |

### Return type

[**Server**](Server.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Server details |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getServerInvoices

> ChargeInvoiceRows getServerInvoices(id)

Get Server Invoices

Returns the billing invoices associated with this dedicated server.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { GetServerInvoicesRequest } from '';

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
  const api = new ServersApi(config);

  const body = {
    // number | Server ID number
    id: 56,
  } satisfies GetServerInvoicesRequest;

  try {
    const data = await api.getServerInvoices(body);
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
| **id** | `number` | Server ID number | [Defaults to `undefined`] |

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


## getServerList

> Array&lt;ServerRow&gt; getServerList()

List Servers

Returns all dedicated server services on the account with their current status and configuration.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { GetServerListRequest } from '';

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
  const api = new ServersApi(config);

  try {
    const data = await api.getServerList();
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

[**Array&lt;ServerRow&gt;**](ServerRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Servers&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getServerReverseDns

> ReverseDnsEntries getServerReverseDns(id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the server\&#39;s IP addresses.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { GetServerReverseDnsRequest } from '';

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
  const api = new ServersApi(config);

  const body = {
    // number | Server ID number
    id: 56,
  } satisfies GetServerReverseDnsRequest;

  try {
    const data = await api.getServerReverseDns(body);
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
| **id** | `number` | Server ID number | [Defaults to `undefined`] |

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
| **200** | Servers Reverse DNS info response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getServersWelcomeEmail

> SuccessTextResponse getServersWelcomeEmail(id)

Resend Server Welcome Email

Resends the welcome email for the order.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { GetServersWelcomeEmailRequest } from '';

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
  const api = new ServersApi(config);

  const body = {
    // number | Server ID number
    id: 56,
  } satisfies GetServersWelcomeEmailRequest;

  try {
    const data = await api.getServersWelcomeEmail(body);
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
| **id** | `number` | Server ID number | [Defaults to `undefined`] |

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


## placeBuyNowServer

> ServersBuyNowResponse placeBuyNowServer(placeBuyNowServerRequest)

Place Buy Now Server Order

Places an order for a buy-it-now dedicated server. Use &#x60;GET /servers/order/buy_now_server&#x60; to retrieve available server configurations and their IDs before ordering.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { PlaceBuyNowServerOperationRequest } from '';

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
  const api = new ServersApi(config);

  const body = {
    // PlaceBuyNowServerRequest (optional)
    placeBuyNowServerRequest: ...,
  } satisfies PlaceBuyNowServerOperationRequest;

  try {
    const data = await api.placeBuyNowServer(body);
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
| **placeBuyNowServerRequest** | [PlaceBuyNowServerRequest](PlaceBuyNowServerRequest.md) |  | [Optional] |

### Return type

[**ServersBuyNowResponse**](ServersBuyNowResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Order placed successfully. |  -  |
| **400** | Order validation failed. |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postServerReverseDns

> TextResponse postServerReverseDns(id, reverseDnsEntries)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the server\&#39;s IP addresses.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { PostServerReverseDnsRequest } from '';

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
  const api = new ServersApi(config);

  const body = {
    // number | Server ID number
    id: 56,
    // ReverseDnsEntries
    reverseDnsEntries: ...,
  } satisfies PostServerReverseDnsRequest;

  try {
    const data = await api.postServerReverseDns(body);
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
| **id** | `number` | Server ID number | [Defaults to `undefined`] |
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
| **200** | Update Server Reverse DNS response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## putServers

> putServers()

Validate Server Order

Validates a server order before placing it. Use this to check for errors before committing to a purchase.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { PutServersRequest } from '';

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
  const api = new ServersApi(config);

  try {
    const data = await api.putServers();
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
| **200** | Validate Server order response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## serverIpmiLiveGet

> ServerIpmiLiveInfo serverIpmiLiveGet(id)

Server IPMI Live Information

Returns the current IPMI live connection information for the server.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { ServerIpmiLiveGetRequest } from '';

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
  const api = new ServersApi(config);

  const body = {
    // number | Server ID number
    id: 56,
  } satisfies ServerIpmiLiveGetRequest;

  try {
    const data = await api.serverIpmiLiveGet(body);
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
| **id** | `number` | Server ID number | [Defaults to `undefined`] |

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response from the Servers IPMI Live information request. |  -  |
| **404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## serverIpmiLivePost

> ServerIpmiLiveInfo serverIpmiLivePost(id, ip, asset)

Server IPMI Live Setup

Configures IPMI live access by whitelisting your current IP address for connections to the server\&#39;s IPMI management interface.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { ServerIpmiLivePostRequest } from '';

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
  const api = new ServersApi(config);

  const body = {
    // number | Server ID number
    id: 56,
    // string | Your IP Address you wish to connect to the IPMI system from.
    ip: ip_example,
    // number | Asset ID (optional)
    asset: 56,
  } satisfies ServerIpmiLivePostRequest;

  try {
    const data = await api.serverIpmiLivePost(body);
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
| **id** | `number` | Server ID number | [Defaults to `undefined`] |
| **ip** | `string` | Your IP Address you wish to connect to the IPMI system from. | [Defaults to `undefined`] |
| **asset** | `number` | Asset ID | [Optional] [Defaults to `undefined`] |

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response from the Servers IPMI Live information request. |  -  |
| **404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## serverIpmiPowerGet

> TextResponse serverIpmiPowerGet(id)

Get IPMI Power Status

Returns the chassis power status from ipmi.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { ServerIpmiPowerGetRequest } from '';

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
  const api = new ServersApi(config);

  const body = {
    // number | Server ID number
    id: 56,
  } satisfies ServerIpmiPowerGetRequest;

  try {
    const data = await api.serverIpmiPowerGet(body);
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
| **id** | `number` | Server ID number | [Defaults to `undefined`] |

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


## serverIpmiPowerPost

> TextResponse serverIpmiPowerPost(id, action, asset)

Server IPMI Power

Uses the IPMI interface to set the Power status on the server.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { ServerIpmiPowerPostRequest } from '';

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
  const api = new ServersApi(config);

  const body = {
    // number | Server ID number
    id: 56,
    // string | The power action to send to the ipmi controller.
    action: action_example,
    // number | The Asset ID (optional)
    asset: 56,
  } satisfies ServerIpmiPowerPostRequest;

  try {
    const data = await api.serverIpmiPowerPost(body);
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
| **id** | `number` | Server ID number | [Defaults to `undefined`] |
| **action** | `cycle`, `reset`, `on`, `off`, `soft` | The power action to send to the ipmi controller. | [Defaults to `undefined`] [Enum: cycle, reset, on, off, soft] |
| **asset** | `number` | The Asset ID | [Optional] [Defaults to `undefined`] |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **400** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## serversCancel

> ServersCancel200Response serversCancel(id)

Cancel Server Service

Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { ServersCancelRequest } from '';

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
  const api = new ServersApi(config);

  const body = {
    // number | Server ID number
    id: 56,
  } satisfies ServersCancelRequest;

  try {
    const data = await api.serversCancel(body);
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
| **id** | `number` | Server ID number | [Defaults to `undefined`] |

### Return type

[**ServersCancel200Response**](ServersCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Servers Cancel |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateServerInfo

> SuccessTextResponse updateServerInfo(id)

Update Server Order

Updates settings on a dedicated server order.

### Example

```ts
import {
  Configuration,
  ServersApi,
} from '';
import type { UpdateServerInfoRequest } from '';

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
  const api = new ServersApi(config);

  const body = {
    // string | Server ID number.
    id: id_example,
  } satisfies UpdateServerInfoRequest;

  try {
    const data = await api.updateServerInfo(body);
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
| **id** | `string` | Server ID number. | [Defaults to `undefined`] |

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

