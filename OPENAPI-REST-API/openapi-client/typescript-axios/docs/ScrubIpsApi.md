# ScrubIpsApi

All URIs are relative to *https://my.interserver.net/apiv2*

|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|[**cancelScrubIp**](#cancelscrubip) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service|
|[**createFilter**](#createfilter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter|
|[**createGeoRule**](#creategeorule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule|
|[**createRule**](#createrule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule|
|[**deleteFilter**](#deletefilter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter|
|[**disableScrub**](#disablescrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection|
|[**enableScrub**](#enablescrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection|
|[**getOrderDetail**](#getorderdetail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information|
|[**getScrubIpDetails**](#getscrubipdetails) | **GET** /scrub_ips/{id} | Get Scrub IP Details|
|[**getScrubIpFilterTypes**](#getscrubipfiltertypes) | **GET** /scrub_ips/filter_types | List Scrub Filter Types|
|[**getScrubIpInvoices**](#getscrubipinvoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices|
|[**getScrubIpLogs**](#getscrubiplogs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs|
|[**getScrubIpsList**](#getscrubipslist) | **GET** /scrub_ips | List Scrub IP Services|
|[**placeScrubOrder**](#placescruborder) | **POST** /scrub_ips/order | Place Scrub IP Order|
|[**scrubIpsDeleteGeoRule**](#scrubipsdeletegeorule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule|
|[**scrubIpsDeleteRule**](#scrubipsdeleterule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule|

# **cancelScrubIp**
> CancelScrubIp200Response cancelScrubIp()

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

### Example

```typescript
import {
    ScrubIpsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ScrubIpsApi(configuration);

let id: number; //ScrubIp ID number (default to undefined)

const { status, data } = await apiInstance.cancelScrubIp(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | ScrubIp ID number | defaults to undefined|


### Return type

**CancelScrubIp200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Request OK |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createFilter**
> CreateFilter201Response createFilter(createFilter)

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.

### Example

```typescript
import {
    ScrubIpsApi,
    Configuration,
    CreateFilter
} from './api';

const configuration = new Configuration();
const apiInstance = new ScrubIpsApi(configuration);

let id: number; //ScrubIp ID number (default to undefined)
let createFilter: CreateFilter; //

const { status, data } = await apiInstance.createFilter(
    id,
    createFilter
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **createFilter** | **CreateFilter**|  | |
| **id** | [**number**] | ScrubIp ID number | defaults to undefined|


### Return type

**CreateFilter201Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**201** | Request OK |  -  |
|**400** | Bad Request |  -  |
|**401** | Unauthorized |  -  |
|**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createGeoRule**
> CreateRule201Response createGeoRule(createGeoFirewallRule)

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

### Example

```typescript
import {
    ScrubIpsApi,
    Configuration,
    CreateGeoFirewallRule
} from './api';

const configuration = new Configuration();
const apiInstance = new ScrubIpsApi(configuration);

let id: number; //ScrubIp ID number (default to undefined)
let createGeoFirewallRule: CreateGeoFirewallRule; //

const { status, data } = await apiInstance.createGeoRule(
    id,
    createGeoFirewallRule
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **createGeoFirewallRule** | **CreateGeoFirewallRule**|  | |
| **id** | [**number**] | ScrubIp ID number | defaults to undefined|


### Return type

**CreateRule201Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**201** | Create firewall rule for scrub ip |  -  |
|**400** | Bad Request |  -  |
|**401** | Unauthorized |  -  |
|**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createRule**
> CreateRule201Response createRule(createFirewallRule)

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

### Example

```typescript
import {
    ScrubIpsApi,
    Configuration,
    CreateFirewallRule
} from './api';

const configuration = new Configuration();
const apiInstance = new ScrubIpsApi(configuration);

let id: number; //ScrubIp ID number (default to undefined)
let createFirewallRule: CreateFirewallRule; //

const { status, data } = await apiInstance.createRule(
    id,
    createFirewallRule
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **createFirewallRule** | **CreateFirewallRule**|  | |
| **id** | [**number**] | ScrubIp ID number | defaults to undefined|


### Return type

**CreateRule201Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**201** | Create firewall rule for scrub ip |  -  |
|**400** | Bad Request |  -  |
|**401** | Unauthorized |  -  |
|**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteFilter**
> DeleteFilter200Response deleteFilter(createFilter)

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

### Example

```typescript
import {
    ScrubIpsApi,
    Configuration,
    CreateFilter
} from './api';

const configuration = new Configuration();
const apiInstance = new ScrubIpsApi(configuration);

let id: number; //ScrubIp ID number (default to undefined)
let createFilter: CreateFilter; //

const { status, data } = await apiInstance.deleteFilter(
    id,
    createFilter
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **createFilter** | **CreateFilter**|  | |
| **id** | [**number**] | ScrubIp ID number | defaults to undefined|


### Return type

**DeleteFilter200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Delete filter for scrub ip |  -  |
|**400** | Bad Request |  -  |
|**401** | Unauthorized |  -  |
|**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **disableScrub**
> DisableScrub200Response disableScrub()

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

### Example

```typescript
import {
    ScrubIpsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ScrubIpsApi(configuration);

let id: number; //ScrubIp ID number (default to undefined)

const { status, data } = await apiInstance.disableScrub(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | ScrubIp ID number | defaults to undefined|


### Return type

**DisableScrub200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Request OK |  -  |
|**400** | Bad request |  -  |
|**401** | Unauthorized |  -  |
|**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **enableScrub**
> EnableScrub200Response enableScrub()

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

### Example

```typescript
import {
    ScrubIpsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ScrubIpsApi(configuration);

let id: number; //ScrubIp ID number (default to undefined)

const { status, data } = await apiInstance.enableScrub(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | ScrubIp ID number | defaults to undefined|


### Return type

**EnableScrub200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Request OK |  -  |
|**401** | Unauthorized |  -  |
|**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getOrderDetail**
> GetOrderDetail200Response getOrderDetail()

Returns the available Scrub IP service plans and pricing information needed to build an order form.

### Example

```typescript
import {
    ScrubIpsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ScrubIpsApi(configuration);

const { status, data } = await apiInstance.getOrderDetail();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**GetOrderDetail200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Order details |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getScrubIpDetails**
> GetScrubIpDetails200Response getScrubIpDetails()

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

### Example

```typescript
import {
    ScrubIpsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ScrubIpsApi(configuration);

let id: number; //ScrubIp ID number (default to undefined)

const { status, data } = await apiInstance.getScrubIpDetails(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | ScrubIp ID number | defaults to undefined|


### Return type

**GetScrubIpDetails200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Scrub IP service details including firewall rules and filters. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getScrubIpFilterTypes**
> ScrubIpFilterTypes getScrubIpFilterTypes()

Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.

### Example

```typescript
import {
    ScrubIpsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ScrubIpsApi(configuration);

const { status, data } = await apiInstance.getScrubIpFilterTypes();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**ScrubIpFilterTypes**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Supported scrub filter types for building firewall rules. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getScrubIpInvoices**
> ChargeInvoiceRows getScrubIpInvoices()

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

### Example

```typescript
import {
    ScrubIpsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ScrubIpsApi(configuration);

let id: number; //ScrubIp ID number (default to undefined)

const { status, data } = await apiInstance.getScrubIpInvoices(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | ScrubIp ID number | defaults to undefined|


### Return type

**ChargeInvoiceRows**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Get Invoices response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getScrubIpLogs**
> Array<ScrubIpsLogRowSchema> getScrubIpLogs()

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

### Example

```typescript
import {
    ScrubIpsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ScrubIpsApi(configuration);

let id: string; //Scrub Order ID (default to undefined)

const { status, data } = await apiInstance.getScrubIpLogs(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**string**] | Scrub Order ID | defaults to undefined|


### Return type

**Array<ScrubIpsLogRowSchema>**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Scrub Ips logs |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getScrubIpsList**
> Array<ScrubIpsRowSchema> getScrubIpsList()

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.

### Example

```typescript
import {
    ScrubIpsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new ScrubIpsApi(configuration);

const { status, data } = await apiInstance.getScrubIpsList();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**Array<ScrubIpsRowSchema>**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Scrub Ips list |  -  |
|**401** | Unauthorized |  -  |
|**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **placeScrubOrder**
> PlaceScrubOrder201Response placeScrubOrder(scrubIpPlaceOrder)

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

### Example

```typescript
import {
    ScrubIpsApi,
    Configuration,
    ScrubIpPlaceOrder
} from './api';

const configuration = new Configuration();
const apiInstance = new ScrubIpsApi(configuration);

let scrubIpPlaceOrder: ScrubIpPlaceOrder; //

const { status, data } = await apiInstance.placeScrubOrder(
    scrubIpPlaceOrder
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **scrubIpPlaceOrder** | **ScrubIpPlaceOrder**|  | |


### Return type

**PlaceScrubOrder201Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**201** | Request OK |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrubIpsDeleteGeoRule**
> ScrubIpsDeleteRule200Response scrubIpsDeleteGeoRule(deleteGeoFirewallRule)

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

### Example

```typescript
import {
    ScrubIpsApi,
    Configuration,
    DeleteGeoFirewallRule
} from './api';

const configuration = new Configuration();
const apiInstance = new ScrubIpsApi(configuration);

let id: number; //ScrubIp ID number (default to undefined)
let deleteGeoFirewallRule: DeleteGeoFirewallRule; //

const { status, data } = await apiInstance.scrubIpsDeleteGeoRule(
    id,
    deleteGeoFirewallRule
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **deleteGeoFirewallRule** | **DeleteGeoFirewallRule**|  | |
| **id** | [**number**] | ScrubIp ID number | defaults to undefined|


### Return type

**ScrubIpsDeleteRule200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Delete firewall rule for scrub ip |  -  |
|**400** | Bad Request |  -  |
|**401** | Unauthorized |  -  |
|**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrubIpsDeleteRule**
> ScrubIpsDeleteRule200Response scrubIpsDeleteRule(deleteFirewallRule)

Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

### Example

```typescript
import {
    ScrubIpsApi,
    Configuration,
    DeleteFirewallRule
} from './api';

const configuration = new Configuration();
const apiInstance = new ScrubIpsApi(configuration);

let id: number; //ScrubIp ID number (default to undefined)
let deleteFirewallRule: DeleteFirewallRule; //

const { status, data } = await apiInstance.scrubIpsDeleteRule(
    id,
    deleteFirewallRule
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **deleteFirewallRule** | **DeleteFirewallRule**|  | |
| **id** | [**number**] | ScrubIp ID number | defaults to undefined|


### Return type

**ScrubIpsDeleteRule200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Delete firewall rule for scrub ip |  -  |
|**400** | Bad Request |  -  |
|**401** | Unauthorized |  -  |
|**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

