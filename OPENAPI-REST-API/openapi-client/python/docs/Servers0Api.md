# openapi_client.ServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**place_buy_now_server**](ServersApi.md#place_buy_now_server) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order


# **place_buy_now_server**
> ServersBuyNowResponse place_buy_now_server(place_buy_now_server_request=place_buy_now_server_request)

Place Buy Now Server Order

Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.place_buy_now_server_request import PlaceBuyNowServerRequest
from openapi_client.models.servers_buy_now_response import ServersBuyNowResponse
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
    place_buy_now_server_request = openapi_client.PlaceBuyNowServerRequest() # PlaceBuyNowServerRequest |  (optional)

    try:
        # Place Buy Now Server Order
        api_response = api_instance.place_buy_now_server(place_buy_now_server_request=place_buy_now_server_request)
        print("The response of ServersApi->place_buy_now_server:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ServersApi->place_buy_now_server: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **place_buy_now_server_request** | [**PlaceBuyNowServerRequest**](PlaceBuyNowServerRequest.md)|  | [optional] 

### Return type

[**ServersBuyNowResponse**](ServersBuyNowResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Order placed successfully. |  -  |
**400** | Order validation failed. |  -  |
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

