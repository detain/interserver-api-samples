# ServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addServer**](ServersApi.md#addServer) | **POST** /servers/order | Place Server Order |
| [**buyItNowServerOrder**](ServersApi.md#buyItNowServerOrder) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options |
| [**getMPServers**](ServersApi.md#getMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers |
| [**getNewServer**](ServersApi.md#getNewServer) | **GET** /servers/order | Server Ordering Information |
| [**getServerInfo**](ServersApi.md#getServerInfo) | **GET** /servers/{id} | Get Server Order |
| [**getServerInvoices**](ServersApi.md#getServerInvoices) | **GET** /servers/{id}/invoices | Get Server Invoices |
| [**getServerList**](ServersApi.md#getServerList) | **GET** /servers | List Servers |
| [**getServerReverseDns**](ServersApi.md#getServerReverseDns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info |
| [**getServersWelcomeEmail**](ServersApi.md#getServersWelcomeEmail) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email |
| [**placeBuyNowServer**](ServersApi.md#placeBuyNowServer) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order |
| [**postServerReverseDns**](ServersApi.md#postServerReverseDns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS |
| [**putServers**](ServersApi.md#putServers) | **PUT** /servers/order | Validate Server Order |
| [**serverIpmiLiveGet**](ServersApi.md#serverIpmiLiveGet) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information |
| [**serverIpmiLivePost**](ServersApi.md#serverIpmiLivePost) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup |
| [**serverIpmiPowerGet**](ServersApi.md#serverIpmiPowerGet) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status |
| [**serverIpmiPowerPost**](ServersApi.md#serverIpmiPowerPost) | **POST** /servers/{id}/ipmi_power | Server IPMI Power |
| [**serversCancel**](ServersApi.md#serversCancel) | **DELETE** /servers/{id} | Cancel Server Service |
| [**updateServerInfo**](ServersApi.md#updateServerInfo) | **POST** /servers/{id} | Update Server Order |


## Creating ServersApi

To initiate an instance of `ServersApi`, you can use micronaut's `ApplicationContext`:
```java
/* imports
import io.micronaut.runtime.Micronaut;
import io.micronaut.context.ApplicationContext;
import org.openapitools.api.ServersApi;
*/

ApplicationContext context = Micronaut.run(/* ... */);
PetApi apiInstance = context.getBean(ServersApi.class);
```

Or the `@Inject` annotation:
```java
@Singleton
class MyClass {
    @Inject
    ServersApi serversApi;

    /* ... use the injected variable */
}
```
Note that the class needs to be annotated with one of Micronaut's [scope annotations](https://docs.micronaut.io/latest/guide/#scopes) like `Singleton` in order to be processed.

More information can be found inside [Inversion of Control guide section](https://docs.micronaut.io/latest/guide/#ioc).

<a id="addServer"></a>
# **addServer**
```java
Mono<AddServer200Response> ServersApi.addServer()
```

Place Server Order

Places an order for a new dedicated server. Use &#x60;PUT /servers/order&#x60; to validate the order first.



### Return type
[**AddServer200Response**](AddServer200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="buyItNowServerOrder"></a>
# **buyItNowServerOrder**
```java
Mono<BuyItNowServerOrder200Response> ServersApi.buyItNowServerOrder()
```

Get Buy Now Server Options

Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via &#x60;POST /servers/order/buy_now_server&#x60;.



### Return type
[**BuyItNowServerOrder200Response**](BuyItNowServerOrder200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getMPServers"></a>
# **getMPServers**
```java
Mono<BuyItNowList> ServersApi.getMPServers()
```

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.



### Return type
[**BuyItNowList**](BuyItNowList.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getNewServer"></a>
# **getNewServer**
```java
Mono<ServerOrder> ServersApi.getNewServer()
```

Server Ordering Information

Retrieves available server configurations and pricing for ordering a new dedicated server.



### Return type
[**ServerOrder**](ServerOrder.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getServerInfo"></a>
# **getServerInfo**
```java
Mono<Server> ServersApi.getServerInfo(id)
```

Get Server Order

Returns detailed information about a specific server including its hardware configuration, IPs, and status.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| Server ID number. | |


### Return type
[**Server**](Server.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getServerInvoices"></a>
# **getServerInvoices**
```java
Mono<ChargeInvoiceRows> ServersApi.getServerInvoices(id)
```

Get Server Invoices

Returns the billing invoices associated with this dedicated server.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| Server ID number | |


### Return type
[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getServerList"></a>
# **getServerList**
```java
Mono<List<ServerRow>> ServersApi.getServerList()
```

List Servers

Returns all dedicated server services on the account with their current status and configuration.



### Return type
[**List&lt;ServerRow&gt;**](ServerRow.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getServerReverseDns"></a>
# **getServerReverseDns**
```java
Mono<ReverseDnsEntries> ServersApi.getServerReverseDns(id)
```

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the server&#39;s IP addresses.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| Server ID number | |


### Return type
[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getServersWelcomeEmail"></a>
# **getServersWelcomeEmail**
```java
Mono<SuccessTextResponse> ServersApi.getServersWelcomeEmail(id)
```

Resend Server Welcome Email

Resends the welcome email for the order.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| Server ID number | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="placeBuyNowServer"></a>
# **placeBuyNowServer**
```java
Mono<ServersBuyNowResponse> ServersApi.placeBuyNowServer(placeBuyNowServerRequest)
```

Place Buy Now Server Order

Places an order for a buy-it-now dedicated server. Use &#x60;GET /servers/order/buy_now_server&#x60; to retrieve available server configurations and their IDs before ordering.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **placeBuyNowServerRequest** | [**PlaceBuyNowServerRequest**](PlaceBuyNowServerRequest.md)|  | [optional parameter] |


### Return type
[**ServersBuyNowResponse**](ServersBuyNowResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`
 - **Accept**: `application/json`

<a id="postServerReverseDns"></a>
# **postServerReverseDns**
```java
Mono<TextResponse> ServersApi.postServerReverseDns(idreverseDnsEntries)
```

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the server&#39;s IP addresses.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| Server ID number | |
| **reverseDnsEntries** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | |


### Return type
[**TextResponse**](TextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="putServers"></a>
# **putServers**
```java
Mono<Void> ServersApi.putServers()
```

Validate Server Order

Validates a server order before placing it. Use this to check for errors before committing to a purchase.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="serverIpmiLiveGet"></a>
# **serverIpmiLiveGet**
```java
Mono<ServerIpmiLiveInfo> ServersApi.serverIpmiLiveGet(id)
```

Server IPMI Live Information

Returns the current IPMI live connection information for the server.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| Server ID number | |


### Return type
[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="serverIpmiLivePost"></a>
# **serverIpmiLivePost**
```java
Mono<ServerIpmiLiveInfo> ServersApi.serverIpmiLivePost(idipasset)
```

Server IPMI Live Setup

Configures IPMI live access by whitelisting your current IP address for connections to the server&#39;s IPMI management interface.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| Server ID number | |
| **ip** | `String`| Your IP Address you wish to connect to the IPMI system from. | |
| **asset** | `Integer`| Asset ID | [optional parameter] |


### Return type
[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="serverIpmiPowerGet"></a>
# **serverIpmiPowerGet**
```java
Mono<TextResponse> ServersApi.serverIpmiPowerGet(id)
```

Get IPMI Power Status

Returns the chassis power status from ipmi.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| Server ID number | |


### Return type
[**TextResponse**](TextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="serverIpmiPowerPost"></a>
# **serverIpmiPowerPost**
```java
Mono<TextResponse> ServersApi.serverIpmiPowerPost(idactionasset)
```

Server IPMI Power

Uses the IPMI interface to set the Power status on the server.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| Server ID number | |
| **action** | `String`| The power action to send to the ipmi controller. | [enum: `cycle`, `reset`, `on`, `off`, `soft`] |
| **asset** | `Integer`| The Asset ID | [optional parameter] |


### Return type
[**TextResponse**](TextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="serversCancel"></a>
# **serversCancel**
```java
Mono<ServersCancel200Response> ServersApi.serversCancel(id)
```

Cancel Server Service

Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| Server ID number | |


### Return type
[**ServersCancel200Response**](ServersCancel200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="updateServerInfo"></a>
# **updateServerInfo**
```java
Mono<SuccessTextResponse> ServersApi.updateServerInfo(id)
```

Update Server Order

Updates settings on a dedicated server order.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `String`| Server ID number. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

