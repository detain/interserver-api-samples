# SslCertificatesApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addSsl**](SslCertificatesApi.md#addSsl) | **POST** /ssl/order | Place SSL Cert Order
[**getNewSsl**](SslCertificatesApi.md#getNewSsl) | **GET** /ssl/order | SSL Cert Ordering Information
[**getSslInfo**](SslCertificatesApi.md#getSslInfo) | **GET** /ssl/{id} | Get SSL Cert Info
[**getSslInvoices**](SslCertificatesApi.md#getSslInvoices) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices
[**getSslList**](SslCertificatesApi.md#getSslList) | **GET** /ssl | List SSL Certs
[**getSslWelcomeEmail**](SslCertificatesApi.md#getSslWelcomeEmail) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email
[**putSsl**](SslCertificatesApi.md#putSsl) | **PUT** /ssl/order | Validate SSL Cert Order
[**sslCancel**](SslCertificatesApi.md#sslCancel) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service
[**updateSslInfo**](SslCertificatesApi.md#updateSslInfo) | **POST** /ssl/{id} | Update SSL Cert Order

<a name="addSsl"></a>
# **addSsl**
> addSsl()

Place SSL Cert Order

Places an order for a new SSL certificate. Use &#x60;PUT /ssl/order&#x60; to validate the order first.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.SslCertificatesApi;

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

SslCertificatesApi apiInstance = new SslCertificatesApi();
try {
    apiInstance.addSsl();
} catch (ApiException e) {
    System.err.println("Exception when calling SslCertificatesApi#addSsl");
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

<a name="getNewSsl"></a>
# **getNewSsl**
> getNewSsl()

SSL Cert Ordering Information

Retrieves available SSL certificate types and pricing for ordering.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.SslCertificatesApi;

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

SslCertificatesApi apiInstance = new SslCertificatesApi();
try {
    apiInstance.getNewSsl();
} catch (ApiException e) {
    System.err.println("Exception when calling SslCertificatesApi#getNewSsl");
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

<a name="getSslInfo"></a>
# **getSslInfo**
> getSslInfo(id)

Get SSL Cert Info

Returns detailed information about a specific SSL certificate including its domain and expiration.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.SslCertificatesApi;

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

SslCertificatesApi apiInstance = new SslCertificatesApi();
Integer id = 56; // Integer | SSL certificate ID number.
try {
    apiInstance.getSslInfo(id);
} catch (ApiException e) {
    System.err.println("Exception when calling SslCertificatesApi#getSslInfo");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| SSL certificate ID number. |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getSslInvoices"></a>
# **getSslInvoices**
> ChargeInvoiceRows getSslInvoices(id)

Get SSL Cert Invoices

Returns the billing invoices associated with this SSL certificate.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.SslCertificatesApi;

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

SslCertificatesApi apiInstance = new SslCertificatesApi();
Integer id = 56; // Integer | SSL Cert ID number
try {
    ChargeInvoiceRows result = apiInstance.getSslInvoices(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling SslCertificatesApi#getSslInvoices");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| SSL Cert ID number |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getSslList"></a>
# **getSslList**
> getSslList()

List SSL Certs

Returns all SSL certificate services on the account with their current status.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.SslCertificatesApi;

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

SslCertificatesApi apiInstance = new SslCertificatesApi();
try {
    apiInstance.getSslList();
} catch (ApiException e) {
    System.err.println("Exception when calling SslCertificatesApi#getSslList");
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

<a name="getSslWelcomeEmail"></a>
# **getSslWelcomeEmail**
> SuccessTextResponse getSslWelcomeEmail(id)

Resend SSL Welcome Email

Resends the welcome email for the order.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.SslCertificatesApi;

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

SslCertificatesApi apiInstance = new SslCertificatesApi();
Integer id = 56; // Integer | SSL Cert ID number
try {
    SuccessTextResponse result = apiInstance.getSslWelcomeEmail(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling SslCertificatesApi#getSslWelcomeEmail");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| SSL Cert ID number |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="putSsl"></a>
# **putSsl**
> putSsl()

Validate SSL Cert Order

Validates an SSL certificate order before placing it.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.SslCertificatesApi;

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

SslCertificatesApi apiInstance = new SslCertificatesApi();
try {
    apiInstance.putSsl();
} catch (ApiException e) {
    System.err.println("Exception when calling SslCertificatesApi#putSsl");
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

<a name="sslCancel"></a>
# **sslCancel**
> InlineResponse20020 sslCancel(id)

Cancel SSL Certificate Service

Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.SslCertificatesApi;

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

SslCertificatesApi apiInstance = new SslCertificatesApi();
Integer id = 56; // Integer | SSL Cert ID number
try {
    InlineResponse20020 result = apiInstance.sslCancel(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling SslCertificatesApi#sslCancel");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| SSL Cert ID number |

### Return type

[**InlineResponse20020**](InlineResponse20020.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="updateSslInfo"></a>
# **updateSslInfo**
> updateSslInfo(id)

Update SSL Cert Order

Updates settings on an SSL certificate order.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.SslCertificatesApi;

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

SslCertificatesApi apiInstance = new SslCertificatesApi();
String id = "id_example"; // String | SSL certificate ID number.
try {
    apiInstance.updateSslInfo(id);
} catch (ApiException e) {
    System.err.println("Exception when calling SslCertificatesApi#updateSslInfo");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| SSL certificate ID number. |

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

