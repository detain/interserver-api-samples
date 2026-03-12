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
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = TicketsApi()
val body : TicketNew =  // TicketNew | 
try {
    val result : TicketNewResponse = apiInstance.addNewTicket(body)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TicketsApi#addNewTicket")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TicketsApi#addNewTicket")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TicketNew**](TicketNew.md)|  |

### Return type

[**TicketNewResponse**](TicketNewResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="addNewTicket"></a>
# **addNewTicket**
> TicketNewResponse addNewTicket(subject, body, serviceId, serviceModule)

Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = TicketsApi()
val subject : kotlin.String = subject_example // kotlin.String | 
val body : kotlin.String = body_example // kotlin.String | 
val serviceId : kotlin.Int = 56 // kotlin.Int | 
val serviceModule : kotlin.String = serviceModule_example // kotlin.String | 
try {
    val result : TicketNewResponse = apiInstance.addNewTicket(subject, body, serviceId, serviceModule)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TicketsApi#addNewTicket")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TicketsApi#addNewTicket")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **subject** | **kotlin.String**|  |
 **body** | **kotlin.String**|  |
 **serviceId** | **kotlin.Int**|  |
 **serviceModule** | **kotlin.String**|  |

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
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = TicketsApi()
val id : kotlin.String = id_example // kotlin.String | Ticket ID
try {
    val result : CloseTicketResponseSchema = apiInstance.closeTicket(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TicketsApi#closeTicket")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TicketsApi#closeTicket")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.String**| Ticket ID |

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
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = TicketsApi()
val id : java.math.BigDecimal = 1.2 // java.math.BigDecimal | Ticket ID number.
try {
    val result : ViewTicketResponse = apiInstance.deleteTicketInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TicketsApi#deleteTicketInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TicketsApi#deleteTicketInfo")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **java.math.BigDecimal**| Ticket ID number. |

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
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = TicketsApi()
try {
    apiInstance.getNewTicket()
} catch (e: ClientException) {
    println("4xx response calling TicketsApi#getNewTicket")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TicketsApi#getNewTicket")
    e.printStackTrace()
}
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
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = TicketsApi()
val id : java.math.BigDecimal = 1.2 // java.math.BigDecimal | Ticket ID number.
try {
    val result : ViewTicketResponse = apiInstance.getTicketInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TicketsApi#getTicketInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TicketsApi#getTicketInfo")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **java.math.BigDecimal**| Ticket ID number. |

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getTicketsList"></a>
# **getTicketsList**
> Tickets getTicketsList(page, period, view)

List Support Tickets

Returns a paginated list of support tickets on the account. Filter by status and time period.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = TicketsApi()
val page : kotlin.Int = 56 // kotlin.Int | Page number for paginated results.
val period : kotlin.String = period_example // kotlin.String | How far back to show tickets from. Value is in days.
val view : kotlin.String = view_example // kotlin.String | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
try {
    val result : Tickets = apiInstance.getTicketsList(page, period, view)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TicketsApi#getTicketsList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TicketsApi#getTicketsList")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **kotlin.Int**| Page number for paginated results. | [optional] [default to 1]
 **period** | **kotlin.String**| How far back to show tickets from. Value is in days. | [optional] [default to 30] [enum: 30, 90, 365, 1825, all]
 **view** | **kotlin.String**| The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | [optional] [enum: Open, Closed, On Hold, In Progress]

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
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = TicketsApi()
val id : java.math.BigDecimal = 1.2 // java.math.BigDecimal | Ticket ID number.
try {
    val result : ViewTicketResponse = apiInstance.postTicketInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TicketsApi#postTicketInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TicketsApi#postTicketInfo")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **java.math.BigDecimal**| Ticket ID number. |

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
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = TicketsApi()
try {
    val result : Tickets = apiInstance.postTicketsList()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TicketsApi#postTicketsList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TicketsApi#postTicketsList")
    e.printStackTrace()
}
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
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = TicketsApi()
val id : java.math.BigDecimal = 1.2 // java.math.BigDecimal | Ticket ID number.
try {
    val result : ViewTicketResponse = apiInstance.putTicketInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TicketsApi#putTicketInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TicketsApi#putTicketInfo")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **java.math.BigDecimal**| Ticket ID number. |

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="replyTicket"></a>
# **replyTicket**
> ReplyTicketResponseSchema replyTicket(id, body)

Reply Ticket

Posts a reply to an existing support ticket thread.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = TicketsApi()
val id : java.math.BigDecimal = 1.2 // java.math.BigDecimal | The ticket ID number.
val body : ReplyTicketRequest =  // ReplyTicketRequest | 
try {
    val result : ReplyTicketResponseSchema = apiInstance.replyTicket(id, body)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TicketsApi#replyTicket")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TicketsApi#replyTicket")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **java.math.BigDecimal**| The ticket ID number. |
 **body** | [**ReplyTicketRequest**](ReplyTicketRequest.md)|  | [optional]

### Return type

[**ReplyTicketResponseSchema**](ReplyTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="replyTicket"></a>
# **replyTicket**
> ReplyTicketResponseSchema replyTicket(id, content)

Reply Ticket

Posts a reply to an existing support ticket thread.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = TicketsApi()
val id : java.math.BigDecimal = 1.2 // java.math.BigDecimal | The ticket ID number.
val content : kotlin.String = content_example // kotlin.String | 
try {
    val result : ReplyTicketResponseSchema = apiInstance.replyTicket(id, content)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TicketsApi#replyTicket")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TicketsApi#replyTicket")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **java.math.BigDecimal**| The ticket ID number. |
 **content** | **kotlin.String**|  | [optional]

### Return type

[**ReplyTicketResponseSchema**](ReplyTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="updateTicketInfo"></a>
# **updateTicketInfo**
> UpdateTicketResponseSchema updateTicketInfo(id, body)

Update Ticket

Updates a support ticket&#x27;s subject or body content.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = TicketsApi()
val id : java.math.BigDecimal = 1.2 // java.math.BigDecimal | The ticket ID number.
val body : UpdateTicket =  // UpdateTicket | 
try {
    val result : UpdateTicketResponseSchema = apiInstance.updateTicketInfo(id, body)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TicketsApi#updateTicketInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TicketsApi#updateTicketInfo")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **java.math.BigDecimal**| The ticket ID number. |
 **body** | [**UpdateTicket**](UpdateTicket.md)|  | [optional]

### Return type

[**UpdateTicketResponseSchema**](UpdateTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="updateTicketInfo"></a>
# **updateTicketInfo**
> UpdateTicketResponseSchema updateTicketInfo(id, ip, ipAddress, customerServerAccess, rootPassword, sudoUsername, sudoPassword, port)

Update Ticket

Updates a support ticket&#x27;s subject or body content.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = TicketsApi()
val id : java.math.BigDecimal = 1.2 // java.math.BigDecimal | The ticket ID number.
val ip : kotlin.String = ip_example // kotlin.String | 
val ipAddress : kotlin.String = ipAddress_example // kotlin.String | 
val customerServerAccess : kotlin.String = customerServerAccess_example // kotlin.String | 
val rootPassword : kotlin.String = rootPassword_example // kotlin.String | 
val sudoUsername : kotlin.String = sudoUsername_example // kotlin.String | 
val sudoPassword : kotlin.String = sudoPassword_example // kotlin.String | 
val port : kotlin.Int = 56 // kotlin.Int | 
try {
    val result : UpdateTicketResponseSchema = apiInstance.updateTicketInfo(id, ip, ipAddress, customerServerAccess, rootPassword, sudoUsername, sudoPassword, port)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TicketsApi#updateTicketInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TicketsApi#updateTicketInfo")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **java.math.BigDecimal**| The ticket ID number. |
 **ip** | **kotlin.String**|  | [optional]
 **ipAddress** | **kotlin.String**|  | [optional]
 **customerServerAccess** | **kotlin.String**|  | [optional] [enum: y, n]
 **rootPassword** | **kotlin.String**|  | [optional]
 **sudoUsername** | **kotlin.String**|  | [optional]
 **sudoPassword** | **kotlin.String**|  | [optional]
 **port** | **kotlin.Int**|  | [optional]

### Return type

[**UpdateTicketResponseSchema**](UpdateTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

