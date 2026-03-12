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


## Creating ScrubIpsApi

To initiate an instance of `ScrubIpsApi`, you can use micronaut's `ApplicationContext`:
```java
/* imports
import io.micronaut.runtime.Micronaut;
import io.micronaut.context.ApplicationContext;
import org.openapitools.api.ScrubIpsApi;
*/

ApplicationContext context = Micronaut.run(/* ... */);
PetApi apiInstance = context.getBean(ScrubIpsApi.class);
```

Or the `@Inject` annotation:
```java
@Singleton
class MyClass {
    @Inject
    ScrubIpsApi scrubIpsApi;

    /* ... use the injected variable */
}
```
Note that the class needs to be annotated with one of Micronaut's [scope annotations](https://docs.micronaut.io/latest/guide/#scopes) like `Singleton` in order to be processed.

More information can be found inside [Inversion of Control guide section](https://docs.micronaut.io/latest/guide/#ioc).

<a id="cancelScrubIp"></a>
# **cancelScrubIp**
```java
Mono<CancelScrubIp200Response> ScrubIpsApi.cancelScrubIp(id)
```

Cancel Scrub IP Service

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| ScrubIp ID number | |


### Return type
[**CancelScrubIp200Response**](CancelScrubIp200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="createFilter"></a>
# **createFilter**
```java
Mono<CreateFilter201Response> ScrubIpsApi.createFilter(idcreateFilter)
```

Create Traffic Filter

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use &#x60;GET /scrub_ips/filter_types&#x60; to list available filter types.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| ScrubIp ID number | |
| **createFilter** | [**CreateFilter**](CreateFilter.md)|  | |


### Return type
[**CreateFilter201Response**](CreateFilter201Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`
 - **Accept**: `application/json`

<a id="createGeoRule"></a>
# **createGeoRule**
```java
Mono<CreateRule201Response> ScrubIpsApi.createGeoRule(idcreateGeoFirewallRule)
```

Create Geo Firewall Rule

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| ScrubIp ID number | |
| **createGeoFirewallRule** | [**CreateGeoFirewallRule**](CreateGeoFirewallRule.md)|  | |


### Return type
[**CreateRule201Response**](CreateRule201Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`
 - **Accept**: `application/json`

<a id="createRule"></a>
# **createRule**
```java
Mono<CreateRule201Response> ScrubIpsApi.createRule(idcreateFirewallRule)
```

Create Firewall Rule

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| ScrubIp ID number | |
| **createFirewallRule** | [**CreateFirewallRule**](CreateFirewallRule.md)|  | |


### Return type
[**CreateRule201Response**](CreateRule201Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`
 - **Accept**: `application/json`

<a id="deleteFilter"></a>
# **deleteFilter**
```java
Mono<DeleteFilter200Response> ScrubIpsApi.deleteFilter(idcreateFilter)
```

Delete Traffic Filter

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| ScrubIp ID number | |
| **createFilter** | [**CreateFilter**](CreateFilter.md)|  | |


### Return type
[**DeleteFilter200Response**](DeleteFilter200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`
 - **Accept**: `application/json`

<a id="disableScrub"></a>
# **disableScrub**
```java
Mono<DisableScrub200Response> ScrubIpsApi.disableScrub(id)
```

Disable Scrub Protection

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| ScrubIp ID number | |


### Return type
[**DisableScrub200Response**](DisableScrub200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="enableScrub"></a>
# **enableScrub**
```java
Mono<EnableScrub200Response> ScrubIpsApi.enableScrub(id)
```

Enable Scrub Protection

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| ScrubIp ID number | |


### Return type
[**EnableScrub200Response**](EnableScrub200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getOrderDetail"></a>
# **getOrderDetail**
```java
Mono<GetOrderDetail200Response> ScrubIpsApi.getOrderDetail()
```

Get Scrub IP Ordering Information

Returns the available Scrub IP service plans and pricing information needed to build an order form.



### Return type
[**GetOrderDetail200Response**](GetOrderDetail200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getScrubIpDetails"></a>
# **getScrubIpDetails**
```java
Mono<GetScrubIpDetails200Response> ScrubIpsApi.getScrubIpDetails(id)
```

Get Scrub IP Details

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| ScrubIp ID number | |


### Return type
[**GetScrubIpDetails200Response**](GetScrubIpDetails200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getScrubIpFilterTypes"></a>
# **getScrubIpFilterTypes**
```java
Mono<ScrubIpFilterTypes> ScrubIpsApi.getScrubIpFilterTypes()
```

List Scrub Filter Types

Returns the list of scrub filter types that can be used when creating filter rules via &#x60;/scrub_ips/{id}/create_filter&#x60;.



### Return type
[**ScrubIpFilterTypes**](ScrubIpFilterTypes.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getScrubIpInvoices"></a>
# **getScrubIpInvoices**
```java
Mono<ChargeInvoiceRows> ScrubIpsApi.getScrubIpInvoices(id)
```

Get ScrubIp Invoices

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| ScrubIp ID number | |


### Return type
[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getScrubIpLogs"></a>
# **getScrubIpLogs**
```java
Mono<List<ScrubIpsLogRowSchema>> ScrubIpsApi.getScrubIpLogs(id)
```

Get Scrub IP Logs

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `String`| Scrub Order ID | |


### Return type
[**List&lt;ScrubIpsLogRowSchema&gt;**](ScrubIpsLogRowSchema.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getScrubIpsList"></a>
# **getScrubIpsList**
```java
Mono<List<ScrubIpsRowSchema>> ScrubIpsApi.getScrubIpsList()
```

List Scrub IP Services

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.



### Return type
[**List&lt;ScrubIpsRowSchema&gt;**](ScrubIpsRowSchema.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="placeScrubOrder"></a>
# **placeScrubOrder**
```java
Mono<PlaceScrubOrder201Response> ScrubIpsApi.placeScrubOrder(scrubIpPlaceOrder)
```

Place Scrub IP Order

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **scrubIpPlaceOrder** | [**ScrubIpPlaceOrder**](ScrubIpPlaceOrder.md)|  | |


### Return type
[**PlaceScrubOrder201Response**](PlaceScrubOrder201Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`
 - **Accept**: `application/json`

<a id="scrubIpsDeleteGeoRule"></a>
# **scrubIpsDeleteGeoRule**
```java
Mono<ScrubIpsDeleteRule200Response> ScrubIpsApi.scrubIpsDeleteGeoRule(iddeleteGeoFirewallRule)
```

Delete Geo Firewall Rule

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| ScrubIp ID number | |
| **deleteGeoFirewallRule** | [**DeleteGeoFirewallRule**](DeleteGeoFirewallRule.md)|  | |


### Return type
[**ScrubIpsDeleteRule200Response**](ScrubIpsDeleteRule200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`
 - **Accept**: `application/json`

<a id="scrubIpsDeleteRule"></a>
# **scrubIpsDeleteRule**
```java
Mono<ScrubIpsDeleteRule200Response> ScrubIpsApi.scrubIpsDeleteRule(iddeleteFirewallRule)
```

Delete Firewall Rule

Removes an existing firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| ScrubIp ID number | |
| **deleteFirewallRule** | [**DeleteFirewallRule**](DeleteFirewallRule.md)|  | |


### Return type
[**ScrubIpsDeleteRule200Response**](ScrubIpsDeleteRule200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`
 - **Accept**: `application/json`

