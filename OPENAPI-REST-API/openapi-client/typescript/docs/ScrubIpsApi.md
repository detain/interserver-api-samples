# .ScrubIpsApi

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
> CancelScrubIp200Response cancelScrubIp()

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

### Example


```typescript
import { createConfiguration, ScrubIpsApi } from '';
import type { ScrubIpsApiCancelScrubIpRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ScrubIpsApi(configuration);

const request: ScrubIpsApiCancelScrubIpRequest = {
    // ScrubIp ID number
  id: 1,
};

const data = await apiInstance.cancelScrubIp(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | ScrubIp ID number | defaults to undefined


### Return type

**CancelScrubIp200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Request OK |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **createFilter**
> CreateFilter201Response createFilter(createFilter)

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.

### Example


```typescript
import { createConfiguration, ScrubIpsApi } from '';
import type { ScrubIpsApiCreateFilterRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ScrubIpsApi(configuration);

const request: ScrubIpsApiCreateFilterRequest = {
    // ScrubIp ID number
  id: 1,
  
  createFilter: {
    filter_type: "cs2_udp",
    port: 8080,
  },
};

const data = await apiInstance.createFilter(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **createFilter** | **CreateFilter**|  |
 **id** | [**number**] | ScrubIp ID number | defaults to undefined


### Return type

**CreateFilter201Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** | Request OK |  -  |
**400** | Bad Request |  -  |
**401** | Unauthorized |  -  |
**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **createGeoRule**
> CreateRule201Response createGeoRule(createGeoFirewallRule)

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

### Example


```typescript
import { createConfiguration, ScrubIpsApi } from '';
import type { ScrubIpsApiCreateGeoRuleRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ScrubIpsApi(configuration);

const request: ScrubIpsApiCreateGeoRuleRequest = {
    // ScrubIp ID number
  id: 1,
  
  createGeoFirewallRule: {
    destination_port: 22,
    country_code: 10,
    asn: 1331,
    xdp_action: 1,
  },
};

const data = await apiInstance.createGeoRule(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **createGeoFirewallRule** | **CreateGeoFirewallRule**|  |
 **id** | [**number**] | ScrubIp ID number | defaults to undefined


### Return type

**CreateRule201Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** | Create firewall rule for scrub ip |  -  |
**400** | Bad Request |  -  |
**401** | Unauthorized |  -  |
**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **createRule**
> CreateRule201Response createRule(createFirewallRule)

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

### Example


```typescript
import { createConfiguration, ScrubIpsApi } from '';
import type { ScrubIpsApiCreateRuleRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ScrubIpsApi(configuration);

const request: ScrubIpsApiCreateRuleRequest = {
    // ScrubIp ID number
  id: 1,
  
  createFirewallRule: {
    destination_port: 22,
    source_ip: "1.2.4.5",
    source_port: 1302,
    protocol_id: 1,
    xdp_action: 1,
  },
};

const data = await apiInstance.createRule(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **createFirewallRule** | **CreateFirewallRule**|  |
 **id** | [**number**] | ScrubIp ID number | defaults to undefined


### Return type

**CreateRule201Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** | Create firewall rule for scrub ip |  -  |
**400** | Bad Request |  -  |
**401** | Unauthorized |  -  |
**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **deleteFilter**
> DeleteFilter200Response deleteFilter(createFilter)

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

### Example


```typescript
import { createConfiguration, ScrubIpsApi } from '';
import type { ScrubIpsApiDeleteFilterRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ScrubIpsApi(configuration);

const request: ScrubIpsApiDeleteFilterRequest = {
    // ScrubIp ID number
  id: 1,
  
  createFilter: {
    filter_type: "cs2_udp",
    port: 8080,
  },
};

const data = await apiInstance.deleteFilter(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **createFilter** | **CreateFilter**|  |
 **id** | [**number**] | ScrubIp ID number | defaults to undefined


### Return type

**DeleteFilter200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Delete filter for scrub ip |  -  |
**400** | Bad Request |  -  |
**401** | Unauthorized |  -  |
**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **disableScrub**
> DisableScrub200Response disableScrub()

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

### Example


```typescript
import { createConfiguration, ScrubIpsApi } from '';
import type { ScrubIpsApiDisableScrubRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ScrubIpsApi(configuration);

const request: ScrubIpsApiDisableScrubRequest = {
    // ScrubIp ID number
  id: 1,
};

const data = await apiInstance.disableScrub(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | ScrubIp ID number | defaults to undefined


### Return type

**DisableScrub200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Request OK |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **enableScrub**
> EnableScrub200Response enableScrub()

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

### Example


```typescript
import { createConfiguration, ScrubIpsApi } from '';
import type { ScrubIpsApiEnableScrubRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ScrubIpsApi(configuration);

const request: ScrubIpsApiEnableScrubRequest = {
    // ScrubIp ID number
  id: 1,
};

const data = await apiInstance.enableScrub(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | ScrubIp ID number | defaults to undefined


### Return type

**EnableScrub200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Request OK |  -  |
**401** | Unauthorized |  -  |
**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getOrderDetail**
> GetOrderDetail200Response getOrderDetail()

Returns the available Scrub IP service plans and pricing information needed to build an order form.

### Example


```typescript
import { createConfiguration, ScrubIpsApi } from '';

const configuration = createConfiguration();
const apiInstance = new ScrubIpsApi(configuration);

const request = {};

const data = await apiInstance.getOrderDetail(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**GetOrderDetail200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Order details |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getScrubIpDetails**
> GetScrubIpDetails200Response getScrubIpDetails()

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

### Example


```typescript
import { createConfiguration, ScrubIpsApi } from '';
import type { ScrubIpsApiGetScrubIpDetailsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ScrubIpsApi(configuration);

const request: ScrubIpsApiGetScrubIpDetailsRequest = {
    // ScrubIp ID number
  id: 1,
};

const data = await apiInstance.getScrubIpDetails(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | ScrubIp ID number | defaults to undefined


### Return type

**GetScrubIpDetails200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Scrub IP service details including firewall rules and filters. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getScrubIpFilterTypes**
> ScrubIpFilterTypes getScrubIpFilterTypes()

Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.

### Example


```typescript
import { createConfiguration, ScrubIpsApi } from '';

const configuration = createConfiguration();
const apiInstance = new ScrubIpsApi(configuration);

const request = {};

const data = await apiInstance.getScrubIpFilterTypes(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**ScrubIpFilterTypes**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Supported scrub filter types for building firewall rules. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getScrubIpInvoices**
> ChargeInvoiceRows getScrubIpInvoices()

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

### Example


```typescript
import { createConfiguration, ScrubIpsApi } from '';
import type { ScrubIpsApiGetScrubIpInvoicesRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ScrubIpsApi(configuration);

const request: ScrubIpsApiGetScrubIpInvoicesRequest = {
    // ScrubIp ID number
  id: 1,
};

const data = await apiInstance.getScrubIpInvoices(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | ScrubIp ID number | defaults to undefined


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

# **getScrubIpLogs**
> Array<ScrubIpsLogRowSchema> getScrubIpLogs()

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

### Example


```typescript
import { createConfiguration, ScrubIpsApi } from '';
import type { ScrubIpsApiGetScrubIpLogsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ScrubIpsApi(configuration);

const request: ScrubIpsApiGetScrubIpLogsRequest = {
    // Scrub Order ID
  id: "413232  ",
};

const data = await apiInstance.getScrubIpLogs(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**string**] | Scrub Order ID | defaults to undefined


### Return type

**Array<ScrubIpsLogRowSchema>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Scrub Ips logs |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getScrubIpsList**
> Array<ScrubIpsRowSchema> getScrubIpsList()

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.

### Example


```typescript
import { createConfiguration, ScrubIpsApi } from '';

const configuration = createConfiguration();
const apiInstance = new ScrubIpsApi(configuration);

const request = {};

const data = await apiInstance.getScrubIpsList(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**Array<ScrubIpsRowSchema>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Scrub Ips list |  -  |
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **placeScrubOrder**
> PlaceScrubOrder201Response placeScrubOrder(scrubIpPlaceOrder)

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

### Example


```typescript
import { createConfiguration, ScrubIpsApi } from '';
import type { ScrubIpsApiPlaceScrubOrderRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ScrubIpsApi(configuration);

const request: ScrubIpsApiPlaceScrubOrderRequest = {
  
  scrubIpPlaceOrder: {
    service_type: 102,
    ip: "1.2.3.4",
  },
};

const data = await apiInstance.placeScrubOrder(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **scrubIpPlaceOrder** | **ScrubIpPlaceOrder**|  |


### Return type

**PlaceScrubOrder201Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** | Request OK |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **scrubIpsDeleteGeoRule**
> ScrubIpsDeleteRule200Response scrubIpsDeleteGeoRule(deleteGeoFirewallRule)

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

### Example


```typescript
import { createConfiguration, ScrubIpsApi } from '';
import type { ScrubIpsApiScrubIpsDeleteGeoRuleRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ScrubIpsApi(configuration);

const request: ScrubIpsApiScrubIpsDeleteGeoRuleRequest = {
    // ScrubIp ID number
  id: 1,
  
  deleteGeoFirewallRule: {
    rule_id: 2045,
  },
};

const data = await apiInstance.scrubIpsDeleteGeoRule(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **deleteGeoFirewallRule** | **DeleteGeoFirewallRule**|  |
 **id** | [**number**] | ScrubIp ID number | defaults to undefined


### Return type

**ScrubIpsDeleteRule200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Delete firewall rule for scrub ip |  -  |
**400** | Bad Request |  -  |
**401** | Unauthorized |  -  |
**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **scrubIpsDeleteRule**
> ScrubIpsDeleteRule200Response scrubIpsDeleteRule(deleteFirewallRule)

Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

### Example


```typescript
import { createConfiguration, ScrubIpsApi } from '';
import type { ScrubIpsApiScrubIpsDeleteRuleRequest } from '';

const configuration = createConfiguration();
const apiInstance = new ScrubIpsApi(configuration);

const request: ScrubIpsApiScrubIpsDeleteRuleRequest = {
    // ScrubIp ID number
  id: 1,
  
  deleteFirewallRule: {
    rule_id: 2045,
  },
};

const data = await apiInstance.scrubIpsDeleteRule(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **deleteFirewallRule** | **DeleteFirewallRule**|  |
 **id** | [**number**] | ScrubIp ID number | defaults to undefined


### Return type

**ScrubIpsDeleteRule200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Delete firewall rule for scrub ip |  -  |
**400** | Bad Request |  -  |
**401** | Unauthorized |  -  |
**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)


