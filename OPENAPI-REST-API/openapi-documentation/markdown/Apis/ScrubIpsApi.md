# ScrubIpsApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**cancelScrubIp**](ScrubIpsApi.md#cancelScrubIp) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service |
| [**createFilter**](ScrubIpsApi.md#createFilter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter |
| [**createGeoRule**](ScrubIpsApi.md#createGeoRule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule |
| [**createRule**](ScrubIpsApi.md#createRule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule |
| [**deleteFilter**](ScrubIpsApi.md#deleteFilter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter |
| [**disableScrub**](ScrubIpsApi.md#disableScrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection |
| [**enableScrub**](ScrubIpsApi.md#enableScrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection |
| [**getOrderDetail**](ScrubIpsApi.md#getOrderDetail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information |
| [**getScrubIpDetails**](ScrubIpsApi.md#getScrubIpDetails) | **GET** /scrub_ips/{id} | Get Scrub IP Details |
| [**getScrubIpFilterTypes**](ScrubIpsApi.md#getScrubIpFilterTypes) | **GET** /scrub_ips/filter_types | List Scrub Filter Types |
| [**getScrubIpInvoices**](ScrubIpsApi.md#getScrubIpInvoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices |
| [**getScrubIpLogs**](ScrubIpsApi.md#getScrubIpLogs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs |
| [**getScrubIpsList**](ScrubIpsApi.md#getScrubIpsList) | **GET** /scrub_ips | List Scrub IP Services |
| [**placeScrubOrder**](ScrubIpsApi.md#placeScrubOrder) | **POST** /scrub_ips/order | Place Scrub IP Order |
| [**scrubIpsDeleteGeoRule**](ScrubIpsApi.md#scrubIpsDeleteGeoRule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule |
| [**scrubIpsDeleteRule**](ScrubIpsApi.md#scrubIpsDeleteRule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule |


<a name="cancelScrubIp"></a>
# **cancelScrubIp**
> cancelScrubIp_200_response cancelScrubIp(id)

Cancel Scrub IP Service

    Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| ScrubIp ID number | [default to null] |

### Return type

[**cancelScrubIp_200_response**](../Models/cancelScrubIp_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="createFilter"></a>
# **createFilter**
> createFilter_201_response createFilter(id, CreateFilter)

Create Traffic Filter

    Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use &#x60;GET /scrub_ips/filter_types&#x60; to list available filter types.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| ScrubIp ID number | [default to null] |
| **CreateFilter** | [**CreateFilter**](../Models/CreateFilter.md)|  | |

### Return type

[**createFilter_201_response**](../Models/createFilter_201_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createGeoRule"></a>
# **createGeoRule**
> createRule_201_response createGeoRule(id, CreateGeoFirewallRule)

Create Geo Firewall Rule

    Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| ScrubIp ID number | [default to null] |
| **CreateGeoFirewallRule** | [**CreateGeoFirewallRule**](../Models/CreateGeoFirewallRule.md)|  | |

### Return type

[**createRule_201_response**](../Models/createRule_201_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="createRule"></a>
# **createRule**
> createRule_201_response createRule(id, CreateFirewallRule)

Create Firewall Rule

    Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| ScrubIp ID number | [default to null] |
| **CreateFirewallRule** | [**CreateFirewallRule**](../Models/CreateFirewallRule.md)|  | |

### Return type

[**createRule_201_response**](../Models/createRule_201_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="deleteFilter"></a>
# **deleteFilter**
> deleteFilter_200_response deleteFilter(id, CreateFilter)

Delete Traffic Filter

    Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| ScrubIp ID number | [default to null] |
| **CreateFilter** | [**CreateFilter**](../Models/CreateFilter.md)|  | |

### Return type

[**deleteFilter_200_response**](../Models/deleteFilter_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="disableScrub"></a>
# **disableScrub**
> disableScrub_200_response disableScrub(id)

Disable Scrub Protection

    Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| ScrubIp ID number | [default to null] |

### Return type

[**disableScrub_200_response**](../Models/disableScrub_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="enableScrub"></a>
# **enableScrub**
> enableScrub_200_response enableScrub(id)

Enable Scrub Protection

    Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| ScrubIp ID number | [default to null] |

### Return type

[**enableScrub_200_response**](../Models/enableScrub_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getOrderDetail"></a>
# **getOrderDetail**
> getOrderDetail_200_response getOrderDetail()

Get Scrub IP Ordering Information

    Returns the available Scrub IP service plans and pricing information needed to build an order form.

### Parameters
This endpoint does not need any parameter.

### Return type

[**getOrderDetail_200_response**](../Models/getOrderDetail_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getScrubIpDetails"></a>
# **getScrubIpDetails**
> getScrubIpDetails_200_response getScrubIpDetails(id)

Get Scrub IP Details

    Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| ScrubIp ID number | [default to null] |

### Return type

[**getScrubIpDetails_200_response**](../Models/getScrubIpDetails_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getScrubIpFilterTypes"></a>
# **getScrubIpFilterTypes**
> ScrubIpFilterTypes getScrubIpFilterTypes()

List Scrub Filter Types

    Returns the list of scrub filter types that can be used when creating filter rules via &#x60;/scrub_ips/{id}/create_filter&#x60;.

### Parameters
This endpoint does not need any parameter.

### Return type

[**ScrubIpFilterTypes**](../Models/ScrubIpFilterTypes.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getScrubIpInvoices"></a>
# **getScrubIpInvoices**
> ChargeInvoiceRows getScrubIpInvoices(id)

Get ScrubIp Invoices

    Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| ScrubIp ID number | [default to null] |

### Return type

[**ChargeInvoiceRows**](../Models/ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getScrubIpLogs"></a>
# **getScrubIpLogs**
> List getScrubIpLogs(id)

Get Scrub IP Logs

    Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| Scrub Order ID | [default to null] |

### Return type

[**List**](../Models/ScrubIpsLogRowSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getScrubIpsList"></a>
# **getScrubIpsList**
> List getScrubIpsList()

List Scrub IP Services

    Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.

### Parameters
This endpoint does not need any parameter.

### Return type

[**List**](../Models/ScrubIpsRowSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="placeScrubOrder"></a>
# **placeScrubOrder**
> placeScrubOrder_201_response placeScrubOrder(ScrubIpPlaceOrder)

Place Scrub IP Order

    Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **ScrubIpPlaceOrder** | [**ScrubIpPlaceOrder**](../Models/ScrubIpPlaceOrder.md)|  | |

### Return type

[**placeScrubOrder_201_response**](../Models/placeScrubOrder_201_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="scrubIpsDeleteGeoRule"></a>
# **scrubIpsDeleteGeoRule**
> scrubIpsDeleteRule_200_response scrubIpsDeleteGeoRule(id, Delete\_Geo\_Firewall\_Rule)

Delete Geo Firewall Rule

    Removes an existing geographic-based firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| ScrubIp ID number | [default to null] |
| **Delete\_Geo\_Firewall\_Rule** | [**Delete_Geo_Firewall_Rule**](../Models/Delete_Geo_Firewall_Rule.md)|  | |

### Return type

[**scrubIpsDeleteRule_200_response**](../Models/scrubIpsDeleteRule_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="scrubIpsDeleteRule"></a>
# **scrubIpsDeleteRule**
> scrubIpsDeleteRule_200_response scrubIpsDeleteRule(id, Delete\_Firewall\_Rule)

Delete Firewall Rule

    Removes an existing firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| ScrubIp ID number | [default to null] |
| **Delete\_Firewall\_Rule** | [**Delete_Firewall_Rule**](../Models/Delete_Firewall_Rule.md)|  | |

### Return type

[**scrubIpsDeleteRule_200_response**](../Models/scrubIpsDeleteRule_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

