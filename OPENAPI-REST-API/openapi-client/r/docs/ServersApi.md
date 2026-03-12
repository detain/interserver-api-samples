# ServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddServer**](ServersApi.md#AddServer) | **POST** /servers/order | Place Server Order
[**BuyItNowServerOrder**](ServersApi.md#BuyItNowServerOrder) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options
[**GetMPServers**](ServersApi.md#GetMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers
[**GetNewServer**](ServersApi.md#GetNewServer) | **GET** /servers/order | Server Ordering Information
[**GetServerInfo**](ServersApi.md#GetServerInfo) | **GET** /servers/{id} | Get Server Order
[**GetServerInvoices**](ServersApi.md#GetServerInvoices) | **GET** /servers/{id}/invoices | Get Server Invoices
[**GetServerList**](ServersApi.md#GetServerList) | **GET** /servers | List Servers
[**GetServerReverseDns**](ServersApi.md#GetServerReverseDns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info
[**GetServersWelcomeEmail**](ServersApi.md#GetServersWelcomeEmail) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email
[**PlaceBuyNowServer**](ServersApi.md#PlaceBuyNowServer) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order
[**PostServerReverseDns**](ServersApi.md#PostServerReverseDns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS
[**PutServers**](ServersApi.md#PutServers) | **PUT** /servers/order | Validate Server Order
[**ServerIpmiLiveGet**](ServersApi.md#ServerIpmiLiveGet) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information
[**ServerIpmiLivePost**](ServersApi.md#ServerIpmiLivePost) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup
[**ServerIpmiPowerGet**](ServersApi.md#ServerIpmiPowerGet) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status
[**ServerIpmiPowerPost**](ServersApi.md#ServerIpmiPowerPost) | **POST** /servers/{id}/ipmi_power | Server IPMI Power
[**ServersCancel**](ServersApi.md#ServersCancel) | **DELETE** /servers/{id} | Cancel Server Service
[**UpdateServerInfo**](ServersApi.md#UpdateServerInfo) | **POST** /servers/{id} | Update Server Order


# **AddServer**
> AddServer()

Place Server Order

Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.

### Example
```R
library(openapi)

# Place Server Order
#

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$AddServer()
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

# **BuyItNowServerOrder**
> BuyItNowServerOrder200Response BuyItNowServerOrder()

Get Buy Now Server Options

Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.

### Example
```R
library(openapi)

# Get Buy Now Server Options
#

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$BuyItNowServerOrder(data_file = "result.txt")
result <- api_instance$BuyItNowServerOrder()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BuyItNowServerOrder200Response**](buyItNowServerOrder_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Available server configurations with pricing and hardware options. |  -  |
| **401** | Unauthorized |  -  |

# **GetMPServers**
> BuyItNowList GetMPServers()

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example
```R
library(openapi)

# List Marketplace Servers
#

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetMPServers(data_file = "result.txt")
result <- api_instance$GetMPServers()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BuyItNowList**](BuyItNowList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Marketplace Buy it now servers list |  -  |
| **401** | Unauthorized |  -  |

# **GetNewServer**
> ServerOrder GetNewServer()

Server Ordering Information

Retrieves available server configurations and pricing for ordering a new dedicated server.

### Example
```R
library(openapi)

# Server Ordering Information
#

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetNewServer(data_file = "result.txt")
result <- api_instance$GetNewServer()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServerOrder**](ServerOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Server Ordering details |  -  |
| **401** | Unauthorized |  -  |

# **GetServerInfo**
> Server GetServerInfo(id)

Get Server Order

Returns detailed information about a specific server including its hardware configuration, IPs, and status.

### Example
```R
library(openapi)

# Get Server Order
#
# prepare function argument(s)
var_id <- 56 # integer | Server ID number.

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetServerInfo(var_iddata_file = "result.txt")
result <- api_instance$GetServerInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| Server ID number. | 

### Return type

[**Server**](Server.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Server details |  -  |
| **401** | Unauthorized |  -  |

# **GetServerInvoices**
> ChargeInvoiceRows GetServerInvoices(id)

Get Server Invoices

Returns the billing invoices associated with this dedicated server.

### Example
```R
library(openapi)

# Get Server Invoices
#
# prepare function argument(s)
var_id <- 56 # integer | Server ID number

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetServerInvoices(var_iddata_file = "result.txt")
result <- api_instance$GetServerInvoices(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| Server ID number | 

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

# **GetServerList**
> array[ServerRow] GetServerList()

List Servers

Returns all dedicated server services on the account with their current status and configuration.

### Example
```R
library(openapi)

# List Servers
#

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetServerList(data_file = "result.txt")
result <- api_instance$GetServerList()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**array[ServerRow]**](ServerRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Servers&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |

# **GetServerReverseDns**
> ReverseDnsEntries GetServerReverseDns(id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the server's IP addresses.

### Example
```R
library(openapi)

# Reverse DNS Info
#
# prepare function argument(s)
var_id <- 56 # integer | Server ID number

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetServerReverseDns(var_iddata_file = "result.txt")
result <- api_instance$GetServerReverseDns(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| Server ID number | 

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
| **200** | Servers Reverse DNS info response |  -  |
| **401** | Unauthorized |  -  |

# **GetServersWelcomeEmail**
> SuccessTextResponse GetServersWelcomeEmail(id)

Resend Server Welcome Email

Resends the welcome email for the order.

### Example
```R
library(openapi)

# Resend Server Welcome Email
#
# prepare function argument(s)
var_id <- 56 # integer | Server ID number

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetServersWelcomeEmail(var_iddata_file = "result.txt")
result <- api_instance$GetServersWelcomeEmail(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| Server ID number | 

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

# **PlaceBuyNowServer**
> ServersBuyNowResponse PlaceBuyNowServer(place_buy_now_server_request = var.place_buy_now_server_request)

Place Buy Now Server Order

Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.

### Example
```R
library(openapi)

# Place Buy Now Server Order
#
# prepare function argument(s)
var_place_buy_now_server_request <- placeBuyNowServer_request$new(123, "server_hostname_example", "server_root_password_example") # PlaceBuyNowServerRequest |  (Optional)

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PlaceBuyNowServer(place_buy_now_server_request = var_place_buy_now_server_requestdata_file = "result.txt")
result <- api_instance$PlaceBuyNowServer(place_buy_now_server_request = var_place_buy_now_server_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **place_buy_now_server_request** | [**PlaceBuyNowServerRequest**](PlaceBuyNowServerRequest.md)|  | [optional] 

### Return type

[**ServersBuyNowResponse**](ServersBuyNowResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Order placed successfully. |  -  |
| **400** | Order validation failed. |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **PostServerReverseDns**
> TextResponse PostServerReverseDns(id, reverse_dns_entries)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the server's IP addresses.

### Example
```R
library(openapi)

# Update Reverse DNS
#
# prepare function argument(s)
var_id <- 56 # integer | Server ID number
var_reverse_dns_entries <- ReverseDnsEntries$new(c(key = TODO)) # ReverseDnsEntries | 

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostServerReverseDns(var_id, var_reverse_dns_entriesdata_file = "result.txt")
result <- api_instance$PostServerReverseDns(var_id, var_reverse_dns_entries)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| Server ID number | 
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
| **200** | Update Server Reverse DNS response |  -  |
| **401** | Unauthorized |  -  |

# **PutServers**
> PutServers()

Validate Server Order

Validates a server order before placing it. Use this to check for errors before committing to a purchase.

### Example
```R
library(openapi)

# Validate Server Order
#

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$PutServers()
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
| **200** | Validate Server order response |  -  |
| **401** | Unauthorized |  -  |

# **ServerIpmiLiveGet**
> ServerIpmiLiveInfo ServerIpmiLiveGet(id)

Server IPMI Live Information

Returns the current IPMI live connection information for the server.

### Example
```R
library(openapi)

# Server IPMI Live Information
#
# prepare function argument(s)
var_id <- 56 # integer | Server ID number

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$ServerIpmiLiveGet(var_iddata_file = "result.txt")
result <- api_instance$ServerIpmiLiveGet(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| Server ID number | 

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response from the Servers IPMI Live information request. |  -  |
| **404** | The specified resource was not found |  -  |

# **ServerIpmiLivePost**
> ServerIpmiLiveInfo ServerIpmiLivePost(id, ip, asset = var.asset)

Server IPMI Live Setup

Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.

### Example
```R
library(openapi)

# Server IPMI Live Setup
#
# prepare function argument(s)
var_id <- 56 # integer | Server ID number
var_ip <- "ip_example" # character | Your IP Address you wish to connect to the IPMI system from.
var_asset <- 56 # integer | Asset ID (Optional)

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$ServerIpmiLivePost(var_id, var_ip, asset = var_assetdata_file = "result.txt")
result <- api_instance$ServerIpmiLivePost(var_id, var_ip, asset = var_asset)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| Server ID number | 
 **ip** | **character**| Your IP Address you wish to connect to the IPMI system from. | 
 **asset** | **integer**| Asset ID | [optional] 

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response from the Servers IPMI Live information request. |  -  |
| **404** | The specified resource was not found |  -  |

# **ServerIpmiPowerGet**
> TextResponse ServerIpmiPowerGet(id)

Get IPMI Power Status

Returns the chassis power status from ipmi.

### Example
```R
library(openapi)

# Get IPMI Power Status
#
# prepare function argument(s)
var_id <- 56 # integer | Server ID number

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$ServerIpmiPowerGet(var_iddata_file = "result.txt")
result <- api_instance$ServerIpmiPowerGet(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| Server ID number | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

# **ServerIpmiPowerPost**
> TextResponse ServerIpmiPowerPost(id, action, asset = var.asset)

Server IPMI Power

Uses the IPMI interface to set the Power status on the server.

### Example
```R
library(openapi)

# Server IPMI Power
#
# prepare function argument(s)
var_id <- 56 # integer | Server ID number
var_action <- "action_example" # character | The power action to send to the ipmi controller.
var_asset <- 56 # integer | The Asset ID (Optional)

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$ServerIpmiPowerPost(var_id, var_action, asset = var_assetdata_file = "result.txt")
result <- api_instance$ServerIpmiPowerPost(var_id, var_action, asset = var_asset)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| Server ID number | 
 **action** | Enum [cycle, reset, on, off, soft] | The power action to send to the ipmi controller. | 
 **asset** | **integer**| The Asset ID | [optional] 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **400** | The specified resource was not found |  -  |

# **ServersCancel**
> ServersCancel200Response ServersCancel(id)

Cancel Server Service

Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```R
library(openapi)

# Cancel Server Service
#
# prepare function argument(s)
var_id <- 56 # integer | Server ID number

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$ServersCancel(var_iddata_file = "result.txt")
result <- api_instance$ServersCancel(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| Server ID number | 

### Return type

[**ServersCancel200Response**](serversCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Servers Cancel |  -  |
| **401** | Unauthorized |  -  |

# **UpdateServerInfo**
> UpdateServerInfo(id)

Update Server Order

Updates settings on a dedicated server order.

### Example
```R
library(openapi)

# Update Server Order
#
# prepare function argument(s)
var_id <- "id_example" # character | Server ID number.

api_instance <- ServersApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$UpdateServerInfo(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| Server ID number. | 

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

