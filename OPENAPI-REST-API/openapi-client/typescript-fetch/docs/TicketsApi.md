# TicketsApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addNewTicket**](TicketsApi.md#addnewticket) | **POST** /tickets/new | Create New Ticket |
| [**closeTicket**](TicketsApi.md#closeticket) | **GET** /tickets/{id}/close | Close Ticket |
| [**deleteTicketInfo**](TicketsApi.md#deleteticketinfo) | **DELETE** /tickets/{id} | Close Ticket |
| [**getNewTicket**](TicketsApi.md#getnewticket) | **GET** /tickets/new | Gets Information for creating a new ticket. |
| [**getTicketInfo**](TicketsApi.md#getticketinfo) | **GET** /tickets/{id} | Get Ticket Information |
| [**getTicketsList**](TicketsApi.md#getticketslist) | **GET** /tickets | List Support Tickets |
| [**postTicketInfo**](TicketsApi.md#postticketinfo) | **POST** /tickets/{id} | Reply To Ticket |
| [**postTicketsList**](TicketsApi.md#postticketslist) | **POST** /tickets | Search Support Tickets |
| [**putTicketInfo**](TicketsApi.md#putticketinfo) | **PUT** /tickets/{id} | Update Ticket |
| [**replyTicket**](TicketsApi.md#replyticketoperation) | **POST** /tickets/{id}/reply | Reply Ticket |
| [**updateTicketInfo**](TicketsApi.md#updateticketinfo) | **POST** /tickets/{id}/update | Update Ticket |



## addNewTicket

> TicketNewResponse addNewTicket(ticketNew)

Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Example

```ts
import {
  Configuration,
  TicketsApi,
} from '';
import type { AddNewTicketRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new TicketsApi(config);

  const body = {
    // TicketNew
    ticketNew: ...,
  } satisfies AddNewTicketRequest;

  try {
    const data = await api.addNewTicket(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **ticketNew** | [TicketNew](TicketNew.md) |  | |

### Return type

[**TicketNewResponse**](TicketNewResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A successful response after creating a ticket. |  -  |
| **400** | A successful response after creating a ticket |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## closeTicket

> CloseTicketResponseSchema closeTicket(id)

Close Ticket

Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.

### Example

```ts
import {
  Configuration,
  TicketsApi,
} from '';
import type { CloseTicketRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new TicketsApi(config);

  const body = {
    // string | Ticket ID
    id: 1511222,
  } satisfies CloseTicketRequest;

  try {
    const data = await api.closeTicket(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `string` | Ticket ID | [Defaults to `undefined`] |

### Return type

[**CloseTicketResponseSchema**](CloseTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Close ticket. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## deleteTicketInfo

> ViewTicketResponse deleteTicketInfo(id)

Close Ticket

Closes the support ticket.

### Example

```ts
import {
  Configuration,
  TicketsApi,
} from '';
import type { DeleteTicketInfoRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new TicketsApi(config);

  const body = {
    // number | Ticket ID number.
    id: 8.14,
  } satisfies DeleteTicketInfoRequest;

  try {
    const data = await api.deleteTicketInfo(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | Ticket ID number. | [Defaults to `undefined`] |

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Ticket Information |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getNewTicket

> getNewTicket()

Gets Information for creating a new ticket.

Returns the form data needed to create a new support ticket, such as available departments and service categories.

### Example

```ts
import {
  Configuration,
  TicketsApi,
} from '';
import type { GetNewTicketRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new TicketsApi(config);

  try {
    const data = await api.getNewTicket();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | New ticket form data including departments and service categories. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getTicketInfo

> ViewTicketResponse getTicketInfo(id)

Get Ticket Information

Returns the full details of a support ticket including its history of replies.

### Example

```ts
import {
  Configuration,
  TicketsApi,
} from '';
import type { GetTicketInfoRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new TicketsApi(config);

  const body = {
    // number | Ticket ID number.
    id: 8.14,
  } satisfies GetTicketInfoRequest;

  try {
    const data = await api.getTicketInfo(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | Ticket ID number. | [Defaults to `undefined`] |

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Ticket Information |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getTicketsList

> Tickets getTicketsList(page, period, view)

List Support Tickets

Returns a paginated list of support tickets on the account. Filter by status and time period.

### Example

```ts
import {
  Configuration,
  TicketsApi,
} from '';
import type { GetTicketsListRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new TicketsApi(config);

  const body = {
    // number | Page number for paginated results. (optional)
    page: 56,
    // '30' | '90' | '365' | '1825' | 'all' | How far back to show tickets from. Value is in days. (optional)
    period: period_example,
    // 'Open' | 'Closed' | 'On Hold' | 'In Progress' | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. (optional)
    view: view_example,
  } satisfies GetTicketsListRequest;

  try {
    const data = await api.getTicketsList(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **page** | `number` | Page number for paginated results. | [Optional] [Defaults to `1`] |
| **period** | `30`, `90`, `365`, `1825`, `all` | How far back to show tickets from. Value is in days. | [Optional] [Defaults to `&#39;30&#39;`] [Enum: 30, 90, 365, 1825, all] |
| **view** | `Open`, `Closed`, `On Hold`, `In Progress` | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | [Optional] [Defaults to `undefined`] [Enum: Open, Closed, On Hold, In Progress] |

### Return type

[**Tickets**](Tickets.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of support tickets. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postTicketInfo

> ViewTicketResponse postTicketInfo(id)

Reply To Ticket

Adds a reply to an existing support ticket.

### Example

```ts
import {
  Configuration,
  TicketsApi,
} from '';
import type { PostTicketInfoRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new TicketsApi(config);

  const body = {
    // number | Ticket ID number.
    id: 8.14,
  } satisfies PostTicketInfoRequest;

  try {
    const data = await api.postTicketInfo(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | Ticket ID number. | [Defaults to `undefined`] |

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Ticket Information |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postTicketsList

> Tickets postTicketsList()

Search Support Tickets

Searches support tickets by email, subject, or ticket mask ID.

### Example

```ts
import {
  Configuration,
  TicketsApi,
} from '';
import type { PostTicketsListRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new TicketsApi(config);

  try {
    const data = await api.postTicketsList();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Tickets**](Tickets.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Search through the ticket system for a given email, subject, or ticket mask id. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## putTicketInfo

> ViewTicketResponse putTicketInfo(id)

Update Ticket

Updates a support ticket\&#39;s properties such as subject or status.

### Example

```ts
import {
  Configuration,
  TicketsApi,
} from '';
import type { PutTicketInfoRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new TicketsApi(config);

  const body = {
    // number | Ticket ID number.
    id: 8.14,
  } satisfies PutTicketInfoRequest;

  try {
    const data = await api.putTicketInfo(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | Ticket ID number. | [Defaults to `undefined`] |

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Ticket Information |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## replyTicket

> ReplyTicketResponseSchema replyTicket(id, replyTicketRequest)

Reply Ticket

Posts a reply to an existing support ticket thread.

### Example

```ts
import {
  Configuration,
  TicketsApi,
} from '';
import type { ReplyTicketOperationRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new TicketsApi(config);

  const body = {
    // number | The ticket ID number.
    id: 8.14,
    // ReplyTicketRequest (optional)
    replyTicketRequest: ...,
  } satisfies ReplyTicketOperationRequest;

  try {
    const data = await api.replyTicket(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The ticket ID number. | [Defaults to `undefined`] |
| **replyTicketRequest** | [ReplyTicketRequest](ReplyTicketRequest.md) |  | [Optional] |

### Return type

[**ReplyTicketResponseSchema**](ReplyTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Post Reply to the ticket. |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateTicketInfo

> UpdateTicketResponseSchema updateTicketInfo(id, updateTicket)

Update Ticket

Updates a support ticket\&#39;s subject or body content.

### Example

```ts
import {
  Configuration,
  TicketsApi,
} from '';
import type { UpdateTicketInfoRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new TicketsApi(config);

  const body = {
    // number | The ticket ID number.
    id: 8.14,
    // UpdateTicket (optional)
    updateTicket: ...,
  } satisfies UpdateTicketInfoRequest;

  try {
    const data = await api.updateTicketInfo(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The ticket ID number. | [Defaults to `undefined`] |
| **updateTicket** | [UpdateTicket](UpdateTicket.md) |  | [Optional] |

### Return type

[**UpdateTicketResponseSchema**](UpdateTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response from updating a support ticket. |  -  |
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)

