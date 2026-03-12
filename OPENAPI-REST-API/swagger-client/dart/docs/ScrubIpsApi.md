# swagger.api.ScrubIpsApi

## Load the API package
```dart
import 'package:swagger/api.dart';
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**cancelScrubIp**](ScrubIpsApi.md#cancelScrubIp) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service
[**createFilter**](ScrubIpsApi.md#createFilter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter
[**createGeoRule**](ScrubIpsApi.md#createGeoRule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule
[**createRule**](ScrubIpsApi.md#createRule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule
[**deleteFilter**](ScrubIpsApi.md#deleteFilter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter
[**disableScrub**](ScrubIpsApi.md#disableScrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection
[**enableScrub**](ScrubIpsApi.md#enableScrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection
[**getOrderDetail**](ScrubIpsApi.md#getOrderDetail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information
[**getScrubIpDetails**](ScrubIpsApi.md#getScrubIpDetails) | **GET** /scrub_ips/{id} | Get Scrub IP Details
[**getScrubIpFilterTypes**](ScrubIpsApi.md#getScrubIpFilterTypes) | **GET** /scrub_ips/filter_types | List Scrub Filter Types
[**getScrubIpInvoices**](ScrubIpsApi.md#getScrubIpInvoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices
[**getScrubIpLogs**](ScrubIpsApi.md#getScrubIpLogs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs
[**getScrubIpsList**](ScrubIpsApi.md#getScrubIpsList) | **GET** /scrub_ips | List Scrub IP Services
[**placeScrubOrder**](ScrubIpsApi.md#placeScrubOrder) | **POST** /scrub_ips/order | Place Scrub IP Order
[**scrubIpsDeleteGeoRule**](ScrubIpsApi.md#scrubIpsDeleteGeoRule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule
[**scrubIpsDeleteRule**](ScrubIpsApi.md#scrubIpsDeleteRule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule

# **cancelScrubIp**
> InlineResponse20013 cancelScrubIp(id)

Cancel Scrub IP Service

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

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

var api_instance = new ScrubIpsApi();
var id = 56; // int | ScrubIp ID number

try {
    var result = api_instance.cancelScrubIp(id);
    print(result);
} catch (e) {
    print("Exception when calling ScrubIpsApi->cancelScrubIp: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse20013**](InlineResponse20013.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createFilter**
> InlineResponse2011 createFilter(body, id)

Create Traffic Filter

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.

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

var api_instance = new ScrubIpsApi();
var body = new CreateFilter(); // CreateFilter | 
var id = 56; // int | ScrubIp ID number

try {
    var result = api_instance.createFilter(body, id);
    print(result);
} catch (e) {
    print("Exception when calling ScrubIpsApi->createFilter: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFilter**](CreateFilter.md)|  | 
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse2011**](InlineResponse2011.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createGeoRule**
> InlineResponse201 createGeoRule(body, id)

Create Geo Firewall Rule

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

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

var api_instance = new ScrubIpsApi();
var body = new CreateGeoFirewallRule(); // CreateGeoFirewallRule | 
var id = 56; // int | ScrubIp ID number

try {
    var result = api_instance.createGeoRule(body, id);
    print(result);
} catch (e) {
    print("Exception when calling ScrubIpsApi->createGeoRule: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateGeoFirewallRule**](CreateGeoFirewallRule.md)|  | 
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse201**](InlineResponse201.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createRule**
> InlineResponse201 createRule(body, id)

Create Firewall Rule

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

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

var api_instance = new ScrubIpsApi();
var body = new CreateFirewallRule(); // CreateFirewallRule | 
var id = 56; // int | ScrubIp ID number

try {
    var result = api_instance.createRule(body, id);
    print(result);
} catch (e) {
    print("Exception when calling ScrubIpsApi->createRule: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFirewallRule**](CreateFirewallRule.md)|  | 
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse201**](InlineResponse201.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteFilter**
> InlineResponse20017 deleteFilter(body, id)

Delete Traffic Filter

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

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

var api_instance = new ScrubIpsApi();
var body = new CreateFilter(); // CreateFilter | 
var id = 56; // int | ScrubIp ID number

try {
    var result = api_instance.deleteFilter(body, id);
    print(result);
} catch (e) {
    print("Exception when calling ScrubIpsApi->deleteFilter: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFilter**](CreateFilter.md)|  | 
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse20017**](InlineResponse20017.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **disableScrub**
> InlineResponse20015 disableScrub(id)

Disable Scrub Protection

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

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

var api_instance = new ScrubIpsApi();
var id = 56; // int | ScrubIp ID number

try {
    var result = api_instance.disableScrub(id);
    print(result);
} catch (e) {
    print("Exception when calling ScrubIpsApi->disableScrub: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse20015**](InlineResponse20015.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **enableScrub**
> InlineResponse20014 enableScrub(id)

Enable Scrub Protection

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

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

var api_instance = new ScrubIpsApi();
var id = 56; // int | ScrubIp ID number

try {
    var result = api_instance.enableScrub(id);
    print(result);
} catch (e) {
    print("Exception when calling ScrubIpsApi->enableScrub: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse20014**](InlineResponse20014.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getOrderDetail**
> InlineResponse20018 getOrderDetail()

Get Scrub IP Ordering Information

Returns the available Scrub IP service plans and pricing information needed to build an order form.

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

var api_instance = new ScrubIpsApi();

try {
    var result = api_instance.getOrderDetail();
    print(result);
} catch (e) {
    print("Exception when calling ScrubIpsApi->getOrderDetail: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse20018**](InlineResponse20018.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getScrubIpDetails**
> InlineResponse20012 getScrubIpDetails(id)

Get Scrub IP Details

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

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

var api_instance = new ScrubIpsApi();
var id = 56; // int | ScrubIp ID number

try {
    var result = api_instance.getScrubIpDetails(id);
    print(result);
} catch (e) {
    print("Exception when calling ScrubIpsApi->getScrubIpDetails: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse20012**](InlineResponse20012.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getScrubIpFilterTypes**
> ScrubIpFilterTypes getScrubIpFilterTypes()

List Scrub Filter Types

Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.

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

var api_instance = new ScrubIpsApi();

try {
    var result = api_instance.getScrubIpFilterTypes();
    print(result);
} catch (e) {
    print("Exception when calling ScrubIpsApi->getScrubIpFilterTypes: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ScrubIpFilterTypes**](ScrubIpFilterTypes.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getScrubIpInvoices**
> ChargeInvoiceRows getScrubIpInvoices(id)

Get ScrubIp Invoices

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

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

var api_instance = new ScrubIpsApi();
var id = 56; // int | ScrubIp ID number

try {
    var result = api_instance.getScrubIpInvoices(id);
    print(result);
} catch (e) {
    print("Exception when calling ScrubIpsApi->getScrubIpInvoices: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getScrubIpLogs**
> List<ScrubIpsLogRowSchema> getScrubIpLogs(id)

Get Scrub IP Logs

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

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

var api_instance = new ScrubIpsApi();
var id = id_example; // String | Scrub Order ID

try {
    var result = api_instance.getScrubIpLogs(id);
    print(result);
} catch (e) {
    print("Exception when calling ScrubIpsApi->getScrubIpLogs: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| Scrub Order ID | 

### Return type

[**List<ScrubIpsLogRowSchema>**](ScrubIpsLogRowSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getScrubIpsList**
> List<ScrubIpsRowSchema> getScrubIpsList()

List Scrub IP Services

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.

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

var api_instance = new ScrubIpsApi();

try {
    var result = api_instance.getScrubIpsList();
    print(result);
} catch (e) {
    print("Exception when calling ScrubIpsApi->getScrubIpsList: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List<ScrubIpsRowSchema>**](ScrubIpsRowSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **placeScrubOrder**
> InlineResponse2012 placeScrubOrder(body)

Place Scrub IP Order

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

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

var api_instance = new ScrubIpsApi();
var body = new ScrubIpPlaceOrder(); // ScrubIpPlaceOrder | 

try {
    var result = api_instance.placeScrubOrder(body);
    print(result);
} catch (e) {
    print("Exception when calling ScrubIpsApi->placeScrubOrder: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ScrubIpPlaceOrder**](ScrubIpPlaceOrder.md)|  | 

### Return type

[**InlineResponse2012**](InlineResponse2012.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrubIpsDeleteGeoRule**
> InlineResponse20016 scrubIpsDeleteGeoRule(body, id)

Delete Geo Firewall Rule

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

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

var api_instance = new ScrubIpsApi();
var body = new Delete Geo Firewall Rule(); // Delete Geo Firewall Rule | 
var id = 56; // int | ScrubIp ID number

try {
    var result = api_instance.scrubIpsDeleteGeoRule(body, id);
    print(result);
} catch (e) {
    print("Exception when calling ScrubIpsApi->scrubIpsDeleteGeoRule: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**Delete Geo Firewall Rule**](Delete Geo Firewall Rule.md)|  | 
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse20016**](InlineResponse20016.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrubIpsDeleteRule**
> InlineResponse20016 scrubIpsDeleteRule(body, id)

Delete Firewall Rule

Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

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

var api_instance = new ScrubIpsApi();
var body = new Delete Firewall Rule(); // Delete Firewall Rule | 
var id = 56; // int | ScrubIp ID number

try {
    var result = api_instance.scrubIpsDeleteRule(body, id);
    print(result);
} catch (e) {
    print("Exception when calling ScrubIpsApi->scrubIpsDeleteRule: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**Delete Firewall Rule**](Delete Firewall Rule.md)|  | 
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse20016**](InlineResponse20016.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

