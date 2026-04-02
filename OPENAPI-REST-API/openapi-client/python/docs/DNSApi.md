# openapi_client.DNSApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_dns_domain**](DNSApi.md#add_dns_domain) | **POST** /dns | Create DNS Domain
[**add_dns_record**](DNSApi.md#add_dns_record) | **POST** /dns/{id} | Add DNS Record to Domain
[**delete_dns_domain**](DNSApi.md#delete_dns_domain) | **DELETE** /dns/{id} | Delete DNS Domain
[**delete_dns_record**](DNSApi.md#delete_dns_record) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record
[**get_dns_domain**](DNSApi.md#get_dns_domain) | **GET** /dns/{id} | List Domain DNS Records
[**get_dns_list**](DNSApi.md#get_dns_list) | **GET** /dns | List DNS Domains
[**update_dns_record**](DNSApi.md#update_dns_record) | **POST** /dns/{domainId}/{recordId} | Update DNS Record


# **add_dns_domain**
> SuccessTextResponse add_dns_domain(domain, ip)

Create DNS Domain

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.

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
    api_instance = openapi_client.DNSApi(api_client)
    domain = 'domain_example' # str | The domain name.
    ip = 'ip_example' # str | IP Address to point the domain to.

    try:
        # Create DNS Domain
        api_response = api_instance.add_dns_domain(domain, ip)
        print("The response of DNSApi->add_dns_domain:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling DNSApi->add_dns_domain: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **str**| The domain name. | 
 **ip** | **str**| IP Address to point the domain to. | 

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

# **add_dns_record**
> add_dns_record(id, name, type, content, ttl=ttl, prio=prio)

Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.dns_record_type import DnsRecordType
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
    api_instance = openapi_client.DNSApi(api_client)
    id = '472' # str | The DNS Domain ID.
    name = 'name_example' # str | Name part of record
    type = openapi_client.DnsRecordType() # DnsRecordType | 
    content = 'content_example' # str | Content of record
    ttl = 86400 # int | Time-to-live (optional) (default to 86400)
    prio = 0 # int | Priority (optional) (default to 0)

    try:
        # Add DNS Record to Domain
        api_instance.add_dns_record(id, name, type, content, ttl=ttl, prio=prio)
    except Exception as e:
        print("Exception when calling DNSApi->add_dns_record: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**| The DNS Domain ID. | 
 **name** | **str**| Name part of record | 
 **type** | [**DnsRecordType**](DnsRecordType.md)|  | 
 **content** | **str**| Content of record | 
 **ttl** | **int**| Time-to-live | [optional] [default to 86400]
 **prio** | **int**| Priority | [optional] [default to 0]

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Add DNS Domain Response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_dns_domain**
> SuccessTextResponse delete_dns_domain(id)

Delete DNS Domain

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

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
    api_instance = openapi_client.DNSApi(api_client)
    id = 'id_example' # str | The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain.

    try:
        # Delete DNS Domain
        api_response = api_instance.delete_dns_domain(id)
        print("The response of DNSApi->delete_dns_domain:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling DNSApi->delete_dns_domain: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**| The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 

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

# **delete_dns_record**
> SuccessTextResponse delete_dns_record(domain_id, record_id)

Delete DNS Record

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.

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
    api_instance = openapi_client.DNSApi(api_client)
    domain_id = 56 # int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
    record_id = 56 # int | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.

    try:
        # Delete DNS Record
        api_response = api_instance.delete_dns_record(domain_id, record_id)
        print("The response of DNSApi->delete_dns_record:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling DNSApi->delete_dns_record: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain_id** | **int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 
 **record_id** | **int**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | 

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

# **get_dns_domain**
> List[DnsRecord] get_dns_domain(id)

List Domain DNS Records

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.dns_record import DnsRecord
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
    api_instance = openapi_client.DNSApi(api_client)
    id = 56 # int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.

    try:
        # List Domain DNS Records
        api_response = api_instance.get_dns_domain(id)
        print("The response of DNSApi->get_dns_domain:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling DNSApi->get_dns_domain: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 

### Return type

[**List[DnsRecord]**](DnsRecord.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The DNS records for the specified domain. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_dns_list**
> List[DnsListItem] get_dns_list()

List DNS Domains

Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.dns_list_item import DnsListItem
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
    api_instance = openapi_client.DNSApi(api_client)

    try:
        # List DNS Domains
        api_response = api_instance.get_dns_list()
        print("The response of DNSApi->get_dns_list:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling DNSApi->get_dns_list: %s\n" % e)
```



### Parameters

This endpoint does not need any parameter.

### Return type

[**List[DnsListItem]**](DnsListItem.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Listing of DNS domains on the account with their primary A record. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_dns_record**
> SuccessTextResponse update_dns_record(domain_id, record_id, name=name, type=type, content=content, ttl=ttl, prio=prio, disabled=disabled, ordername=ordername, auth=auth)

Update DNS Record

Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Example

* Api Key Authentication (sessionIdCookieAuth):
* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (sessionIdHeaderAuth):

```python
import openapi_client
from openapi_client.models.dns_record_type import DnsRecordType
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
    api_instance = openapi_client.DNSApi(api_client)
    domain_id = 56 # int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
    record_id = 56 # int | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
    name = 'name_example' # str |  (optional)
    type = openapi_client.DnsRecordType() # DnsRecordType |  (optional)
    content = 'content_example' # str |  (optional)
    ttl = 'ttl_example' # str |  (optional)
    prio = 'prio_example' # str |  (optional)
    disabled = 'disabled_example' # str |  (optional)
    ordername = 'ordername_example' # str |  (optional)
    auth = 'auth_example' # str |  (optional)

    try:
        # Update DNS Record
        api_response = api_instance.update_dns_record(domain_id, record_id, name=name, type=type, content=content, ttl=ttl, prio=prio, disabled=disabled, ordername=ordername, auth=auth)
        print("The response of DNSApi->update_dns_record:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling DNSApi->update_dns_record: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain_id** | **int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 
 **record_id** | **int**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | 
 **name** | **str**|  | [optional] 
 **type** | [**DnsRecordType**](DnsRecordType.md)|  | [optional] 
 **content** | **str**|  | [optional] 
 **ttl** | **str**|  | [optional] 
 **prio** | **str**|  | [optional] 
 **disabled** | **str**|  | [optional] 
 **ordername** | **str**|  | [optional] 
 **auth** | **str**|  | [optional] 

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

