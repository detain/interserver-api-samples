# myadmin-client-python.ScrubIpsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**cancel_scrub_ip**](ScrubIpsApi.md#cancel_scrub_ip) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service
[**create_filter**](ScrubIpsApi.md#create_filter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter
[**create_geo_rule**](ScrubIpsApi.md#create_geo_rule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule
[**create_rule**](ScrubIpsApi.md#create_rule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule
[**delete_filter**](ScrubIpsApi.md#delete_filter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter
[**disable_scrub**](ScrubIpsApi.md#disable_scrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection
[**enable_scrub**](ScrubIpsApi.md#enable_scrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection
[**get_order_detail**](ScrubIpsApi.md#get_order_detail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information
[**get_scrub_ip_details**](ScrubIpsApi.md#get_scrub_ip_details) | **GET** /scrub_ips/{id} | Get Scrub IP Details
[**get_scrub_ip_filter_types**](ScrubIpsApi.md#get_scrub_ip_filter_types) | **GET** /scrub_ips/filter_types | List Scrub Filter Types
[**get_scrub_ip_invoices**](ScrubIpsApi.md#get_scrub_ip_invoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices
[**get_scrub_ip_logs**](ScrubIpsApi.md#get_scrub_ip_logs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs
[**get_scrub_ips_list**](ScrubIpsApi.md#get_scrub_ips_list) | **GET** /scrub_ips | List Scrub IP Services
[**place_scrub_order**](ScrubIpsApi.md#place_scrub_order) | **POST** /scrub_ips/order | Place Scrub IP Order
[**scrub_ips_delete_geo_rule**](ScrubIpsApi.md#scrub_ips_delete_geo_rule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule
[**scrub_ips_delete_rule**](ScrubIpsApi.md#scrub_ips_delete_rule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule

# **cancel_scrub_ip**
> InlineResponse20013 cancel_scrub_ip(id)

Cancel Scrub IP Service

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

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
api_instance = myadmin-client-python.ScrubIpsApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | ScrubIp ID number

try:
    # Cancel Scrub IP Service
    api_response = api_instance.cancel_scrub_ip(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ScrubIpsApi->cancel_scrub_ip: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse20013**](InlineResponse20013.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_filter**
> InlineResponse2011 create_filter(body, id)

Create Traffic Filter

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.

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
api_instance = myadmin-client-python.ScrubIpsApi(myadmin-client-python.ApiClient(configuration))
body = myadmin-client-python.CreateFilter() # CreateFilter | 
id = 56 # int | ScrubIp ID number

try:
    # Create Traffic Filter
    api_response = api_instance.create_filter(body, id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ScrubIpsApi->create_filter: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFilter**](CreateFilter.md)|  | 
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse2011**](InlineResponse2011.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_geo_rule**
> InlineResponse201 create_geo_rule(body, id)

Create Geo Firewall Rule

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

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
api_instance = myadmin-client-python.ScrubIpsApi(myadmin-client-python.ApiClient(configuration))
body = myadmin-client-python.CreateGeoFirewallRule() # CreateGeoFirewallRule | 
id = 56 # int | ScrubIp ID number

try:
    # Create Geo Firewall Rule
    api_response = api_instance.create_geo_rule(body, id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ScrubIpsApi->create_geo_rule: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateGeoFirewallRule**](CreateGeoFirewallRule.md)|  | 
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse201**](InlineResponse201.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_rule**
> InlineResponse201 create_rule(body, id)

Create Firewall Rule

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

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
api_instance = myadmin-client-python.ScrubIpsApi(myadmin-client-python.ApiClient(configuration))
body = myadmin-client-python.CreateFirewallRule() # CreateFirewallRule | 
id = 56 # int | ScrubIp ID number

try:
    # Create Firewall Rule
    api_response = api_instance.create_rule(body, id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ScrubIpsApi->create_rule: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFirewallRule**](CreateFirewallRule.md)|  | 
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse201**](InlineResponse201.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_filter**
> InlineResponse20017 delete_filter(body, id)

Delete Traffic Filter

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

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
api_instance = myadmin-client-python.ScrubIpsApi(myadmin-client-python.ApiClient(configuration))
body = myadmin-client-python.CreateFilter() # CreateFilter | 
id = 56 # int | ScrubIp ID number

try:
    # Delete Traffic Filter
    api_response = api_instance.delete_filter(body, id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ScrubIpsApi->delete_filter: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFilter**](CreateFilter.md)|  | 
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse20017**](InlineResponse20017.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **disable_scrub**
> InlineResponse20015 disable_scrub(id)

Disable Scrub Protection

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

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
api_instance = myadmin-client-python.ScrubIpsApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | ScrubIp ID number

try:
    # Disable Scrub Protection
    api_response = api_instance.disable_scrub(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ScrubIpsApi->disable_scrub: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse20015**](InlineResponse20015.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **enable_scrub**
> InlineResponse20014 enable_scrub(id)

Enable Scrub Protection

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

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
api_instance = myadmin-client-python.ScrubIpsApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | ScrubIp ID number

try:
    # Enable Scrub Protection
    api_response = api_instance.enable_scrub(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ScrubIpsApi->enable_scrub: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse20014**](InlineResponse20014.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_order_detail**
> InlineResponse20018 get_order_detail()

Get Scrub IP Ordering Information

Returns the available Scrub IP service plans and pricing information needed to build an order form.

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
api_instance = myadmin-client-python.ScrubIpsApi(myadmin-client-python.ApiClient(configuration))

try:
    # Get Scrub IP Ordering Information
    api_response = api_instance.get_order_detail()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ScrubIpsApi->get_order_detail: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse20018**](InlineResponse20018.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_scrub_ip_details**
> InlineResponse20012 get_scrub_ip_details(id)

Get Scrub IP Details

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

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
api_instance = myadmin-client-python.ScrubIpsApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | ScrubIp ID number

try:
    # Get Scrub IP Details
    api_response = api_instance.get_scrub_ip_details(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ScrubIpsApi->get_scrub_ip_details: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse20012**](InlineResponse20012.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_scrub_ip_filter_types**
> ScrubIpFilterTypes get_scrub_ip_filter_types()

List Scrub Filter Types

Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.

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
api_instance = myadmin-client-python.ScrubIpsApi(myadmin-client-python.ApiClient(configuration))

try:
    # List Scrub Filter Types
    api_response = api_instance.get_scrub_ip_filter_types()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ScrubIpsApi->get_scrub_ip_filter_types: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ScrubIpFilterTypes**](ScrubIpFilterTypes.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_scrub_ip_invoices**
> ChargeInvoiceRows get_scrub_ip_invoices(id)

Get ScrubIp Invoices

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

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
api_instance = myadmin-client-python.ScrubIpsApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | ScrubIp ID number

try:
    # Get ScrubIp Invoices
    api_response = api_instance.get_scrub_ip_invoices(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ScrubIpsApi->get_scrub_ip_invoices: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| ScrubIp ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_scrub_ip_logs**
> list[ScrubIpsLogRowSchema] get_scrub_ip_logs(id)

Get Scrub IP Logs

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

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
api_instance = myadmin-client-python.ScrubIpsApi(myadmin-client-python.ApiClient(configuration))
id = 'id_example' # str | Scrub Order ID

try:
    # Get Scrub IP Logs
    api_response = api_instance.get_scrub_ip_logs(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ScrubIpsApi->get_scrub_ip_logs: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**| Scrub Order ID | 

### Return type

[**list[ScrubIpsLogRowSchema]**](ScrubIpsLogRowSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_scrub_ips_list**
> list[ScrubIpsRowSchema] get_scrub_ips_list()

List Scrub IP Services

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.

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
api_instance = myadmin-client-python.ScrubIpsApi(myadmin-client-python.ApiClient(configuration))

try:
    # List Scrub IP Services
    api_response = api_instance.get_scrub_ips_list()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ScrubIpsApi->get_scrub_ips_list: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**list[ScrubIpsRowSchema]**](ScrubIpsRowSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **place_scrub_order**
> InlineResponse2012 place_scrub_order(body)

Place Scrub IP Order

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

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
api_instance = myadmin-client-python.ScrubIpsApi(myadmin-client-python.ApiClient(configuration))
body = myadmin-client-python.ScrubIpPlaceOrder() # ScrubIpPlaceOrder | 

try:
    # Place Scrub IP Order
    api_response = api_instance.place_scrub_order(body)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ScrubIpsApi->place_scrub_order: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ScrubIpPlaceOrder**](ScrubIpPlaceOrder.md)|  | 

### Return type

[**InlineResponse2012**](InlineResponse2012.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrub_ips_delete_geo_rule**
> InlineResponse20016 scrub_ips_delete_geo_rule(body, id)

Delete Geo Firewall Rule

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

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
api_instance = myadmin-client-python.ScrubIpsApi(myadmin-client-python.ApiClient(configuration))
body = myadmin-client-python.DeleteGeoFirewallRule() # DeleteGeoFirewallRule | 
id = 56 # int | ScrubIp ID number

try:
    # Delete Geo Firewall Rule
    api_response = api_instance.scrub_ips_delete_geo_rule(body, id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ScrubIpsApi->scrub_ips_delete_geo_rule: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DeleteGeoFirewallRule**](DeleteGeoFirewallRule.md)|  | 
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse20016**](InlineResponse20016.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **scrub_ips_delete_rule**
> InlineResponse20016 scrub_ips_delete_rule(body, id)

Delete Firewall Rule

Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

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
api_instance = myadmin-client-python.ScrubIpsApi(myadmin-client-python.ApiClient(configuration))
body = myadmin-client-python.DeleteFirewallRule() # DeleteFirewallRule | 
id = 56 # int | ScrubIp ID number

try:
    # Delete Firewall Rule
    api_response = api_instance.scrub_ips_delete_rule(body, id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling ScrubIpsApi->scrub_ips_delete_rule: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DeleteFirewallRule**](DeleteFirewallRule.md)|  | 
 **id** | **int**| ScrubIp ID number | 

### Return type

[**InlineResponse20016**](InlineResponse20016.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

