# InterServerManagementApi.TicketsApi

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
> TicketNewResponse addNewTicket(body, subject, body, service_id, service_module)

Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.TicketsApi();
let body = new InterServerManagementApi.TicketNew(); // TicketNew | 
let subject = "subject_example"; // String | 
let body = "body_example"; // String | 
let service_id = 56; // Number | 
let service_module = "service_module_example"; // String | 

apiInstance.addNewTicket(body, subject, body, service_id, service_module, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TicketNew**](TicketNew.md)|  | 
 **subject** | **String**|  | 
 **body** | **String**|  | 
 **service_id** | **Number**|  | 
 **service_module** | **String**|  | 

### Return type

[**TicketNewResponse**](TicketNewResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="closeTicket"></a>
# **closeTicket**
> CloseTicketResponseSchema closeTicket(id)

Close Ticket

Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.TicketsApi();
let id = "id_example"; // String | Ticket ID

apiInstance.closeTicket(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| Ticket ID | 

### Return type

[**CloseTicketResponseSchema**](CloseTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteTicketInfo"></a>
# **deleteTicketInfo**
> ViewTicketResponse deleteTicketInfo(id)

Close Ticket

Closes the support ticket.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.TicketsApi();
let id = 1.2; // Number | Ticket ID number.

apiInstance.deleteTicketInfo(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getNewTicket"></a>
# **getNewTicket**
> getNewTicket()

Gets Information for creating a new ticket.

Returns the form data needed to create a new support ticket, such as available departments and service categories.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.TicketsApi();
apiInstance.getNewTicket((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getTicketInfo"></a>
# **getTicketInfo**
> ViewTicketResponse getTicketInfo(id)

Get Ticket Information

Returns the full details of a support ticket including its history of replies.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.TicketsApi();
let id = 1.2; // Number | Ticket ID number.

apiInstance.getTicketInfo(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getTicketsList"></a>
# **getTicketsList**
> Tickets getTicketsList(opts)

List Support Tickets

Returns a paginated list of support tickets on the account. Filter by status and time period.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.TicketsApi();
let opts = { 
  'page': 1, // Number | Page number for paginated results.
  'period': "30", // String | How far back to show tickets from. Value is in days.
  'view': "view_example" // String | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
};
apiInstance.getTicketsList(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **Number**| Page number for paginated results. | [optional] [default to 1]
 **period** | **String**| How far back to show tickets from. Value is in days. | [optional] [default to 30]
 **view** | **String**| The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | [optional] 

### Return type

[**Tickets**](Tickets.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postTicketInfo"></a>
# **postTicketInfo**
> ViewTicketResponse postTicketInfo(id)

Reply To Ticket

Adds a reply to an existing support ticket.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.TicketsApi();
let id = 1.2; // Number | Ticket ID number.

apiInstance.postTicketInfo(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postTicketsList"></a>
# **postTicketsList**
> Tickets postTicketsList()

Search Support Tickets

Searches support tickets by email, subject, or ticket mask ID.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.TicketsApi();
apiInstance.postTicketsList((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**Tickets**](Tickets.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="putTicketInfo"></a>
# **putTicketInfo**
> ViewTicketResponse putTicketInfo(id)

Update Ticket

Updates a support ticket&#x27;s properties such as subject or status.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.TicketsApi();
let id = 1.2; // Number | Ticket ID number.

apiInstance.putTicketInfo(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="replyTicket"></a>
# **replyTicket**
> ReplyTicketResponseSchema replyTicket(id, opts)

Reply Ticket

Posts a reply to an existing support ticket thread.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.TicketsApi();
let id = 1.2; // Number | The ticket ID number.
let opts = { 
  'body': new InterServerManagementApi.ReplyTicketRequest(), // ReplyTicketRequest | 
  'content': "content_example" // String | 
};
apiInstance.replyTicket(id, opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The ticket ID number. | 
 **body** | [**ReplyTicketRequest**](ReplyTicketRequest.md)|  | [optional] 
 **content** | **String**|  | [optional] 

### Return type

[**ReplyTicketResponseSchema**](ReplyTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="updateTicketInfo"></a>
# **updateTicketInfo**
> UpdateTicketResponseSchema updateTicketInfo(id, opts)

Update Ticket

Updates a support ticket&#x27;s subject or body content.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.TicketsApi();
let id = 1.2; // Number | The ticket ID number.
let opts = { 
  'body': new InterServerManagementApi.UpdateTicket(), // UpdateTicket | 
  'ip': "ip_example", // String | 
  'ip_address': "ip_address_example", // String | 
  'customer_server_access': "customer_server_access_example", // String | 
  'root_password': "root_password_example", // String | 
  'sudo_username': "sudo_username_example", // String | 
  'sudo_password': "sudo_password_example", // String | 
  'port': 56 // Number | 
};
apiInstance.updateTicketInfo(id, opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The ticket ID number. | 
 **body** | [**UpdateTicket**](UpdateTicket.md)|  | [optional] 
 **ip** | **String**|  | [optional] 
 **ip_address** | **String**|  | [optional] 
 **customer_server_access** | **String**|  | [optional] 
 **root_password** | **String**|  | [optional] 
 **sudo_username** | **String**|  | [optional] 
 **sudo_password** | **String**|  | [optional] 
 **port** | **Number**|  | [optional] 

### Return type

[**UpdateTicketResponseSchema**](UpdateTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

