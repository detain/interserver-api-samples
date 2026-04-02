# TicketsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddNewTicket**](TicketsApi.md#AddNewTicket) | **POST** /tickets/new | Create New Ticket
[**CloseTicket**](TicketsApi.md#CloseTicket) | **GET** /tickets/{id}/close | Close Ticket
[**DeleteTicketInfo**](TicketsApi.md#DeleteTicketInfo) | **DELETE** /tickets/{id} | Close Ticket
[**GetNewTicket**](TicketsApi.md#GetNewTicket) | **GET** /tickets/new | Gets Information for creating a new ticket.
[**GetTicketInfo**](TicketsApi.md#GetTicketInfo) | **GET** /tickets/{id} | Get Ticket Information
[**GetTicketsList**](TicketsApi.md#GetTicketsList) | **GET** /tickets | List Support Tickets
[**PostTicketInfo**](TicketsApi.md#PostTicketInfo) | **POST** /tickets/{id} | Reply To Ticket
[**PostTicketsList**](TicketsApi.md#PostTicketsList) | **POST** /tickets | Search Support Tickets
[**PutTicketInfo**](TicketsApi.md#PutTicketInfo) | **PUT** /tickets/{id} | Update Ticket
[**ReplyTicket**](TicketsApi.md#ReplyTicket) | **POST** /tickets/{id}/reply | Reply Ticket
[**UpdateTicketInfo**](TicketsApi.md#UpdateTicketInfo) | **POST** /tickets/{id}/update | Update Ticket


# **AddNewTicket**
> TicketNewResponse AddNewTicket(ticket_new)

Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Example
```R
library(openapi)

# Create New Ticket
#
# prepare function argument(s)
var_ticket_new <- TicketNew$new("subject_example", "body_example", 123, "service_module_example") # TicketNew | 

api_instance <- TicketsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$AddNewTicket(var_ticket_newdata_file = "result.txt")
result <- api_instance$AddNewTicket(var_ticket_new)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ticket_new** | [**TicketNew**](TicketNew.md)|  | 

### Return type

[**TicketNewResponse**](TicketNewResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A successful response after creating a ticket. |  -  |
| **400** | A successful response after creating a ticket |  -  |
| **401** | Unauthorized |  -  |

# **CloseTicket**
> CloseTicketResponseSchema CloseTicket(id)

Close Ticket

Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.

### Example
```R
library(openapi)

# Close Ticket
#
# prepare function argument(s)
var_id <- "1511222" # character | Ticket ID

api_instance <- TicketsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$CloseTicket(var_iddata_file = "result.txt")
result <- api_instance$CloseTicket(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| Ticket ID | 

### Return type

[**CloseTicketResponseSchema**](CloseTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Close ticket. |  -  |
| **401** | Unauthorized |  -  |

# **DeleteTicketInfo**
> ViewTicketResponse DeleteTicketInfo(id)

Close Ticket

Closes the support ticket.

### Example
```R
library(openapi)

# Close Ticket
#
# prepare function argument(s)
var_id <- 3.4 # numeric | Ticket ID number.

api_instance <- TicketsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DeleteTicketInfo(var_iddata_file = "result.txt")
result <- api_instance$DeleteTicketInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **numeric**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Ticket Information |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **GetNewTicket**
> GetNewTicket()

Gets Information for creating a new ticket.

Returns the form data needed to create a new support ticket, such as available departments and service categories.

### Example
```R
library(openapi)

# Gets Information for creating a new ticket.
#

api_instance <- TicketsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetNewTicket()
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
| **200** | New ticket form data including departments and service categories. |  -  |
| **401** | Unauthorized |  -  |

# **GetTicketInfo**
> ViewTicketResponse GetTicketInfo(id)

Get Ticket Information

Returns the full details of a support ticket including its history of replies.

### Example
```R
library(openapi)

# Get Ticket Information
#
# prepare function argument(s)
var_id <- 3.4 # numeric | Ticket ID number.

api_instance <- TicketsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetTicketInfo(var_iddata_file = "result.txt")
result <- api_instance$GetTicketInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **numeric**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Ticket Information |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **GetTicketsList**
> Tickets GetTicketsList(page = 1, period = "30", view = var.view)

List Support Tickets

Returns a paginated list of support tickets on the account. Filter by status and time period.

### Example
```R
library(openapi)

# List Support Tickets
#
# prepare function argument(s)
var_page <- 1 # integer | Page number for paginated results. (Optional)
var_period <- "30" # character | How far back to show tickets from. Value is in days. (Optional)
var_view <- "view_example" # character | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. (Optional)

api_instance <- TicketsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetTicketsList(page = var_page, period = var_period, view = var_viewdata_file = "result.txt")
result <- api_instance$GetTicketsList(page = var_page, period = var_period, view = var_view)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **integer**| Page number for paginated results. | [optional] [default to 1]
 **period** | Enum [30, 90, 365, 1825, all] | How far back to show tickets from. Value is in days. | [optional] [default to &quot;30&quot;]
 **view** | Enum [Open, Closed, On Hold, In Progress] | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | [optional] 

### Return type

[**Tickets**](Tickets.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of support tickets. |  -  |
| **401** | Unauthorized |  -  |

# **PostTicketInfo**
> ViewTicketResponse PostTicketInfo(id)

Reply To Ticket

Adds a reply to an existing support ticket.

### Example
```R
library(openapi)

# Reply To Ticket
#
# prepare function argument(s)
var_id <- 3.4 # numeric | Ticket ID number.

api_instance <- TicketsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostTicketInfo(var_iddata_file = "result.txt")
result <- api_instance$PostTicketInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **numeric**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Ticket Information |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **PostTicketsList**
> Tickets PostTicketsList()

Search Support Tickets

Searches support tickets by email, subject, or ticket mask ID.

### Example
```R
library(openapi)

# Search Support Tickets
#

api_instance <- TicketsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostTicketsList(data_file = "result.txt")
result <- api_instance$PostTicketsList()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**Tickets**](Tickets.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Search through the ticket system for a given email, subject, or ticket mask id. |  -  |
| **401** | Unauthorized |  -  |

# **PutTicketInfo**
> ViewTicketResponse PutTicketInfo(id)

Update Ticket

Updates a support ticket's properties such as subject or status.

### Example
```R
library(openapi)

# Update Ticket
#
# prepare function argument(s)
var_id <- 3.4 # numeric | Ticket ID number.

api_instance <- TicketsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PutTicketInfo(var_iddata_file = "result.txt")
result <- api_instance$PutTicketInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **numeric**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Ticket Information |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **ReplyTicket**
> ReplyTicketResponseSchema ReplyTicket(id, reply_ticket_request = var.reply_ticket_request)

Reply Ticket

Posts a reply to an existing support ticket thread.

### Example
```R
library(openapi)

# Reply Ticket
#
# prepare function argument(s)
var_id <- 3.4 # numeric | The ticket ID number.
var_reply_ticket_request <- ReplyTicketRequest$new("content_example") # ReplyTicketRequest |  (Optional)

api_instance <- TicketsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$ReplyTicket(var_id, reply_ticket_request = var_reply_ticket_requestdata_file = "result.txt")
result <- api_instance$ReplyTicket(var_id, reply_ticket_request = var_reply_ticket_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **numeric**| The ticket ID number. | 
 **reply_ticket_request** | [**ReplyTicketRequest**](ReplyTicketRequest.md)|  | [optional] 

### Return type

[**ReplyTicketResponseSchema**](ReplyTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Post Reply to the ticket. |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **UpdateTicketInfo**
> UpdateTicketResponseSchema UpdateTicketInfo(id, update_ticket = var.update_ticket)

Update Ticket

Updates a support ticket's subject or body content.

### Example
```R
library(openapi)

# Update Ticket
#
# prepare function argument(s)
var_id <- 3.4 # numeric | The ticket ID number.
var_update_ticket <- UpdateTicket$new("ip_example", "ip_address_example", "y", "root_password_example", "sudo_username_example", "sudo_password_example", 123) # UpdateTicket |  (Optional)

api_instance <- TicketsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateTicketInfo(var_id, update_ticket = var_update_ticketdata_file = "result.txt")
result <- api_instance$UpdateTicketInfo(var_id, update_ticket = var_update_ticket)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **numeric**| The ticket ID number. | 
 **update_ticket** | [**UpdateTicket**](UpdateTicket.md)|  | [optional] 

### Return type

[**UpdateTicketResponseSchema**](UpdateTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response from updating a support ticket. |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

