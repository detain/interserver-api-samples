# ScrubIpsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CancelScrubIp**](ScrubIpsApi.md#CancelScrubIp) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service
[**CreateFilter**](ScrubIpsApi.md#CreateFilter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter
[**CreateGeoRule**](ScrubIpsApi.md#CreateGeoRule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule
[**CreateRule**](ScrubIpsApi.md#CreateRule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule
[**DeleteFilter**](ScrubIpsApi.md#DeleteFilter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter
[**DisableScrub**](ScrubIpsApi.md#DisableScrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection
[**EnableScrub**](ScrubIpsApi.md#EnableScrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection
[**GetOrderDetail**](ScrubIpsApi.md#GetOrderDetail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information
[**GetScrubIpDetails**](ScrubIpsApi.md#GetScrubIpDetails) | **GET** /scrub_ips/{id} | Get Scrub IP Details
[**GetScrubIpFilterTypes**](ScrubIpsApi.md#GetScrubIpFilterTypes) | **GET** /scrub_ips/filter_types | List Scrub Filter Types
[**GetScrubIpInvoices**](ScrubIpsApi.md#GetScrubIpInvoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices
[**GetScrubIpLogs**](ScrubIpsApi.md#GetScrubIpLogs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs
[**GetScrubIpsList**](ScrubIpsApi.md#GetScrubIpsList) | **GET** /scrub_ips | List Scrub IP Services
[**PlaceScrubOrder**](ScrubIpsApi.md#PlaceScrubOrder) | **POST** /scrub_ips/order | Place Scrub IP Order
[**ScrubIpsDeleteGeoRule**](ScrubIpsApi.md#ScrubIpsDeleteGeoRule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule
[**ScrubIpsDeleteRule**](ScrubIpsApi.md#ScrubIpsDeleteRule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule


# **CancelScrubIp**
> CancelScrubIp200Response CancelScrubIp(id)

Cancel Scrub IP Service

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

### Example
```R
library(openapi)

# Cancel Scrub IP Service
#
# prepare function argument(s)
var_id <- 56 # integer | ScrubIp ID number

api_instance <- ScrubIpsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$CancelScrubIp(var_iddata_file = "result.txt")
result <- api_instance$CancelScrubIp(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| ScrubIp ID number | 

### Return type

[**CancelScrubIp200Response**](cancelScrubIp_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Request OK |  -  |
| **401** | Unauthorized |  -  |

# **CreateFilter**
> CreateFilter201Response CreateFilter(id, create_filter)

Create Traffic Filter

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.

### Example
```R
library(openapi)

# Create Traffic Filter
#
# prepare function argument(s)
var_id <- 56 # integer | ScrubIp ID number
var_create_filter <- CreateFilter$new("filter_type_example", 123) # CreateFilter | 

api_instance <- ScrubIpsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$CreateFilter(var_id, var_create_filterdata_file = "result.txt")
result <- api_instance$CreateFilter(var_id, var_create_filter)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| ScrubIp ID number | 
 **create_filter** | [**CreateFilter**](CreateFilter.md)|  | 

### Return type

[**CreateFilter201Response**](createFilter_201_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **201** | Request OK |  -  |
| **400** | Bad Request |  -  |
| **401** | Unauthorized |  -  |
| **500** | Internal Server Error |  -  |

# **CreateGeoRule**
> CreateRule201Response CreateGeoRule(id, create_geo_firewall_rule)

Create Geo Firewall Rule

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

### Example
```R
library(openapi)

# Create Geo Firewall Rule
#
# prepare function argument(s)
var_id <- 56 # integer | ScrubIp ID number
var_create_geo_firewall_rule <- CreateGeoFirewallRule$new(123, 123, 123, 123) # CreateGeoFirewallRule | 

api_instance <- ScrubIpsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$CreateGeoRule(var_id, var_create_geo_firewall_ruledata_file = "result.txt")
result <- api_instance$CreateGeoRule(var_id, var_create_geo_firewall_rule)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| ScrubIp ID number | 
 **create_geo_firewall_rule** | [**CreateGeoFirewallRule**](CreateGeoFirewallRule.md)|  | 

### Return type

[**CreateRule201Response**](createRule_201_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **201** | Create firewall rule for scrub ip |  -  |
| **400** | Bad Request |  -  |
| **401** | Unauthorized |  -  |
| **500** | Internal Server Error |  -  |

# **CreateRule**
> CreateRule201Response CreateRule(id, create_firewall_rule)

Create Firewall Rule

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

### Example
```R
library(openapi)

# Create Firewall Rule
#
# prepare function argument(s)
var_id <- 56 # integer | ScrubIp ID number
var_create_firewall_rule <- CreateFirewallRule$new(123, 123, 123, "source_ip_example", 123) # CreateFirewallRule | 

api_instance <- ScrubIpsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$CreateRule(var_id, var_create_firewall_ruledata_file = "result.txt")
result <- api_instance$CreateRule(var_id, var_create_firewall_rule)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| ScrubIp ID number | 
 **create_firewall_rule** | [**CreateFirewallRule**](CreateFirewallRule.md)|  | 

### Return type

[**CreateRule201Response**](createRule_201_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **201** | Create firewall rule for scrub ip |  -  |
| **400** | Bad Request |  -  |
| **401** | Unauthorized |  -  |
| **500** | Internal Server Error |  -  |

# **DeleteFilter**
> DeleteFilter200Response DeleteFilter(id, create_filter)

Delete Traffic Filter

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

### Example
```R
library(openapi)

# Delete Traffic Filter
#
# prepare function argument(s)
var_id <- 56 # integer | ScrubIp ID number
var_create_filter <- CreateFilter$new("filter_type_example", 123) # CreateFilter | 

api_instance <- ScrubIpsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DeleteFilter(var_id, var_create_filterdata_file = "result.txt")
result <- api_instance$DeleteFilter(var_id, var_create_filter)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| ScrubIp ID number | 
 **create_filter** | [**CreateFilter**](CreateFilter.md)|  | 

### Return type

[**DeleteFilter200Response**](deleteFilter_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Delete filter for scrub ip |  -  |
| **400** | Bad Request |  -  |
| **401** | Unauthorized |  -  |
| **500** | Internal Server Error |  -  |

# **DisableScrub**
> DisableScrub200Response DisableScrub(id)

Disable Scrub Protection

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

### Example
```R
library(openapi)

# Disable Scrub Protection
#
# prepare function argument(s)
var_id <- 56 # integer | ScrubIp ID number

api_instance <- ScrubIpsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DisableScrub(var_iddata_file = "result.txt")
result <- api_instance$DisableScrub(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| ScrubIp ID number | 

### Return type

[**DisableScrub200Response**](disableScrub_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Request OK |  -  |
| **400** | Bad request |  -  |
| **401** | Unauthorized |  -  |
| **500** | Internal Server Error |  -  |

# **EnableScrub**
> EnableScrub200Response EnableScrub(id)

Enable Scrub Protection

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

### Example
```R
library(openapi)

# Enable Scrub Protection
#
# prepare function argument(s)
var_id <- 56 # integer | ScrubIp ID number

api_instance <- ScrubIpsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$EnableScrub(var_iddata_file = "result.txt")
result <- api_instance$EnableScrub(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| ScrubIp ID number | 

### Return type

[**EnableScrub200Response**](enableScrub_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Request OK |  -  |
| **401** | Unauthorized |  -  |
| **500** | Internal Server Error |  -  |

# **GetOrderDetail**
> GetOrderDetail200Response GetOrderDetail()

Get Scrub IP Ordering Information

Returns the available Scrub IP service plans and pricing information needed to build an order form.

### Example
```R
library(openapi)

# Get Scrub IP Ordering Information
#

api_instance <- ScrubIpsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetOrderDetail(data_file = "result.txt")
result <- api_instance$GetOrderDetail()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**GetOrderDetail200Response**](getOrderDetail_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Order details |  -  |
| **401** | Unauthorized |  -  |

# **GetScrubIpDetails**
> GetScrubIpDetails200Response GetScrubIpDetails(id)

Get Scrub IP Details

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

### Example
```R
library(openapi)

# Get Scrub IP Details
#
# prepare function argument(s)
var_id <- 56 # integer | ScrubIp ID number

api_instance <- ScrubIpsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetScrubIpDetails(var_iddata_file = "result.txt")
result <- api_instance$GetScrubIpDetails(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| ScrubIp ID number | 

### Return type

[**GetScrubIpDetails200Response**](getScrubIpDetails_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Scrub IP service details including firewall rules and filters. |  -  |
| **401** | Unauthorized |  -  |

# **GetScrubIpFilterTypes**
> ScrubIpFilterTypes GetScrubIpFilterTypes()

List Scrub Filter Types

Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.

### Example
```R
library(openapi)

# List Scrub Filter Types
#

api_instance <- ScrubIpsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetScrubIpFilterTypes(data_file = "result.txt")
result <- api_instance$GetScrubIpFilterTypes()
dput(result)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Supported scrub filter types for building firewall rules. |  -  |
| **401** | Unauthorized |  -  |

# **GetScrubIpInvoices**
> ChargeInvoiceRows GetScrubIpInvoices(id)

Get ScrubIp Invoices

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

### Example
```R
library(openapi)

# Get ScrubIp Invoices
#
# prepare function argument(s)
var_id <- 56 # integer | ScrubIp ID number

api_instance <- ScrubIpsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetScrubIpInvoices(var_iddata_file = "result.txt")
result <- api_instance$GetScrubIpInvoices(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| ScrubIp ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get Invoices response |  -  |
| **401** | Unauthorized |  -  |

# **GetScrubIpLogs**
> array[ScrubIpsLogRowSchema] GetScrubIpLogs(id)

Get Scrub IP Logs

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

### Example
```R
library(openapi)

# Get Scrub IP Logs
#
# prepare function argument(s)
var_id <- "413232  " # character | Scrub Order ID

api_instance <- ScrubIpsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetScrubIpLogs(var_iddata_file = "result.txt")
result <- api_instance$GetScrubIpLogs(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| Scrub Order ID | 

### Return type

[**array[ScrubIpsLogRowSchema]**](ScrubIpsLogRowSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Scrub Ips logs |  -  |
| **401** | Unauthorized |  -  |

# **GetScrubIpsList**
> array[ScrubIpsRowSchema] GetScrubIpsList()

List Scrub IP Services

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.

### Example
```R
library(openapi)

# List Scrub IP Services
#

api_instance <- ScrubIpsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetScrubIpsList(data_file = "result.txt")
result <- api_instance$GetScrubIpsList()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**array[ScrubIpsRowSchema]**](ScrubIpsRowSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Scrub Ips list |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **PlaceScrubOrder**
> PlaceScrubOrder201Response PlaceScrubOrder(scrub_ip_place_order)

Place Scrub IP Order

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

### Example
```R
library(openapi)

# Place Scrub IP Order
#
# prepare function argument(s)
var_scrub_ip_place_order <- ScrubIpPlaceOrder$new(123, "ip_example") # ScrubIpPlaceOrder | 

api_instance <- ScrubIpsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PlaceScrubOrder(var_scrub_ip_place_orderdata_file = "result.txt")
result <- api_instance$PlaceScrubOrder(var_scrub_ip_place_order)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **scrub_ip_place_order** | [**ScrubIpPlaceOrder**](ScrubIpPlaceOrder.md)|  | 

### Return type

[**PlaceScrubOrder201Response**](placeScrubOrder_201_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **201** | Request OK |  -  |
| **401** | Unauthorized |  -  |

# **ScrubIpsDeleteGeoRule**
> ScrubIpsDeleteRule200Response ScrubIpsDeleteGeoRule(id, delete_geo_firewall_rule)

Delete Geo Firewall Rule

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

### Example
```R
library(openapi)

# Delete Geo Firewall Rule
#
# prepare function argument(s)
var_id <- 56 # integer | ScrubIp ID number
var_delete_geo_firewall_rule <- Delete_Geo_Firewall_Rule$new(123) # DeleteGeoFirewallRule | 

api_instance <- ScrubIpsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$ScrubIpsDeleteGeoRule(var_id, var_delete_geo_firewall_ruledata_file = "result.txt")
result <- api_instance$ScrubIpsDeleteGeoRule(var_id, var_delete_geo_firewall_rule)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| ScrubIp ID number | 
 **delete_geo_firewall_rule** | [**DeleteGeoFirewallRule**](DeleteGeoFirewallRule.md)|  | 

### Return type

[**ScrubIpsDeleteRule200Response**](scrubIpsDeleteRule_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Delete firewall rule for scrub ip |  -  |
| **400** | Bad Request |  -  |
| **401** | Unauthorized |  -  |
| **500** | Internal Server Error |  -  |

# **ScrubIpsDeleteRule**
> ScrubIpsDeleteRule200Response ScrubIpsDeleteRule(id, delete_firewall_rule)

Delete Firewall Rule

Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

### Example
```R
library(openapi)

# Delete Firewall Rule
#
# prepare function argument(s)
var_id <- 56 # integer | ScrubIp ID number
var_delete_firewall_rule <- Delete_Firewall_Rule$new(123) # DeleteFirewallRule | 

api_instance <- ScrubIpsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$ScrubIpsDeleteRule(var_id, var_delete_firewall_ruledata_file = "result.txt")
result <- api_instance$ScrubIpsDeleteRule(var_id, var_delete_firewall_rule)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| ScrubIp ID number | 
 **delete_firewall_rule** | [**DeleteFirewallRule**](DeleteFirewallRule.md)|  | 

### Return type

[**ScrubIpsDeleteRule200Response**](scrubIpsDeleteRule_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Delete firewall rule for scrub ip |  -  |
| **400** | Bad Request |  -  |
| **401** | Unauthorized |  -  |
| **500** | Internal Server Error |  -  |

