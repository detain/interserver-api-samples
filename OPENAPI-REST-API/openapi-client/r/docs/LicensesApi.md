# LicensesApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddLicense**](LicensesApi.md#AddLicense) | **POST** /licenses/order | Place License Order
[**GetLicenseInfo**](LicensesApi.md#GetLicenseInfo) | **GET** /licenses/{id} | Get License
[**GetLicenseInvoices**](LicensesApi.md#GetLicenseInvoices) | **GET** /licenses/{id}/invoices | Get License Invoices
[**GetLicenseList**](LicensesApi.md#GetLicenseList) | **GET** /licenses | List Licenses
[**GetLicenseOrderCatTagInfo**](LicensesApi.md#GetLicenseOrderCatTagInfo) | **GET** /licenses/order/{catTag} | Get License Order Information for Category
[**GetLicensesWelcomeEmail**](LicensesApi.md#GetLicensesWelcomeEmail) | **GET** /licenses/{id}/welcome_email | Resend License Welcome Email
[**GetNewLicense**](LicensesApi.md#GetNewLicense) | **GET** /licenses/order | Get License Order Information
[**LicensesCancel**](LicensesApi.md#LicensesCancel) | **DELETE** /licenses/{id} | Cancel License
[**PostLicenseChangeIp**](LicensesApi.md#PostLicenseChangeIp) | **POST** /licenses/{id}/change_ip | Change License IP
[**PutLicenses**](LicensesApi.md#PutLicenses) | **PUT** /licenses/order | Validate License Order
[**UpdateLicenseInfo**](LicensesApi.md#UpdateLicenseInfo) | **POST** /licenses/{id} | Update License


# **AddLicense**
> AddLicense()

Place License Order

Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.

### Example
```R
library(openapi)

# Place License Order
#

api_instance <- LicensesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$AddLicense()
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

# **GetLicenseInfo**
> License GetLicenseInfo(id)

Get License

Returns detailed information about a specific license including its type, IP assignment, and status.

### Example
```R
library(openapi)

# Get License
#
# prepare function argument(s)
var_id <- 56 # integer | The license service ID. Use `license_id` from `GET /licenses`.

api_instance <- LicensesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetLicenseInfo(var_iddata_file = "result.txt")
result <- api_instance$GetLicenseInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | 

### Return type

[**License**](License.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | License information. |  -  |
| **401** | Unauthorized |  -  |

# **GetLicenseInvoices**
> ChargeInvoiceRows GetLicenseInvoices(id)

Get License Invoices

Returns the billing invoices associated with this license service.

### Example
```R
library(openapi)

# Get License Invoices
#
# prepare function argument(s)
var_id <- 56 # integer | The license service ID. Use `license_id` from `GET /licenses`.

api_instance <- LicensesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetLicenseInvoices(var_iddata_file = "result.txt")
result <- api_instance$GetLicenseInvoices(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | 

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

# **GetLicenseList**
> array[LicenseRow] GetLicenseList()

List Licenses

Returns all software license services on the account with their current status and IP assignments.

### Example
```R
library(openapi)

# List Licenses
#

api_instance <- LicensesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetLicenseList(data_file = "result.txt")
result <- api_instance$GetLicenseList()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**array[LicenseRow]**](LicenseRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Licenses&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |

# **GetLicenseOrderCatTagInfo**
> GetLicenseOrderCatTagInfo(cat_tag)

Get License Order Information for Category

Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.

### Example
```R
library(openapi)

# Get License Order Information for Category
#
# prepare function argument(s)
var_cat_tag <- "cat_tag_example" # character | The license category tag (e.g. `cpanel`, `plesk`). Obtain valid values from the `GET /licenses/order` response.

api_instance <- LicensesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetLicenseOrderCatTagInfo(var_cat_tag)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cat_tag** | **character**| The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response. | 

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
| **200** | License types and pricing for the specified category. |  -  |
| **401** | Unauthorized |  -  |

# **GetLicensesWelcomeEmail**
> SuccessTextResponse GetLicensesWelcomeEmail(id)

Resend License Welcome Email

Resends the welcome email for the license service. The email contains the license key and activation instructions.

### Example
```R
library(openapi)

# Resend License Welcome Email
#
# prepare function argument(s)
var_id <- 56 # integer | The license service ID. Use `license_id` from `GET /licenses`.

api_instance <- LicensesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetLicensesWelcomeEmail(var_iddata_file = "result.txt")
result <- api_instance$GetLicensesWelcomeEmail(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | 

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

# **GetNewLicense**
> LicensesOrder GetNewLicense()

Get License Order Information

Retrieves available license types, categories, and pricing for ordering a new license.

### Example
```R
library(openapi)

# Get License Order Information
#

api_instance <- LicensesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetNewLicense(data_file = "result.txt")
result <- api_instance$GetNewLicense()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**LicensesOrder**](LicensesOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | License ordering information. |  -  |
| **401** | Unauthorized |  -  |

# **LicensesCancel**
> LicensesCancel200Response LicensesCancel(id)

Cancel License

Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Example
```R
library(openapi)

# Cancel License
#
# prepare function argument(s)
var_id <- 56 # integer | The license service ID. Use `license_id` from `GET /licenses`.

api_instance <- LicensesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$LicensesCancel(var_iddata_file = "result.txt")
result <- api_instance$LicensesCancel(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | 

### Return type

[**LicensesCancel200Response**](licensesCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | License Cancel |  -  |
| **401** | Unauthorized |  -  |

# **PostLicenseChangeIp**
> SuccessTextResponse PostLicenseChangeIp(id, ip_object)

Change License IP

Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.

### Example
```R
library(openapi)

# Change License IP
#
# prepare function argument(s)
var_id <- 56 # integer | The license service ID. Use `license_id` from `GET /licenses`.
var_ip_object <- IpObject$new("ip_example") # IpObject | 

api_instance <- LicensesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostLicenseChangeIp(var_id, var_ip_objectdata_file = "result.txt")
result <- api_instance$PostLicenseChangeIp(var_id, var_ip_object)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | 
 **ip_object** | [**IpObject**](IpObject.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **PutLicenses**
> PutLicenses()

Validate License Order

Validates a license order before placing it. Use this to check for errors before committing to a purchase.

### Example
```R
library(openapi)

# Validate License Order
#

api_instance <- LicensesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$PutLicenses()
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
| **200** | Validate Licenses order response |  -  |
| **401** | Unauthorized |  -  |

# **UpdateLicenseInfo**
> UpdateLicenseInfo(id)

Update License

Updates settings on a license service such as its assigned IP.

### Example
```R
library(openapi)

# Update License
#
# prepare function argument(s)
var_id <- "id_example" # character | The license service ID. Use `license_id` from `GET /licenses`.

api_instance <- LicensesApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$UpdateLicenseInfo(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | 

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

