# SwaggerClient::TicketsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_new_ticket**](TicketsApi.md#add_new_ticket) | **POST** /tickets/new | Create New Ticket
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
[**reply_ticket**](TicketsApi.md#reply_ticket) | **POST** /tickets/{id}/reply | Reply Ticket
[**update_ticket_info**](TicketsApi.md#update_ticket_info) | **POST** /tickets/{id}/update | Update Ticket
[**update_ticket_info**](TicketsApi.md#update_ticket_info) | **POST** /tickets/{id}/update | Update Ticket

# **add_new_ticket**
> TicketNewResponse add_new_ticket(body)

Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::TicketsApi.new
body = SwaggerClient::TicketNew.new # TicketNew | 


begin
  #Create New Ticket
  result = api_instance.add_new_ticket(body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling TicketsApi->add_new_ticket: #{e}"
end
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



# **add_new_ticket**
> TicketNewResponse add_new_ticket(subjectbodyservice_idservice_module)

Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::TicketsApi.new
subject = 'subject_example' # String | 
body = 'body_example' # String | 
service_id = 56 # Integer | 
service_module = 'service_module_example' # String | 


begin
  #Create New Ticket
  result = api_instance.add_new_ticket(subjectbodyservice_idservice_module)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling TicketsApi->add_new_ticket: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **subject** | **String**|  | 
 **body** | **String**|  | 
 **service_id** | **Integer**|  | 
 **service_module** | **String**|  | 

### Return type

[**TicketNewResponse**](TicketNewResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **close_ticket**
> CloseTicketResponseSchema close_ticket(id)

Close Ticket

Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::TicketsApi.new
id = 'id_example' # String | Ticket ID


begin
  #Close Ticket
  result = api_instance.close_ticket(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling TicketsApi->close_ticket: #{e}"
end
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



# **delete_ticket_info**
> ViewTicketResponse delete_ticket_info(id)

Close Ticket

Closes the support ticket.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::TicketsApi.new
id = SwaggerClient::BigDecimal.new # BigDecimal | Ticket ID number.


begin
  #Close Ticket
  result = api_instance.delete_ticket_info(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling TicketsApi->delete_ticket_info: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **BigDecimal**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_new_ticket**
> get_new_ticket

Gets Information for creating a new ticket.

Returns the form data needed to create a new support ticket, such as available departments and service categories.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::TicketsApi.new

begin
  #Gets Information for creating a new ticket.
  api_instance.get_new_ticket
rescue SwaggerClient::ApiError => e
  puts "Exception when calling TicketsApi->get_new_ticket: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

nil (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_ticket_info**
> ViewTicketResponse get_ticket_info(id)

Get Ticket Information

Returns the full details of a support ticket including its history of replies.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::TicketsApi.new
id = SwaggerClient::BigDecimal.new # BigDecimal | Ticket ID number.


begin
  #Get Ticket Information
  result = api_instance.get_ticket_info(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling TicketsApi->get_ticket_info: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **BigDecimal**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_tickets_list**
> Tickets get_tickets_list(opts)

List Support Tickets

Returns a paginated list of support tickets on the account. Filter by status and time period.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::TicketsApi.new
opts = { 
  page: 1, # Integer | Page number for paginated results.
  period: '30', # String | How far back to show tickets from. Value is in days.
  view: 'view_example' # String | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
}

begin
  #List Support Tickets
  result = api_instance.get_tickets_list(opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling TicketsApi->get_tickets_list: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **Integer**| Page number for paginated results. | [optional] [default to 1]
 **period** | **String**| How far back to show tickets from. Value is in days. | [optional] [default to 30]
 **view** | **String**| The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | [optional] 

### Return type

[**Tickets**](Tickets.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **post_ticket_info**
> ViewTicketResponse post_ticket_info(id)

Reply To Ticket

Adds a reply to an existing support ticket.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::TicketsApi.new
id = SwaggerClient::BigDecimal.new # BigDecimal | Ticket ID number.


begin
  #Reply To Ticket
  result = api_instance.post_ticket_info(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling TicketsApi->post_ticket_info: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **BigDecimal**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **post_tickets_list**
> Tickets post_tickets_list

Search Support Tickets

Searches support tickets by email, subject, or ticket mask ID.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::TicketsApi.new

begin
  #Search Support Tickets
  result = api_instance.post_tickets_list
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling TicketsApi->post_tickets_list: #{e}"
end
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



# **put_ticket_info**
> ViewTicketResponse put_ticket_info(id)

Update Ticket

Updates a support ticket's properties such as subject or status.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::TicketsApi.new
id = SwaggerClient::BigDecimal.new # BigDecimal | Ticket ID number.


begin
  #Update Ticket
  result = api_instance.put_ticket_info(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling TicketsApi->put_ticket_info: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **BigDecimal**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **reply_ticket**
> ReplyTicketResponseSchema reply_ticket(id, opts)

Reply Ticket

Posts a reply to an existing support ticket thread.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::TicketsApi.new
id = SwaggerClient::BigDecimal.new # BigDecimal | The ticket ID number.
opts = { 
  body: SwaggerClient::ReplyTicketRequest.new # ReplyTicketRequest | 
}

begin
  #Reply Ticket
  result = api_instance.reply_ticket(id, opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling TicketsApi->reply_ticket: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **BigDecimal**| The ticket ID number. | 
 **body** | [**ReplyTicketRequest**](ReplyTicketRequest.md)|  | [optional] 

### Return type

[**ReplyTicketResponseSchema**](ReplyTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **reply_ticket**
> ReplyTicketResponseSchema reply_ticket(id, opts)

Reply Ticket

Posts a reply to an existing support ticket thread.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::TicketsApi.new
id = SwaggerClient::BigDecimal.new # BigDecimal | The ticket ID number.
opts = { 
  content: 'content_example' # String | 
}

begin
  #Reply Ticket
  result = api_instance.reply_ticket(id, opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling TicketsApi->reply_ticket: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **BigDecimal**| The ticket ID number. | 
 **content** | **String**|  | [optional] 

### Return type

[**ReplyTicketResponseSchema**](ReplyTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **update_ticket_info**
> UpdateTicketResponseSchema update_ticket_info(id, opts)

Update Ticket

Updates a support ticket's subject or body content.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::TicketsApi.new
id = SwaggerClient::BigDecimal.new # BigDecimal | The ticket ID number.
opts = { 
  body: SwaggerClient::UpdateTicket.new # UpdateTicket | 
}

begin
  #Update Ticket
  result = api_instance.update_ticket_info(id, opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling TicketsApi->update_ticket_info: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **BigDecimal**| The ticket ID number. | 
 **body** | [**UpdateTicket**](UpdateTicket.md)|  | [optional] 

### Return type

[**UpdateTicketResponseSchema**](UpdateTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **update_ticket_info**
> UpdateTicketResponseSchema update_ticket_info(id, opts)

Update Ticket

Updates a support ticket's subject or body content.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::TicketsApi.new
id = SwaggerClient::BigDecimal.new # BigDecimal | The ticket ID number.
opts = { 
  ip: 'ip_example' # String | 
  ip_address: 'ip_address_example' # String | 
  customer_server_access: 'customer_server_access_example' # String | 
  root_password: 'root_password_example' # String | 
  sudo_username: 'sudo_username_example' # String | 
  sudo_password: 'sudo_password_example' # String | 
  port: 56 # Integer | 
}

begin
  #Update Ticket
  result = api_instance.update_ticket_info(id, opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling TicketsApi->update_ticket_info: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **BigDecimal**| The ticket ID number. | 
 **ip** | **String**|  | [optional] 
 **ip_address** | **String**|  | [optional] 
 **customer_server_access** | **String**|  | [optional] 
 **root_password** | **String**|  | [optional] 
 **sudo_username** | **String**|  | [optional] 
 **sudo_password** | **String**|  | [optional] 
 **port** | **Integer**|  | [optional] 

### Return type

[**UpdateTicketResponseSchema**](UpdateTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



