# SCRUBIPS_API

All URIs are relative to *https://my.interserver.net/apiv2*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**cancel_scrub_ip**](SCRUBIPS_API.md#cancel_scrub_ip) | **Delete** /scrub_ips/{id} | Cancel Scrub IP Service
[**create_filter**](SCRUBIPS_API.md#create_filter) | **Post** /scrub_ips/{id}/create_filter | Create Traffic Filter
[**create_geo_rule**](SCRUBIPS_API.md#create_geo_rule) | **Post** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule
[**create_rule**](SCRUBIPS_API.md#create_rule) | **Post** /scrub_ips/{id}/create_rule | Create Firewall Rule
[**delete_filter**](SCRUBIPS_API.md#delete_filter) | **Post** /scrub_ips/{id}/delete_filter | Delete Traffic Filter
[**disable_scrub**](SCRUBIPS_API.md#disable_scrub) | **Get** /scrub_ips/{id}/disable | Disable Scrub Protection
[**enable_scrub**](SCRUBIPS_API.md#enable_scrub) | **Get** /scrub_ips/{id}/enable | Enable Scrub Protection
[**order_detail**](SCRUBIPS_API.md#order_detail) | **Get** /scrub_ips/order | Get Scrub IP Ordering Information
[**place_scrub_order**](SCRUBIPS_API.md#place_scrub_order) | **Post** /scrub_ips/order | Place Scrub IP Order
[**scrub_ip_details**](SCRUBIPS_API.md#scrub_ip_details) | **Get** /scrub_ips/{id} | Get Scrub IP Details
[**scrub_ip_filter_types**](SCRUBIPS_API.md#scrub_ip_filter_types) | **Get** /scrub_ips/filter_types | List Scrub Filter Types
[**scrub_ip_invoices**](SCRUBIPS_API.md#scrub_ip_invoices) | **Get** /scrub_ips/{id}/invoices | Get ScrubIp Invoices
[**scrub_ip_logs**](SCRUBIPS_API.md#scrub_ip_logs) | **Get** /scrub_ips/{id}/logs | Get Scrub IP Logs
[**scrub_ips_delete_geo_rule**](SCRUBIPS_API.md#scrub_ips_delete_geo_rule) | **Post** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule
[**scrub_ips_delete_rule**](SCRUBIPS_API.md#scrub_ips_delete_rule) | **Post** /scrub_ips/{id}/delete_rule | Delete Firewall Rule
[**scrub_ips_list**](SCRUBIPS_API.md#scrub_ips_list) | **Get** /scrub_ips | List Scrub IP Services


# **cancel_scrub_ip**
> cancel_scrub_ip (id: INTEGER_32 ): detachable CANCEL_SCRUB_IP_200_RESPONSE


Cancel Scrub IP Service

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| ScrubIp ID number | [default to null]

### Return type

[**CANCEL_SCRUB_IP_200_RESPONSE**](cancelScrubIp_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_filter**
> create_filter (id: INTEGER_32 ; create_filter: CREATE_FILTER ): detachable CREATE_FILTER_201_RESPONSE


Create Traffic Filter

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| ScrubIp ID number | [default to null]
 **create_filter** | [**CREATE_FILTER**](CREATE_FILTER.md)|  | 

### Return type

[**CREATE_FILTER_201_RESPONSE**](createFilter_201_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_geo_rule**
> create_geo_rule (id: INTEGER_32 ; create_geo_firewall_rule: CREATE_GEO_FIREWALL_RULE ): detachable CREATE_RULE_201_RESPONSE


Create Geo Firewall Rule

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| ScrubIp ID number | [default to null]
 **create_geo_firewall_rule** | [**CREATE_GEO_FIREWALL_RULE**](CREATE_GEO_FIREWALL_RULE.md)|  | 

### Return type

[**CREATE_RULE_201_RESPONSE**](createRule_201_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_rule**
> create_rule (id: INTEGER_32 ; create_firewall_rule: CREATE_FIREWALL_RULE ): detachable CREATE_RULE_201_RESPONSE


Create Firewall Rule

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| ScrubIp ID number | [default to null]
 **create_firewall_rule** | [**CREATE_FIREWALL_RULE**](CREATE_FIREWALL_RULE.md)|  | 

### Return type

[**CREATE_RULE_201_RESPONSE**](createRule_201_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_filter**
> delete_filter (id: INTEGER_32 ; create_filter: CREATE_FILTER ): detachable DELETE_FILTER_200_RESPONSE


Delete Traffic Filter

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| ScrubIp ID number | [default to null]
 **create_filter** | [**CREATE_FILTER**](CREATE_FILTER.md)|  | 

### Return type

[**DELETE_FILTER_200_RESPONSE**](deleteFilter_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **disable_scrub**
> disable_scrub (id: INTEGER_32 ): detachable DISABLE_SCRUB_200_RESPONSE


Disable Scrub Protection

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| ScrubIp ID number | [default to null]

### Return type

[**DISABLE_SCRUB_200_RESPONSE**](disableScrub_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **enable_scrub**
> enable_scrub (id: INTEGER_32 ): detachable ENABLE_SCRUB_200_RESPONSE


Enable Scrub Protection

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| ScrubIp ID number | [default to null]

### Return type

[**ENABLE_SCRUB_200_RESPONSE**](enableScrub_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **order_detail**
> order_detail : detachable GET_ORDER_DETAIL_200_RESPONSE


Get Scrub IP Ordering Information

Returns the available Scrub IP service plans and pricing information needed to build an order form.


### Parameters
This endpoint does not need any parameter.

### Return type

[**GET_ORDER_DETAIL_200_RESPONSE**](getOrderDetail_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **place_scrub_order**
> place_scrub_order (scrub_ip_place_order: SCRUB_IP_PLACE_ORDER ): detachable PLACE_SCRUB_ORDER_201_RESPONSE


Place Scrub IP Order

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **scrub_ip_place_order** | [**SCRUB_IP_PLACE_ORDER**](SCRUB_IP_PLACE_ORDER.md)|  | 

### Return type

[**PLACE_SCRUB_ORDER_201_RESPONSE**](placeScrubOrder_201_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrub_ip_details**
> scrub_ip_details (id: INTEGER_32 ): detachable GET_SCRUB_IP_DETAILS_200_RESPONSE


Get Scrub IP Details

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| ScrubIp ID number | [default to null]

### Return type

[**GET_SCRUB_IP_DETAILS_200_RESPONSE**](getScrubIpDetails_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrub_ip_filter_types**
> scrub_ip_filter_types : detachable SCRUB_IP_FILTER_TYPES


List Scrub Filter Types

Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.


### Parameters
This endpoint does not need any parameter.

### Return type

[**SCRUB_IP_FILTER_TYPES**](ScrubIpFilterTypes.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrub_ip_invoices**
> scrub_ip_invoices (id: INTEGER_32 ): detachable CHARGE_INVOICE_ROWS


Get ScrubIp Invoices

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| ScrubIp ID number | [default to null]

### Return type

[**CHARGE_INVOICE_ROWS**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrub_ip_logs**
> scrub_ip_logs (id: STRING_32 ): detachable LIST [SCRUB_IPS_LOG_ROW_SCHEMA]


Get Scrub IP Logs

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| Scrub Order ID | [default to null]

### Return type

[**LIST [SCRUB_IPS_LOG_ROW_SCHEMA]**](ScrubIpsLogRowSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrub_ips_delete_geo_rule**
> scrub_ips_delete_geo_rule (id: INTEGER_32 ; delete_geo_firewall_rule: DELETE_GEO_FIREWALL_RULE ): detachable SCRUB_IPS_DELETE_RULE_200_RESPONSE


Delete Geo Firewall Rule

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| ScrubIp ID number | [default to null]
 **delete_geo_firewall_rule** | [**DELETE_GEO_FIREWALL_RULE**](DELETE_GEO_FIREWALL_RULE.md)|  | 

### Return type

[**SCRUB_IPS_DELETE_RULE_200_RESPONSE**](scrubIpsDeleteRule_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrub_ips_delete_rule**
> scrub_ips_delete_rule (id: INTEGER_32 ; delete_firewall_rule: DELETE_FIREWALL_RULE ): detachable SCRUB_IPS_DELETE_RULE_200_RESPONSE


Delete Firewall Rule

Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| ScrubIp ID number | [default to null]
 **delete_firewall_rule** | [**DELETE_FIREWALL_RULE**](DELETE_FIREWALL_RULE.md)|  | 

### Return type

[**SCRUB_IPS_DELETE_RULE_200_RESPONSE**](scrubIpsDeleteRule_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrub_ips_list**
> scrub_ips_list : detachable LIST [SCRUB_IPS_ROW_SCHEMA]


List Scrub IP Services

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.


### Parameters
This endpoint does not need any parameter.

### Return type

[**LIST [SCRUB_IPS_ROW_SCHEMA]**](ScrubIpsRowSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

