# ScrubIpsAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ScrubIpsAPI_cancelScrubIp**](ScrubIpsAPI.md#ScrubIpsAPI_cancelScrubIp) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service
[**ScrubIpsAPI_createFilter**](ScrubIpsAPI.md#ScrubIpsAPI_createFilter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter
[**ScrubIpsAPI_createGeoRule**](ScrubIpsAPI.md#ScrubIpsAPI_createGeoRule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule
[**ScrubIpsAPI_createRule**](ScrubIpsAPI.md#ScrubIpsAPI_createRule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule
[**ScrubIpsAPI_deleteFilter**](ScrubIpsAPI.md#ScrubIpsAPI_deleteFilter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter
[**ScrubIpsAPI_disableScrub**](ScrubIpsAPI.md#ScrubIpsAPI_disableScrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection
[**ScrubIpsAPI_enableScrub**](ScrubIpsAPI.md#ScrubIpsAPI_enableScrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection
[**ScrubIpsAPI_getOrderDetail**](ScrubIpsAPI.md#ScrubIpsAPI_getOrderDetail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information
[**ScrubIpsAPI_getScrubIpDetails**](ScrubIpsAPI.md#ScrubIpsAPI_getScrubIpDetails) | **GET** /scrub_ips/{id} | Get Scrub IP Details
[**ScrubIpsAPI_getScrubIpFilterTypes**](ScrubIpsAPI.md#ScrubIpsAPI_getScrubIpFilterTypes) | **GET** /scrub_ips/filter_types | List Scrub Filter Types
[**ScrubIpsAPI_getScrubIpInvoices**](ScrubIpsAPI.md#ScrubIpsAPI_getScrubIpInvoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices
[**ScrubIpsAPI_getScrubIpLogs**](ScrubIpsAPI.md#ScrubIpsAPI_getScrubIpLogs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs
[**ScrubIpsAPI_getScrubIpsList**](ScrubIpsAPI.md#ScrubIpsAPI_getScrubIpsList) | **GET** /scrub_ips | List Scrub IP Services
[**ScrubIpsAPI_placeScrubOrder**](ScrubIpsAPI.md#ScrubIpsAPI_placeScrubOrder) | **POST** /scrub_ips/order | Place Scrub IP Order
[**ScrubIpsAPI_scrubIpsDeleteGeoRule**](ScrubIpsAPI.md#ScrubIpsAPI_scrubIpsDeleteGeoRule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule
[**ScrubIpsAPI_scrubIpsDeleteRule**](ScrubIpsAPI.md#ScrubIpsAPI_scrubIpsDeleteRule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule


# **ScrubIpsAPI_cancelScrubIp**
```c
// Cancel Scrub IP Service
//
// Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
//
cancel_scrub_ip_200_response_t* ScrubIpsAPI_cancelScrubIp(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | ScrubIp ID number | 

### Return type

[cancel_scrub_ip_200_response_t](cancel_scrub_ip_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsAPI_createFilter**
```c
// Create Traffic Filter
//
// Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.
//
create_filter_201_response_t* ScrubIpsAPI_createFilter(apiClient_t *apiClient, int *id, create_filter_t *create_filter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | ScrubIp ID number | 
**create_filter** | **[create_filter_t](create_filter.md) \*** |  | 

### Return type

[create_filter_201_response_t](create_filter_201_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsAPI_createGeoRule**
```c
// Create Geo Firewall Rule
//
// Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
//
create_rule_201_response_t* ScrubIpsAPI_createGeoRule(apiClient_t *apiClient, int *id, create_geo_firewall_rule_t *create_geo_firewall_rule);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | ScrubIp ID number | 
**create_geo_firewall_rule** | **[create_geo_firewall_rule_t](create_geo_firewall_rule.md) \*** |  | 

### Return type

[create_rule_201_response_t](create_rule_201_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsAPI_createRule**
```c
// Create Firewall Rule
//
// Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
//
create_rule_201_response_t* ScrubIpsAPI_createRule(apiClient_t *apiClient, int *id, create_firewall_rule_t *create_firewall_rule);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | ScrubIp ID number | 
**create_firewall_rule** | **[create_firewall_rule_t](create_firewall_rule.md) \*** |  | 

### Return type

[create_rule_201_response_t](create_rule_201_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsAPI_deleteFilter**
```c
// Delete Traffic Filter
//
// Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
//
delete_filter_200_response_t* ScrubIpsAPI_deleteFilter(apiClient_t *apiClient, int *id, create_filter_t *create_filter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | ScrubIp ID number | 
**create_filter** | **[create_filter_t](create_filter.md) \*** |  | 

### Return type

[delete_filter_200_response_t](delete_filter_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsAPI_disableScrub**
```c
// Disable Scrub Protection
//
// Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
//
disable_scrub_200_response_t* ScrubIpsAPI_disableScrub(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | ScrubIp ID number | 

### Return type

[disable_scrub_200_response_t](disable_scrub_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsAPI_enableScrub**
```c
// Enable Scrub Protection
//
// Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
//
enable_scrub_200_response_t* ScrubIpsAPI_enableScrub(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | ScrubIp ID number | 

### Return type

[enable_scrub_200_response_t](enable_scrub_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsAPI_getOrderDetail**
```c
// Get Scrub IP Ordering Information
//
// Returns the available Scrub IP service plans and pricing information needed to build an order form.
//
get_order_detail_200_response_t* ScrubIpsAPI_getOrderDetail(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[get_order_detail_200_response_t](get_order_detail_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsAPI_getScrubIpDetails**
```c
// Get Scrub IP Details
//
// Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
//
get_scrub_ip_details_200_response_t* ScrubIpsAPI_getScrubIpDetails(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | ScrubIp ID number | 

### Return type

[get_scrub_ip_details_200_response_t](get_scrub_ip_details_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsAPI_getScrubIpFilterTypes**
```c
// List Scrub Filter Types
//
// Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.
//
scrub_ip_filter_types_t* ScrubIpsAPI_getScrubIpFilterTypes(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[scrub_ip_filter_types_t](scrub_ip_filter_types.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsAPI_getScrubIpInvoices**
```c
// Get ScrubIp Invoices
//
// Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
//
charge_invoice_rows_t* ScrubIpsAPI_getScrubIpInvoices(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | ScrubIp ID number | 

### Return type

[charge_invoice_rows_t](charge_invoice_rows.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsAPI_getScrubIpLogs**
```c
// Get Scrub IP Logs
//
// Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
//
list_t* ScrubIpsAPI_getScrubIpLogs(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Scrub Order ID | 

### Return type

[list_t](scrub_ips_log_row_schema.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsAPI_getScrubIpsList**
```c
// List Scrub IP Services
//
// Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
//
list_t* ScrubIpsAPI_getScrubIpsList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](scrub_ips_row_schema.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsAPI_placeScrubOrder**
```c
// Place Scrub IP Order
//
// Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
//
place_scrub_order_201_response_t* ScrubIpsAPI_placeScrubOrder(apiClient_t *apiClient, scrub_ip_place_order_t *scrub_ip_place_order);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**scrub_ip_place_order** | **[scrub_ip_place_order_t](scrub_ip_place_order.md) \*** |  | 

### Return type

[place_scrub_order_201_response_t](place_scrub_order_201_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsAPI_scrubIpsDeleteGeoRule**
```c
// Delete Geo Firewall Rule
//
// Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
//
scrub_ips_delete_rule_200_response_t* ScrubIpsAPI_scrubIpsDeleteGeoRule(apiClient_t *apiClient, int *id, delete_geo_firewall_rule_t *delete_geo_firewall_rule);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | ScrubIp ID number | 
**delete_geo_firewall_rule** | **[delete_geo_firewall_rule_t](delete_geo_firewall_rule.md) \*** |  | 

### Return type

[scrub_ips_delete_rule_200_response_t](scrub_ips_delete_rule_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsAPI_scrubIpsDeleteRule**
```c
// Delete Firewall Rule
//
// Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
//
scrub_ips_delete_rule_200_response_t* ScrubIpsAPI_scrubIpsDeleteRule(apiClient_t *apiClient, int *id, delete_firewall_rule_t *delete_firewall_rule);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | ScrubIp ID number | 
**delete_firewall_rule** | **[delete_firewall_rule_t](delete_firewall_rule.md) \*** |  | 

### Return type

[scrub_ips_delete_rule_200_response_t](scrub_ips_delete_rule_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

