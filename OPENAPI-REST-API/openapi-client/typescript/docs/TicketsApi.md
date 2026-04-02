# .TicketsApi

All URIs are relative to *https://my.interserver.net/apiv2*

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


# **addNewTicket**
> TicketNewResponse addNewTicket(ticketNew)

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Example


```typescript
import { createConfiguration, TicketsApi } from '';
import type { TicketsApiAddNewTicketRequest } from '';

const configuration = createConfiguration();
const apiInstance = new TicketsApi(configuration);

const request: TicketsApiAddNewTicketRequest = {
  
  ticketNew: {
    subject: "subject_example",
    body: "body_example",
    service_id: 1,
    service_module: "service_module_example",
  },
};

const data = await apiInstance.addNewTicket(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ticketNew** | **TicketNew**|  |


### Return type

**TicketNewResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response after creating a ticket. |  -  |
**400** | A successful response after creating a ticket |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **closeTicket**
> CloseTicketResponseSchema closeTicket()

Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.

### Example


```typescript
import { createConfiguration, TicketsApi } from '';
import type { TicketsApiCloseTicketRequest } from '';

const configuration = createConfiguration();
const apiInstance = new TicketsApi(configuration);

const request: TicketsApiCloseTicketRequest = {
    // Ticket ID
  id: "1511222",
};

const data = await apiInstance.closeTicket(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**string**] | Ticket ID | defaults to undefined


### Return type

**CloseTicketResponseSchema**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Close ticket. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **deleteTicketInfo**
> ViewTicketResponse deleteTicketInfo()

Closes the support ticket.

### Example


```typescript
import { createConfiguration, TicketsApi } from '';
import type { TicketsApiDeleteTicketInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new TicketsApi(configuration);

const request: TicketsApiDeleteTicketInfoRequest = {
    // Ticket ID number.
  id: 3.14,
};

const data = await apiInstance.deleteTicketInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | Ticket ID number. | defaults to undefined


### Return type

**ViewTicketResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Ticket Information |  -  |
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getNewTicket**
> void getNewTicket()

Returns the form data needed to create a new support ticket, such as available departments and service categories.

### Example


```typescript
import { createConfiguration, TicketsApi } from '';

const configuration = createConfiguration();
const apiInstance = new TicketsApi(configuration);

const request = {};

const data = await apiInstance.getNewTicket(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | New ticket form data including departments and service categories. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getTicketInfo**
> ViewTicketResponse getTicketInfo()

Returns the full details of a support ticket including its history of replies.

### Example


```typescript
import { createConfiguration, TicketsApi } from '';
import type { TicketsApiGetTicketInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new TicketsApi(configuration);

const request: TicketsApiGetTicketInfoRequest = {
    // Ticket ID number.
  id: 3.14,
};

const data = await apiInstance.getTicketInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | Ticket ID number. | defaults to undefined


### Return type

**ViewTicketResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Ticket Information |  -  |
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getTicketsList**
> Tickets getTicketsList()

Returns a paginated list of support tickets on the account. Filter by status and time period.

### Example


```typescript
import { createConfiguration, TicketsApi } from '';
import type { TicketsApiGetTicketsListRequest } from '';

const configuration = createConfiguration();
const apiInstance = new TicketsApi(configuration);

const request: TicketsApiGetTicketsListRequest = {
    // Page number for paginated results. (optional)
  page: 1,
    // How far back to show tickets from. Value is in days. (optional)
  period: "30",
    // The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. (optional)
  view: "Open",
};

const data = await apiInstance.getTicketsList(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | [**number**] | Page number for paginated results. | (optional) defaults to 1
 **period** | [**&#39;30&#39; | &#39;90&#39; | &#39;365&#39; | &#39;1825&#39; | &#39;all&#39;**]**Array<&#39;30&#39; &#124; &#39;90&#39; &#124; &#39;365&#39; &#124; &#39;1825&#39; &#124; &#39;all&#39;>** | How far back to show tickets from. Value is in days. | (optional) defaults to '30'
 **view** | [**&#39;Open&#39; | &#39;Closed&#39; | &#39;On Hold&#39; | &#39;In Progress&#39;**]**Array<&#39;Open&#39; &#124; &#39;Closed&#39; &#124; &#39;On Hold&#39; &#124; &#39;In Progress&#39;>** | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | (optional) defaults to undefined


### Return type

**Tickets**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The listing of support tickets. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postTicketInfo**
> ViewTicketResponse postTicketInfo()

Adds a reply to an existing support ticket.

### Example


```typescript
import { createConfiguration, TicketsApi } from '';
import type { TicketsApiPostTicketInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new TicketsApi(configuration);

const request: TicketsApiPostTicketInfoRequest = {
    // Ticket ID number.
  id: 3.14,
};

const data = await apiInstance.postTicketInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | Ticket ID number. | defaults to undefined


### Return type

**ViewTicketResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Ticket Information |  -  |
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postTicketsList**
> Tickets postTicketsList()

Searches support tickets by email, subject, or ticket mask ID.

### Example


```typescript
import { createConfiguration, TicketsApi } from '';

const configuration = createConfiguration();
const apiInstance = new TicketsApi(configuration);

const request = {};

const data = await apiInstance.postTicketsList(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**Tickets**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Search through the ticket system for a given email, subject, or ticket mask id. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **putTicketInfo**
> ViewTicketResponse putTicketInfo()

Updates a support ticket\'s properties such as subject or status.

### Example


```typescript
import { createConfiguration, TicketsApi } from '';
import type { TicketsApiPutTicketInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new TicketsApi(configuration);

const request: TicketsApiPutTicketInfoRequest = {
    // Ticket ID number.
  id: 3.14,
};

const data = await apiInstance.putTicketInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | Ticket ID number. | defaults to undefined


### Return type

**ViewTicketResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Ticket Information |  -  |
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **replyTicket**
> ReplyTicketResponseSchema replyTicket()

Posts a reply to an existing support ticket thread.

### Example


```typescript
import { createConfiguration, TicketsApi } from '';
import type { TicketsApiReplyTicketRequest } from '';

const configuration = createConfiguration();
const apiInstance = new TicketsApi(configuration);

const request: TicketsApiReplyTicketRequest = {
    // The ticket ID number.
  id: 3.14,
  
  replyTicketRequest: null,
};

const data = await apiInstance.replyTicket(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **replyTicketRequest** | **ReplyTicketRequest**|  |
 **id** | [**number**] | The ticket ID number. | defaults to undefined


### Return type

**ReplyTicketResponseSchema**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Post Reply to the ticket. |  -  |
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateTicketInfo**
> UpdateTicketResponseSchema updateTicketInfo()

Updates a support ticket\'s subject or body content.

### Example


```typescript
import { createConfiguration, TicketsApi } from '';
import type { TicketsApiUpdateTicketInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new TicketsApi(configuration);

const request: TicketsApiUpdateTicketInfoRequest = {
    // The ticket ID number.
  id: 3.14,
  
  updateTicket: {
    ip: "ip_example",
    ip_address: "ip_address_example",
    customer_server_access: "y",
    root_password: "root_password_example",
    sudo_username: "sudo_username_example",
    sudo_password: "sudo_password_example",
    port: 1,
  },
};

const data = await apiInstance.updateTicketInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **updateTicket** | **UpdateTicket**|  |
 **id** | [**number**] | The ticket ID number. | defaults to undefined


### Return type

**UpdateTicketResponseSchema**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response from updating a support ticket. |  -  |
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)


