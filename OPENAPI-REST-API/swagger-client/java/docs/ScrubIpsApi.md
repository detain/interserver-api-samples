# ScrubIpsApi

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

<a name="cancelScrubIp"></a>
# **cancelScrubIp**
> InlineResponse20013 cancelScrubIp(id)

Cancel Scrub IP Service

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.ScrubIpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

ScrubIpsApi apiInstance = new ScrubIpsApi();
Integer id = 56; // Integer | ScrubIp ID number
try {
    InlineResponse20013 result = apiInstance.cancelScrubIp(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling ScrubIpsApi#cancelScrubIp");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| ScrubIp ID number |

### Return type

[**InlineResponse20013**](InlineResponse20013.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="createFilter"></a>
# **createFilter**
> InlineResponse2011 createFilter(body, id)

Create Traffic Filter

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use &#x60;GET /scrub_ips/filter_types&#x60; to list available filter types.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.ScrubIpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

ScrubIpsApi apiInstance = new ScrubIpsApi();
CreateFilter body = new CreateFilter(); // CreateFilter | 
Integer id = 56; // Integer | ScrubIp ID number
try {
    InlineResponse2011 result = apiInstance.createFilter(body, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling ScrubIpsApi#createFilter");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFilter**](CreateFilter.md)|  |
 **id** | **Integer**| ScrubIp ID number |

### Return type

[**InlineResponse2011**](InlineResponse2011.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="createGeoRule"></a>
# **createGeoRule**
> InlineResponse201 createGeoRule(body, id)

Create Geo Firewall Rule

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.ScrubIpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

ScrubIpsApi apiInstance = new ScrubIpsApi();
CreateGeoFirewallRule body = new CreateGeoFirewallRule(); // CreateGeoFirewallRule | 
Integer id = 56; // Integer | ScrubIp ID number
try {
    InlineResponse201 result = apiInstance.createGeoRule(body, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling ScrubIpsApi#createGeoRule");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateGeoFirewallRule**](CreateGeoFirewallRule.md)|  |
 **id** | **Integer**| ScrubIp ID number |

### Return type

[**InlineResponse201**](InlineResponse201.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="createRule"></a>
# **createRule**
> InlineResponse201 createRule(body, id)

Create Firewall Rule

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.ScrubIpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

ScrubIpsApi apiInstance = new ScrubIpsApi();
CreateFirewallRule body = new CreateFirewallRule(); // CreateFirewallRule | 
Integer id = 56; // Integer | ScrubIp ID number
try {
    InlineResponse201 result = apiInstance.createRule(body, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling ScrubIpsApi#createRule");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFirewallRule**](CreateFirewallRule.md)|  |
 **id** | **Integer**| ScrubIp ID number |

### Return type

[**InlineResponse201**](InlineResponse201.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="deleteFilter"></a>
# **deleteFilter**
> InlineResponse20017 deleteFilter(body, id)

Delete Traffic Filter

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.ScrubIpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

ScrubIpsApi apiInstance = new ScrubIpsApi();
CreateFilter body = new CreateFilter(); // CreateFilter | 
Integer id = 56; // Integer | ScrubIp ID number
try {
    InlineResponse20017 result = apiInstance.deleteFilter(body, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling ScrubIpsApi#deleteFilter");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFilter**](CreateFilter.md)|  |
 **id** | **Integer**| ScrubIp ID number |

### Return type

[**InlineResponse20017**](InlineResponse20017.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="disableScrub"></a>
# **disableScrub**
> InlineResponse20015 disableScrub(id)

Disable Scrub Protection

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.ScrubIpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

ScrubIpsApi apiInstance = new ScrubIpsApi();
Integer id = 56; // Integer | ScrubIp ID number
try {
    InlineResponse20015 result = apiInstance.disableScrub(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling ScrubIpsApi#disableScrub");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| ScrubIp ID number |

### Return type

[**InlineResponse20015**](InlineResponse20015.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="enableScrub"></a>
# **enableScrub**
> InlineResponse20014 enableScrub(id)

Enable Scrub Protection

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.ScrubIpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

ScrubIpsApi apiInstance = new ScrubIpsApi();
Integer id = 56; // Integer | ScrubIp ID number
try {
    InlineResponse20014 result = apiInstance.enableScrub(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling ScrubIpsApi#enableScrub");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| ScrubIp ID number |

### Return type

[**InlineResponse20014**](InlineResponse20014.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getOrderDetail"></a>
# **getOrderDetail**
> InlineResponse20018 getOrderDetail()

Get Scrub IP Ordering Information

Returns the available Scrub IP service plans and pricing information needed to build an order form.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.ScrubIpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

ScrubIpsApi apiInstance = new ScrubIpsApi();
try {
    InlineResponse20018 result = apiInstance.getOrderDetail();
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling ScrubIpsApi#getOrderDetail");
    e.printStackTrace();
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse20018**](InlineResponse20018.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getScrubIpDetails"></a>
# **getScrubIpDetails**
> InlineResponse20012 getScrubIpDetails(id)

Get Scrub IP Details

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.ScrubIpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

ScrubIpsApi apiInstance = new ScrubIpsApi();
Integer id = 56; // Integer | ScrubIp ID number
try {
    InlineResponse20012 result = apiInstance.getScrubIpDetails(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling ScrubIpsApi#getScrubIpDetails");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| ScrubIp ID number |

### Return type

[**InlineResponse20012**](InlineResponse20012.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getScrubIpFilterTypes"></a>
# **getScrubIpFilterTypes**
> ScrubIpFilterTypes getScrubIpFilterTypes()

List Scrub Filter Types

Returns the list of scrub filter types that can be used when creating filter rules via &#x60;/scrub_ips/{id}/create_filter&#x60;.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.ScrubIpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

ScrubIpsApi apiInstance = new ScrubIpsApi();
try {
    ScrubIpFilterTypes result = apiInstance.getScrubIpFilterTypes();
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling ScrubIpsApi#getScrubIpFilterTypes");
    e.printStackTrace();
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ScrubIpFilterTypes**](ScrubIpFilterTypes.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getScrubIpInvoices"></a>
# **getScrubIpInvoices**
> ChargeInvoiceRows getScrubIpInvoices(id)

Get ScrubIp Invoices

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.ScrubIpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

ScrubIpsApi apiInstance = new ScrubIpsApi();
Integer id = 56; // Integer | ScrubIp ID number
try {
    ChargeInvoiceRows result = apiInstance.getScrubIpInvoices(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling ScrubIpsApi#getScrubIpInvoices");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| ScrubIp ID number |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getScrubIpLogs"></a>
# **getScrubIpLogs**
> List&lt;ScrubIpsLogRowSchema&gt; getScrubIpLogs(id)

Get Scrub IP Logs

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.ScrubIpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

ScrubIpsApi apiInstance = new ScrubIpsApi();
String id = "id_example"; // String | Scrub Order ID
try {
    List<ScrubIpsLogRowSchema> result = apiInstance.getScrubIpLogs(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling ScrubIpsApi#getScrubIpLogs");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| Scrub Order ID |

### Return type

[**List&lt;ScrubIpsLogRowSchema&gt;**](ScrubIpsLogRowSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getScrubIpsList"></a>
# **getScrubIpsList**
> List&lt;ScrubIpsRowSchema&gt; getScrubIpsList()

List Scrub IP Services

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.ScrubIpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

ScrubIpsApi apiInstance = new ScrubIpsApi();
try {
    List<ScrubIpsRowSchema> result = apiInstance.getScrubIpsList();
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling ScrubIpsApi#getScrubIpsList");
    e.printStackTrace();
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List&lt;ScrubIpsRowSchema&gt;**](ScrubIpsRowSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="placeScrubOrder"></a>
# **placeScrubOrder**
> InlineResponse2012 placeScrubOrder(body)

Place Scrub IP Order

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.ScrubIpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

ScrubIpsApi apiInstance = new ScrubIpsApi();
ScrubIpPlaceOrder body = new ScrubIpPlaceOrder(); // ScrubIpPlaceOrder | 
try {
    InlineResponse2012 result = apiInstance.placeScrubOrder(body);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling ScrubIpsApi#placeScrubOrder");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ScrubIpPlaceOrder**](ScrubIpPlaceOrder.md)|  |

### Return type

[**InlineResponse2012**](InlineResponse2012.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="scrubIpsDeleteGeoRule"></a>
# **scrubIpsDeleteGeoRule**
> InlineResponse20016 scrubIpsDeleteGeoRule(body, id)

Delete Geo Firewall Rule

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.ScrubIpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

ScrubIpsApi apiInstance = new ScrubIpsApi();
DeleteGeoFirewallRule body = new DeleteGeoFirewallRule(); // DeleteGeoFirewallRule | 
Integer id = 56; // Integer | ScrubIp ID number
try {
    InlineResponse20016 result = apiInstance.scrubIpsDeleteGeoRule(body, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling ScrubIpsApi#scrubIpsDeleteGeoRule");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DeleteGeoFirewallRule**](DeleteGeoFirewallRule.md)|  |
 **id** | **Integer**| ScrubIp ID number |

### Return type

[**InlineResponse20016**](InlineResponse20016.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="scrubIpsDeleteRule"></a>
# **scrubIpsDeleteRule**
> InlineResponse20016 scrubIpsDeleteRule(body, id)

Delete Firewall Rule

Removes an existing firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.ScrubIpsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

ScrubIpsApi apiInstance = new ScrubIpsApi();
DeleteFirewallRule body = new DeleteFirewallRule(); // DeleteFirewallRule | 
Integer id = 56; // Integer | ScrubIp ID number
try {
    InlineResponse20016 result = apiInstance.scrubIpsDeleteRule(body, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling ScrubIpsApi#scrubIpsDeleteRule");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DeleteFirewallRule**](DeleteFirewallRule.md)|  |
 **id** | **Integer**| ScrubIp ID number |

### Return type

[**InlineResponse20016**](InlineResponse20016.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

