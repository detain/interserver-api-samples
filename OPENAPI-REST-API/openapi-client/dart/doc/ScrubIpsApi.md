# openapi.api.ScrubIpsApi

## Load the API package
```dart
import 'package:openapi/api.dart';
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**cancelScrubIp**](ScrubIpsApi.md#cancelscrubip) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service
[**createFilter**](ScrubIpsApi.md#createfilter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter
[**createGeoRule**](ScrubIpsApi.md#creategeorule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule
[**createRule**](ScrubIpsApi.md#createrule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule
[**deleteFilter**](ScrubIpsApi.md#deletefilter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter
[**disableScrub**](ScrubIpsApi.md#disablescrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection
[**enableScrub**](ScrubIpsApi.md#enablescrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection
[**getOrderDetail**](ScrubIpsApi.md#getorderdetail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information
[**getScrubIpDetails**](ScrubIpsApi.md#getscrubipdetails) | **GET** /scrub_ips/{id} | Get Scrub IP Details
[**getScrubIpFilterTypes**](ScrubIpsApi.md#getscrubipfiltertypes) | **GET** /scrub_ips/filter_types | List Scrub Filter Types
[**getScrubIpInvoices**](ScrubIpsApi.md#getscrubipinvoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices
[**getScrubIpLogs**](ScrubIpsApi.md#getscrubiplogs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs
[**getScrubIpsList**](ScrubIpsApi.md#getscrubipslist) | **GET** /scrub_ips | List Scrub IP Services
[**placeScrubOrder**](ScrubIpsApi.md#placescruborder) | **POST** /scrub_ips/order | Place Scrub IP Order
[**scrubIpsDeleteGeoRule**](ScrubIpsApi.md#scrubipsdeletegeorule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule
[**scrubIpsDeleteRule**](ScrubIpsApi.md#scrubipsdeleterule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule


# **cancelScrubIp**
> CancelScrubIp200Response cancelScrubIp(id)

Cancel Scrub IP Service

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = ScrubIpsApi();
final id = 56; // int | ScrubIp ID number

try {
    final result = api_instance.cancelScrubIp(id);
    print(result);
} catch (e) {
    print('Exception when calling ScrubIpsApi->cancelScrubIp: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**CancelScrubIp200Response**](CancelScrubIp200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createFilter**
> CreateFilter201Response createFilter(id, createFilter)

Create Traffic Filter

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = ScrubIpsApi();
final id = 56; // int | ScrubIp ID number
final createFilter = CreateFilter(); // CreateFilter | 

try {
    final result = api_instance.createFilter(id, createFilter);
    print(result);
} catch (e) {
    print('Exception when calling ScrubIpsApi->createFilter: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 
 **createFilter** | [**CreateFilter**](CreateFilter.md)|  | 

### Return type

[**CreateFilter201Response**](CreateFilter201Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createGeoRule**
> CreateRule201Response createGeoRule(id, createGeoFirewallRule)

Create Geo Firewall Rule

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = ScrubIpsApi();
final id = 56; // int | ScrubIp ID number
final createGeoFirewallRule = CreateGeoFirewallRule(); // CreateGeoFirewallRule | 

try {
    final result = api_instance.createGeoRule(id, createGeoFirewallRule);
    print(result);
} catch (e) {
    print('Exception when calling ScrubIpsApi->createGeoRule: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 
 **createGeoFirewallRule** | [**CreateGeoFirewallRule**](CreateGeoFirewallRule.md)|  | 

### Return type

[**CreateRule201Response**](CreateRule201Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createRule**
> CreateRule201Response createRule(id, createFirewallRule)

Create Firewall Rule

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = ScrubIpsApi();
final id = 56; // int | ScrubIp ID number
final createFirewallRule = CreateFirewallRule(); // CreateFirewallRule | 

try {
    final result = api_instance.createRule(id, createFirewallRule);
    print(result);
} catch (e) {
    print('Exception when calling ScrubIpsApi->createRule: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 
 **createFirewallRule** | [**CreateFirewallRule**](CreateFirewallRule.md)|  | 

### Return type

[**CreateRule201Response**](CreateRule201Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteFilter**
> DeleteFilter200Response deleteFilter(id, createFilter)

Delete Traffic Filter

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = ScrubIpsApi();
final id = 56; // int | ScrubIp ID number
final createFilter = CreateFilter(); // CreateFilter | 

try {
    final result = api_instance.deleteFilter(id, createFilter);
    print(result);
} catch (e) {
    print('Exception when calling ScrubIpsApi->deleteFilter: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 
 **createFilter** | [**CreateFilter**](CreateFilter.md)|  | 

### Return type

[**DeleteFilter200Response**](DeleteFilter200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **disableScrub**
> DisableScrub200Response disableScrub(id)

Disable Scrub Protection

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = ScrubIpsApi();
final id = 56; // int | ScrubIp ID number

try {
    final result = api_instance.disableScrub(id);
    print(result);
} catch (e) {
    print('Exception when calling ScrubIpsApi->disableScrub: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**DisableScrub200Response**](DisableScrub200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **enableScrub**
> EnableScrub200Response enableScrub(id)

Enable Scrub Protection

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = ScrubIpsApi();
final id = 56; // int | ScrubIp ID number

try {
    final result = api_instance.enableScrub(id);
    print(result);
} catch (e) {
    print('Exception when calling ScrubIpsApi->enableScrub: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**EnableScrub200Response**](EnableScrub200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getOrderDetail**
> GetOrderDetail200Response getOrderDetail()

Get Scrub IP Ordering Information

Returns the available Scrub IP service plans and pricing information needed to build an order form.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = ScrubIpsApi();

try {
    final result = api_instance.getOrderDetail();
    print(result);
} catch (e) {
    print('Exception when calling ScrubIpsApi->getOrderDetail: $e\n');
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**GetOrderDetail200Response**](GetOrderDetail200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getScrubIpDetails**
> GetScrubIpDetails200Response getScrubIpDetails(id)

Get Scrub IP Details

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = ScrubIpsApi();
final id = 56; // int | ScrubIp ID number

try {
    final result = api_instance.getScrubIpDetails(id);
    print(result);
} catch (e) {
    print('Exception when calling ScrubIpsApi->getScrubIpDetails: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**GetScrubIpDetails200Response**](GetScrubIpDetails200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = ScrubIpsApi();

try {
    final result = api_instance.getScrubIpFilterTypes();
    print(result);
} catch (e) {
    print('Exception when calling ScrubIpsApi->getScrubIpFilterTypes: $e\n');
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ScrubIpFilterTypes**](ScrubIpFilterTypes.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = ScrubIpsApi();
final id = 56; // int | ScrubIp ID number

try {
    final result = api_instance.getScrubIpInvoices(id);
    print(result);
} catch (e) {
    print('Exception when calling ScrubIpsApi->getScrubIpInvoices: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = ScrubIpsApi();
final id = 413232  ; // String | Scrub Order ID

try {
    final result = api_instance.getScrubIpLogs(id);
    print(result);
} catch (e) {
    print('Exception when calling ScrubIpsApi->getScrubIpLogs: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| Scrub Order ID | 

### Return type

[**List<ScrubIpsLogRowSchema>**](ScrubIpsLogRowSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

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
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = ScrubIpsApi();

try {
    final result = api_instance.getScrubIpsList();
    print(result);
} catch (e) {
    print('Exception when calling ScrubIpsApi->getScrubIpsList: $e\n');
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List<ScrubIpsRowSchema>**](ScrubIpsRowSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **placeScrubOrder**
> PlaceScrubOrder201Response placeScrubOrder(scrubIpPlaceOrder)

Place Scrub IP Order

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = ScrubIpsApi();
final scrubIpPlaceOrder = ScrubIpPlaceOrder(); // ScrubIpPlaceOrder | 

try {
    final result = api_instance.placeScrubOrder(scrubIpPlaceOrder);
    print(result);
} catch (e) {
    print('Exception when calling ScrubIpsApi->placeScrubOrder: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **scrubIpPlaceOrder** | [**ScrubIpPlaceOrder**](ScrubIpPlaceOrder.md)|  | 

### Return type

[**PlaceScrubOrder201Response**](PlaceScrubOrder201Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrubIpsDeleteGeoRule**
> ScrubIpsDeleteRule200Response scrubIpsDeleteGeoRule(id, deleteGeoFirewallRule)

Delete Geo Firewall Rule

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = ScrubIpsApi();
final id = 56; // int | ScrubIp ID number
final deleteGeoFirewallRule = DeleteGeoFirewallRule(); // DeleteGeoFirewallRule | 

try {
    final result = api_instance.scrubIpsDeleteGeoRule(id, deleteGeoFirewallRule);
    print(result);
} catch (e) {
    print('Exception when calling ScrubIpsApi->scrubIpsDeleteGeoRule: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 
 **deleteGeoFirewallRule** | [**DeleteGeoFirewallRule**](DeleteGeoFirewallRule.md)|  | 

### Return type

[**ScrubIpsDeleteRule200Response**](ScrubIpsDeleteRule200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrubIpsDeleteRule**
> ScrubIpsDeleteRule200Response scrubIpsDeleteRule(id, deleteFirewallRule)

Delete Firewall Rule

Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = ScrubIpsApi();
final id = 56; // int | ScrubIp ID number
final deleteFirewallRule = DeleteFirewallRule(); // DeleteFirewallRule | 

try {
    final result = api_instance.scrubIpsDeleteRule(id, deleteFirewallRule);
    print(result);
} catch (e) {
    print('Exception when calling ScrubIpsApi->scrubIpsDeleteRule: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 
 **deleteFirewallRule** | [**DeleteFirewallRule**](DeleteFirewallRule.md)|  | 

### Return type

[**ScrubIpsDeleteRule200Response**](ScrubIpsDeleteRule200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

