# SSLCertificatesApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddSsl**](SSLCertificatesApi.md#AddSsl) | **POST** /ssl/order | Place SSL Cert Order
[**GetNewSsl**](SSLCertificatesApi.md#GetNewSsl) | **GET** /ssl/order | SSL Cert Ordering Information
[**GetSslInfo**](SSLCertificatesApi.md#GetSslInfo) | **GET** /ssl/{id} | Get SSL Cert Info
[**GetSslInvoices**](SSLCertificatesApi.md#GetSslInvoices) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices
[**GetSslList**](SSLCertificatesApi.md#GetSslList) | **GET** /ssl | List SSL Certs
[**GetSslWelcomeEmail**](SSLCertificatesApi.md#GetSslWelcomeEmail) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email
[**PutSsl**](SSLCertificatesApi.md#PutSsl) | **PUT** /ssl/order | Validate SSL Cert Order
[**SslCancel**](SSLCertificatesApi.md#SslCancel) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service
[**UpdateSslInfo**](SSLCertificatesApi.md#UpdateSslInfo) | **POST** /ssl/{id} | Update SSL Cert Order


# **AddSsl**
> ServiceOrderPostResponse AddSsl()

Place SSL Cert Order

Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.

### Example
```R
library(openapi)

# Place SSL Cert Order
#

api_instance <- SSLCertificatesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$AddSsl(data_file = "result.txt")
result <- api_instance$AddSsl()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Order placed successfully. Use the invoice ID to proceed to payment via &#x60;/pay/{method}/{invoices}&#x60; or view the invoice at &#x60;/billing/invoices/{id}&#x60;. |  -  |
| **401** | Unauthorized |  -  |

# **GetNewSsl**
> object GetNewSsl()

SSL Cert Ordering Information

Retrieves available SSL certificate types and pricing for ordering.

### Example
```R
library(openapi)

# SSL Cert Ordering Information
#

api_instance <- SSLCertificatesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetNewSsl(data_file = "result.txt")
result <- api_instance$GetNewSsl()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

**object**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Available SSL certificate types and pricing for ordering. |  -  |
| **401** | Unauthorized |  -  |

# **GetSslInfo**
> object GetSslInfo(id)

Get SSL Cert Info

Returns detailed information about a specific SSL certificate including its domain and expiration.

### Example
```R
library(openapi)

# Get SSL Cert Info
#
# prepare function argument(s)
var_id <- 56 # integer | SSL certificate ID number.

api_instance <- SSLCertificatesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetSslInfo(var_iddata_file = "result.txt")
result <- api_instance$GetSslInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| SSL certificate ID number. | 

### Return type

**object**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Detailed SSL certificate information. |  -  |
| **401** | Unauthorized |  -  |

# **GetSslInvoices**
> ChargeInvoiceRows GetSslInvoices(id)

Get SSL Cert Invoices

Returns the billing invoices associated with this SSL certificate.

### Example
```R
library(openapi)

# Get SSL Cert Invoices
#
# prepare function argument(s)
var_id <- 56 # integer | SSL Cert ID number

api_instance <- SSLCertificatesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetSslInvoices(var_iddata_file = "result.txt")
result <- api_instance$GetSslInvoices(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| SSL Cert ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get Invoices response |  -  |
| **401** | Unauthorized |  -  |

# **GetSslList**
> GetSslList()

List SSL Certs

Returns all SSL certificate services on the account with their current status.

### Example
```R
library(openapi)

# List SSL Certs
#

api_instance <- SSLCertificatesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetSslList()
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;SSL&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **GetSslWelcomeEmail**
> SuccessTextResponse GetSslWelcomeEmail(id)

Resend SSL Welcome Email

Resends the welcome email for the order.

### Example
```R
library(openapi)

# Resend SSL Welcome Email
#
# prepare function argument(s)
var_id <- 56 # integer | SSL Cert ID number

api_instance <- SSLCertificatesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetSslWelcomeEmail(var_iddata_file = "result.txt")
result <- api_instance$GetSslWelcomeEmail(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| SSL Cert ID number | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **PutSsl**
> PutSsl()

Validate SSL Cert Order

Validates an SSL certificate order before placing it.

### Example
```R
library(openapi)

# Validate SSL Cert Order
#

api_instance <- SSLCertificatesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$PutSsl()
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Validate SSL Order response |  -  |
| **401** | Unauthorized |  -  |

# **SslCancel**
> SslCancel200Response SslCancel(id)

Cancel SSL Certificate Service

Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.

### Example
```R
library(openapi)

# Cancel SSL Certificate Service
#
# prepare function argument(s)
var_id <- 56 # integer | SSL Cert ID number

api_instance <- SSLCertificatesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$SslCancel(var_iddata_file = "result.txt")
result <- api_instance$SslCancel(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| SSL Cert ID number | 

### Return type

[**SslCancel200Response**](sslCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | SSL Cancel |  -  |
| **401** | Unauthorized |  -  |

# **UpdateSslInfo**
> SuccessTextResponse UpdateSslInfo(id)

Update SSL Cert Order

Updates settings on an SSL certificate order.

### Example
```R
library(openapi)

# Update SSL Cert Order
#
# prepare function argument(s)
var_id <- "id_example" # character | SSL certificate ID number.

api_instance <- SSLCertificatesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateSslInfo(var_iddata_file = "result.txt")
result <- api_instance$UpdateSslInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| SSL certificate ID number. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

