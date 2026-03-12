# FloatingIpsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addFloatingIp**](FloatingIpsApi.md#addFloatingIp) | **POST** /floating_ips/order | Place Floating IP Order
[**floatingIpsCancel**](FloatingIpsApi.md#floatingIpsCancel) | **DELETE** /floating_ips/{id} | Cancel Floating IP
[**getFloatingIpInfo**](FloatingIpsApi.md#getFloatingIpInfo) | **GET** /floating_ips/{id} | View Floating IP
[**getFloatingIpInvoices**](FloatingIpsApi.md#getFloatingIpInvoices) | **GET** /floating_ips/{id}/invoices | Get Floating IP Invoices
[**getFloatingIpsList**](FloatingIpsApi.md#getFloatingIpsList) | **GET** /floating_ips | List Floating IPs
[**getFloatingIpsWelcomeEmail**](FloatingIpsApi.md#getFloatingIpsWelcomeEmail) | **GET** /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email
[**getNewFloatingIp**](FloatingIpsApi.md#getNewFloatingIp) | **GET** /floating_ips/order | Get Floating IP Ordering Information
[**postFloatingIpsChangeIp**](FloatingIpsApi.md#postFloatingIpsChangeIp) | **POST** /floating_ips/{id}/change_ip | Change Floating IP Target
[**putFloatingIps**](FloatingIpsApi.md#putFloatingIps) | **PUT** /floating_ips/order | Validate Floating IP Order
[**updateFloatingIpInfo**](FloatingIpsApi.md#updateFloatingIpInfo) | **POST** /floating_ips/{id} | Update Floating IP

<a name="addFloatingIp"></a>
# **addFloatingIp**
> addFloatingIp()

Place Floating IP Order

Places an order for a new Floating IP service. Use &#x60;PUT /floating_ips/order&#x60; to validate the order first.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.FloatingIpsApi;

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

FloatingIpsApi apiInstance = new FloatingIpsApi();
try {
    apiInstance.addFloatingIp();
} catch (ApiException e) {
    System.err.println("Exception when calling FloatingIpsApi#addFloatingIp");
    e.printStackTrace();
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="floatingIpsCancel"></a>
# **floatingIpsCancel**
> InlineResponse2003 floatingIpsCancel(id)

Cancel Floating IP

Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.FloatingIpsApi;

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

FloatingIpsApi apiInstance = new FloatingIpsApi();
Integer id = 56; // Integer | The Floating IP service ID. Use the ID from `GET /floating_ips`.
try {
    InlineResponse2003 result = apiInstance.floatingIpsCancel(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling FloatingIpsApi#floatingIpsCancel");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. |

### Return type

[**InlineResponse2003**](InlineResponse2003.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getFloatingIpInfo"></a>
# **getFloatingIpInfo**
> getFloatingIpInfo(id)

View Floating IP

Returns detailed information about a specific Floating IP service including its current target IP assignment.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.FloatingIpsApi;

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

FloatingIpsApi apiInstance = new FloatingIpsApi();
Integer id = 56; // Integer | The Floating IP service ID. Use the ID from `GET /floating_ips`.
try {
    apiInstance.getFloatingIpInfo(id);
} catch (ApiException e) {
    System.err.println("Exception when calling FloatingIpsApi#getFloatingIpInfo");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getFloatingIpInvoices"></a>
# **getFloatingIpInvoices**
> ChargeInvoiceRows getFloatingIpInvoices(id)

Get Floating IP Invoices

Returns the billing invoices associated with this Floating IP service.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.FloatingIpsApi;

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

FloatingIpsApi apiInstance = new FloatingIpsApi();
Integer id = 56; // Integer | The Floating IP service ID. Use the ID from `GET /floating_ips`.
try {
    ChargeInvoiceRows result = apiInstance.getFloatingIpInvoices(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling FloatingIpsApi#getFloatingIpInvoices");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getFloatingIpsList"></a>
# **getFloatingIpsList**
> getFloatingIpsList()

List Floating IPs

Returns all Floating IP services on the account with their current status and assignment details.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.FloatingIpsApi;

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

FloatingIpsApi apiInstance = new FloatingIpsApi();
try {
    apiInstance.getFloatingIpsList();
} catch (ApiException e) {
    System.err.println("Exception when calling FloatingIpsApi#getFloatingIpsList");
    e.printStackTrace();
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getFloatingIpsWelcomeEmail"></a>
# **getFloatingIpsWelcomeEmail**
> SuccessTextResponse getFloatingIpsWelcomeEmail(id)

Resend Floating IPs Welcome Email

Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.FloatingIpsApi;

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

FloatingIpsApi apiInstance = new FloatingIpsApi();
Integer id = 56; // Integer | The Floating IP service ID. Use the ID from `GET /floating_ips`.
try {
    SuccessTextResponse result = apiInstance.getFloatingIpsWelcomeEmail(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling FloatingIpsApi#getFloatingIpsWelcomeEmail");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getNewFloatingIp"></a>
# **getNewFloatingIp**
> getNewFloatingIp()

Get Floating IP Ordering Information

Retrieves available options and pricing for ordering a new Floating IP.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.FloatingIpsApi;

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

FloatingIpsApi apiInstance = new FloatingIpsApi();
try {
    apiInstance.getNewFloatingIp();
} catch (ApiException e) {
    System.err.println("Exception when calling FloatingIpsApi#getNewFloatingIp");
    e.printStackTrace();
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postFloatingIpsChangeIp"></a>
# **postFloatingIpsChangeIp**
> SuccessTextResponse postFloatingIpsChangeIp(ip, id)

Change Floating IP Target

Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.FloatingIpsApi;

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

FloatingIpsApi apiInstance = new FloatingIpsApi();
String ip = "ip_example"; // String | 
Integer id = 56; // Integer | The Floating IP service ID. Use the ID from `GET /floating_ips`.
try {
    SuccessTextResponse result = apiInstance.postFloatingIpsChangeIp(ip, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling FloatingIpsApi#postFloatingIpsChangeIp");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ip** | **String**|  |
 **id** | **Integer**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="postFloatingIpsChangeIp"></a>
# **postFloatingIpsChangeIp**
> SuccessTextResponse postFloatingIpsChangeIp(body, id)

Change Floating IP Target

Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.FloatingIpsApi;

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

FloatingIpsApi apiInstance = new FloatingIpsApi();
IpObject body = new IpObject(); // IpObject | 
Integer id = 56; // Integer | The Floating IP service ID. Use the ID from `GET /floating_ips`.
try {
    SuccessTextResponse result = apiInstance.postFloatingIpsChangeIp(body, id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling FloatingIpsApi#postFloatingIpsChangeIp");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IpObject**](IpObject.md)|  |
 **id** | **Integer**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="putFloatingIps"></a>
# **putFloatingIps**
> putFloatingIps()

Validate Floating IP Order

Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.FloatingIpsApi;

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

FloatingIpsApi apiInstance = new FloatingIpsApi();
try {
    apiInstance.putFloatingIps();
} catch (ApiException e) {
    System.err.println("Exception when calling FloatingIpsApi#putFloatingIps");
    e.printStackTrace();
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="updateFloatingIpInfo"></a>
# **updateFloatingIpInfo**
> updateFloatingIpInfo(id)

Update Floating IP

Updates settings on a Floating IP service, such as its label or configuration metadata.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.FloatingIpsApi;

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

FloatingIpsApi apiInstance = new FloatingIpsApi();
String id = "id_example"; // String | The Floating IP service ID. Use the ID from `GET /floating_ips`.
try {
    apiInstance.updateFloatingIpInfo(id);
} catch (ApiException e) {
    System.err.println("Exception when calling FloatingIpsApi#updateFloatingIpInfo");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

