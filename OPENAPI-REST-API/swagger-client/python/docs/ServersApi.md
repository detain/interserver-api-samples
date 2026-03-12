# myadmin-client-python.ServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**place_buy_now_server**](ServersApi.md#place_buy_now_server) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order

# **place_buy_now_server**
> ServersBuyNowResponse place_buy_now_server(body=body)

Place Buy Now Server Order

Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.

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
api_instance = myadmin-client-python.ServersApi(myadmin-client-python.ApiClient(configuration))
body = myadmin-client-python.OrderBuyNowServerBody() # OrderBuyNowServerBody |  (optional)

try:
    # Place Buy Now Server Order
    api_response = api_instance.place_buy_now_server(body=body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ServersApi->place_buy_now_server: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OrderBuyNowServerBody**](OrderBuyNowServerBody.md)|  | [optional] 

### Return type

[**ServersBuyNowResponse**](ServersBuyNowResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

