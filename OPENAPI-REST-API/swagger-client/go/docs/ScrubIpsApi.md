# {{classname}}

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CancelScrubIp**](ScrubIpsApi.md#CancelScrubIp) | **Delete** /scrub_ips/{id} | Cancel Scrub IP Service
[**CreateFilter**](ScrubIpsApi.md#CreateFilter) | **Post** /scrub_ips/{id}/create_filter | Create Traffic Filter
[**CreateGeoRule**](ScrubIpsApi.md#CreateGeoRule) | **Post** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule
[**CreateRule**](ScrubIpsApi.md#CreateRule) | **Post** /scrub_ips/{id}/create_rule | Create Firewall Rule
[**DeleteFilter**](ScrubIpsApi.md#DeleteFilter) | **Post** /scrub_ips/{id}/delete_filter | Delete Traffic Filter
[**DisableScrub**](ScrubIpsApi.md#DisableScrub) | **Get** /scrub_ips/{id}/disable | Disable Scrub Protection
[**EnableScrub**](ScrubIpsApi.md#EnableScrub) | **Get** /scrub_ips/{id}/enable | Enable Scrub Protection
[**GetOrderDetail**](ScrubIpsApi.md#GetOrderDetail) | **Get** /scrub_ips/order | Get Scrub IP Ordering Information
[**GetScrubIpDetails**](ScrubIpsApi.md#GetScrubIpDetails) | **Get** /scrub_ips/{id} | Get Scrub IP Details
[**GetScrubIpFilterTypes**](ScrubIpsApi.md#GetScrubIpFilterTypes) | **Get** /scrub_ips/filter_types | List Scrub Filter Types
[**GetScrubIpInvoices**](ScrubIpsApi.md#GetScrubIpInvoices) | **Get** /scrub_ips/{id}/invoices | Get ScrubIp Invoices
[**GetScrubIpLogs**](ScrubIpsApi.md#GetScrubIpLogs) | **Get** /scrub_ips/{id}/logs | Get Scrub IP Logs
[**GetScrubIpsList**](ScrubIpsApi.md#GetScrubIpsList) | **Get** /scrub_ips | List Scrub IP Services
[**PlaceScrubOrder**](ScrubIpsApi.md#PlaceScrubOrder) | **Post** /scrub_ips/order | Place Scrub IP Order
[**ScrubIpsDeleteGeoRule**](ScrubIpsApi.md#ScrubIpsDeleteGeoRule) | **Post** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule
[**ScrubIpsDeleteRule**](ScrubIpsApi.md#ScrubIpsDeleteRule) | **Post** /scrub_ips/{id}/delete_rule | Delete Firewall Rule

# **CancelScrubIp**
> InlineResponse20013 CancelScrubIp(ctx, id)
Cancel Scrub IP Service

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| ScrubIp ID number | 

### Return type

[**InlineResponse20013**](inline_response_200_13.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CreateFilter**
> InlineResponse2011 CreateFilter(ctx, body, id)
Create Traffic Filter

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**CreateFilter**](CreateFilter.md)|  | 
  **id** | **int32**| ScrubIp ID number | 

### Return type

[**InlineResponse2011**](inline_response_201_1.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CreateGeoRule**
> InlineResponse201 CreateGeoRule(ctx, body, id)
Create Geo Firewall Rule

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**CreateGeoFirewallRule**](CreateGeoFirewallRule.md)|  | 
  **id** | **int32**| ScrubIp ID number | 

### Return type

[**InlineResponse201**](inline_response_201.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CreateRule**
> InlineResponse201 CreateRule(ctx, body, id)
Create Firewall Rule

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**CreateFirewallRule**](CreateFirewallRule.md)|  | 
  **id** | **int32**| ScrubIp ID number | 

### Return type

[**InlineResponse201**](inline_response_201.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeleteFilter**
> InlineResponse20017 DeleteFilter(ctx, body, id)
Delete Traffic Filter

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**CreateFilter**](CreateFilter.md)|  | 
  **id** | **int32**| ScrubIp ID number | 

### Return type

[**InlineResponse20017**](inline_response_200_17.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DisableScrub**
> InlineResponse20015 DisableScrub(ctx, id)
Disable Scrub Protection

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| ScrubIp ID number | 

### Return type

[**InlineResponse20015**](inline_response_200_15.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EnableScrub**
> InlineResponse20014 EnableScrub(ctx, id)
Enable Scrub Protection

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| ScrubIp ID number | 

### Return type

[**InlineResponse20014**](inline_response_200_14.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetOrderDetail**
> InlineResponse20018 GetOrderDetail(ctx, )
Get Scrub IP Ordering Information

Returns the available Scrub IP service plans and pricing information needed to build an order form.

### Required Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse20018**](inline_response_200_18.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetScrubIpDetails**
> InlineResponse20012 GetScrubIpDetails(ctx, id)
Get Scrub IP Details

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| ScrubIp ID number | 

### Return type

[**InlineResponse20012**](inline_response_200_12.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetScrubIpFilterTypes**
> ScrubIpFilterTypes GetScrubIpFilterTypes(ctx, )
List Scrub Filter Types

Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.

### Required Parameters
This endpoint does not need any parameter.

### Return type

[**ScrubIpFilterTypes**](ScrubIpFilterTypes.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetScrubIpInvoices**
> ChargeInvoiceRows GetScrubIpInvoices(ctx, id)
Get ScrubIp Invoices

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| ScrubIp ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetScrubIpLogs**
> []ScrubIpsLogRowSchema GetScrubIpLogs(ctx, id)
Get Scrub IP Logs

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **string**| Scrub Order ID | 

### Return type

[**[]ScrubIpsLogRowSchema**](ScrubIpsLogRowSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetScrubIpsList**
> []ScrubIpsRowSchema GetScrubIpsList(ctx, )
List Scrub IP Services

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.

### Required Parameters
This endpoint does not need any parameter.

### Return type

[**[]ScrubIpsRowSchema**](ScrubIpsRowSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PlaceScrubOrder**
> InlineResponse2012 PlaceScrubOrder(ctx, body)
Place Scrub IP Order

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**ScrubIpPlaceOrder**](ScrubIpPlaceOrder.md)|  | 

### Return type

[**InlineResponse2012**](inline_response_201_2.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsDeleteGeoRule**
> InlineResponse20016 ScrubIpsDeleteGeoRule(ctx, body, id)
Delete Geo Firewall Rule

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**DeleteGeoFirewallRule**](DeleteGeoFirewallRule.md)|  | 
  **id** | **int32**| ScrubIp ID number | 

### Return type

[**InlineResponse20016**](inline_response_200_16.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScrubIpsDeleteRule**
> InlineResponse20016 ScrubIpsDeleteRule(ctx, body, id)
Delete Firewall Rule

Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**DeleteFirewallRule**](DeleteFirewallRule.md)|  | 
  **id** | **int32**| ScrubIp ID number | 

### Return type

[**InlineResponse20016**](inline_response_200_16.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

