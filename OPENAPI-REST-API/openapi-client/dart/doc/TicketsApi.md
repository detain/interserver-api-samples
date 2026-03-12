# openapi.api.TicketsApi

## Load the API package
```dart
import 'package:openapi/api.dart';
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addNewTicket**](TicketsApi.md#addnewticket) | **POST** /tickets/new | Create New Ticket
[**closeTicket**](TicketsApi.md#closeticket) | **GET** /tickets/{id}/close | Close Ticket
[**deleteTicketInfo**](TicketsApi.md#deleteticketinfo) | **DELETE** /tickets/{id} | Close Ticket
[**getNewTicket**](TicketsApi.md#getnewticket) | **GET** /tickets/new | Gets Information for creating a new ticket.
[**getTicketInfo**](TicketsApi.md#getticketinfo) | **GET** /tickets/{id} | Get Ticket Information
[**getTicketsList**](TicketsApi.md#getticketslist) | **GET** /tickets | List Support Tickets
[**postTicketInfo**](TicketsApi.md#postticketinfo) | **POST** /tickets/{id} | Reply To Ticket
[**postTicketsList**](TicketsApi.md#postticketslist) | **POST** /tickets | Search Support Tickets
[**putTicketInfo**](TicketsApi.md#putticketinfo) | **PUT** /tickets/{id} | Update Ticket
[**replyTicket**](TicketsApi.md#replyticket) | **POST** /tickets/{id}/reply | Reply Ticket
[**updateTicketInfo**](TicketsApi.md#updateticketinfo) | **POST** /tickets/{id}/update | Update Ticket


# **addNewTicket**
> TicketNewResponse addNewTicket(ticketNew)

Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = TicketsApi();
final ticketNew = TicketNew(); // TicketNew | 

try {
    final result = api_instance.addNewTicket(ticketNew);
    print(result);
} catch (e) {
    print('Exception when calling TicketsApi->addNewTicket: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ticketNew** | [**TicketNew**](TicketNew.md)|  | 

### Return type

[**TicketNewResponse**](TicketNewResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **closeTicket**
> CloseTicketResponseSchema closeTicket(id)

Close Ticket

Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = TicketsApi();
final id = 1511222; // String | Ticket ID

try {
    final result = api_instance.closeTicket(id);
    print(result);
} catch (e) {
    print('Exception when calling TicketsApi->closeTicket: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| Ticket ID | 

### Return type

[**CloseTicketResponseSchema**](CloseTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteTicketInfo**
> ViewTicketResponse deleteTicketInfo(id)

Close Ticket

Closes the support ticket.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = TicketsApi();
final id = 8.14; // num | Ticket ID number.

try {
    final result = api_instance.deleteTicketInfo(id);
    print(result);
} catch (e) {
    print('Exception when calling TicketsApi->deleteTicketInfo: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **num**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getNewTicket**
> getNewTicket()

Gets Information for creating a new ticket.

Returns the form data needed to create a new support ticket, such as available departments and service categories.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = TicketsApi();

try {
    api_instance.getNewTicket();
} catch (e) {
    print('Exception when calling TicketsApi->getNewTicket: $e\n');
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTicketInfo**
> ViewTicketResponse getTicketInfo(id)

Get Ticket Information

Returns the full details of a support ticket including its history of replies.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = TicketsApi();
final id = 8.14; // num | Ticket ID number.

try {
    final result = api_instance.getTicketInfo(id);
    print(result);
} catch (e) {
    print('Exception when calling TicketsApi->getTicketInfo: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **num**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTicketsList**
> Tickets getTicketsList(page, period, view)

List Support Tickets

Returns a paginated list of support tickets on the account. Filter by status and time period.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = TicketsApi();
final page = 56; // int | Page number for paginated results.
final period = period_example; // String | How far back to show tickets from. Value is in days.
final view = view_example; // String | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.

try {
    final result = api_instance.getTicketsList(page, period, view);
    print(result);
} catch (e) {
    print('Exception when calling TicketsApi->getTicketsList: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **int**| Page number for paginated results. | [optional] [default to 1]
 **period** | **String**| How far back to show tickets from. Value is in days. | [optional] [default to '30']
 **view** | **String**| The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | [optional] 

### Return type

[**Tickets**](Tickets.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postTicketInfo**
> ViewTicketResponse postTicketInfo(id)

Reply To Ticket

Adds a reply to an existing support ticket.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = TicketsApi();
final id = 8.14; // num | Ticket ID number.

try {
    final result = api_instance.postTicketInfo(id);
    print(result);
} catch (e) {
    print('Exception when calling TicketsApi->postTicketInfo: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **num**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postTicketsList**
> Tickets postTicketsList()

Search Support Tickets

Searches support tickets by email, subject, or ticket mask ID.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = TicketsApi();

try {
    final result = api_instance.postTicketsList();
    print(result);
} catch (e) {
    print('Exception when calling TicketsApi->postTicketsList: $e\n');
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **putTicketInfo**
> ViewTicketResponse putTicketInfo(id)

Update Ticket

Updates a support ticket's properties such as subject or status.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = TicketsApi();
final id = 8.14; // num | Ticket ID number.

try {
    final result = api_instance.putTicketInfo(id);
    print(result);
} catch (e) {
    print('Exception when calling TicketsApi->putTicketInfo: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **num**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **replyTicket**
> ReplyTicketResponseSchema replyTicket(id, replyTicketRequest)

Reply Ticket

Posts a reply to an existing support ticket thread.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = TicketsApi();
final id = 8.14; // num | The ticket ID number.
final replyTicketRequest = ReplyTicketRequest(); // ReplyTicketRequest | 

try {
    final result = api_instance.replyTicket(id, replyTicketRequest);
    print(result);
} catch (e) {
    print('Exception when calling TicketsApi->replyTicket: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **num**| The ticket ID number. | 
 **replyTicketRequest** | [**ReplyTicketRequest**](ReplyTicketRequest.md)|  | [optional] 

### Return type

[**ReplyTicketResponseSchema**](ReplyTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateTicketInfo**
> UpdateTicketResponseSchema updateTicketInfo(id, updateTicket)

Update Ticket

Updates a support ticket's subject or body content.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = TicketsApi();
final id = 8.14; // num | The ticket ID number.
final updateTicket = UpdateTicket(); // UpdateTicket | 

try {
    final result = api_instance.updateTicketInfo(id, updateTicket);
    print(result);
} catch (e) {
    print('Exception when calling TicketsApi->updateTicketInfo: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **num**| The ticket ID number. | 
 **updateTicket** | [**UpdateTicket**](UpdateTicket.md)|  | [optional] 

### Return type

[**UpdateTicketResponseSchema**](UpdateTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

