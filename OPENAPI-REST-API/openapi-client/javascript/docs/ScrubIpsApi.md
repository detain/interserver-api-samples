# InterServerManagementApi.ScrubIpsApi

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



## cancelScrubIp

> CancelScrubIp200Response cancelScrubIp(id)

Cancel Scrub IP Service

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.ScrubIpsApi();
let id = 56; // Number | ScrubIp ID number
apiInstance.cancelScrubIp(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| ScrubIp ID number | 

### Return type

[**CancelScrubIp200Response**](CancelScrubIp200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## createFilter

> CreateFilter201Response createFilter(id, CreateFilter)

Create Traffic Filter

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use &#x60;GET /scrub_ips/filter_types&#x60; to list available filter types.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.ScrubIpsApi();
let id = 56; // Number | ScrubIp ID number
let CreateFilter = new InterServerManagementApi.CreateFilter(); // CreateFilter | 
apiInstance.createFilter(id, CreateFilter, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| ScrubIp ID number | 
 **CreateFilter** | [**CreateFilter**](CreateFilter.md)|  | 

### Return type

[**CreateFilter201Response**](CreateFilter201Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## createGeoRule

> CreateRule201Response createGeoRule(id, CreateGeoFirewallRule)

Create Geo Firewall Rule

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.ScrubIpsApi();
let id = 56; // Number | ScrubIp ID number
let CreateGeoFirewallRule = new InterServerManagementApi.CreateGeoFirewallRule(); // CreateGeoFirewallRule | 
apiInstance.createGeoRule(id, CreateGeoFirewallRule, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| ScrubIp ID number | 
 **CreateGeoFirewallRule** | [**CreateGeoFirewallRule**](CreateGeoFirewallRule.md)|  | 

### Return type

[**CreateRule201Response**](CreateRule201Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## createRule

> CreateRule201Response createRule(id, CreateFirewallRule)

Create Firewall Rule

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.ScrubIpsApi();
let id = 56; // Number | ScrubIp ID number
let CreateFirewallRule = new InterServerManagementApi.CreateFirewallRule(); // CreateFirewallRule | 
apiInstance.createRule(id, CreateFirewallRule, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| ScrubIp ID number | 
 **CreateFirewallRule** | [**CreateFirewallRule**](CreateFirewallRule.md)|  | 

### Return type

[**CreateRule201Response**](CreateRule201Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## deleteFilter

> DeleteFilter200Response deleteFilter(id, CreateFilter)

Delete Traffic Filter

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.ScrubIpsApi();
let id = 56; // Number | ScrubIp ID number
let CreateFilter = new InterServerManagementApi.CreateFilter(); // CreateFilter | 
apiInstance.deleteFilter(id, CreateFilter, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| ScrubIp ID number | 
 **CreateFilter** | [**CreateFilter**](CreateFilter.md)|  | 

### Return type

[**DeleteFilter200Response**](DeleteFilter200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## disableScrub

> DisableScrub200Response disableScrub(id)

Disable Scrub Protection

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.ScrubIpsApi();
let id = 56; // Number | ScrubIp ID number
apiInstance.disableScrub(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| ScrubIp ID number | 

### Return type

[**DisableScrub200Response**](DisableScrub200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## enableScrub

> EnableScrub200Response enableScrub(id)

Enable Scrub Protection

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.ScrubIpsApi();
let id = 56; // Number | ScrubIp ID number
apiInstance.enableScrub(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| ScrubIp ID number | 

### Return type

[**EnableScrub200Response**](EnableScrub200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getOrderDetail

> GetOrderDetail200Response getOrderDetail()

Get Scrub IP Ordering Information

Returns the available Scrub IP service plans and pricing information needed to build an order form.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.ScrubIpsApi();
apiInstance.getOrderDetail((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
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


## getScrubIpDetails

> GetScrubIpDetails200Response getScrubIpDetails(id)

Get Scrub IP Details

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.ScrubIpsApi();
let id = 56; // Number | ScrubIp ID number
apiInstance.getScrubIpDetails(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| ScrubIp ID number | 

### Return type

[**GetScrubIpDetails200Response**](GetScrubIpDetails200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getScrubIpFilterTypes

> ScrubIpFilterTypes getScrubIpFilterTypes()

List Scrub Filter Types

Returns the list of scrub filter types that can be used when creating filter rules via &#x60;/scrub_ips/{id}/create_filter&#x60;.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.ScrubIpsApi();
apiInstance.getScrubIpFilterTypes((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
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


## getScrubIpInvoices

> ChargeInvoiceRows getScrubIpInvoices(id)

Get ScrubIp Invoices

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.ScrubIpsApi();
let id = 56; // Number | ScrubIp ID number
apiInstance.getScrubIpInvoices(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| ScrubIp ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getScrubIpLogs

> [ScrubIpsLogRowSchema] getScrubIpLogs(id)

Get Scrub IP Logs

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.ScrubIpsApi();
let id = "413232  "; // String | Scrub Order ID
apiInstance.getScrubIpLogs(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| Scrub Order ID | 

### Return type

[**[ScrubIpsLogRowSchema]**](ScrubIpsLogRowSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getScrubIpsList

> [ScrubIpsRowSchema] getScrubIpsList()

List Scrub IP Services

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.ScrubIpsApi();
apiInstance.getScrubIpsList((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**[ScrubIpsRowSchema]**](ScrubIpsRowSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## placeScrubOrder

> PlaceScrubOrder201Response placeScrubOrder(ScrubIpPlaceOrder)

Place Scrub IP Order

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.ScrubIpsApi();
let ScrubIpPlaceOrder = new InterServerManagementApi.ScrubIpPlaceOrder(); // ScrubIpPlaceOrder | 
apiInstance.placeScrubOrder(ScrubIpPlaceOrder, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ScrubIpPlaceOrder** | [**ScrubIpPlaceOrder**](ScrubIpPlaceOrder.md)|  | 

### Return type

[**PlaceScrubOrder201Response**](PlaceScrubOrder201Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## scrubIpsDeleteGeoRule

> ScrubIpsDeleteRule200Response scrubIpsDeleteGeoRule(id, DeleteGeoFirewallRule)

Delete Geo Firewall Rule

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.ScrubIpsApi();
let id = 56; // Number | ScrubIp ID number
let DeleteGeoFirewallRule = new InterServerManagementApi.DeleteGeoFirewallRule(); // DeleteGeoFirewallRule | 
apiInstance.scrubIpsDeleteGeoRule(id, DeleteGeoFirewallRule, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| ScrubIp ID number | 
 **DeleteGeoFirewallRule** | [**DeleteGeoFirewallRule**](DeleteGeoFirewallRule.md)|  | 

### Return type

[**ScrubIpsDeleteRule200Response**](ScrubIpsDeleteRule200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## scrubIpsDeleteRule

> ScrubIpsDeleteRule200Response scrubIpsDeleteRule(id, DeleteFirewallRule)

Delete Firewall Rule

Removes an existing firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.ScrubIpsApi();
let id = 56; // Number | ScrubIp ID number
let DeleteFirewallRule = new InterServerManagementApi.DeleteFirewallRule(); // DeleteFirewallRule | 
apiInstance.scrubIpsDeleteRule(id, DeleteFirewallRule, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| ScrubIp ID number | 
 **DeleteFirewallRule** | [**DeleteFirewallRule**](DeleteFirewallRule.md)|  | 

### Return type

[**ScrubIpsDeleteRule200Response**](ScrubIpsDeleteRule200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

