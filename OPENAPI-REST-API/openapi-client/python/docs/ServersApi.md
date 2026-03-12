# openapi_client.ServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_server**](ServersApi.md#add_server) | **POST** /servers/order | Place Server Order
[**buy_it_now_server_order**](ServersApi.md#buy_it_now_server_order) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options
[**get_mp_servers**](ServersApi.md#get_mp_servers) | **GET** /buy_now_servers_list | List Marketplace Servers
[**get_new_server**](ServersApi.md#get_new_server) | **GET** /servers/order | Server Ordering Information
[**get_server_info**](ServersApi.md#get_server_info) | **GET** /servers/{id} | Get Server Order
[**get_server_invoices**](ServersApi.md#get_server_invoices) | **GET** /servers/{id}/invoices | Get Server Invoices
[**get_server_list**](ServersApi.md#get_server_list) | **GET** /servers | List Servers
[**get_server_reverse_dns**](ServersApi.md#get_server_reverse_dns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info
[**get_servers_welcome_email**](ServersApi.md#get_servers_welcome_email) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email
[**post_server_reverse_dns**](ServersApi.md#post_server_reverse_dns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS
[**put_servers**](ServersApi.md#put_servers) | **PUT** /servers/order | Validate Server Order
[**server_ipmi_live_get**](ServersApi.md#server_ipmi_live_get) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information
[**server_ipmi_live_post**](ServersApi.md#server_ipmi_live_post) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup
[**server_ipmi_power_get**](ServersApi.md#server_ipmi_power_get) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status
[**server_ipmi_power_post**](ServersApi.md#server_ipmi_power_post) | **POST** /servers/{id}/ipmi_power | Server IPMI Power
[**servers_cancel**](ServersApi.md#servers_cancel) | **DELETE** /servers/{id} | Cancel Server Service
[**update_server_info**](ServersApi.md#update_server_info) | **POST** /servers/{id} | Update Server Order


# **add_server**
> add_server()

Place Server Order

Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)

    try:
        # Place Server Order
        api_instance.add_server()
    except Exception as e:
        print("Exception when calling ServersApi->add_server: %s\n" % e)
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

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **buy_it_now_server_order**
> BuyItNowServerOrder200Response buy_it_now_server_order()

Get Buy Now Server Options

Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.buy_it_now_server_order200_response import BuyItNowServerOrder200Response
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)

    try:
        # Get Buy Now Server Options
        api_response = api_instance.buy_it_now_server_order()
        print("The response of ServersApi->buy_it_now_server_order:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ServersApi->buy_it_now_server_order: %s\n" % e)
```



### Parameters

This endpoint does not need any parameter.

### Return type

[**BuyItNowServerOrder200Response**](BuyItNowServerOrder200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Available server configurations with pricing and hardware options. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_mp_servers**
> BuyItNowList get_mp_servers()

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.buy_it_now_list import BuyItNowList
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)

    try:
        # List Marketplace Servers
        api_response = api_instance.get_mp_servers()
        print("The response of ServersApi->get_mp_servers:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ServersApi->get_mp_servers: %s\n" % e)
```



### Parameters

This endpoint does not need any parameter.

### Return type

[**BuyItNowList**](BuyItNowList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Marketplace Buy it now servers list |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_new_server**
> ServerOrder get_new_server()

Server Ordering Information

Retrieves available server configurations and pricing for ordering a new dedicated server.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.server_order import ServerOrder
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)

    try:
        # Server Ordering Information
        api_response = api_instance.get_new_server()
        print("The response of ServersApi->get_new_server:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ServersApi->get_new_server: %s\n" % e)
```



### Parameters

This endpoint does not need any parameter.

### Return type

[**ServerOrder**](ServerOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Server Ordering details |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_server_info**
> Server get_server_info(id)

Get Server Order

Returns detailed information about a specific server including its hardware configuration, IPs, and status.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.server import Server
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)
    id = 56 # int | Server ID number.

    try:
        # Get Server Order
        api_response = api_instance.get_server_info(id)
        print("The response of ServersApi->get_server_info:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ServersApi->get_server_info: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number. | 

### Return type

[**Server**](Server.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Server details |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_server_invoices**
> ChargeInvoiceRows get_server_invoices(id)

Get Server Invoices

Returns the billing invoices associated with this dedicated server.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.charge_invoice_rows import ChargeInvoiceRows
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)
    id = 56 # int | Server ID number

    try:
        # Get Server Invoices
        api_response = api_instance.get_server_invoices(id)
        print("The response of ServersApi->get_server_invoices:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ServersApi->get_server_invoices: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Get Invoices response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_server_list**
> List[ServerRow] get_server_list()

List Servers

Returns all dedicated server services on the account with their current status and configuration.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.server_row import ServerRow
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)

    try:
        # List Servers
        api_response = api_instance.get_server_list()
        print("The response of ServersApi->get_server_list:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ServersApi->get_server_list: %s\n" % e)
```



### Parameters

This endpoint does not need any parameter.

### Return type

[**List[ServerRow]**](ServerRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The listing of &#x60;Servers&#x60; services on your account. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_server_reverse_dns**
> ReverseDnsEntries get_server_reverse_dns(id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the server's IP addresses.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.reverse_dns_entries import ReverseDnsEntries
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)
    id = 56 # int | Server ID number

    try:
        # Reverse DNS Info
        api_response = api_instance.get_server_reverse_dns(id)
        print("The response of ServersApi->get_server_reverse_dns:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ServersApi->get_server_reverse_dns: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Servers Reverse DNS info response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_servers_welcome_email**
> SuccessTextResponse get_servers_welcome_email(id)

Resend Server Welcome Email

Resends the welcome email for the order.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.success_text_response import SuccessTextResponse
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)
    id = 56 # int | Server ID number

    try:
        # Resend Server Welcome Email
        api_response = api_instance.get_servers_welcome_email(id)
        print("The response of ServersApi->get_servers_welcome_email:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ServersApi->get_servers_welcome_email: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_server_reverse_dns**
> TextResponse post_server_reverse_dns(id, reverse_dns_entries)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the server's IP addresses.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.reverse_dns_entries import ReverseDnsEntries
from openapi_client.models.text_response import TextResponse
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)
    id = 56 # int | Server ID number
    reverse_dns_entries = openapi_client.ReverseDnsEntries() # ReverseDnsEntries | 

    try:
        # Update Reverse DNS
        api_response = api_instance.post_server_reverse_dns(id, reverse_dns_entries)
        print("The response of ServersApi->post_server_reverse_dns:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ServersApi->post_server_reverse_dns: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number | 
 **reverse_dns_entries** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Update Server Reverse DNS response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_servers**
> put_servers()

Validate Server Order

Validates a server order before placing it. Use this to check for errors before committing to a purchase.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)

    try:
        # Validate Server Order
        api_instance.put_servers()
    except Exception as e:
        print("Exception when calling ServersApi->put_servers: %s\n" % e)
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

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Validate Server order response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **server_ipmi_live_get**
> ServerIpmiLiveInfo server_ipmi_live_get(id)

Server IPMI Live Information

Returns the current IPMI live connection information for the server.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.server_ipmi_live_info import ServerIpmiLiveInfo
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)
    id = 56 # int | Server ID number

    try:
        # Server IPMI Live Information
        api_response = api_instance.server_ipmi_live_get(id)
        print("The response of ServersApi->server_ipmi_live_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ServersApi->server_ipmi_live_get: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number | 

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response from the Servers IPMI Live information request. |  -  |
**404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **server_ipmi_live_post**
> ServerIpmiLiveInfo server_ipmi_live_post(id, ip, asset=asset)

Server IPMI Live Setup

Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.server_ipmi_live_info import ServerIpmiLiveInfo
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)
    id = 56 # int | Server ID number
    ip = 'ip_example' # str | Your IP Address you wish to connect to the IPMI system from.
    asset = 56 # int | Asset ID (optional)

    try:
        # Server IPMI Live Setup
        api_response = api_instance.server_ipmi_live_post(id, ip, asset=asset)
        print("The response of ServersApi->server_ipmi_live_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ServersApi->server_ipmi_live_post: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number | 
 **ip** | **str**| Your IP Address you wish to connect to the IPMI system from. | 
 **asset** | **int**| Asset ID | [optional] 

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response from the Servers IPMI Live information request. |  -  |
**404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **server_ipmi_power_get**
> TextResponse server_ipmi_power_get(id)

Get IPMI Power Status

Returns the chassis power status from ipmi.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.text_response import TextResponse
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)
    id = 56 # int | Server ID number

    try:
        # Get IPMI Power Status
        api_response = api_instance.server_ipmi_power_get(id)
        print("The response of ServersApi->server_ipmi_power_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ServersApi->server_ipmi_power_get: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response with a text message field. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **server_ipmi_power_post**
> TextResponse server_ipmi_power_post(id, action, asset=asset)

Server IPMI Power

Uses the IPMI interface to set the Power status on the server.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.text_response import TextResponse
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)
    id = 56 # int | Server ID number
    action = 'action_example' # str | The power action to send to the ipmi controller.
    asset = 56 # int | The Asset ID (optional)

    try:
        # Server IPMI Power
        api_response = api_instance.server_ipmi_power_post(id, action, asset=asset)
        print("The response of ServersApi->server_ipmi_power_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ServersApi->server_ipmi_power_post: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number | 
 **action** | **str**| The power action to send to the ipmi controller. | 
 **asset** | **int**| The Asset ID | [optional] 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response with a text message field. |  -  |
**400** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **servers_cancel**
> ServersCancel200Response servers_cancel(id)

Cancel Server Service

Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.servers_cancel200_response import ServersCancel200Response
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)
    id = 56 # int | Server ID number

    try:
        # Cancel Server Service
        api_response = api_instance.servers_cancel(id)
        print("The response of ServersApi->servers_cancel:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ServersApi->servers_cancel: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| Server ID number | 

### Return type

[**ServersCancel200Response**](ServersCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Servers Cancel |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_server_info**
> update_server_info(id)

Update Server Order

Updates settings on a dedicated server order.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://my.interserver.net/apiv2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://my.interserver.net/apiv2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: sessionIdCookieAuth
configuration.api_key['sessionIdCookieAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdCookieAuth'] = 'Bearer'

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: sessionIdHeaderAuth
configuration.api_key['sessionIdHeaderAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionIdHeaderAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.ServersApi(api_client)
    id = 'id_example' # str | Server ID number.

    try:
        # Update Server Order
        api_instance.update_server_info(id)
    except Exception as e:
        print("Exception when calling ServersApi->update_server_info: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**| Server ID number. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

