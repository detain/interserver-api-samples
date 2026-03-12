# FloatingIPsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddFloatingIp**](FloatingIPsApi.md#AddFloatingIp) | **POST** /floating_ips/order | Place Floating IP Order
[**FloatingIpsCancel**](FloatingIPsApi.md#FloatingIpsCancel) | **DELETE** /floating_ips/{id} | Cancel Floating IP
[**GetFloatingIpInfo**](FloatingIPsApi.md#GetFloatingIpInfo) | **GET** /floating_ips/{id} | View Floating IP
[**GetFloatingIpInvoices**](FloatingIPsApi.md#GetFloatingIpInvoices) | **GET** /floating_ips/{id}/invoices | Get Floating IP Invoices
[**GetFloatingIpsList**](FloatingIPsApi.md#GetFloatingIpsList) | **GET** /floating_ips | List Floating IPs
[**GetFloatingIpsWelcomeEmail**](FloatingIPsApi.md#GetFloatingIpsWelcomeEmail) | **GET** /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email
[**GetNewFloatingIp**](FloatingIPsApi.md#GetNewFloatingIp) | **GET** /floating_ips/order | Get Floating IP Ordering Information
[**PostFloatingIpsChangeIp**](FloatingIPsApi.md#PostFloatingIpsChangeIp) | **POST** /floating_ips/{id}/change_ip | Change Floating IP Target
[**PutFloatingIps**](FloatingIPsApi.md#PutFloatingIps) | **PUT** /floating_ips/order | Validate Floating IP Order
[**UpdateFloatingIpInfo**](FloatingIPsApi.md#UpdateFloatingIpInfo) | **POST** /floating_ips/{id} | Update Floating IP


# **AddFloatingIp**
> AddFloatingIp()

Place Floating IP Order

Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.

### Example
```R
library(openapi)

# Place Floating IP Order
#

api_instance <- FloatingIPsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$AddFloatingIp()
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
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **FloatingIpsCancel**
> FloatingIpsCancel200Response FloatingIpsCancel(id)

Cancel Floating IP

Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.

### Example
```R
library(openapi)

# Cancel Floating IP
#
# prepare function argument(s)
var_id <- 56 # integer | The Floating IP service ID. Use the ID from `GET /floating_ips`.

api_instance <- FloatingIPsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$FloatingIpsCancel(var_iddata_file = "result.txt")
result <- api_instance$FloatingIpsCancel(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

[**FloatingIpsCancel200Response**](floating_ipsCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Floating Ip Cancel |  -  |
| **401** | Unauthorized |  -  |

# **GetFloatingIpInfo**
> GetFloatingIpInfo(id)

View Floating IP

Returns detailed information about a specific Floating IP service including its current target IP assignment.

### Example
```R
library(openapi)

# View Floating IP
#
# prepare function argument(s)
var_id <- 56 # integer | The Floating IP service ID. Use the ID from `GET /floating_ips`.

api_instance <- FloatingIPsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetFloatingIpInfo(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

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
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **GetFloatingIpInvoices**
> ChargeInvoiceRows GetFloatingIpInvoices(id)

Get Floating IP Invoices

Returns the billing invoices associated with this Floating IP service.

### Example
```R
library(openapi)

# Get Floating IP Invoices
#
# prepare function argument(s)
var_id <- 56 # integer | The Floating IP service ID. Use the ID from `GET /floating_ips`.

api_instance <- FloatingIPsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetFloatingIpInvoices(var_iddata_file = "result.txt")
result <- api_instance$GetFloatingIpInvoices(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

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

# **GetFloatingIpsList**
> GetFloatingIpsList()

List Floating IPs

Returns all Floating IP services on the account with their current status and assignment details.

### Example
```R
library(openapi)

# List Floating IPs
#

api_instance <- FloatingIPsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetFloatingIpsList()
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
| **200** | The listing of &#x60;Floating IPs&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **GetFloatingIpsWelcomeEmail**
> SuccessTextResponse GetFloatingIpsWelcomeEmail(id)

Resend Floating IPs Welcome Email

Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.

### Example
```R
library(openapi)

# Resend Floating IPs Welcome Email
#
# prepare function argument(s)
var_id <- 56 # integer | The Floating IP service ID. Use the ID from `GET /floating_ips`.

api_instance <- FloatingIPsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetFloatingIpsWelcomeEmail(var_iddata_file = "result.txt")
result <- api_instance$GetFloatingIpsWelcomeEmail(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

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

# **GetNewFloatingIp**
> GetNewFloatingIp()

Get Floating IP Ordering Information

Retrieves available options and pricing for ordering a new Floating IP.

### Example
```R
library(openapi)

# Get Floating IP Ordering Information
#

api_instance <- FloatingIPsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetNewFloatingIp()
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
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **PostFloatingIpsChangeIp**
> SuccessTextResponse PostFloatingIpsChangeIp(id, ip)

Change Floating IP Target

Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.

### Example
```R
library(openapi)

# Change Floating IP Target
#
# prepare function argument(s)
var_id <- 56 # integer | The Floating IP service ID. Use the ID from `GET /floating_ips`.
var_ip <- "ip_example" # character | IP Address

api_instance <- FloatingIPsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostFloatingIpsChangeIp(var_id, var_ipdata_file = "result.txt")
result <- api_instance$PostFloatingIpsChangeIp(var_id, var_ip)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 
 **ip** | **character**| IP Address | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **PutFloatingIps**
> PutFloatingIps()

Validate Floating IP Order

Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.

### Example
```R
library(openapi)

# Validate Floating IP Order
#

api_instance <- FloatingIPsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$PutFloatingIps()
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
| **200** | Validate Floating IPs order response |  -  |
| **401** | Unauthorized |  -  |

# **UpdateFloatingIpInfo**
> UpdateFloatingIpInfo(id)

Update Floating IP

Updates settings on a Floating IP service, such as its label or configuration metadata.

### Example
```R
library(openapi)

# Update Floating IP
#
# prepare function argument(s)
var_id <- "id_example" # character | The Floating IP service ID. Use the ID from `GET /floating_ips`.

api_instance <- FloatingIPsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$UpdateFloatingIpInfo(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

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
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

