# SERVERS_API

All URIs are relative to *https://my.interserver.net/apiv2*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**add_server**](SERVERS_API.md#add_server) | **Post** /servers/order | Place Server Order
[**buy_it_now_server_order**](SERVERS_API.md#buy_it_now_server_order) | **Get** /servers/order/buy_now_server | Get Buy Now Server Options
[**mp_servers**](SERVERS_API.md#mp_servers) | **Get** /buy_now_servers_list | List Marketplace Servers
[**new_server**](SERVERS_API.md#new_server) | **Get** /servers/order | Server Ordering Information
[**place_buy_now_server**](SERVERS_API.md#place_buy_now_server) | **Post** /servers/order/buy_now_server | Place Buy Now Server Order
[**post_server_reverse_dns**](SERVERS_API.md#post_server_reverse_dns) | **Post** /servers/{id}/reverse_dns | Update Reverse DNS
[**put_servers**](SERVERS_API.md#put_servers) | **Put** /servers/order | Validate Server Order
[**server_info**](SERVERS_API.md#server_info) | **Get** /servers/{id} | Get Server Order
[**server_invoices**](SERVERS_API.md#server_invoices) | **Get** /servers/{id}/invoices | Get Server Invoices
[**server_ipmi_live_get**](SERVERS_API.md#server_ipmi_live_get) | **Get** /servers/{id}/ipmi_live | Server IPMI Live Information
[**server_ipmi_live_post**](SERVERS_API.md#server_ipmi_live_post) | **Post** /servers/{id}/ipmi_live | Server IPMI Live Setup
[**server_ipmi_power_get**](SERVERS_API.md#server_ipmi_power_get) | **Get** /servers/{id}/ipmi_power | Get IPMI Power Status
[**server_ipmi_power_post**](SERVERS_API.md#server_ipmi_power_post) | **Post** /servers/{id}/ipmi_power | Server IPMI Power
[**server_list**](SERVERS_API.md#server_list) | **Get** /servers | List Servers
[**server_reverse_dns**](SERVERS_API.md#server_reverse_dns) | **Get** /servers/{id}/reverse_dns | Reverse DNS Info
[**servers_cancel**](SERVERS_API.md#servers_cancel) | **Delete** /servers/{id} | Cancel Server Service
[**servers_welcome_email**](SERVERS_API.md#servers_welcome_email) | **Get** /servers/{id}/welcome_email | Resend Server Welcome Email
[**update_server_info**](SERVERS_API.md#update_server_info) | **Post** /servers/{id} | Update Server Order


# **add_server**
> add_server 


Place Server Order

Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.


### Parameters
This endpoint does not need any parameter.

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **buy_it_now_server_order**
> buy_it_now_server_order : detachable BUY_IT_NOW_SERVER_ORDER_200_RESPONSE


Get Buy Now Server Options

Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.


### Parameters
This endpoint does not need any parameter.

### Return type

[**BUY_IT_NOW_SERVER_ORDER_200_RESPONSE**](buyItNowServerOrder_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **mp_servers**
> mp_servers : detachable BUY_IT_NOW_LIST


List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.


### Parameters
This endpoint does not need any parameter.

### Return type

[**BUY_IT_NOW_LIST**](BuyItNowList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **new_server**
> new_server : detachable SERVER_ORDER


Server Ordering Information

Retrieves available server configurations and pricing for ordering a new dedicated server.


### Parameters
This endpoint does not need any parameter.

### Return type

[**SERVER_ORDER**](ServerOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **place_buy_now_server**
> place_buy_now_server (place_buy_now_server_request:  detachable PLACE_BUY_NOW_SERVER_REQUEST ): detachable SERVERS_BUY_NOW_RESPONSE


Place Buy Now Server Order

Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **place_buy_now_server_request** | [**PLACE_BUY_NOW_SERVER_REQUEST**](PLACE_BUY_NOW_SERVER_REQUEST.md)|  | [optional] 

### Return type

[**SERVERS_BUY_NOW_RESPONSE**](ServersBuyNowResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_server_reverse_dns**
> post_server_reverse_dns (id: INTEGER_32 ; reverse_dns_entries: REVERSE_DNS_ENTRIES ): detachable TEXT_RESPONSE


Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the server's IP addresses.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| Server ID number | [default to null]
 **reverse_dns_entries** | [**REVERSE_DNS_ENTRIES**](REVERSE_DNS_ENTRIES.md)|  | 

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_servers**
> put_servers 


Validate Server Order

Validates a server order before placing it. Use this to check for errors before committing to a purchase.


### Parameters
This endpoint does not need any parameter.

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **server_info**
> server_info (id: INTEGER_32 ): detachable SERVER


Get Server Order

Returns detailed information about a specific server including its hardware configuration, IPs, and status.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| Server ID number. | [default to null]

### Return type

[**SERVER**](Server.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **server_invoices**
> server_invoices (id: INTEGER_32 ): detachable CHARGE_INVOICE_ROWS


Get Server Invoices

Returns the billing invoices associated with this dedicated server.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| Server ID number | [default to null]

### Return type

[**CHARGE_INVOICE_ROWS**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **server_ipmi_live_get**
> server_ipmi_live_get (id: INTEGER_32 ): detachable SERVER_IPMI_LIVE_INFO


Server IPMI Live Information

Returns the current IPMI live connection information for the server.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| Server ID number | [default to null]

### Return type

[**SERVER_IPMI_LIVE_INFO**](ServerIpmiLiveInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **server_ipmi_live_post**
> server_ipmi_live_post (id: INTEGER_32 ; ip: STRING_32 ; asset:  detachable INTEGER_32 ): detachable SERVER_IPMI_LIVE_INFO


Server IPMI Live Setup

Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| Server ID number | [default to null]
 **ip** | **STRING_32**| Your IP Address you wish to connect to the IPMI system from. | [default to null]
 **asset** | **INTEGER_32**| Asset ID | [optional] [default to null]

### Return type

[**SERVER_IPMI_LIVE_INFO**](ServerIpmiLiveInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **server_ipmi_power_get**
> server_ipmi_power_get (id: INTEGER_32 ): detachable TEXT_RESPONSE


Get IPMI Power Status

Returns the chassis power status from ipmi.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| Server ID number | [default to null]

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **server_ipmi_power_post**
> server_ipmi_power_post (id: INTEGER_32 ; action: STRING_32 ; asset:  detachable INTEGER_32 ): detachable TEXT_RESPONSE


Server IPMI Power

Uses the IPMI interface to set the Power status on the server.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| Server ID number | [default to null]
 **action** | **STRING_32**| The power action to send to the ipmi controller. | [default to null]
 **asset** | **INTEGER_32**| The Asset ID | [optional] [default to null]

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **server_list**
> server_list : detachable LIST [SERVER_ROW]


List Servers

Returns all dedicated server services on the account with their current status and configuration.


### Parameters
This endpoint does not need any parameter.

### Return type

[**LIST [SERVER_ROW]**](ServerRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **server_reverse_dns**
> server_reverse_dns (id: INTEGER_32 ): detachable REVERSE_DNS_ENTRIES


Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the server's IP addresses.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| Server ID number | [default to null]

### Return type

[**REVERSE_DNS_ENTRIES**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **servers_cancel**
> servers_cancel (id: INTEGER_32 ): detachable SERVERS_CANCEL_200_RESPONSE


Cancel Server Service

Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| Server ID number | [default to null]

### Return type

[**SERVERS_CANCEL_200_RESPONSE**](serversCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **servers_welcome_email**
> servers_welcome_email (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Resend Server Welcome Email

Resends the welcome email for the order.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| Server ID number | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_server_info**
> update_server_info (id: STRING_32 )


Update Server Order

Updates settings on a dedicated server order.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| Server ID number. | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

