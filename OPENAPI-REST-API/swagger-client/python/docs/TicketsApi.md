# myadmin-client-python.TicketsApi

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
> TicketNewResponse add_new_ticket(body)

Create New Ticket

Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.TicketsApi(myadmin-client-python.ApiClient(configuration))
body = myadmin-client-python.TicketNew() # TicketNew | 

try:
    # Create New Ticket
    api_response = api_instance.add_new_ticket(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling TicketsApi->add_new_ticket: %s\n" % e)
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

# **close_ticket**
> CloseTicketResponseSchema close_ticket(id)

Close Ticket

Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.TicketsApi(myadmin-client-python.ApiClient(configuration))
id = 'id_example' # str | Ticket ID

try:
    # Close Ticket
    api_response = api_instance.close_ticket(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling TicketsApi->close_ticket: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**| Ticket ID | 

### Return type

[**CloseTicketResponseSchema**](CloseTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_ticket_info**
> ViewTicketResponse delete_ticket_info(id)

Close Ticket

Closes the support ticket.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.TicketsApi(myadmin-client-python.ApiClient(configuration))
id = 1.2 # float | Ticket ID number.

try:
    # Close Ticket
    api_response = api_instance.delete_ticket_info(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling TicketsApi->delete_ticket_info: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **float**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_new_ticket**
> get_new_ticket()

Gets Information for creating a new ticket.

Returns the form data needed to create a new support ticket, such as available departments and service categories.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.TicketsApi(myadmin-client-python.ApiClient(configuration))

try:
    # Gets Information for creating a new ticket.
    api_instance.get_new_ticket()
except ApiException as e:
    print("Exception when calling TicketsApi->get_new_ticket: %s\n" % e)
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

# **get_ticket_info**
> ViewTicketResponse get_ticket_info(id)

Get Ticket Information

Returns the full details of a support ticket including its history of replies.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.TicketsApi(myadmin-client-python.ApiClient(configuration))
id = 1.2 # float | Ticket ID number.

try:
    # Get Ticket Information
    api_response = api_instance.get_ticket_info(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling TicketsApi->get_ticket_info: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **float**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_tickets_list**
> Tickets get_tickets_list(page=page, period=period, view=view)

List Support Tickets

Returns a paginated list of support tickets on the account. Filter by status and time period.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.TicketsApi(myadmin-client-python.ApiClient(configuration))
page = 1 # int | Page number for paginated results. (optional) (default to 1)
period = '30' # str | How far back to show tickets from. Value is in days. (optional) (default to 30)
view = 'view_example' # str | The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. (optional)

try:
    # List Support Tickets
    api_response = api_instance.get_tickets_list(page=page, period=period, view=view)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling TicketsApi->get_tickets_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **int**| Page number for paginated results. | [optional] [default to 1]
 **period** | **str**| How far back to show tickets from. Value is in days. | [optional] [default to 30]
 **view** | **str**| The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types. | [optional] 

### Return type

[**Tickets**](Tickets.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_ticket_info**
> ViewTicketResponse post_ticket_info(id)

Reply To Ticket

Adds a reply to an existing support ticket.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.TicketsApi(myadmin-client-python.ApiClient(configuration))
id = 1.2 # float | Ticket ID number.

try:
    # Reply To Ticket
    api_response = api_instance.post_ticket_info(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling TicketsApi->post_ticket_info: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **float**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_tickets_list**
> Tickets post_tickets_list()

Search Support Tickets

Searches support tickets by email, subject, or ticket mask ID.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.TicketsApi(myadmin-client-python.ApiClient(configuration))

try:
    # Search Support Tickets
    api_response = api_instance.post_tickets_list()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling TicketsApi->post_tickets_list: %s\n" % e)
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

# **put_ticket_info**
> ViewTicketResponse put_ticket_info(id)

Update Ticket

Updates a support ticket's properties such as subject or status.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.TicketsApi(myadmin-client-python.ApiClient(configuration))
id = 1.2 # float | Ticket ID number.

try:
    # Update Ticket
    api_response = api_instance.put_ticket_info(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling TicketsApi->put_ticket_info: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **float**| Ticket ID number. | 

### Return type

[**ViewTicketResponse**](ViewTicketResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **reply_ticket**
> ReplyTicketResponseSchema reply_ticket(id, body=body)

Reply Ticket

Posts a reply to an existing support ticket thread.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.TicketsApi(myadmin-client-python.ApiClient(configuration))
id = 1.2 # float | The ticket ID number.
body = myadmin-client-python.ReplyTicketRequest() # ReplyTicketRequest |  (optional)

try:
    # Reply Ticket
    api_response = api_instance.reply_ticket(id, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling TicketsApi->reply_ticket: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **float**| The ticket ID number. | 
 **body** | [**ReplyTicketRequest**](ReplyTicketRequest.md)|  | [optional] 

### Return type

[**ReplyTicketResponseSchema**](ReplyTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_ticket_info**
> UpdateTicketResponseSchema update_ticket_info(id, body=body)

Update Ticket

Updates a support ticket's subject or body content.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.TicketsApi(myadmin-client-python.ApiClient(configuration))
id = 1.2 # float | The ticket ID number.
body = myadmin-client-python.UpdateTicket() # UpdateTicket |  (optional)

try:
    # Update Ticket
    api_response = api_instance.update_ticket_info(id, body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling TicketsApi->update_ticket_info: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **float**| The ticket ID number. | 
 **body** | [**UpdateTicket**](UpdateTicket.md)|  | [optional] 

### Return type

[**UpdateTicketResponseSchema**](UpdateTicketResponseSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

