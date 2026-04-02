# TicketsApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addNewTicket**](TicketsApi.md#addNewTicket) | **POST** /tickets/new | Create New Ticket |
| [**closeTicket**](TicketsApi.md#closeTicket) | **GET** /tickets/{id}/close | Close Ticket |
| [**deleteTicketInfo**](TicketsApi.md#deleteTicketInfo) | **DELETE** /tickets/{id} | Close Ticket |
| [**getNewTicket**](TicketsApi.md#getNewTicket) | **GET** /tickets/new | Gets Information for creating a new ticket. |
| [**getTicketInfo**](TicketsApi.md#getTicketInfo) | **GET** /tickets/{id} | Get Ticket Information |
| [**getTicketsList**](TicketsApi.md#getTicketsList) | **GET** /tickets | List Support Tickets |
| [**postTicketInfo**](TicketsApi.md#postTicketInfo) | **POST** /tickets/{id} | Reply To Ticket |
| [**postTicketsList**](TicketsApi.md#postTicketsList) | **POST** /tickets | Search Support Tickets |
| [**putTicketInfo**](TicketsApi.md#putTicketInfo) | **PUT** /tickets/{id} | Update Ticket |
| [**replyTicket**](TicketsApi.md#replyTicket) | **POST** /tickets/{id}/reply | Reply Ticket |
| [**updateTicketInfo**](TicketsApi.md#updateTicketInfo) | **POST** /tickets/{id}/update | Update Ticket |


<a name="addNewTicket"></a>
# **addNewTicket**
> TicketNewResponse addNewTicket(TicketNew)

Create New Ticket

    Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **TicketNew** | [**TicketNew**](../Models/TicketNew.md)|  | |

### Return type

[**TicketNewResponse**](../Models/TicketNewResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="closeTicket"></a>
# **closeTicket**
> CloseTicketResponseSchema closeTicket(id)

Close Ticket

    Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| Ticket ID | [default to null] |

### Return type

[**CloseTicketResponseSchema**](../Models/CloseTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteTicketInfo"></a>
# **deleteTicketInfo**
> ViewTicketResponse deleteTicketInfo(id)

Close Ticket

    Closes the support ticket.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **BigDecimal**| Ticket ID number. | [default to null] |

### Return type

[**ViewTicketResponse**](../Models/ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getNewTicket"></a>
# **getNewTicket**
> getNewTicket()

Gets Information for creating a new ticket.

    Returns the form data needed to create a new support ticket, such as available departments and service categories.

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTicketInfo"></a>
# **getTicketInfo**
> ViewTicketResponse getTicketInfo(id)

Get Ticket Information

    Returns the full details of a support ticket including its history of replies.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **BigDecimal**| Ticket ID number. | [default to null] |

### Return type

[**ViewTicketResponse**](../Models/ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getTicketsList"></a>
# **getTicketsList**
> Tickets getTicketsList(page, period, view)

List Support Tickets

    Returns a paginated list of support tickets on the account. Filter by status and time period.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **page** | **Integer**| Page number for paginated results. | [optional] [default to 1] |
| **period** | **String**| How far back to show tickets from. Value is in days. | [optional] [default to 30] [enum: 30, 90, 365, 1825, all] |
| **view** | **String**| The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | [optional] [default to null] [enum: Open, Closed, On Hold, In Progress] |

### Return type

[**Tickets**](../Models/Tickets.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postTicketInfo"></a>
# **postTicketInfo**
> ViewTicketResponse postTicketInfo(id)

Reply To Ticket

    Adds a reply to an existing support ticket.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **BigDecimal**| Ticket ID number. | [default to null] |

### Return type

[**ViewTicketResponse**](../Models/ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postTicketsList"></a>
# **postTicketsList**
> Tickets postTicketsList()

Search Support Tickets

    Searches support tickets by email, subject, or ticket mask ID.

### Parameters
This endpoint does not need any parameter.

### Return type

[**Tickets**](../Models/Tickets.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="putTicketInfo"></a>
# **putTicketInfo**
> ViewTicketResponse putTicketInfo(id)

Update Ticket

    Updates a support ticket&#39;s properties such as subject or status.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **BigDecimal**| Ticket ID number. | [default to null] |

### Return type

[**ViewTicketResponse**](../Models/ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="replyTicket"></a>
# **replyTicket**
> ReplyTicketResponseSchema replyTicket(id, ReplyTicketRequest)

Reply Ticket

    Posts a reply to an existing support ticket thread.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **BigDecimal**| The ticket ID number. | [default to null] |
| **ReplyTicketRequest** | [**ReplyTicketRequest**](../Models/ReplyTicketRequest.md)|  | [optional] |

### Return type

[**ReplyTicketResponseSchema**](../Models/ReplyTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="updateTicketInfo"></a>
# **updateTicketInfo**
> UpdateTicketResponseSchema updateTicketInfo(id, UpdateTicket)

Update Ticket

    Updates a support ticket&#39;s subject or body content.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **BigDecimal**| The ticket ID number. | [default to null] |
| **UpdateTicket** | [**UpdateTicket**](../Models/UpdateTicket.md)|  | [optional] |

### Return type

[**UpdateTicketResponseSchema**](../Models/UpdateTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

