# myadmin-client-python.DNSApi

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
api_instance = myadmin-client-python.DNSApi(myadmin-client-python.ApiClient(configuration))
domain = 'domain_example' # str | 
ip = 'ip_example' # str | 

try:
    # Create DNS Domain
    api_response = api_instance.add_dns_domain(domain, ip)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DNSApi->add_dns_domain: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **str**|  | 
 **ip** | **str**|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **add_dns_record**
> add_dns_record(name, type, content, ttl, prio, id)

Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.

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
api_instance = myadmin-client-python.DNSApi(myadmin-client-python.ApiClient(configuration))
name = 'name_example' # str | 
type = myadmin-client-python.DnsRecordType() # DnsRecordType | 
content = 'content_example' # str | 
ttl = 56 # int | 
prio = 56 # int | 
id = 'id_example' # str | The DNS Domain ID.

try:
    # Add DNS Record to Domain
    api_instance.add_dns_record(name, type, content, ttl, prio, id)
except ApiException as e:
    print("Exception when calling DNSApi->add_dns_record: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **str**|  | 
 **type** | [**DnsRecordType**](.md)|  | 
 **content** | **str**|  | 
 **ttl** | **int**|  | 
 **prio** | **int**|  | 
 **id** | **str**| The DNS Domain ID. | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_dns_domain**
> SuccessTextResponse delete_dns_domain(id)

Delete DNS Domain

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

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
api_instance = myadmin-client-python.DNSApi(myadmin-client-python.ApiClient(configuration))
id = 'id_example' # str | The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain.

try:
    # Delete DNS Domain
    api_response = api_instance.delete_dns_domain(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DNSApi->delete_dns_domain: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**| The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_dns_record**
> SuccessTextResponse delete_dns_record(domain_id, record_id)

Delete DNS Record

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.

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
api_instance = myadmin-client-python.DNSApi(myadmin-client-python.ApiClient(configuration))
domain_id = 56 # int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
record_id = 56 # int | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.

try:
    # Delete DNS Record
    api_response = api_instance.delete_dns_record(domain_id, record_id)
    pprint(api_response)
except ApiException as e:
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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_dns_domain**
> list[DnsRecord] get_dns_domain(id)

List Domain DNS Records

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.

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
api_instance = myadmin-client-python.DNSApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.

try:
    # List Domain DNS Records
    api_response = api_instance.get_dns_domain(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DNSApi->get_dns_domain: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 

### Return type

[**list[DnsRecord]**](DnsRecord.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_dns_list**
> list[DnsListItem] get_dns_list()

List DNS Domains

Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.

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
api_instance = myadmin-client-python.DNSApi(myadmin-client-python.ApiClient(configuration))

try:
    # List DNS Domains
    api_response = api_instance.get_dns_list()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DNSApi->get_dns_list: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**list[DnsListItem]**](DnsListItem.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_dns_record**
> SuccessTextResponse update_dns_record(name, type, content, ttl, prio, disabled, ordername, auth, domain_id, record_id)

Update DNS Record

Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

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
api_instance = myadmin-client-python.DNSApi(myadmin-client-python.ApiClient(configuration))
name = 'name_example' # str | 
type = myadmin-client-python.DnsRecordType() # DnsRecordType | 
content = 'content_example' # str | 
ttl = 'ttl_example' # str | 
prio = 'prio_example' # str | 
disabled = 'disabled_example' # str | 
ordername = 'ordername_example' # str | 
auth = 'auth_example' # str | 
domain_id = 56 # int | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
record_id = 56 # int | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.

try:
    # Update DNS Record
    api_response = api_instance.update_dns_record(name, type, content, ttl, prio, disabled, ordername, auth, domain_id, record_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DNSApi->update_dns_record: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **str**|  | 
 **type** | [**DnsRecordType**](.md)|  | 
 **content** | **str**|  | 
 **ttl** | **str**|  | 
 **prio** | **str**|  | 
 **disabled** | **str**|  | 
 **ordername** | **str**|  | 
 **auth** | **str**|  | 
 **domain_id** | **int**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 
 **record_id** | **int**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

