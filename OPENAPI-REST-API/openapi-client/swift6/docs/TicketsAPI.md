# TicketsAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addNewTicket**](TicketsAPI.md#addnewticket) | **POST** /tickets/new | Create New Ticket
[**closeTicket**](TicketsAPI.md#closeticket) | **GET** /tickets/{id}/close | Close Ticket
[**deleteTicketInfo**](TicketsAPI.md#deleteticketinfo) | **DELETE** /tickets/{id} | Close Ticket
[**getNewTicket**](TicketsAPI.md#getnewticket) | **GET** /tickets/new | Gets Information for creating a new ticket.
[**getTicketInfo**](TicketsAPI.md#getticketinfo) | **GET** /tickets/{id} | Get Ticket Information
[**getTicketsList**](TicketsAPI.md#getticketslist) | **GET** /tickets | List Support Tickets
[**postTicketInfo**](TicketsAPI.md#postticketinfo) | **POST** /tickets/{id} | Reply To Ticket
[**postTicketsList**](TicketsAPI.md#postticketslist) | **POST** /tickets | Search Support Tickets
[**putTicketInfo**](TicketsAPI.md#putticketinfo) | **PUT** /tickets/{id} | Update Ticket
[**replyTicket**](TicketsAPI.md#replyticket) | **POST** /tickets/{id}/reply | Reply Ticket
[**updateTicketInfo**](TicketsAPI.md#updateticketinfo) | **POST** /tickets/{id}/update | Update Ticket


# **addNewTicket**
```swift
    open class func addNewTicket(ticketNew: TicketNew, completion: @escaping (_ data: TicketNewResponse?, _ error: Error?) -> Void)
```

Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let ticketNew = TicketNew(subject: "subject_example", body: "body_example", serviceId: 123, serviceModule: "serviceModule_example") // TicketNew | 

// Create New Ticket
TicketsAPI.addNewTicket(ticketNew: ticketNew) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
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

# **closeTicket**
```swift
    open class func closeTicket(id: String, completion: @escaping (_ data: CloseTicketResponseSchema?, _ error: Error?) -> Void)
```

Close Ticket

Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = "id_example" // String | Ticket ID

// Close Ticket
TicketsAPI.closeTicket(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String** | Ticket ID | 

### Return type

[**CloseTicketResponseSchema**](CloseTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteTicketInfo**
```swift
    open class func deleteTicketInfo(id: Double, completion: @escaping (_ data: ViewTicketResponse?, _ error: Error?) -> Void)
```

Close Ticket

Closes the support ticket.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Double | Ticket ID number.

// Close Ticket
TicketsAPI.deleteTicketInfo(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Double** | Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getNewTicket**
```swift
    open class func getNewTicket(completion: @escaping (_ data: Void?, _ error: Error?) -> Void)
```

Gets Information for creating a new ticket.

Returns the form data needed to create a new support ticket, such as available departments and service categories.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Gets Information for creating a new ticket.
TicketsAPI.getNewTicket() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

Void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTicketInfo**
```swift
    open class func getTicketInfo(id: Double, completion: @escaping (_ data: ViewTicketResponse?, _ error: Error?) -> Void)
```

Get Ticket Information

Returns the full details of a support ticket including its history of replies.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Double | Ticket ID number.

// Get Ticket Information
TicketsAPI.getTicketInfo(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Double** | Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTicketsList**
```swift
    open class func getTicketsList(page: Int? = nil, period: Period_getTicketsList? = nil, view: View_getTicketsList? = nil, completion: @escaping (_ data: Tickets?, _ error: Error?) -> Void)
```

List Support Tickets

Returns a paginated list of support tickets on the account. Filter by status and time period.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let page = 987 // Int | Page number for paginated results. (optional) (default to 1)
let period = "period_example" // String | How far back to show tickets from. Value is in days. (optional) (default to ._30)
let view = "view_example" // String | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. (optional)

// List Support Tickets
TicketsAPI.getTicketsList(page: page, period: period, view: view) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **Int** | Page number for paginated results. | [optional] [default to 1]
 **period** | **String** | How far back to show tickets from. Value is in days. | [optional] [default to ._30]
 **view** | **String** | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | [optional] 

### Return type

[**Tickets**](Tickets.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postTicketInfo**
```swift
    open class func postTicketInfo(id: Double, completion: @escaping (_ data: ViewTicketResponse?, _ error: Error?) -> Void)
```

Reply To Ticket

Adds a reply to an existing support ticket.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Double | Ticket ID number.

// Reply To Ticket
TicketsAPI.postTicketInfo(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Double** | Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postTicketsList**
```swift
    open class func postTicketsList(completion: @escaping (_ data: Tickets?, _ error: Error?) -> Void)
```

Search Support Tickets

Searches support tickets by email, subject, or ticket mask ID.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Search Support Tickets
TicketsAPI.postTicketsList() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
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
```swift
    open class func putTicketInfo(id: Double, completion: @escaping (_ data: ViewTicketResponse?, _ error: Error?) -> Void)
```

Update Ticket

Updates a support ticket's properties such as subject or status.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Double | Ticket ID number.

// Update Ticket
TicketsAPI.putTicketInfo(id: id) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Double** | Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **replyTicket**
```swift
    open class func replyTicket(id: Double, replyTicketRequest: ReplyTicketRequest? = nil, completion: @escaping (_ data: ReplyTicketResponseSchema?, _ error: Error?) -> Void)
```

Reply Ticket

Posts a reply to an existing support ticket thread.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Double | The ticket ID number.
let replyTicketRequest = ReplyTicketRequest(content: "content_example") // ReplyTicketRequest |  (optional)

// Reply Ticket
TicketsAPI.replyTicket(id: id, replyTicketRequest: replyTicketRequest) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Double** | The ticket ID number. | 
 **replyTicketRequest** | [**ReplyTicketRequest**](ReplyTicketRequest.md) |  | [optional] 

### Return type

[**ReplyTicketResponseSchema**](ReplyTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateTicketInfo**
```swift
    open class func updateTicketInfo(id: Double, updateTicket: UpdateTicket? = nil, completion: @escaping (_ data: UpdateTicketResponseSchema?, _ error: Error?) -> Void)
```

Update Ticket

Updates a support ticket's subject or body content.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let id = 987 // Double | The ticket ID number.
let updateTicket = UpdateTicket(ip: "ip_example", ipAddress: "ipAddress_example", customerServerAccess: "customerServerAccess_example", rootPassword: "rootPassword_example", sudoUsername: "sudoUsername_example", sudoPassword: "sudoPassword_example", port: 123) // UpdateTicket |  (optional)

// Update Ticket
TicketsAPI.updateTicketInfo(id: id, updateTicket: updateTicket) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Double** | The ticket ID number. | 
 **updateTicket** | [**UpdateTicket**](UpdateTicket.md) |  | [optional] 

### Return type

[**UpdateTicketResponseSchema**](UpdateTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

