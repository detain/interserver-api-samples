# OpenAPIClient::TicketsApi

## Load the API package
```perl
use OpenAPIClient::Object::TicketsApi;
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_new_ticket**](TicketsApi.md#add_new_ticket) | **POST** /tickets/new | Create New Ticket
[**close_ticket**](TicketsApi.md#close_ticket) | **GET** /tickets/{id}/close | Close Ticket
[**delete_ticket_info**](TicketsApi.md#delete_ticket_info) | **DELETE** /tickets/{id} | Close Ticket
[**get_new_ticket**](TicketsApi.md#get_new_ticket) | **GET** /tickets/new | Gets Information for creating a new ticket.
[**get_ticket_info**](TicketsApi.md#get_ticket_info) | **GET** /tickets/{id} | Get Ticket Information
[**get_tickets_list**](TicketsApi.md#get_tickets_list) | **GET** /tickets | List Support Tickets
[**post_ticket_info**](TicketsApi.md#post_ticket_info) | **POST** /tickets/{id} | Reply To Ticket
[**post_tickets_list**](TicketsApi.md#post_tickets_list) | **POST** /tickets | Search Support Tickets
[**put_ticket_info**](TicketsApi.md#put_ticket_info) | **PUT** /tickets/{id} | Update Ticket
[**reply_ticket**](TicketsApi.md#reply_ticket) | **POST** /tickets/{id}/reply | Reply Ticket
[**update_ticket_info**](TicketsApi.md#update_ticket_info) | **POST** /tickets/{id}/update | Update Ticket


# **add_new_ticket**
> TicketNewResponse add_new_ticket(ticket_new => $ticket_new)

Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::TicketsApi;
my $api_instance = OpenAPIClient::TicketsApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $ticket_new = OpenAPIClient::Object::TicketNew->new(); # TicketNew | 

eval {
    my $result = $api_instance->add_new_ticket(ticket_new => $ticket_new);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling TicketsApi->add_new_ticket: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ticket_new** | [**TicketNew**](TicketNew.md)|  | 

### Return type

[**TicketNewResponse**](TicketNewResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **close_ticket**
> CloseTicketResponseSchema close_ticket(id => $id)

Close Ticket

Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::TicketsApi;
my $api_instance = OpenAPIClient::TicketsApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 1511222; # string | Ticket ID

eval {
    my $result = $api_instance->close_ticket(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling TicketsApi->close_ticket: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| Ticket ID | 

### Return type

[**CloseTicketResponseSchema**](CloseTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_ticket_info**
> ViewTicketResponse delete_ticket_info(id => $id)

Close Ticket

Closes the support ticket.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::TicketsApi;
my $api_instance = OpenAPIClient::TicketsApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 3.4; # double | Ticket ID number.

eval {
    my $result = $api_instance->delete_ticket_info(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling TicketsApi->delete_ticket_info: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **double**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_new_ticket**
> get_new_ticket()

Gets Information for creating a new ticket.

Returns the form data needed to create a new support ticket, such as available departments and service categories.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::TicketsApi;
my $api_instance = OpenAPIClient::TicketsApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    $api_instance->get_new_ticket();
};
if ($@) {
    warn "Exception when calling TicketsApi->get_new_ticket: $@\n";
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

# **get_ticket_info**
> ViewTicketResponse get_ticket_info(id => $id)

Get Ticket Information

Returns the full details of a support ticket including its history of replies.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::TicketsApi;
my $api_instance = OpenAPIClient::TicketsApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 3.4; # double | Ticket ID number.

eval {
    my $result = $api_instance->get_ticket_info(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling TicketsApi->get_ticket_info: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **double**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_tickets_list**
> Tickets get_tickets_list(page => $page, period => $period, view => $view)

List Support Tickets

Returns a paginated list of support tickets on the account. Filter by status and time period.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::TicketsApi;
my $api_instance = OpenAPIClient::TicketsApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $page = 1; # int | Page number for paginated results.
my $period = '30'; # string | How far back to show tickets from. Value is in days.
my $view = "view_example"; # string | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.

eval {
    my $result = $api_instance->get_tickets_list(page => $page, period => $period, view => $view);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling TicketsApi->get_tickets_list: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **int**| Page number for paginated results. | [optional] [default to 1]
 **period** | **string**| How far back to show tickets from. Value is in days. | [optional] [default to &#39;30&#39;]
 **view** | **string**| The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | [optional] 

### Return type

[**Tickets**](Tickets.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_ticket_info**
> ViewTicketResponse post_ticket_info(id => $id)

Reply To Ticket

Adds a reply to an existing support ticket.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::TicketsApi;
my $api_instance = OpenAPIClient::TicketsApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 3.4; # double | Ticket ID number.

eval {
    my $result = $api_instance->post_ticket_info(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling TicketsApi->post_ticket_info: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **double**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_tickets_list**
> Tickets post_tickets_list()

Search Support Tickets

Searches support tickets by email, subject, or ticket mask ID.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::TicketsApi;
my $api_instance = OpenAPIClient::TicketsApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->post_tickets_list();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling TicketsApi->post_tickets_list: $@\n";
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

# **put_ticket_info**
> ViewTicketResponse put_ticket_info(id => $id)

Update Ticket

Updates a support ticket's properties such as subject or status.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::TicketsApi;
my $api_instance = OpenAPIClient::TicketsApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 3.4; # double | Ticket ID number.

eval {
    my $result = $api_instance->put_ticket_info(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling TicketsApi->put_ticket_info: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **double**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **reply_ticket**
> ReplyTicketResponseSchema reply_ticket(id => $id, reply_ticket_request => $reply_ticket_request)

Reply Ticket

Posts a reply to an existing support ticket thread.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::TicketsApi;
my $api_instance = OpenAPIClient::TicketsApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 3.4; # double | The ticket ID number.
my $reply_ticket_request = OpenAPIClient::Object::ReplyTicketRequest->new(); # ReplyTicketRequest | 

eval {
    my $result = $api_instance->reply_ticket(id => $id, reply_ticket_request => $reply_ticket_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling TicketsApi->reply_ticket: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **double**| The ticket ID number. | 
 **reply_ticket_request** | [**ReplyTicketRequest**](ReplyTicketRequest.md)|  | [optional] 

### Return type

[**ReplyTicketResponseSchema**](ReplyTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_ticket_info**
> UpdateTicketResponseSchema update_ticket_info(id => $id, update_ticket => $update_ticket)

Update Ticket

Updates a support ticket's subject or body content.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::TicketsApi;
my $api_instance = OpenAPIClient::TicketsApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $id = 3.4; # double | The ticket ID number.
my $update_ticket = OpenAPIClient::Object::UpdateTicket->new(); # UpdateTicket | 

eval {
    my $result = $api_instance->update_ticket_info(id => $id, update_ticket => $update_ticket);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling TicketsApi->update_ticket_info: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **double**| The ticket ID number. | 
 **update_ticket** | [**UpdateTicket**](UpdateTicket.md)|  | [optional] 

### Return type

[**UpdateTicketResponseSchema**](UpdateTicketResponseSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

