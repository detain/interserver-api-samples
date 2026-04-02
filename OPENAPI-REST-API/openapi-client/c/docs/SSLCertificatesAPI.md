# SSLCertificatesAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SSLCertificatesAPI_addSsl**](SSLCertificatesAPI.md#SSLCertificatesAPI_addSsl) | **POST** /ssl/order | Place SSL Cert Order
[**SSLCertificatesAPI_getNewSsl**](SSLCertificatesAPI.md#SSLCertificatesAPI_getNewSsl) | **GET** /ssl/order | SSL Cert Ordering Information
[**SSLCertificatesAPI_getSslInfo**](SSLCertificatesAPI.md#SSLCertificatesAPI_getSslInfo) | **GET** /ssl/{id} | Get SSL Cert Info
[**SSLCertificatesAPI_getSslInvoices**](SSLCertificatesAPI.md#SSLCertificatesAPI_getSslInvoices) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices
[**SSLCertificatesAPI_getSslList**](SSLCertificatesAPI.md#SSLCertificatesAPI_getSslList) | **GET** /ssl | List SSL Certs
[**SSLCertificatesAPI_getSslWelcomeEmail**](SSLCertificatesAPI.md#SSLCertificatesAPI_getSslWelcomeEmail) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email
[**SSLCertificatesAPI_putSsl**](SSLCertificatesAPI.md#SSLCertificatesAPI_putSsl) | **PUT** /ssl/order | Validate SSL Cert Order
[**SSLCertificatesAPI_sslCancel**](SSLCertificatesAPI.md#SSLCertificatesAPI_sslCancel) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service
[**SSLCertificatesAPI_updateSslInfo**](SSLCertificatesAPI.md#SSLCertificatesAPI_updateSslInfo) | **POST** /ssl/{id} | Update SSL Cert Order


# **SSLCertificatesAPI_addSsl**
```c
// Place SSL Cert Order
//
// Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.
//
service_order_post_response_t* SSLCertificatesAPI_addSsl(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[service_order_post_response_t](service_order_post_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SSLCertificatesAPI_getNewSsl**
```c
// SSL Cert Ordering Information
//
// Retrieves available SSL certificate types and pricing for ordering.
//
object_t* SSLCertificatesAPI_getNewSsl(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[object_t](object.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SSLCertificatesAPI_getSslInfo**
```c
// Get SSL Cert Info
//
// Returns detailed information about a specific SSL certificate including its domain and expiration.
//
object_t* SSLCertificatesAPI_getSslInfo(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | SSL certificate ID number. | 

### Return type

[object_t](object.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SSLCertificatesAPI_getSslInvoices**
```c
// Get SSL Cert Invoices
//
// Returns the billing invoices associated with this SSL certificate.
//
charge_invoice_rows_t* SSLCertificatesAPI_getSslInvoices(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | SSL Cert ID number | 

### Return type

[charge_invoice_rows_t](charge_invoice_rows.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SSLCertificatesAPI_getSslList**
```c
// List SSL Certs
//
// Returns all SSL certificate services on the account with their current status.
//
void SSLCertificatesAPI_getSslList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SSLCertificatesAPI_getSslWelcomeEmail**
```c
// Resend SSL Welcome Email
//
// Resends the welcome email for the order.
//
success_text_response_t* SSLCertificatesAPI_getSslWelcomeEmail(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | SSL Cert ID number | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SSLCertificatesAPI_putSsl**
```c
// Validate SSL Cert Order
//
// Validates an SSL certificate order before placing it.
//
void SSLCertificatesAPI_putSsl(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SSLCertificatesAPI_sslCancel**
```c
// Cancel SSL Certificate Service
//
// Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
//
ssl_cancel_200_response_t* SSLCertificatesAPI_sslCancel(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | SSL Cert ID number | 

### Return type

[ssl_cancel_200_response_t](ssl_cancel_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SSLCertificatesAPI_updateSslInfo**
```c
// Update SSL Cert Order
//
// Updates settings on an SSL certificate order.
//
success_text_response_t* SSLCertificatesAPI_updateSslInfo(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | SSL certificate ID number. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

