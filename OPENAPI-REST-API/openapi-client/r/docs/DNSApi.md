# DNSApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddDnsDomain**](DNSApi.md#AddDnsDomain) | **POST** /dns | Create DNS Domain
[**AddDnsRecord**](DNSApi.md#AddDnsRecord) | **POST** /dns/{id} | Add DNS Record to Domain
[**DeleteDnsDomain**](DNSApi.md#DeleteDnsDomain) | **DELETE** /dns/{id} | Delete DNS Domain
[**DeleteDnsRecord**](DNSApi.md#DeleteDnsRecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record
[**GetDnsDomain**](DNSApi.md#GetDnsDomain) | **GET** /dns/{id} | List Domain DNS Records
[**GetDnsList**](DNSApi.md#GetDnsList) | **GET** /dns | List DNS Domains
[**UpdateDnsRecord**](DNSApi.md#UpdateDnsRecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record


# **AddDnsDomain**
> AddDnsDomain(domain, ip)

Create DNS Domain

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.

### Example
```R
library(openapi)

# Create DNS Domain
#
# prepare function argument(s)
var_domain <- "domain_example" # character | The domain name.
var_ip <- "ip_example" # character | IP Address to point the domain to.

api_instance <- DNSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$AddDnsDomain(var_domain, var_ip)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **character**| The domain name. | 
 **ip** | **character**| IP Address to point the domain to. | 

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
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **AddDnsRecord**
> AddDnsRecord(id, name, type, content, ttl = 86400, prio = 0)

Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.

### Example
```R
library(openapi)

# Add DNS Record to Domain
#
# prepare function argument(s)
var_id <- "472" # character | The DNS Domain ID.
var_name <- "name_example" # character | Name part of record
var_type <- DnsRecordType$new() # DnsRecordType | 
var_content <- "content_example" # character | Content of record
var_ttl <- 86400 # integer | Time-to-live (Optional)
var_prio <- 0 # integer | Priority (Optional)

api_instance <- DNSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$AddDnsRecord(var_id, var_name, var_type, var_content, ttl = var_ttl, prio = var_prio)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| The DNS Domain ID. | 
 **name** | **character**| Name part of record | 
 **type** | [**DnsRecordType**](DnsRecordType.md)|  | 
 **content** | **character**| Content of record | 
 **ttl** | **integer**| Time-to-live | [optional] [default to 86400]
 **prio** | **integer**| Priority | [optional] [default to 0]

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
| **200** | Add DNS Domain Response |  -  |
| **401** | Unauthorized |  -  |

# **DeleteDnsDomain**
> DeleteDnsDomain(id)

Delete DNS Domain

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

### Example
```R
library(openapi)

# Delete DNS Domain
#
# prepare function argument(s)
var_id <- "id_example" # character | The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain.

api_instance <- DNSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$DeleteDnsDomain(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 

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
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **DeleteDnsRecord**
> DeleteDnsRecord(domain_id, record_id)

Delete DNS Record

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.

### Example
```R
library(openapi)

# Delete DNS Record
#
# prepare function argument(s)
var_domain_id <- 56 # integer | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
var_record_id <- 56 # integer | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.

api_instance <- DNSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$DeleteDnsRecord(var_domain_id, var_record_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain_id** | **integer**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 
 **record_id** | **integer**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | 

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
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

# **GetDnsDomain**
> array[DnsRecord] GetDnsDomain(id)

List Domain DNS Records

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.

### Example
```R
library(openapi)

# List Domain DNS Records
#
# prepare function argument(s)
var_id <- 56 # integer | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.

api_instance <- DNSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetDnsDomain(var_iddata_file = "result.txt")
result <- api_instance$GetDnsDomain(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 

### Return type

[**array[DnsRecord]**](DnsRecord.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The DNS records for the specified domain. |  -  |
| **401** | Unauthorized |  -  |

# **GetDnsList**
> array[DnsListItem] GetDnsList()

List DNS Domains

Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.

### Example
```R
library(openapi)

# List DNS Domains
#

api_instance <- DNSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetDnsList(data_file = "result.txt")
result <- api_instance$GetDnsList()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**array[DnsListItem]**](DnsListItem.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Listing of DNS domains on the account with their primary A record. |  -  |
| **401** | Unauthorized |  -  |

# **UpdateDnsRecord**
> UpdateDnsRecord(domain_id, record_id, name = var.name, type = var.type, content = var.content, ttl = var.ttl, prio = var.prio, disabled = var.disabled, ordername = var.ordername, auth = var.auth)

Update DNS Record

Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Example
```R
library(openapi)

# Update DNS Record
#
# prepare function argument(s)
var_domain_id <- 56 # integer | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
var_record_id <- 56 # integer | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
var_name <- "name_example" # character |  (Optional)
var_type <- DnsRecordType$new() # DnsRecordType |  (Optional)
var_content <- "content_example" # character |  (Optional)
var_ttl <- "ttl_example" # character |  (Optional)
var_prio <- "prio_example" # character |  (Optional)
var_disabled <- "disabled_example" # character |  (Optional)
var_ordername <- "ordername_example" # character |  (Optional)
var_auth <- "auth_example" # character |  (Optional)

api_instance <- DNSApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$UpdateDnsRecord(var_domain_id, var_record_id, name = var_name, type = var_type, content = var_content, ttl = var_ttl, prio = var_prio, disabled = var_disabled, ordername = var_ordername, auth = var_auth)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain_id** | **integer**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 
 **record_id** | **integer**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | 
 **name** | **character**|  | [optional] 
 **type** | [**DnsRecordType**](DnsRecordType.md)|  | [optional] 
 **content** | **character**|  | [optional] 
 **ttl** | **character**|  | [optional] 
 **prio** | **character**|  | [optional] 
 **disabled** | **character**|  | [optional] 
 **ordername** | **character**|  | [optional] 
 **auth** | **character**|  | [optional] 

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
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

