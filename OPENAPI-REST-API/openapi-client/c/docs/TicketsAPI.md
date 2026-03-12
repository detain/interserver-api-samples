# TicketsAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TicketsAPI_addNewTicket**](TicketsAPI.md#TicketsAPI_addNewTicket) | **POST** /tickets/new | Create New Ticket
[**TicketsAPI_closeTicket**](TicketsAPI.md#TicketsAPI_closeTicket) | **GET** /tickets/{id}/close | Close Ticket
[**TicketsAPI_deleteTicketInfo**](TicketsAPI.md#TicketsAPI_deleteTicketInfo) | **DELETE** /tickets/{id} | Close Ticket
[**TicketsAPI_getNewTicket**](TicketsAPI.md#TicketsAPI_getNewTicket) | **GET** /tickets/new | Gets Information for creating a new ticket.
[**TicketsAPI_getTicketInfo**](TicketsAPI.md#TicketsAPI_getTicketInfo) | **GET** /tickets/{id} | Get Ticket Information
[**TicketsAPI_getTicketsList**](TicketsAPI.md#TicketsAPI_getTicketsList) | **GET** /tickets | List Support Tickets
[**TicketsAPI_postTicketInfo**](TicketsAPI.md#TicketsAPI_postTicketInfo) | **POST** /tickets/{id} | Reply To Ticket
[**TicketsAPI_postTicketsList**](TicketsAPI.md#TicketsAPI_postTicketsList) | **POST** /tickets | Search Support Tickets
[**TicketsAPI_putTicketInfo**](TicketsAPI.md#TicketsAPI_putTicketInfo) | **PUT** /tickets/{id} | Update Ticket
[**TicketsAPI_replyTicket**](TicketsAPI.md#TicketsAPI_replyTicket) | **POST** /tickets/{id}/reply | Reply Ticket
[**TicketsAPI_updateTicketInfo**](TicketsAPI.md#TicketsAPI_updateTicketInfo) | **POST** /tickets/{id}/update | Update Ticket


# **TicketsAPI_addNewTicket**
```c
// Create New Ticket
//
// Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
//
ticket_new_response_t* TicketsAPI_addNewTicket(apiClient_t *apiClient, ticket_new_t *ticket_new);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ticket_new** | **[ticket_new_t](ticket_new.md) \*** |  | 

### Return type

[ticket_new_response_t](ticket_new_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TicketsAPI_closeTicket**
```c
// Close Ticket
//
// Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
//
close_ticket_response_schema_t* TicketsAPI_closeTicket(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Ticket ID | 

### Return type

[close_ticket_response_schema_t](close_ticket_response_schema.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TicketsAPI_deleteTicketInfo**
```c
// Close Ticket
//
// Closes the support ticket.
//
view_ticket_response_t* TicketsAPI_deleteTicketInfo(apiClient_t *apiClient, double id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **double** | Ticket ID number. | 

### Return type

[view_ticket_response_t](view_ticket_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TicketsAPI_getNewTicket**
```c
// Gets Information for creating a new ticket.
//
// Returns the form data needed to create a new support ticket, such as available departments and service categories.
//
void TicketsAPI_getNewTicket(apiClient_t *apiClient);
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

# **TicketsAPI_getTicketInfo**
```c
// Get Ticket Information
//
// Returns the full details of a support ticket including its history of replies.
//
view_ticket_response_t* TicketsAPI_getTicketInfo(apiClient_t *apiClient, double id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **double** | Ticket ID number. | 

### Return type

[view_ticket_response_t](view_ticket_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TicketsAPI_getTicketsList**
```c
// List Support Tickets
//
// Returns a paginated list of support tickets on the account. Filter by status and time period.
//
tickets_t* TicketsAPI_getTicketsList(apiClient_t *apiClient, int *page, interserver_management_api_getTicketsList_period_e period, interserver_management_api_getTicketsList_view_e view);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**page** | **int \*** | Page number for paginated results. | [optional] [default to 1]
**period** | **interserver_management_api_getTicketsList_period_e** | How far back to show tickets from. Value is in days. | [optional] [default to &#39;30&#39;]
**view** | **interserver_management_api_getTicketsList_view_e** | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | [optional] 

### Return type

[tickets_t](tickets.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TicketsAPI_postTicketInfo**
```c
// Reply To Ticket
//
// Adds a reply to an existing support ticket.
//
view_ticket_response_t* TicketsAPI_postTicketInfo(apiClient_t *apiClient, double id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **double** | Ticket ID number. | 

### Return type

[view_ticket_response_t](view_ticket_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TicketsAPI_postTicketsList**
```c
// Search Support Tickets
//
// Searches support tickets by email, subject, or ticket mask ID.
//
tickets_t* TicketsAPI_postTicketsList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[tickets_t](tickets.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TicketsAPI_putTicketInfo**
```c
// Update Ticket
//
// Updates a support ticket's properties such as subject or status.
//
view_ticket_response_t* TicketsAPI_putTicketInfo(apiClient_t *apiClient, double id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **double** | Ticket ID number. | 

### Return type

[view_ticket_response_t](view_ticket_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TicketsAPI_replyTicket**
```c
// Reply Ticket
//
// Posts a reply to an existing support ticket thread.
//
reply_ticket_response_schema_t* TicketsAPI_replyTicket(apiClient_t *apiClient, double id, reply_ticket_request_t *reply_ticket_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **double** | The ticket ID number. | 
**reply_ticket_request** | **[reply_ticket_request_t](reply_ticket_request.md) \*** |  | [optional] 

### Return type

[reply_ticket_response_schema_t](reply_ticket_response_schema.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TicketsAPI_updateTicketInfo**
```c
// Update Ticket
//
// Updates a support ticket's subject or body content.
//
update_ticket_response_schema_t* TicketsAPI_updateTicketInfo(apiClient_t *apiClient, double id, update_ticket_t *update_ticket);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **double** | The ticket ID number. | 
**update_ticket** | **[update_ticket_t](update_ticket.md) \*** |  | [optional] 

### Return type

[update_ticket_response_schema_t](update_ticket_response_schema.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

