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


## Creating TicketsApi

To initiate an instance of `TicketsApi`, you can use micronaut's `ApplicationContext`:
```java
/* imports
import io.micronaut.runtime.Micronaut;
import io.micronaut.context.ApplicationContext;
import org.openapitools.api.TicketsApi;
*/

ApplicationContext context = Micronaut.run(/* ... */);
PetApi apiInstance = context.getBean(TicketsApi.class);
```

Or the `@Inject` annotation:
```java
@Singleton
class MyClass {
    @Inject
    TicketsApi ticketsApi;

    /* ... use the injected variable */
}
```
Note that the class needs to be annotated with one of Micronaut's [scope annotations](https://docs.micronaut.io/latest/guide/#scopes) like `Singleton` in order to be processed.

More information can be found inside [Inversion of Control guide section](https://docs.micronaut.io/latest/guide/#ioc).

<a id="addNewTicket"></a>
# **addNewTicket**
```java
Mono<TicketNewResponse> TicketsApi.addNewTicket(ticketNew)
```

Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **ticketNew** | [**TicketNew**](TicketNew.md)|  | |


### Return type
[**TicketNewResponse**](TicketNewResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="closeTicket"></a>
# **closeTicket**
```java
Mono<CloseTicketResponseSchema> TicketsApi.closeTicket(id)
```

Close Ticket

Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `String`| Ticket ID | |


### Return type
[**CloseTicketResponseSchema**](CloseTicketResponseSchema.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="deleteTicketInfo"></a>
# **deleteTicketInfo**
```java
Mono<ViewTicketResponse> TicketsApi.deleteTicketInfo(id)
```

Close Ticket

Closes the support ticket.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `BigDecimal`| Ticket ID number. | |


### Return type
[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getNewTicket"></a>
# **getNewTicket**
```java
Mono<Void> TicketsApi.getNewTicket()
```

Gets Information for creating a new ticket.

Returns the form data needed to create a new support ticket, such as available departments and service categories.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getTicketInfo"></a>
# **getTicketInfo**
```java
Mono<ViewTicketResponse> TicketsApi.getTicketInfo(id)
```

Get Ticket Information

Returns the full details of a support ticket including its history of replies.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `BigDecimal`| Ticket ID number. | |


### Return type
[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getTicketsList"></a>
# **getTicketsList**
```java
Mono<Tickets> TicketsApi.getTicketsList(pageperiodview)
```

List Support Tickets

Returns a paginated list of support tickets on the account. Filter by status and time period.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **page** | `Integer`| Page number for paginated results. | [optional parameter] [default to `1`] |
| **period** | `String`| How far back to show tickets from. Value is in days. | [optional parameter] [default to `30`] [enum: `30`, `90`, `365`, `1825`, `all`] |
| **view** | `String`| The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | [optional parameter] [enum: `Open`, `Closed`, `On Hold`, `In Progress`] |


### Return type
[**Tickets**](Tickets.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postTicketInfo"></a>
# **postTicketInfo**
```java
Mono<ViewTicketResponse> TicketsApi.postTicketInfo(id)
```

Reply To Ticket

Adds a reply to an existing support ticket.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `BigDecimal`| Ticket ID number. | |


### Return type
[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postTicketsList"></a>
# **postTicketsList**
```java
Mono<Tickets> TicketsApi.postTicketsList()
```

Search Support Tickets

Searches support tickets by email, subject, or ticket mask ID.



### Return type
[**Tickets**](Tickets.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="putTicketInfo"></a>
# **putTicketInfo**
```java
Mono<ViewTicketResponse> TicketsApi.putTicketInfo(id)
```

Update Ticket

Updates a support ticket&#39;s properties such as subject or status.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `BigDecimal`| Ticket ID number. | |


### Return type
[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="replyTicket"></a>
# **replyTicket**
```java
Mono<ReplyTicketResponseSchema> TicketsApi.replyTicket(idreplyTicketRequest)
```

Reply Ticket

Posts a reply to an existing support ticket thread.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `BigDecimal`| The ticket ID number. | |
| **replyTicketRequest** | [**ReplyTicketRequest**](ReplyTicketRequest.md)|  | [optional parameter] |


### Return type
[**ReplyTicketResponseSchema**](ReplyTicketResponseSchema.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="updateTicketInfo"></a>
# **updateTicketInfo**
```java
Mono<UpdateTicketResponseSchema> TicketsApi.updateTicketInfo(idupdateTicket)
```

Update Ticket

Updates a support ticket&#39;s subject or body content.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `BigDecimal`| The ticket ID number. | |
| **updateTicket** | [**UpdateTicket**](UpdateTicket.md)|  | [optional parameter] |


### Return type
[**UpdateTicketResponseSchema**](UpdateTicketResponseSchema.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

