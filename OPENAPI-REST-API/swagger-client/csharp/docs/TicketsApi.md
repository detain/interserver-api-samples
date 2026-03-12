# Interserver.MyAdmin.Client.Api.TicketsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddNewTicket**](TicketsApi.md#addnewticket) | **POST** /tickets/new | Create New Ticket
[**CloseTicket**](TicketsApi.md#closeticket) | **GET** /tickets/{id}/close | Close Ticket
[**DeleteTicketInfo**](TicketsApi.md#deleteticketinfo) | **DELETE** /tickets/{id} | Close Ticket
[**GetNewTicket**](TicketsApi.md#getnewticket) | **GET** /tickets/new | Gets Information for creating a new ticket.
[**GetTicketInfo**](TicketsApi.md#getticketinfo) | **GET** /tickets/{id} | Get Ticket Information
[**GetTicketsList**](TicketsApi.md#getticketslist) | **GET** /tickets | List Support Tickets
[**PostTicketInfo**](TicketsApi.md#postticketinfo) | **POST** /tickets/{id} | Reply To Ticket
[**PostTicketsList**](TicketsApi.md#postticketslist) | **POST** /tickets | Search Support Tickets
[**PutTicketInfo**](TicketsApi.md#putticketinfo) | **PUT** /tickets/{id} | Update Ticket
[**ReplyTicket**](TicketsApi.md#replyticket) | **POST** /tickets/{id}/reply | Reply Ticket
[**UpdateTicketInfo**](TicketsApi.md#updateticketinfo) | **POST** /tickets/{id}/update | Update Ticket

<a name="addnewticket"></a>
# **AddNewTicket**
> TicketNewResponse AddNewTicket (TicketNew body)

Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class AddNewTicketExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new TicketsApi();
            var body = new TicketNew(); // TicketNew | 

            try
            {
                // Create New Ticket
                TicketNewResponse result = apiInstance.AddNewTicket(body);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling TicketsApi.AddNewTicket: " + e.Message );
            }
        }
    }
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="closeticket"></a>
# **CloseTicket**
> CloseTicketResponseSchema CloseTicket (string id)

Close Ticket

Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class CloseTicketExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new TicketsApi();
            var id = id_example;  // string | Ticket ID

            try
            {
                // Close Ticket
                CloseTicketResponseSchema result = apiInstance.CloseTicket(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling TicketsApi.CloseTicket: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| Ticket ID | 

### Return type

[**CloseTicketResponseSchema**](CloseTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="deleteticketinfo"></a>
# **DeleteTicketInfo**
> ViewTicketResponse DeleteTicketInfo (decimal? id)

Close Ticket

Closes the support ticket.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class DeleteTicketInfoExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new TicketsApi();
            var id = 1.2;  // decimal? | Ticket ID number.

            try
            {
                // Close Ticket
                ViewTicketResponse result = apiInstance.DeleteTicketInfo(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling TicketsApi.DeleteTicketInfo: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **decimal?**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getnewticket"></a>
# **GetNewTicket**
> void GetNewTicket ()

Gets Information for creating a new ticket.

Returns the form data needed to create a new support ticket, such as available departments and service categories.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetNewTicketExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new TicketsApi();

            try
            {
                // Gets Information for creating a new ticket.
                apiInstance.GetNewTicket();
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling TicketsApi.GetNewTicket: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getticketinfo"></a>
# **GetTicketInfo**
> ViewTicketResponse GetTicketInfo (decimal? id)

Get Ticket Information

Returns the full details of a support ticket including its history of replies.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetTicketInfoExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new TicketsApi();
            var id = 1.2;  // decimal? | Ticket ID number.

            try
            {
                // Get Ticket Information
                ViewTicketResponse result = apiInstance.GetTicketInfo(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling TicketsApi.GetTicketInfo: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **decimal?**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getticketslist"></a>
# **GetTicketsList**
> Tickets GetTicketsList (int? page = null, string period = null, string view = null)

List Support Tickets

Returns a paginated list of support tickets on the account. Filter by status and time period.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetTicketsListExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new TicketsApi();
            var page = 56;  // int? | Page number for paginated results. (optional)  (default to 1)
            var period = period_example;  // string | How far back to show tickets from. Value is in days. (optional)  (default to 30)
            var view = view_example;  // string | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. (optional) 

            try
            {
                // List Support Tickets
                Tickets result = apiInstance.GetTicketsList(page, period, view);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling TicketsApi.GetTicketsList: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **int?**| Page number for paginated results. | [optional] [default to 1]
 **period** | **string**| How far back to show tickets from. Value is in days. | [optional] [default to 30]
 **view** | **string**| The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | [optional] 

### Return type

[**Tickets**](Tickets.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="postticketinfo"></a>
# **PostTicketInfo**
> ViewTicketResponse PostTicketInfo (decimal? id)

Reply To Ticket

Adds a reply to an existing support ticket.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class PostTicketInfoExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new TicketsApi();
            var id = 1.2;  // decimal? | Ticket ID number.

            try
            {
                // Reply To Ticket
                ViewTicketResponse result = apiInstance.PostTicketInfo(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling TicketsApi.PostTicketInfo: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **decimal?**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="postticketslist"></a>
# **PostTicketsList**
> Tickets PostTicketsList ()

Search Support Tickets

Searches support tickets by email, subject, or ticket mask ID.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class PostTicketsListExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new TicketsApi();

            try
            {
                // Search Support Tickets
                Tickets result = apiInstance.PostTicketsList();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling TicketsApi.PostTicketsList: " + e.Message );
            }
        }
    }
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="putticketinfo"></a>
# **PutTicketInfo**
> ViewTicketResponse PutTicketInfo (decimal? id)

Update Ticket

Updates a support ticket's properties such as subject or status.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class PutTicketInfoExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new TicketsApi();
            var id = 1.2;  // decimal? | Ticket ID number.

            try
            {
                // Update Ticket
                ViewTicketResponse result = apiInstance.PutTicketInfo(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling TicketsApi.PutTicketInfo: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **decimal?**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="replyticket"></a>
# **ReplyTicket**
> ReplyTicketResponseSchema ReplyTicket (decimal? id, ReplyTicketRequest body = null)

Reply Ticket

Posts a reply to an existing support ticket thread.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class ReplyTicketExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new TicketsApi();
            var id = 1.2;  // decimal? | The ticket ID number.
            var body = new ReplyTicketRequest(); // ReplyTicketRequest |  (optional) 

            try
            {
                // Reply Ticket
                ReplyTicketResponseSchema result = apiInstance.ReplyTicket(id, body);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling TicketsApi.ReplyTicket: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **decimal?**| The ticket ID number. | 
 **body** | [**ReplyTicketRequest**](ReplyTicketRequest.md)|  | [optional] 

### Return type

[**ReplyTicketResponseSchema**](ReplyTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="updateticketinfo"></a>
# **UpdateTicketInfo**
> UpdateTicketResponseSchema UpdateTicketInfo (decimal? id, UpdateTicket body = null)

Update Ticket

Updates a support ticket's subject or body content.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class UpdateTicketInfoExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new TicketsApi();
            var id = 1.2;  // decimal? | The ticket ID number.
            var body = new UpdateTicket(); // UpdateTicket |  (optional) 

            try
            {
                // Update Ticket
                UpdateTicketResponseSchema result = apiInstance.UpdateTicketInfo(id, body);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling TicketsApi.UpdateTicketInfo: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **decimal?**| The ticket ID number. | 
 **body** | [**UpdateTicket**](UpdateTicket.md)|  | [optional] 

### Return type

[**UpdateTicketResponseSchema**](UpdateTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
