# TicketsApi

All URIs are relative to */apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addNewTicket**](TicketsApi.md#addNewTicket) | **POST** /tickets/new | Create New Ticket
[**closeTicket**](TicketsApi.md#closeTicket) | **GET** /tickets/{id}/close | Close Ticket
[**deleteTicketInfo**](TicketsApi.md#deleteTicketInfo) | **DELETE** /tickets/{id} | Close Ticket
[**getNewTicket**](TicketsApi.md#getNewTicket) | **GET** /tickets/new | Gets Information for creating a new ticket.
[**getTicketInfo**](TicketsApi.md#getTicketInfo) | **GET** /tickets/{id} | Get Ticket Information
[**getTicketsList**](TicketsApi.md#getTicketsList) | **GET** /tickets | List Support Tickets
[**postTicketInfo**](TicketsApi.md#postTicketInfo) | **POST** /tickets/{id} | Reply To Ticket
[**postTicketsList**](TicketsApi.md#postTicketsList) | **POST** /tickets | Search Support Tickets
[**putTicketInfo**](TicketsApi.md#putTicketInfo) | **PUT** /tickets/{id} | Update Ticket
[**replyTicket**](TicketsApi.md#replyTicket) | **POST** /tickets/{id}/reply | Reply Ticket
[**updateTicketInfo**](TicketsApi.md#updateTicketInfo) | **POST** /tickets/{id}/update | Update Ticket



## addNewTicket

Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Example

```bash
 addNewTicket
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ticketNew** | [**TicketNew**](TicketNew.md) |  |

### Return type

[**TicketNewResponse**](TicketNewResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## closeTicket

Close Ticket

Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.

### Example

```bash
 closeTicket id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string** | Ticket ID | [default to null]

### Return type

[**CloseTicketResponseSchema**](CloseTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## deleteTicketInfo

Close Ticket

Closes the support ticket.

### Example

```bash
 deleteTicketInfo id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | Ticket ID number. | [default to null]

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getNewTicket

Gets Information for creating a new ticket.

Returns the form data needed to create a new support ticket, such as available departments and service categories.

### Example

```bash
 getNewTicket
```

### Parameters

This endpoint does not need any parameter.

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getTicketInfo

Get Ticket Information

Returns the full details of a support ticket including its history of replies.

### Example

```bash
 getTicketInfo id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | Ticket ID number. | [default to null]

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getTicketsList

List Support Tickets

Returns a paginated list of support tickets on the account. Filter by status and time period.

### Example

```bash
 getTicketsList  page=value  period=value  view=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **integer** | Page number for paginated results. | [optional] [default to 1]
 **period** | **string** | How far back to show tickets from. Value is in days. | [optional] [default to 30]
 **view** | **string** | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | [optional] [default to null]

### Return type

[**Tickets**](Tickets.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postTicketInfo

Reply To Ticket

Adds a reply to an existing support ticket.

### Example

```bash
 postTicketInfo id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | Ticket ID number. | [default to null]

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postTicketsList

Search Support Tickets

Searches support tickets by email, subject, or ticket mask ID.

### Example

```bash
 postTicketsList
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Tickets**](Tickets.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## putTicketInfo

Update Ticket

Updates a support ticket's properties such as subject or status.

### Example

```bash
 putTicketInfo id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | Ticket ID number. | [default to null]

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## replyTicket

Reply Ticket

Posts a reply to an existing support ticket thread.

### Example

```bash
 replyTicket id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The ticket ID number. | [default to null]
 **replyTicketRequest** | [**ReplyTicketRequest**](ReplyTicketRequest.md) |  | [optional]

### Return type

[**ReplyTicketResponseSchema**](ReplyTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## updateTicketInfo

Update Ticket

Updates a support ticket's subject or body content.

### Example

```bash
 updateTicketInfo id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The ticket ID number. | [default to null]
 **updateTicket** | [**UpdateTicket**](UpdateTicket.md) |  | [optional]

### Return type

[**UpdateTicketResponseSchema**](UpdateTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

