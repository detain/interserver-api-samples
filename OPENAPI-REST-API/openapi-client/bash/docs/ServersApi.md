# ServersApi

All URIs are relative to */apiv2*

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



## addServer

Place Server Order

Places an order for a new dedicated server. Use 'PUT /servers/order' to validate the order first.

### Example

```bash
 addServer
```

### Parameters

This endpoint does not need any parameter.

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## buyItNowServerOrder

Get Buy Now Server Options

Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via 'POST /servers/order/buy_now_server'.

### Example

```bash
 buyItNowServerOrder
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**BuyItNowServerOrder200Response**](BuyItNowServerOrder200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getMPServers

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example

```bash
 getMPServers
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**BuyItNowList**](BuyItNowList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getNewServer

Server Ordering Information

Retrieves available server configurations and pricing for ordering a new dedicated server.

### Example

```bash
 getNewServer
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**ServerOrder**](ServerOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getServerInfo

Get Server Order

Returns detailed information about a specific server including its hardware configuration, IPs, and status.

### Example

```bash
 getServerInfo id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | Server ID number. | [default to null]

### Return type

[**Server**](Server.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getServerInvoices

Get Server Invoices

Returns the billing invoices associated with this dedicated server.

### Example

```bash
 getServerInvoices id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | Server ID number | [default to null]

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getServerList

List Servers

Returns all dedicated server services on the account with their current status and configuration.

### Example

```bash
 getServerList
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**array[ServerRow]**](ServerRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getServerReverseDns

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the server's IP addresses.

### Example

```bash
 getServerReverseDns id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | Server ID number | [default to null]

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getServersWelcomeEmail

Resend Server Welcome Email

Resends the welcome email for the order.

### Example

```bash
 getServersWelcomeEmail id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | Server ID number | [default to null]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## placeBuyNowServer

Place Buy Now Server Order

Places an order for a buy-it-now dedicated server. Use 'GET /servers/order/buy_now_server' to retrieve available server configurations and their IDs before ordering.

### Example

```bash
 placeBuyNowServer
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **placeBuyNowServerRequest** | [**PlaceBuyNowServerRequest**](PlaceBuyNowServerRequest.md) |  | [optional]

### Return type

[**ServersBuyNowResponse**](ServersBuyNowResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postServerReverseDns

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the server's IP addresses.

### Example

```bash
 postServerReverseDns id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | Server ID number | [default to null]
 **reverseDnsEntries** | [**ReverseDnsEntries**](ReverseDnsEntries.md) |  |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## putServers

Validate Server Order

Validates a server order before placing it. Use this to check for errors before committing to a purchase.

### Example

```bash
 putServers
```

### Parameters

This endpoint does not need any parameter.

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## serverIpmiLiveGet

Server IPMI Live Information

Returns the current IPMI live connection information for the server.

### Example

```bash
 serverIpmiLiveGet id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | Server ID number | [default to null]

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## serverIpmiLivePost

Server IPMI Live Setup

Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.

### Example

```bash
 serverIpmiLivePost id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | Server ID number | [default to null]
 **ip** | **string** | Your IP Address you wish to connect to the IPMI system from. | [default to null]
 **asset** | **integer** | Asset ID | [optional] [default to null]

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## serverIpmiPowerGet

Get IPMI Power Status

Returns the chassis power status from ipmi.

### Example

```bash
 serverIpmiPowerGet id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | Server ID number | [default to null]

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## serverIpmiPowerPost

Server IPMI Power

Uses the IPMI interface to set the Power status on the server.

### Example

```bash
 serverIpmiPowerPost id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | Server ID number | [default to null]
 **action** | **string** | The power action to send to the ipmi controller. | [default to null]
 **asset** | **integer** | The Asset ID | [optional] [default to null]

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## serversCancel

Cancel Server Service

Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example

```bash
 serversCancel id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | Server ID number | [default to null]

### Return type

[**ServersCancel200Response**](ServersCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## updateServerInfo

Update Server Order

Updates settings on a dedicated server order.

### Example

```bash
 updateServerInfo id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string** | Server ID number. | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

