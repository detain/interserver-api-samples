# DNSAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DNSAPI_addDnsDomain**](DNSAPI.md#DNSAPI_addDnsDomain) | **POST** /dns | Create DNS Domain
[**DNSAPI_addDnsRecord**](DNSAPI.md#DNSAPI_addDnsRecord) | **POST** /dns/{id} | Add DNS Record to Domain
[**DNSAPI_deleteDnsDomain**](DNSAPI.md#DNSAPI_deleteDnsDomain) | **DELETE** /dns/{id} | Delete DNS Domain
[**DNSAPI_deleteDnsRecord**](DNSAPI.md#DNSAPI_deleteDnsRecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record
[**DNSAPI_getDnsDomain**](DNSAPI.md#DNSAPI_getDnsDomain) | **GET** /dns/{id} | List Domain DNS Records
[**DNSAPI_getDnsList**](DNSAPI.md#DNSAPI_getDnsList) | **GET** /dns | List DNS Domains
[**DNSAPI_updateDnsRecord**](DNSAPI.md#DNSAPI_updateDnsRecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record


# **DNSAPI_addDnsDomain**
```c
// Create DNS Domain
//
// Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.
//
void DNSAPI_addDnsDomain(apiClient_t *apiClient, char *domain, char *ip);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**domain** | **char \*** | The domain name. | 
**ip** | **char \*** | IP Address to point the domain to. | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DNSAPI_addDnsRecord**
```c
// Add DNS Record to Domain
//
// Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
//
void DNSAPI_addDnsRecord(apiClient_t *apiClient, char *id, char *name, dns_record_type_e type, char *content, int *ttl, int *prio);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | The DNS Domain ID. | 
**name** | **char \*** | Name part of record | 
**type** | **dns_record_type_e** |  | 
**content** | **char \*** | Content of record | 
**ttl** | **int \*** | Time-to-live | [optional] [default to 86400]
**prio** | **int \*** | Priority | [optional] [default to 0]

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DNSAPI_deleteDnsDomain**
```c
// Delete DNS Domain
//
// Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
//
void DNSAPI_deleteDnsDomain(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DNSAPI_deleteDnsRecord**
```c
// Delete DNS Record
//
// Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
//
void DNSAPI_deleteDnsRecord(apiClient_t *apiClient, int *domainId, int *recordId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**domainId** | **int \*** | The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 
**recordId** | **int \*** | The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DNSAPI_getDnsDomain**
```c
// List Domain DNS Records
//
// Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
//
list_t* DNSAPI_getDnsDomain(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 

### Return type

[list_t](dns_record.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DNSAPI_getDnsList**
```c
// List DNS Domains
//
// Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
//
list_t* DNSAPI_getDnsList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](dns_list_item.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DNSAPI_updateDnsRecord**
```c
// Update DNS Record
//
// Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
//
void DNSAPI_updateDnsRecord(apiClient_t *apiClient, int *domainId, int *recordId, char *name, dns_record_type_e type, char *content, char *ttl, char *prio, char *disabled, char *ordername, char *auth);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**domainId** | **int \*** | The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 
**recordId** | **int \*** | The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | 
**name** | **char \*** |  | [optional] 
**type** | **dns_record_type_e** |  | [optional] 
**content** | **char \*** |  | [optional] 
**ttl** | **char \*** |  | [optional] 
**prio** | **char \*** |  | [optional] 
**disabled** | **char \*** |  | [optional] 
**ordername** | **char \*** |  | [optional] 
**auth** | **char \*** |  | [optional] 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

