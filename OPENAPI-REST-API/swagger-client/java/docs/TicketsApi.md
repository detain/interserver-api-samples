# TicketsApi

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

<a name="addNewTicket"></a>
# **addNewTicket**
> TicketNewResponse addNewTicket(body)

Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.TicketsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

TicketsApi apiInstance = new TicketsApi();
TicketNew body = new TicketNew(); // TicketNew | 
try {
    TicketNewResponse result = apiInstance.addNewTicket(body);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TicketsApi#addNewTicket");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TicketNew**](TicketNew.md)|  |

### Return type

[**TicketNewResponse**](TicketNewResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="addNewTicket"></a>
# **addNewTicket**
> TicketNewResponse addNewTicket(subject, body, serviceId, serviceModule)

Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.TicketsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

TicketsApi apiInstance = new TicketsApi();
String subject = "subject_example"; // String | 
String body = "body_example"; // String | 
Integer serviceId = 56; // Integer | 
String serviceModule = "serviceModule_example"; // String | 
try {
    TicketNewResponse result = apiInstance.addNewTicket(subject, body, serviceId, serviceModule);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TicketsApi#addNewTicket");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **subject** | **String**|  |
 **body** | **String**|  |
 **serviceId** | **Integer**|  |
 **serviceModule** | **String**|  |

### Return type

[**TicketNewResponse**](TicketNewResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="closeTicket"></a>
# **closeTicket**
> CloseTicketResponseSchema closeTicket(id)

Close Ticket

Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.TicketsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

TicketsApi apiInstance = new TicketsApi();
String id = "id_example"; // String | Ticket ID
try {
    CloseTicketResponseSchema result = apiInstance.closeTicket(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TicketsApi#closeTicket");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| Ticket ID |

### Return type

[**CloseTicketResponseSchema**](CloseTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteTicketInfo"></a>
# **deleteTicketInfo**
> ViewTicketResponse deleteTicketInfo(id)

Close Ticket

Closes the support ticket.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.TicketsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

TicketsApi apiInstance = new TicketsApi();
BigDecimal id = new BigDecimal(); // BigDecimal | Ticket ID number.
try {
    ViewTicketResponse result = apiInstance.deleteTicketInfo(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TicketsApi#deleteTicketInfo");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **BigDecimal**| Ticket ID number. |

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getNewTicket"></a>
# **getNewTicket**
> getNewTicket()

Gets Information for creating a new ticket.

Returns the form data needed to create a new support ticket, such as available departments and service categories.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.TicketsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

TicketsApi apiInstance = new TicketsApi();
try {
    apiInstance.getNewTicket();
} catch (ApiException e) {
    System.err.println("Exception when calling TicketsApi#getNewTicket");
    e.printStackTrace();
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getTicketInfo"></a>
# **getTicketInfo**
> ViewTicketResponse getTicketInfo(id)

Get Ticket Information

Returns the full details of a support ticket including its history of replies.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.TicketsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

TicketsApi apiInstance = new TicketsApi();
BigDecimal id = new BigDecimal(); // BigDecimal | Ticket ID number.
try {
    ViewTicketResponse result = apiInstance.getTicketInfo(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TicketsApi#getTicketInfo");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **BigDecimal**| Ticket ID number. |

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getTicketsList"></a>
# **getTicketsList**
> Tickets getTicketsList(page, period, view)

List Support Tickets

Returns a paginated list of support tickets on the account. Filter by status and time period.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.TicketsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

TicketsApi apiInstance = new TicketsApi();
Integer page = 1; // Integer | Page number for paginated results.
String period = "30"; // String | How far back to show tickets from. Value is in days.
String view = "view_example"; // String | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
try {
    Tickets result = apiInstance.getTicketsList(page, period, view);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TicketsApi#getTicketsList");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **Integer**| Page number for paginated results. | [optional] [default to 1]
 **period** | **String**| How far back to show tickets from. Value is in days. | [optional] [default to 30] [enum: 30, 90, 365, 1825, all]
 **view** | **String**| The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | [optional] [enum: Open, Closed, On Hold, In Progress]

### Return type

[**Tickets**](Tickets.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postTicketInfo"></a>
# **postTicketInfo**
> ViewTicketResponse postTicketInfo(id)

Reply To Ticket

Adds a reply to an existing support ticket.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.TicketsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

TicketsApi apiInstance = new TicketsApi();
BigDecimal id = new BigDecimal(); // BigDecimal | Ticket ID number.
try {
    ViewTicketResponse result = apiInstance.postTicketInfo(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TicketsApi#postTicketInfo");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **BigDecimal**| Ticket ID number. |

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postTicketsList"></a>
# **postTicketsList**
> Tickets postTicketsList()

Search Support Tickets

Searches support tickets by email, subject, or ticket mask ID.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.TicketsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

TicketsApi apiInstance = new TicketsApi();
try {
    Tickets result = apiInstance.postTicketsList();
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TicketsApi#postTicketsList");
    e.printStackTrace();
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**Tickets**](Tickets.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="putTicketInfo"></a>
# **putTicketInfo**
> ViewTicketResponse putTicketInfo(id)

Update Ticket

Updates a support ticket&#x27;s properties such as subject or status.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.TicketsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

TicketsApi apiInstance = new TicketsApi();
BigDecimal id = new BigDecimal(); // BigDecimal | Ticket ID number.
try {
    ViewTicketResponse result = apiInstance.putTicketInfo(id);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TicketsApi#putTicketInfo");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **BigDecimal**| Ticket ID number. |

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="replyTicket"></a>
# **replyTicket**
> ReplyTicketResponseSchema replyTicket(id, body)

Reply Ticket

Posts a reply to an existing support ticket thread.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.TicketsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

TicketsApi apiInstance = new TicketsApi();
BigDecimal id = new BigDecimal(); // BigDecimal | The ticket ID number.
ReplyTicketRequest body = new ReplyTicketRequest(); // ReplyTicketRequest | 
try {
    ReplyTicketResponseSchema result = apiInstance.replyTicket(id, body);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TicketsApi#replyTicket");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **BigDecimal**| The ticket ID number. |
 **body** | [**ReplyTicketRequest**](ReplyTicketRequest.md)|  | [optional]

### Return type

[**ReplyTicketResponseSchema**](ReplyTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="replyTicket"></a>
# **replyTicket**
> ReplyTicketResponseSchema replyTicket(id, content)

Reply Ticket

Posts a reply to an existing support ticket thread.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.TicketsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

TicketsApi apiInstance = new TicketsApi();
BigDecimal id = new BigDecimal(); // BigDecimal | The ticket ID number.
String content = "content_example"; // String | 
try {
    ReplyTicketResponseSchema result = apiInstance.replyTicket(id, content);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TicketsApi#replyTicket");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **BigDecimal**| The ticket ID number. |
 **content** | **String**|  | [optional]

### Return type

[**ReplyTicketResponseSchema**](ReplyTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="updateTicketInfo"></a>
# **updateTicketInfo**
> UpdateTicketResponseSchema updateTicketInfo(id, body)

Update Ticket

Updates a support ticket&#x27;s subject or body content.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.TicketsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

TicketsApi apiInstance = new TicketsApi();
BigDecimal id = new BigDecimal(); // BigDecimal | The ticket ID number.
UpdateTicket body = new UpdateTicket(); // UpdateTicket | 
try {
    UpdateTicketResponseSchema result = apiInstance.updateTicketInfo(id, body);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TicketsApi#updateTicketInfo");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **BigDecimal**| The ticket ID number. |
 **body** | [**UpdateTicket**](UpdateTicket.md)|  | [optional]

### Return type

[**UpdateTicketResponseSchema**](UpdateTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="updateTicketInfo"></a>
# **updateTicketInfo**
> UpdateTicketResponseSchema updateTicketInfo(id, ip, ipAddress, customerServerAccess, rootPassword, sudoUsername, sudoPassword, port)

Update Ticket

Updates a support ticket&#x27;s subject or body content.

### Example
```java
// Import classes:
//import io.swagger.client.ApiClient;
//import io.swagger.client.ApiException;
//import io.swagger.client.Configuration;
//import io.swagger.client.auth.*;
//import io.swagger.client.api.TicketsApi;

ApiClient defaultClient = Configuration.getDefaultApiClient();

// Configure API key authorization: apiKeyAuth
ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
apiKeyAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdCookieAuth
ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
sessionIdCookieAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.setApiKeyPrefix("Token");

// Configure API key authorization: sessionIdHeaderAuth
ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
sessionIdHeaderAuth.setApiKey("YOUR API KEY");
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.setApiKeyPrefix("Token");

TicketsApi apiInstance = new TicketsApi();
BigDecimal id = new BigDecimal(); // BigDecimal | The ticket ID number.
String ip = "ip_example"; // String | 
String ipAddress = "ipAddress_example"; // String | 
String customerServerAccess = "customerServerAccess_example"; // String | 
String rootPassword = "rootPassword_example"; // String | 
String sudoUsername = "sudoUsername_example"; // String | 
String sudoPassword = "sudoPassword_example"; // String | 
Integer port = 56; // Integer | 
try {
    UpdateTicketResponseSchema result = apiInstance.updateTicketInfo(id, ip, ipAddress, customerServerAccess, rootPassword, sudoUsername, sudoPassword, port);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TicketsApi#updateTicketInfo");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **BigDecimal**| The ticket ID number. |
 **ip** | **String**|  | [optional]
 **ipAddress** | **String**|  | [optional]
 **customerServerAccess** | **String**|  | [optional] [enum: y, n]
 **rootPassword** | **String**|  | [optional]
 **sudoUsername** | **String**|  | [optional]
 **sudoPassword** | **String**|  | [optional]
 **port** | **Integer**|  | [optional]

### Return type

[**UpdateTicketResponseSchema**](UpdateTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth)[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

