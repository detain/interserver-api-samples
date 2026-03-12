# WebhostingApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddWebsite**](WebhostingApi.md#AddWebsite) | **POST** /websites/order | Place Website Order
[**GetNewWebsite**](WebhostingApi.md#GetNewWebsite) | **GET** /websites/order | Website Ordering Information
[**GetWebsiteBuyIp**](WebhostingApi.md#GetWebsiteBuyIp) | **GET** /websites/{id}/buy_ip | Get Website IP Information
[**GetWebsiteInfo**](WebhostingApi.md#GetWebsiteInfo) | **GET** /websites/{id} | Get Website Order
[**GetWebsiteInvoices**](WebhostingApi.md#GetWebsiteInvoices) | **GET** /websites/{id}/invoices | Get Website Invoices
[**GetWebsiteList**](WebhostingApi.md#GetWebsiteList) | **GET** /websites | Get Website Listing
[**GetWebsitesBackups**](WebhostingApi.md#GetWebsitesBackups) | **GET** /websites/{id}/backups | Get Website Backups
[**GetWebsitesLogin**](WebhostingApi.md#GetWebsitesLogin) | **GET** /websites/{id}/login | Hosting Panel Auto Login
[**GetWebsitesWelcomeEmail**](WebhostingApi.md#GetWebsitesWelcomeEmail) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email
[**GettWebsiteReverseDns**](WebhostingApi.md#GettWebsiteReverseDns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS
[**PostWebsiteBuyIp**](WebhostingApi.md#PostWebsiteBuyIp) | **POST** /websites/{id}/buy_ip | Update Website IP DNS
[**PostWebsiteMigration**](WebhostingApi.md#PostWebsiteMigration) | **POST** /websites/{id}/migration | Request Website Migration
[**PostWebsitesReverseDns**](WebhostingApi.md#PostWebsitesReverseDns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS
[**PutWebsites**](WebhostingApi.md#PutWebsites) | **PUT** /websites/order | Validate Webhosting Order
[**UpdateWebsiteInfo**](WebhostingApi.md#UpdateWebsiteInfo) | **POST** /websites/{id} | Update Website Order
[**WebhostingCancel**](WebhostingApi.md#WebhostingCancel) | **DELETE** /websites/{id} | Cancel Website


# **AddWebsite**
> AddWebsite()

Place Website Order

Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.

### Example
```R
library(openapi)

# Place Website Order
#

api_instance <- WebhostingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$AddWebsite()
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

# **GetNewWebsite**
> WebsitesOrder GetNewWebsite()

Website Ordering Information

Retrieves available webhosting plans and pricing for ordering.

### Example
```R
library(openapi)

# Website Ordering Information
#

api_instance <- WebhostingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetNewWebsite(data_file = "result.txt")
result <- api_instance$GetNewWebsite()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**WebsitesOrder**](WebsitesOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Website ordering details including available plans and pricing. |  -  |
| **401** | Unauthorized |  -  |

# **GetWebsiteBuyIp**
> GetWebsiteBuyIp200Response GetWebsiteBuyIp(id)

Get Website IP Information

Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.

### Example
```R
library(openapi)

# Get Website IP Information
#
# prepare function argument(s)
var_id <- 56 # integer | The website service ID. Use `website_id` from `GET /websites`.

api_instance <- WebhostingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetWebsiteBuyIp(var_iddata_file = "result.txt")
result <- api_instance$GetWebsiteBuyIp(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**GetWebsiteBuyIp200Response**](getWebsiteBuyIp_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Current IP addresses and their reverse DNS hostnames for the website. |  -  |
| **401** | Unauthorized |  -  |

# **GetWebsiteInfo**
> Website GetWebsiteInfo(id)

Get Website Order

Returns detailed information about a specific webhosting order including its domain, plan, and status.

### Example
```R
library(openapi)

# Get Website Order
#
# prepare function argument(s)
var_id <- 56 # integer | The website service ID. Use `website_id` from `GET /websites`.

api_instance <- WebhostingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetWebsiteInfo(var_iddata_file = "result.txt")
result <- api_instance$GetWebsiteInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**Website**](Website.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Website details |  -  |
| **401** | Unauthorized |  -  |

# **GetWebsiteInvoices**
> ChargeInvoiceRows GetWebsiteInvoices(id)

Get Website Invoices

Returns the billing invoices associated with this webhosting service.

### Example
```R
library(openapi)

# Get Website Invoices
#
# prepare function argument(s)
var_id <- 56 # integer | The website service ID. Use `website_id` from `GET /websites`.

api_instance <- WebhostingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetWebsiteInvoices(var_iddata_file = "result.txt")
result <- api_instance$GetWebsiteInvoices(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

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

# **GetWebsiteList**
> array[WebsiteRow] GetWebsiteList()

Get Website Listing

Gets a listing of your webhosting orders and service details.

### Example
```R
library(openapi)

# Get Website Listing
#

api_instance <- WebhostingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetWebsiteList(data_file = "result.txt")
result <- api_instance$GetWebsiteList()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**array[WebsiteRow]**](WebsiteRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, multipart/form-data

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Websites&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |

# **GetWebsitesBackups**
> WebsiteBackups GetWebsitesBackups(id)

Get Website Backups

Gets a list of the backups that exist for a website and their sizes.

### Example
```R
library(openapi)

# Get Website Backups
#
# prepare function argument(s)
var_id <- 56 # integer | The website service ID. Use `website_id` from `GET /websites`.

api_instance <- WebhostingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetWebsitesBackups(var_iddata_file = "result.txt")
result <- api_instance$GetWebsitesBackups(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**WebsiteBackups**](WebsiteBackups.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get Website Backups response |  -  |
| **401** | Unauthorized |  -  |

# **GetWebsitesLogin**
> WebsiteLoginResponse GetWebsitesLogin(id)

Hosting Panel Auto Login

Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.

### Example
```R
library(openapi)

# Hosting Panel Auto Login
#
# prepare function argument(s)
var_id <- 56 # integer | The website service ID. Use `website_id` from `GET /websites`.

api_instance <- WebhostingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetWebsitesLogin(var_iddata_file = "result.txt")
result <- api_instance$GetWebsitesLogin(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**WebsiteLoginResponse**](WebsiteLoginResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get Website Login response |  -  |
| **401** | Unauthorized |  -  |

# **GetWebsitesWelcomeEmail**
> SuccessTextResponse GetWebsitesWelcomeEmail(id)

Resend Website Welcome Email

Resends the welcome email containing hosting credentials and panel access details for the webhosting order.

### Example
```R
library(openapi)

# Resend Website Welcome Email
#
# prepare function argument(s)
var_id <- 56 # integer | The website service ID. Use `website_id` from `GET /websites`.

api_instance <- WebhostingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetWebsitesWelcomeEmail(var_iddata_file = "result.txt")
result <- api_instance$GetWebsitesWelcomeEmail(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

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

# **GettWebsiteReverseDns**
> ReverseDnsEntries GettWebsiteReverseDns(id)

Get Website Reverse DNS

Returns the current reverse DNS (PTR record) entries for the website's IP addresses.

### Example
```R
library(openapi)

# Get Website Reverse DNS
#
# prepare function argument(s)
var_id <- 56 # integer | The website service ID. Use `website_id` from `GET /websites`.

api_instance <- WebhostingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GettWebsiteReverseDns(var_iddata_file = "result.txt")
result <- api_instance$GettWebsiteReverseDns(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | List of reverse dns entries |  -  |
| **401** | Unauthorized |  -  |

# **PostWebsiteBuyIp**
> PostWebsiteBuyIp200Response PostWebsiteBuyIp(id, post_website_buy_ip_request)

Update Website IP DNS

Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.

### Example
```R
library(openapi)

# Update Website IP DNS
#
# prepare function argument(s)
var_id <- 56 # integer | The website service ID. Use `website_id` from `GET /websites`.
var_post_website_buy_ip_request <- postWebsiteBuyIp_request$new(c(key = "inner_example")) # PostWebsiteBuyIpRequest | 

api_instance <- WebhostingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostWebsiteBuyIp(var_id, var_post_website_buy_ip_requestdata_file = "result.txt")
result <- api_instance$PostWebsiteBuyIp(var_id, var_post_website_buy_ip_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 
 **post_website_buy_ip_request** | [**PostWebsiteBuyIpRequest**](PostWebsiteBuyIpRequest.md)|  | 

### Return type

[**PostWebsiteBuyIp200Response**](postWebsiteBuyIp_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | DNS update result. |  -  |
| **401** | Unauthorized |  -  |

# **PostWebsiteMigration**
> PostWebsiteMigration200Response PostWebsiteMigration(id, post_website_migration_request)

Request Website Migration

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.

### Example
```R
library(openapi)

# Request Website Migration
#
# prepare function argument(s)
var_id <- 56 # integer | The website service ID. Use `website_id` from `GET /websites`.
var_post_website_migration_request <- postWebsiteMigration_request$new("custPortal_example", "regEmail_example", "password_example", "ctrlPanel_example", "ftpUsername_example", "ftpPassword_example", "siteBusyMig_example", "splReqMig_example", "domainReg_example", "dataMig_example", "domainRegPortal_example", "domainRegEmail_example", "domainRegPassword_example") # PostWebsiteMigrationRequest | 

api_instance <- WebhostingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostWebsiteMigration(var_id, var_post_website_migration_requestdata_file = "result.txt")
result <- api_instance$PostWebsiteMigration(var_id, var_post_website_migration_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 
 **post_website_migration_request** | [**PostWebsiteMigrationRequest**](PostWebsiteMigrationRequest.md)|  | 

### Return type

[**PostWebsiteMigration200Response**](postWebsiteMigration_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Migration request submitted. |  -  |
| **401** | Unauthorized |  -  |

# **PostWebsitesReverseDns**
> TextResponse PostWebsitesReverseDns(id, reverse_dns_entries)

Update Website Reverse DNS

Updates the reverse DNS entries for each of the IP addresses for the website.

### Example
```R
library(openapi)

# Update Website Reverse DNS
#
# prepare function argument(s)
var_id <- 56 # integer | The website service ID. Use `website_id` from `GET /websites`.
var_reverse_dns_entries <- ReverseDnsEntries$new(c(key = TODO)) # ReverseDnsEntries | 

api_instance <- WebhostingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostWebsitesReverseDns(var_id, var_reverse_dns_entriesdata_file = "result.txt")
result <- api_instance$PostWebsitesReverseDns(var_id, var_reverse_dns_entries)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 
 **reverse_dns_entries** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response from the update reverse DNS call. |  -  |
| **401** | Unauthorized |  -  |

# **PutWebsites**
> PutWebsites()

Validate Webhosting Order

Validates a webhosting order before placing it.

### Example
```R
library(openapi)

# Validate Webhosting Order
#

api_instance <- WebhostingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$PutWebsites()
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
| **200** | Validate Website order response |  -  |
| **401** | Unauthorized |  -  |

# **UpdateWebsiteInfo**
> UpdateWebsiteInfo(id)

Update Website Order

Updates settings on a webhosting order.

### Example
```R
library(openapi)

# Update Website Order
#
# prepare function argument(s)
var_id <- "id_example" # character | The website service ID. Use `website_id` from `GET /websites`.

api_instance <- WebhostingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$UpdateWebsiteInfo(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

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

# **WebhostingCancel**
> WebhostingCancel200Response WebhostingCancel(id)

Cancel Website

Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.

### Example
```R
library(openapi)

# Cancel Website
#
# prepare function argument(s)
var_id <- "123" # character | The website service ID. Use `website_id` from `GET /websites`.

api_instance <- WebhostingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$WebhostingCancel(var_iddata_file = "result.txt")
result <- api_instance$WebhostingCancel(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**WebhostingCancel200Response**](webhostingCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Website cancel |  -  |
| **401** | Unauthorized |  -  |

