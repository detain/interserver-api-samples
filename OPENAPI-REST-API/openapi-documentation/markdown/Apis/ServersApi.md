# ServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addServer**](ServersApi.md#addServer) | **POST** /servers/order | Place Server Order |
| [**buyItNowServerOrder**](ServersApi.md#buyItNowServerOrder) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options |
| [**getMPServers**](ServersApi.md#getMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers |
| [**getNewServer**](ServersApi.md#getNewServer) | **GET** /servers/order | Server Ordering Information |
| [**getServerInfo**](ServersApi.md#getServerInfo) | **GET** /servers/{id} | Get Server Order |
| [**getServerInvoices**](ServersApi.md#getServerInvoices) | **GET** /servers/{id}/invoices | Get Server Invoices |
| [**getServerList**](ServersApi.md#getServerList) | **GET** /servers | List Servers |
| [**getServerReverseDns**](ServersApi.md#getServerReverseDns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info |
| [**getServersWelcomeEmail**](ServersApi.md#getServersWelcomeEmail) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email |
| [**placeBuyNowServer**](ServersApi.md#placeBuyNowServer) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order |
| [**postServerReverseDns**](ServersApi.md#postServerReverseDns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS |
| [**putServers**](ServersApi.md#putServers) | **PUT** /servers/order | Validate Server Order |
| [**serverIpmiLiveGet**](ServersApi.md#serverIpmiLiveGet) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information |
| [**serverIpmiLivePost**](ServersApi.md#serverIpmiLivePost) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup |
| [**serverIpmiPowerGet**](ServersApi.md#serverIpmiPowerGet) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status |
| [**serverIpmiPowerPost**](ServersApi.md#serverIpmiPowerPost) | **POST** /servers/{id}/ipmi_power | Server IPMI Power |
| [**serversCancel**](ServersApi.md#serversCancel) | **DELETE** /servers/{id} | Cancel Server Service |
| [**updateServerInfo**](ServersApi.md#updateServerInfo) | **POST** /servers/{id} | Update Server Order |


<a name="addServer"></a>
# **addServer**
> addServer_200_response addServer()

Place Server Order

    Places an order for a new dedicated server. Use &#x60;PUT /servers/order&#x60; to validate the order first.

### Parameters
This endpoint does not need any parameter.

### Return type

[**addServer_200_response**](../Models/addServer_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="buyItNowServerOrder"></a>
# **buyItNowServerOrder**
> buyItNowServerOrder_200_response buyItNowServerOrder()

Get Buy Now Server Options

    Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via &#x60;POST /servers/order/buy_now_server&#x60;.

### Parameters
This endpoint does not need any parameter.

### Return type

[**buyItNowServerOrder_200_response**](../Models/buyItNowServerOrder_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getMPServers"></a>
# **getMPServers**
> BuyItNowList getMPServers()

List Marketplace Servers

    Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Parameters
This endpoint does not need any parameter.

### Return type

[**BuyItNowList**](../Models/BuyItNowList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getNewServer"></a>
# **getNewServer**
> ServerOrder getNewServer()

Server Ordering Information

    Retrieves available server configurations and pricing for ordering a new dedicated server.

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServerOrder**](../Models/ServerOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getServerInfo"></a>
# **getServerInfo**
> Server getServerInfo(id)

Get Server Order

    Returns detailed information about a specific server including its hardware configuration, IPs, and status.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| Server ID number. | [default to null] |

### Return type

[**Server**](../Models/Server.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getServerInvoices"></a>
# **getServerInvoices**
> ChargeInvoiceRows getServerInvoices(id)

Get Server Invoices

    Returns the billing invoices associated with this dedicated server.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| Server ID number | [default to null] |

### Return type

[**ChargeInvoiceRows**](../Models/ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getServerList"></a>
# **getServerList**
> List getServerList()

List Servers

    Returns all dedicated server services on the account with their current status and configuration.

### Parameters
This endpoint does not need any parameter.

### Return type

[**List**](../Models/ServerRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getServerReverseDns"></a>
# **getServerReverseDns**
> ReverseDnsEntries getServerReverseDns(id)

Reverse DNS Info

    Returns the current reverse DNS (PTR record) entries for the server&#39;s IP addresses.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| Server ID number | [default to null] |

### Return type

[**ReverseDnsEntries**](../Models/ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getServersWelcomeEmail"></a>
# **getServersWelcomeEmail**
> SuccessTextResponse getServersWelcomeEmail(id)

Resend Server Welcome Email

    Resends the welcome email for the order.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| Server ID number | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="placeBuyNowServer"></a>
# **placeBuyNowServer**
> ServersBuyNowResponse placeBuyNowServer(placeBuyNowServer\_request)

Place Buy Now Server Order

    Places an order for a buy-it-now dedicated server. Use &#x60;GET /servers/order/buy_now_server&#x60; to retrieve available server configurations and their IDs before ordering.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **placeBuyNowServer\_request** | [**placeBuyNowServer_request**](../Models/placeBuyNowServer_request.md)|  | [optional] |

### Return type

[**ServersBuyNowResponse**](../Models/ServersBuyNowResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="postServerReverseDns"></a>
# **postServerReverseDns**
> TextResponse postServerReverseDns(id, ReverseDnsEntries)

Update Reverse DNS

    Updates the reverse DNS (PTR record) entries for the server&#39;s IP addresses.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| Server ID number | [default to null] |
| **ReverseDnsEntries** | [**ReverseDnsEntries**](../Models/ReverseDnsEntries.md)|  | |

### Return type

[**TextResponse**](../Models/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="putServers"></a>
# **putServers**
> putServers()

Validate Server Order

    Validates a server order before placing it. Use this to check for errors before committing to a purchase.

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="serverIpmiLiveGet"></a>
# **serverIpmiLiveGet**
> ServerIpmiLiveInfo serverIpmiLiveGet(id)

Server IPMI Live Information

    Returns the current IPMI live connection information for the server.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| Server ID number | [default to null] |

### Return type

[**ServerIpmiLiveInfo**](../Models/ServerIpmiLiveInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="serverIpmiLivePost"></a>
# **serverIpmiLivePost**
> ServerIpmiLiveInfo serverIpmiLivePost(id, ip, asset)

Server IPMI Live Setup

    Configures IPMI live access by whitelisting your current IP address for connections to the server&#39;s IPMI management interface.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| Server ID number | [default to null] |
| **ip** | **String**| Your IP Address you wish to connect to the IPMI system from. | [default to null] |
| **asset** | **Integer**| Asset ID | [optional] [default to null] |

### Return type

[**ServerIpmiLiveInfo**](../Models/ServerIpmiLiveInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="serverIpmiPowerGet"></a>
# **serverIpmiPowerGet**
> TextResponse serverIpmiPowerGet(id)

Get IPMI Power Status

    Returns the chassis power status from ipmi.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| Server ID number | [default to null] |

### Return type

[**TextResponse**](../Models/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="serverIpmiPowerPost"></a>
# **serverIpmiPowerPost**
> TextResponse serverIpmiPowerPost(id, action, asset)

Server IPMI Power

    Uses the IPMI interface to set the Power status on the server.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| Server ID number | [default to null] |
| **action** | **String**| The power action to send to the ipmi controller. | [default to null] [enum: cycle, reset, on, off, soft] |
| **asset** | **Integer**| The Asset ID | [optional] [default to null] |

### Return type

[**TextResponse**](../Models/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="serversCancel"></a>
# **serversCancel**
> serversCancel_200_response serversCancel(id)

Cancel Server Service

    Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| Server ID number | [default to null] |

### Return type

[**serversCancel_200_response**](../Models/serversCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateServerInfo"></a>
# **updateServerInfo**
> SuccessTextResponse updateServerInfo(id)

Update Server Order

    Updates settings on a dedicated server order.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| Server ID number. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

