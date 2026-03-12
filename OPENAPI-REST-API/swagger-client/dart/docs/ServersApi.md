# swagger.api.ServersApi

## Load the API package
```dart
import 'package:swagger/api.dart';
```

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

Place Server Order

Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();

try {
    api_instance.addServer();
} catch (e) {
    print("Exception when calling ServersApi->addServer: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **buyItNowServerOrder**
> InlineResponse20026 buyItNowServerOrder()

Get Buy Now Server Options

Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();

try {
    var result = api_instance.buyItNowServerOrder();
    print(result);
} catch (e) {
    print("Exception when calling ServersApi->buyItNowServerOrder: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse20026**](InlineResponse20026.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMPServers**
> BuyItNowList getMPServers()

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();

try {
    var result = api_instance.getMPServers();
    print(result);
} catch (e) {
    print("Exception when calling ServersApi->getMPServers: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BuyItNowList**](BuyItNowList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getNewServer**
> ServerOrder getNewServer()

Server Ordering Information

Retrieves available server configurations and pricing for ordering a new dedicated server.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();

try {
    var result = api_instance.getNewServer();
    print(result);
} catch (e) {
    print("Exception when calling ServersApi->getNewServer: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServerOrder**](ServerOrder.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getServerInfo**
> Server getServerInfo(id)

Get Server Order

Returns detailed information about a specific server including its hardware configuration, IPs, and status.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();
var id = 56; // int | Server ID number.

try {
    var result = api_instance.getServerInfo(id);
    print(result);
} catch (e) {
    print("Exception when calling ServersApi->getServerInfo: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number. | 

### Return type

[**Server**](Server.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getServerInvoices**
> ChargeInvoiceRows getServerInvoices(id)

Get Server Invoices

Returns the billing invoices associated with this dedicated server.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();
var id = 56; // int | Server ID number

try {
    var result = api_instance.getServerInvoices(id);
    print(result);
} catch (e) {
    print("Exception when calling ServersApi->getServerInvoices: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getServerList**
> List<ServerRow> getServerList()

List Servers

Returns all dedicated server services on the account with their current status and configuration.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();

try {
    var result = api_instance.getServerList();
    print(result);
} catch (e) {
    print("Exception when calling ServersApi->getServerList: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List<ServerRow>**](ServerRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getServerReverseDns**
> ReverseDnsEntries getServerReverseDns(id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the server's IP addresses.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();
var id = 56; // int | Server ID number

try {
    var result = api_instance.getServerReverseDns(id);
    print(result);
} catch (e) {
    print("Exception when calling ServersApi->getServerReverseDns: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getServersWelcomeEmail**
> SuccessTextResponse getServersWelcomeEmail(id)

Resend Server Welcome Email

Resends the welcome email for the order.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();
var id = 56; // int | Server ID number

try {
    var result = api_instance.getServersWelcomeEmail(id);
    print(result);
} catch (e) {
    print("Exception when calling ServersApi->getServersWelcomeEmail: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **placeBuyNowServer**
> ServersBuyNowResponse placeBuyNowServer(body)

Place Buy Now Server Order

Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();
var body = new OrderBuyNowServerBody(); // OrderBuyNowServerBody | 

try {
    var result = api_instance.placeBuyNowServer(body);
    print(result);
} catch (e) {
    print("Exception when calling ServersApi->placeBuyNowServer: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OrderBuyNowServerBody**](OrderBuyNowServerBody.md)|  | [optional] 

### Return type

[**ServersBuyNowResponse**](ServersBuyNowResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postServerReverseDns**
> TextResponse postServerReverseDns(body, ips, id)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the server's IP addresses.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();
var body = new ReverseDnsEntries(); // ReverseDnsEntries | 
var ips = ; // Map | 
var id = 56; // int | Server ID number

try {
    var result = api_instance.postServerReverseDns(body, ips, id);
    print(result);
} catch (e) {
    print("Exception when calling ServersApi->postServerReverseDns: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 
 **ips** | [**Map**](Object.md)|  | 
 **id** | **int**| Server ID number | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **putServers**
> putServers()

Validate Server Order

Validates a server order before placing it. Use this to check for errors before committing to a purchase.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();

try {
    api_instance.putServers();
} catch (e) {
    print("Exception when calling ServersApi->putServers: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **serverIpmiLiveGet**
> ServerIpmiLiveInfo serverIpmiLiveGet(id)

Server IPMI Live Information

Returns the current IPMI live connection information for the server.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();
var id = 56; // int | Server ID number

try {
    var result = api_instance.serverIpmiLiveGet(id);
    print(result);
} catch (e) {
    print("Exception when calling ServersApi->serverIpmiLiveGet: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number | 

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **serverIpmiLivePost**
> ServerIpmiLiveInfo serverIpmiLivePost(asset, ip, body, id)

Server IPMI Live Setup

Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();
var asset = 56; // int | 
var ip = ip_example; // String | 
var body = new ServerIpmiLiveRequest(); // ServerIpmiLiveRequest | 
var id = 56; // int | Server ID number

try {
    var result = api_instance.serverIpmiLivePost(asset, ip, body, id);
    print(result);
} catch (e) {
    print("Exception when calling ServersApi->serverIpmiLivePost: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **asset** | **int**|  | 
 **ip** | **String**|  | 
 **body** | [**ServerIpmiLiveRequest**](ServerIpmiLiveRequest.md)|  | 
 **id** | **int**| Server ID number | 

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **serverIpmiPowerGet**
> TextResponse serverIpmiPowerGet(id)

Get IPMI Power Status

Returns the chassis power status from ipmi.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();
var id = 56; // int | Server ID number

try {
    var result = api_instance.serverIpmiPowerGet(id);
    print(result);
} catch (e) {
    print("Exception when calling ServersApi->serverIpmiPowerGet: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **serverIpmiPowerPost**
> TextResponse serverIpmiPowerPost(asset, action, body, id)

Server IPMI Power

Uses the IPMI interface to set the Power status on the server.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();
var asset = 56; // int | 
var action = action_example; // String | 
var body = new ServerIpmiPowerRequest(); // ServerIpmiPowerRequest | 
var id = 56; // int | Server ID number

try {
    var result = api_instance.serverIpmiPowerPost(asset, action, body, id);
    print(result);
} catch (e) {
    print("Exception when calling ServersApi->serverIpmiPowerPost: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **asset** | **int**|  | 
 **action** | **String**|  | 
 **body** | [**ServerIpmiPowerRequest**](ServerIpmiPowerRequest.md)|  | 
 **id** | **int**| Server ID number | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **serversCancel**
> InlineResponse20019 serversCancel(id)

Cancel Server Service

Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();
var id = 56; // int | Server ID number

try {
    var result = api_instance.serversCancel(id);
    print(result);
} catch (e) {
    print("Exception when calling ServersApi->serversCancel: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number | 

### Return type

[**InlineResponse20019**](InlineResponse20019.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateServerInfo**
> updateServerInfo(id)

Update Server Order

Updates settings on a dedicated server order.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new ServersApi();
var id = id_example; // String | Server ID number.

try {
    api_instance.updateServerInfo(id);
} catch (e) {
    print("Exception when calling ServersApi->updateServerInfo: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| Server ID number. | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

