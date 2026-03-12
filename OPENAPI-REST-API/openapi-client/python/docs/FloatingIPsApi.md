# openapi_client.FloatingIPsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_floating_ip**](FloatingIPsApi.md#add_floating_ip) | **POST** /floating_ips/order | Place Floating IP Order
[**floating_ips_cancel**](FloatingIPsApi.md#floating_ips_cancel) | **DELETE** /floating_ips/{id} | Cancel Floating IP
[**get_floating_ip_info**](FloatingIPsApi.md#get_floating_ip_info) | **GET** /floating_ips/{id} | View Floating IP
[**get_floating_ip_invoices**](FloatingIPsApi.md#get_floating_ip_invoices) | **GET** /floating_ips/{id}/invoices | Get Floating IP Invoices
[**get_floating_ips_list**](FloatingIPsApi.md#get_floating_ips_list) | **GET** /floating_ips | List Floating IPs
[**get_floating_ips_welcome_email**](FloatingIPsApi.md#get_floating_ips_welcome_email) | **GET** /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email
[**get_new_floating_ip**](FloatingIPsApi.md#get_new_floating_ip) | **GET** /floating_ips/order | Get Floating IP Ordering Information
[**post_floating_ips_change_ip**](FloatingIPsApi.md#post_floating_ips_change_ip) | **POST** /floating_ips/{id}/change_ip | Change Floating IP Target
[**put_floating_ips**](FloatingIPsApi.md#put_floating_ips) | **PUT** /floating_ips/order | Validate Floating IP Order
[**update_floating_ip_info**](FloatingIPsApi.md#update_floating_ip_info) | **POST** /floating_ips/{id} | Update Floating IP


# **add_floating_ip**
> add_floating_ip()

Place Floating IP Order

Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.

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
    api_instance = openapi_client.FloatingIPsApi(api_client)

    try:
        # Place Floating IP Order
        api_instance.add_floating_ip()
    except Exception as e:
        print("Exception when calling FloatingIPsApi->add_floating_ip: %s\n" % e)
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

# **floating_ips_cancel**
> FloatingIpsCancel200Response floating_ips_cancel(id)

Cancel Floating IP

Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.floating_ips_cancel200_response import FloatingIpsCancel200Response
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
    api_instance = openapi_client.FloatingIPsApi(api_client)
    id = 56 # int | The Floating IP service ID. Use the ID from `GET /floating_ips`.

    try:
        # Cancel Floating IP
        api_response = api_instance.floating_ips_cancel(id)
        print("The response of FloatingIPsApi->floating_ips_cancel:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling FloatingIPsApi->floating_ips_cancel: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

[**FloatingIpsCancel200Response**](FloatingIpsCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Floating Ip Cancel |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_floating_ip_info**
> get_floating_ip_info(id)

View Floating IP

Returns detailed information about a specific Floating IP service including its current target IP assignment.

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
    api_instance = openapi_client.FloatingIPsApi(api_client)
    id = 56 # int | The Floating IP service ID. Use the ID from `GET /floating_ips`.

    try:
        # View Floating IP
        api_instance.get_floating_ip_info(id)
    except Exception as e:
        print("Exception when calling FloatingIPsApi->get_floating_ip_info: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

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

# **get_floating_ip_invoices**
> ChargeInvoiceRows get_floating_ip_invoices(id)

Get Floating IP Invoices

Returns the billing invoices associated with this Floating IP service.

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
    api_instance = openapi_client.FloatingIPsApi(api_client)
    id = 56 # int | The Floating IP service ID. Use the ID from `GET /floating_ips`.

    try:
        # Get Floating IP Invoices
        api_response = api_instance.get_floating_ip_invoices(id)
        print("The response of FloatingIPsApi->get_floating_ip_invoices:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling FloatingIPsApi->get_floating_ip_invoices: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

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

# **get_floating_ips_list**
> get_floating_ips_list()

List Floating IPs

Returns all Floating IP services on the account with their current status and assignment details.

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
    api_instance = openapi_client.FloatingIPsApi(api_client)

    try:
        # List Floating IPs
        api_instance.get_floating_ips_list()
    except Exception as e:
        print("Exception when calling FloatingIPsApi->get_floating_ips_list: %s\n" % e)
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
**200** | The listing of &#x60;Floating IPs&#x60; services on your account. |  -  |
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_floating_ips_welcome_email**
> SuccessTextResponse get_floating_ips_welcome_email(id)

Resend Floating IPs Welcome Email

Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.

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
    api_instance = openapi_client.FloatingIPsApi(api_client)
    id = 56 # int | The Floating IP service ID. Use the ID from `GET /floating_ips`.

    try:
        # Resend Floating IPs Welcome Email
        api_response = api_instance.get_floating_ips_welcome_email(id)
        print("The response of FloatingIPsApi->get_floating_ips_welcome_email:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling FloatingIPsApi->get_floating_ips_welcome_email: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

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

# **get_new_floating_ip**
> get_new_floating_ip()

Get Floating IP Ordering Information

Retrieves available options and pricing for ordering a new Floating IP.

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
    api_instance = openapi_client.FloatingIPsApi(api_client)

    try:
        # Get Floating IP Ordering Information
        api_instance.get_new_floating_ip()
    except Exception as e:
        print("Exception when calling FloatingIPsApi->get_new_floating_ip: %s\n" % e)
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

# **post_floating_ips_change_ip**
> SuccessTextResponse post_floating_ips_change_ip(id, ip)

Change Floating IP Target

Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.

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
    api_instance = openapi_client.FloatingIPsApi(api_client)
    id = 56 # int | The Floating IP service ID. Use the ID from `GET /floating_ips`.
    ip = 'ip_example' # str | IP Address

    try:
        # Change Floating IP Target
        api_response = api_instance.post_floating_ips_change_ip(id, ip)
        print("The response of FloatingIPsApi->post_floating_ips_change_ip:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling FloatingIPsApi->post_floating_ips_change_ip: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 
 **ip** | **str**| IP Address | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_floating_ips**
> put_floating_ips()

Validate Floating IP Order

Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.

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
    api_instance = openapi_client.FloatingIPsApi(api_client)

    try:
        # Validate Floating IP Order
        api_instance.put_floating_ips()
    except Exception as e:
        print("Exception when calling FloatingIPsApi->put_floating_ips: %s\n" % e)
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
**200** | Validate Floating IPs order response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_floating_ip_info**
> update_floating_ip_info(id)

Update Floating IP

Updates settings on a Floating IP service, such as its label or configuration metadata.

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
    api_instance = openapi_client.FloatingIPsApi(api_client)
    id = 'id_example' # str | The Floating IP service ID. Use the ID from `GET /floating_ips`.

    try:
        # Update Floating IP
        api_instance.update_floating_ip_info(id)
    except Exception as e:
        print("Exception when calling FloatingIPsApi->update_floating_ip_info: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

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

