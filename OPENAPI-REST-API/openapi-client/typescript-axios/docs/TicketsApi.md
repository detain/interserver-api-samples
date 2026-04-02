# TicketsApi

All URIs are relative to *https://my.interserver.net/apiv2*

|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|[**addNewTicket**](#addnewticket) | **POST** /tickets/new | Create New Ticket|
|[**closeTicket**](#closeticket) | **GET** /tickets/{id}/close | Close Ticket|
|[**deleteTicketInfo**](#deleteticketinfo) | **DELETE** /tickets/{id} | Close Ticket|
|[**getNewTicket**](#getnewticket) | **GET** /tickets/new | Gets Information for creating a new ticket.|
|[**getTicketInfo**](#getticketinfo) | **GET** /tickets/{id} | Get Ticket Information|
|[**getTicketsList**](#getticketslist) | **GET** /tickets | List Support Tickets|
|[**postTicketInfo**](#postticketinfo) | **POST** /tickets/{id} | Reply To Ticket|
|[**postTicketsList**](#postticketslist) | **POST** /tickets | Search Support Tickets|
|[**putTicketInfo**](#putticketinfo) | **PUT** /tickets/{id} | Update Ticket|
|[**replyTicket**](#replyticket) | **POST** /tickets/{id}/reply | Reply Ticket|
|[**updateTicketInfo**](#updateticketinfo) | **POST** /tickets/{id}/update | Update Ticket|

# **addNewTicket**
> TicketNewResponse addNewTicket(ticketNew)

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Example

```typescript
import {
    TicketsApi,
    Configuration,
    TicketNew
} from './api';

const configuration = new Configuration();
const apiInstance = new TicketsApi(configuration);

let ticketNew: TicketNew; //

const { status, data } = await apiInstance.addNewTicket(
    ticketNew
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **ticketNew** | **TicketNew**|  | |


### Return type

**TicketNewResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A successful response after creating a ticket. |  -  |
|**400** | A successful response after creating a ticket |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **closeTicket**
> CloseTicketResponseSchema closeTicket()

Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.

### Example

```typescript
import {
    TicketsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new TicketsApi(configuration);

let id: string; //Ticket ID (default to undefined)

const { status, data } = await apiInstance.closeTicket(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**string**] | Ticket ID | defaults to undefined|


### Return type

**CloseTicketResponseSchema**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Close ticket. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteTicketInfo**
> ViewTicketResponse deleteTicketInfo()

Closes the support ticket.

### Example

```typescript
import {
    TicketsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new TicketsApi(configuration);

let id: number; //Ticket ID number. (default to undefined)

const { status, data } = await apiInstance.deleteTicketInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | Ticket ID number. | defaults to undefined|


### Return type

**ViewTicketResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Ticket Information |  -  |
|**401** | Unauthorized |  -  |
|**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getNewTicket**
> getNewTicket()

Returns the form data needed to create a new support ticket, such as available departments and service categories.

### Example

```typescript
import {
    TicketsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new TicketsApi(configuration);

const { status, data } = await apiInstance.getNewTicket();
```

### Parameters
This endpoint does not have any parameters.


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
|**200** | New ticket form data including departments and service categories. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTicketInfo**
> ViewTicketResponse getTicketInfo()

Returns the full details of a support ticket including its history of replies.

### Example

```typescript
import {
    TicketsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new TicketsApi(configuration);

let id: number; //Ticket ID number. (default to undefined)

const { status, data } = await apiInstance.getTicketInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | Ticket ID number. | defaults to undefined|


### Return type

**ViewTicketResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Ticket Information |  -  |
|**401** | Unauthorized |  -  |
|**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTicketsList**
> Tickets getTicketsList()

Returns a paginated list of support tickets on the account. Filter by status and time period.

### Example

```typescript
import {
    TicketsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new TicketsApi(configuration);

let page: number; //Page number for paginated results. (optional) (default to 1)
let period: '30' | '90' | '365' | '1825' | 'all'; //How far back to show tickets from. Value is in days. (optional) (default to '30')
let view: 'Open' | 'Closed' | 'On Hold' | 'In Progress'; //The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. (optional) (default to undefined)

const { status, data } = await apiInstance.getTicketsList(
    page,
    period,
    view
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **page** | [**number**] | Page number for paginated results. | (optional) defaults to 1|
| **period** | [**&#39;30&#39; | &#39;90&#39; | &#39;365&#39; | &#39;1825&#39; | &#39;all&#39;**]**Array<&#39;30&#39; &#124; &#39;90&#39; &#124; &#39;365&#39; &#124; &#39;1825&#39; &#124; &#39;all&#39;>** | How far back to show tickets from. Value is in days. | (optional) defaults to '30'|
| **view** | [**&#39;Open&#39; | &#39;Closed&#39; | &#39;On Hold&#39; | &#39;In Progress&#39;**]**Array<&#39;Open&#39; &#124; &#39;Closed&#39; &#124; &#39;On Hold&#39; &#124; &#39;In Progress&#39;>** | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | (optional) defaults to undefined|


### Return type

**Tickets**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | The listing of support tickets. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postTicketInfo**
> ViewTicketResponse postTicketInfo()

Adds a reply to an existing support ticket.

### Example

```typescript
import {
    TicketsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new TicketsApi(configuration);

let id: number; //Ticket ID number. (default to undefined)

const { status, data } = await apiInstance.postTicketInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | Ticket ID number. | defaults to undefined|


### Return type

**ViewTicketResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Ticket Information |  -  |
|**401** | Unauthorized |  -  |
|**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postTicketsList**
> Tickets postTicketsList()

Searches support tickets by email, subject, or ticket mask ID.

### Example

```typescript
import {
    TicketsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new TicketsApi(configuration);

const { status, data } = await apiInstance.postTicketsList();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**Tickets**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Search through the ticket system for a given email, subject, or ticket mask id. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **putTicketInfo**
> ViewTicketResponse putTicketInfo()

Updates a support ticket\'s properties such as subject or status.

### Example

```typescript
import {
    TicketsApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new TicketsApi(configuration);

let id: number; //Ticket ID number. (default to undefined)

const { status, data } = await apiInstance.putTicketInfo(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | Ticket ID number. | defaults to undefined|


### Return type

**ViewTicketResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Ticket Information |  -  |
|**401** | Unauthorized |  -  |
|**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **replyTicket**
> ReplyTicketResponseSchema replyTicket()

Posts a reply to an existing support ticket thread.

### Example

```typescript
import {
    TicketsApi,
    Configuration,
    ReplyTicketRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new TicketsApi(configuration);

let id: number; //The ticket ID number. (default to undefined)
let replyTicketRequest: ReplyTicketRequest; // (optional)

const { status, data } = await apiInstance.replyTicket(
    id,
    replyTicketRequest
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **replyTicketRequest** | **ReplyTicketRequest**|  | |
| **id** | [**number**] | The ticket ID number. | defaults to undefined|


### Return type

**ReplyTicketResponseSchema**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Post Reply to the ticket. |  -  |
|**401** | Unauthorized |  -  |
|**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateTicketInfo**
> UpdateTicketResponseSchema updateTicketInfo()

Updates a support ticket\'s subject or body content.

### Example

```typescript
import {
    TicketsApi,
    Configuration,
    UpdateTicket
} from './api';

const configuration = new Configuration();
const apiInstance = new TicketsApi(configuration);

let id: number; //The ticket ID number. (default to undefined)
let updateTicket: UpdateTicket; // (optional)

const { status, data } = await apiInstance.updateTicketInfo(
    id,
    updateTicket
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **updateTicket** | **UpdateTicket**|  | |
| **id** | [**number**] | The ticket ID number. | defaults to undefined|


### Return type

**UpdateTicketResponseSchema**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response from updating a support ticket. |  -  |
|**401** | Unauthorized |  -  |
|**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

