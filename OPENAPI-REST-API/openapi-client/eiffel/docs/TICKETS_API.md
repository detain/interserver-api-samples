# TICKETS_API

All URIs are relative to *https://my.interserver.net/apiv2*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**add_new_ticket**](TICKETS_API.md#add_new_ticket) | **Post** /tickets/new | Create New Ticket
[**close_ticket**](TICKETS_API.md#close_ticket) | **Get** /tickets/{id}/close | Close Ticket
[**delete_ticket_info**](TICKETS_API.md#delete_ticket_info) | **Delete** /tickets/{id} | Close Ticket
[**new_ticket**](TICKETS_API.md#new_ticket) | **Get** /tickets/new | Gets Information for creating a new ticket.
[**post_ticket_info**](TICKETS_API.md#post_ticket_info) | **Post** /tickets/{id} | Reply To Ticket
[**post_tickets_list**](TICKETS_API.md#post_tickets_list) | **Post** /tickets | Search Support Tickets
[**put_ticket_info**](TICKETS_API.md#put_ticket_info) | **Put** /tickets/{id} | Update Ticket
[**reply_ticket**](TICKETS_API.md#reply_ticket) | **Post** /tickets/{id}/reply | Reply Ticket
[**ticket_info**](TICKETS_API.md#ticket_info) | **Get** /tickets/{id} | Get Ticket Information
[**tickets_list**](TICKETS_API.md#tickets_list) | **Get** /tickets | List Support Tickets
[**update_ticket_info**](TICKETS_API.md#update_ticket_info) | **Post** /tickets/{id}/update | Update Ticket


# **add_new_ticket**
> add_new_ticket (ticket_new: TICKET_NEW ): detachable TICKET_NEW_RESPONSE


Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ticket_new** | [**TICKET_NEW**](TICKET_NEW.md)|  | 

### Return type

[**TICKET_NEW_RESPONSE**](TicketNewResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **close_ticket**
> close_ticket (id: STRING_32 ): detachable CLOSE_TICKET_RESPONSE_SCHEMA


Close Ticket

Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| Ticket ID | [default to null]

### Return type

[**CLOSE_TICKET_RESPONSE_SCHEMA**](CloseTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_ticket_info**
> delete_ticket_info (id: REAL_32 ): detachable VIEW_TICKET_RESPONSE


Close Ticket

Closes the support ticket.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **REAL_32**| Ticket ID number. | [default to null]

### Return type

[**VIEW_TICKET_RESPONSE**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **new_ticket**
> new_ticket 


Gets Information for creating a new ticket.

Returns the form data needed to create a new support ticket, such as available departments and service categories.


### Parameters
This endpoint does not need any parameter.

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_ticket_info**
> post_ticket_info (id: REAL_32 ): detachable VIEW_TICKET_RESPONSE


Reply To Ticket

Adds a reply to an existing support ticket.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **REAL_32**| Ticket ID number. | [default to null]

### Return type

[**VIEW_TICKET_RESPONSE**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_tickets_list**
> post_tickets_list : detachable TICKETS


Search Support Tickets

Searches support tickets by email, subject, or ticket mask ID.


### Parameters
This endpoint does not need any parameter.

### Return type

[**TICKETS**](Tickets.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_ticket_info**
> put_ticket_info (id: REAL_32 ): detachable VIEW_TICKET_RESPONSE


Update Ticket

Updates a support ticket's properties such as subject or status.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **REAL_32**| Ticket ID number. | [default to null]

### Return type

[**VIEW_TICKET_RESPONSE**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **reply_ticket**
> reply_ticket (id: REAL_32 ; reply_ticket_request:  detachable REPLY_TICKET_REQUEST ): detachable REPLY_TICKET_RESPONSE_SCHEMA


Reply Ticket

Posts a reply to an existing support ticket thread.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **REAL_32**| The ticket ID number. | [default to null]
 **reply_ticket_request** | [**REPLY_TICKET_REQUEST**](REPLY_TICKET_REQUEST.md)|  | [optional] 

### Return type

[**REPLY_TICKET_RESPONSE_SCHEMA**](ReplyTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ticket_info**
> ticket_info (id: REAL_32 ): detachable VIEW_TICKET_RESPONSE


Get Ticket Information

Returns the full details of a support ticket including its history of replies.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **REAL_32**| Ticket ID number. | [default to null]

### Return type

[**VIEW_TICKET_RESPONSE**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **tickets_list**
> tickets_list (page:  detachable INTEGER_32 ; period:  detachable STRING_32 ; view:  detachable STRING_32 ): detachable TICKETS


List Support Tickets

Returns a paginated list of support tickets on the account. Filter by status and time period.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **INTEGER_32**| Page number for paginated results. | [optional] [default to 1]
 **period** | **STRING_32**| How far back to show tickets from. Value is in days. | [optional] [default to 30]
 **view** | **STRING_32**| The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | [optional] [default to null]

### Return type

[**TICKETS**](Tickets.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_ticket_info**
> update_ticket_info (id: REAL_32 ; update_ticket:  detachable UPDATE_TICKET ): detachable UPDATE_TICKET_RESPONSE_SCHEMA


Update Ticket

Updates a support ticket's subject or body content.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **REAL_32**| The ticket ID number. | [default to null]
 **update_ticket** | [**UPDATE_TICKET**](UPDATE_TICKET.md)|  | [optional] 

### Return type

[**UPDATE_TICKET_RESPONSE_SCHEMA**](UpdateTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

