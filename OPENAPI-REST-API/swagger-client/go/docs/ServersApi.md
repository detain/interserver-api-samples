# {{classname}}

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddServer**](ServersApi.md#AddServer) | **Post** /servers/order | Place Server Order
[**BuyItNowServerOrder**](ServersApi.md#BuyItNowServerOrder) | **Get** /servers/order/buy_now_server | Get Buy Now Server Options
[**GetMPServers**](ServersApi.md#GetMPServers) | **Get** /buy_now_servers_list | List Marketplace Servers
[**GetNewServer**](ServersApi.md#GetNewServer) | **Get** /servers/order | Server Ordering Information
[**GetServerInfo**](ServersApi.md#GetServerInfo) | **Get** /servers/{id} | Get Server Order
[**GetServerInvoices**](ServersApi.md#GetServerInvoices) | **Get** /servers/{id}/invoices | Get Server Invoices
[**GetServerList**](ServersApi.md#GetServerList) | **Get** /servers | List Servers
[**GetServerReverseDns**](ServersApi.md#GetServerReverseDns) | **Get** /servers/{id}/reverse_dns | Reverse DNS Info
[**GetServersWelcomeEmail**](ServersApi.md#GetServersWelcomeEmail) | **Get** /servers/{id}/welcome_email | Resend Server Welcome Email
[**PlaceBuyNowServer**](ServersApi.md#PlaceBuyNowServer) | **Post** /servers/order/buy_now_server | Place Buy Now Server Order
[**PostServerReverseDns**](ServersApi.md#PostServerReverseDns) | **Post** /servers/{id}/reverse_dns | Update Reverse DNS
[**PutServers**](ServersApi.md#PutServers) | **Put** /servers/order | Validate Server Order
[**ServerIpmiLiveGet**](ServersApi.md#ServerIpmiLiveGet) | **Get** /servers/{id}/ipmi_live | Server IPMI Live Information
[**ServerIpmiLivePost**](ServersApi.md#ServerIpmiLivePost) | **Post** /servers/{id}/ipmi_live | Server IPMI Live Setup
[**ServerIpmiPowerGet**](ServersApi.md#ServerIpmiPowerGet) | **Get** /servers/{id}/ipmi_power | Get IPMI Power Status
[**ServerIpmiPowerPost**](ServersApi.md#ServerIpmiPowerPost) | **Post** /servers/{id}/ipmi_power | Server IPMI Power
[**ServersCancel**](ServersApi.md#ServersCancel) | **Delete** /servers/{id} | Cancel Server Service
[**UpdateServerInfo**](ServersApi.md#UpdateServerInfo) | **Post** /servers/{id} | Update Server Order

# **AddServer**
> AddServer(ctx, )
Place Server Order

Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.

### Required Parameters
This endpoint does not need any parameter.

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BuyItNowServerOrder**
> InlineResponse20026 BuyItNowServerOrder(ctx, )
Get Buy Now Server Options

Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.

### Required Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse20026**](inline_response_200_26.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetMPServers**
> []BuyItNowRow GetMPServers(ctx, )
List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Required Parameters
This endpoint does not need any parameter.

### Return type

[**[]BuyItNowRow**](array.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetNewServer**
> ServerOrder GetNewServer(ctx, )
Server Ordering Information

Retrieves available server configurations and pricing for ordering a new dedicated server.

### Required Parameters
This endpoint does not need any parameter.

### Return type

[**ServerOrder**](ServerOrder.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetServerInfo**
> Server GetServerInfo(ctx, id)
Get Server Order

Returns detailed information about a specific server including its hardware configuration, IPs, and status.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| Server ID number. | 

### Return type

[**Server**](Server.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetServerInvoices**
> ChargeInvoiceRows GetServerInvoices(ctx, id)
Get Server Invoices

Returns the billing invoices associated with this dedicated server.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| Server ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetServerList**
> []ServerRow GetServerList(ctx, )
List Servers

Returns all dedicated server services on the account with their current status and configuration.

### Required Parameters
This endpoint does not need any parameter.

### Return type

[**[]ServerRow**](ServerRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetServerReverseDns**
> ReverseDnsEntries GetServerReverseDns(ctx, id)
Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the server's IP addresses.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| Server ID number | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetServersWelcomeEmail**
> SuccessTextResponse GetServersWelcomeEmail(ctx, id)
Resend Server Welcome Email

Resends the welcome email for the order.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| Server ID number | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PlaceBuyNowServer**
> ServersBuyNowResponse PlaceBuyNowServer(ctx, optional)
Place Buy Now Server Order

Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***ServersApiPlaceBuyNowServerOpts** | optional parameters | nil if no parameters

### Optional Parameters
Optional parameters are passed through a pointer to a ServersApiPlaceBuyNowServerOpts struct
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**optional.Interface of OrderBuyNowServerBody**](OrderBuyNowServerBody.md)|  | 

### Return type

[**ServersBuyNowResponse**](ServersBuyNowResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostServerReverseDns**
> TextResponse PostServerReverseDns(ctx, body, ips, id)
Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the server's IP addresses.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 
  **ips** | [**ModelMap**](interface{}.md)|  | 
  **id** | **int32**| Server ID number | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PutServers**
> PutServers(ctx, )
Validate Server Order

Validates a server order before placing it. Use this to check for errors before committing to a purchase.

### Required Parameters
This endpoint does not need any parameter.

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServerIpmiLiveGet**
> ServerIpmiLiveInfo ServerIpmiLiveGet(ctx, id)
Server IPMI Live Information

Returns the current IPMI live connection information for the server.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| Server ID number | 

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServerIpmiLivePost**
> ServerIpmiLiveInfo ServerIpmiLivePost(ctx, asset, ip, body, id)
Server IPMI Live Setup

Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **asset** | **int32**|  | 
  **ip** | **string**|  | 
  **body** | [**ServerIpmiLiveRequest**](ServerIpmiLiveRequest.md)|  | 
  **id** | **int32**| Server ID number | 

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServerIpmiPowerGet**
> TextResponse ServerIpmiPowerGet(ctx, id)
Get IPMI Power Status

Returns the chassis power status from ipmi.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| Server ID number | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServerIpmiPowerPost**
> TextResponse ServerIpmiPowerPost(ctx, asset, action, body, id)
Server IPMI Power

Uses the IPMI interface to set the Power status on the server.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **asset** | **int32**|  | 
  **action** | **string**|  | 
  **body** | [**ServerIpmiPowerRequest**](ServerIpmiPowerRequest.md)|  | 
  **id** | **int32**| Server ID number | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServersCancel**
> InlineResponse20019 ServersCancel(ctx, id)
Cancel Server Service

Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| Server ID number | 

### Return type

[**InlineResponse20019**](inline_response_200_19.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UpdateServerInfo**
> UpdateServerInfo(ctx, id)
Update Server Order

Updates settings on a dedicated server order.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **string**| Server ID number. | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

