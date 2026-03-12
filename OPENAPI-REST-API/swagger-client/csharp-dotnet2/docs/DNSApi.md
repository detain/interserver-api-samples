# IO.Swagger.Api.DNSApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddDnsDomain**](DNSApi.md#adddnsdomain) | **POST** /dns | Create DNS Domain
[**AddDnsRecord**](DNSApi.md#adddnsrecord) | **POST** /dns/{id} | Add DNS Record to Domain
[**DeleteDnsDomain**](DNSApi.md#deletednsdomain) | **DELETE** /dns/{id} | Delete DNS Domain
[**DeleteDnsRecord**](DNSApi.md#deletednsrecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record
[**GetDnsDomain**](DNSApi.md#getdnsdomain) | **GET** /dns/{id} | List Domain DNS Records
[**GetDnsList**](DNSApi.md#getdnslist) | **GET** /dns | List DNS Domains
[**UpdateDnsRecord**](DNSApi.md#updatednsrecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record

<a name="adddnsdomain"></a>
# **AddDnsDomain**
> void AddDnsDomain (string domain, string ip)

Create DNS Domain

Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class AddDnsDomainExample
    {
        public void main()
        {

            // Configure API key authorization: apiKeyAuth
            Configuration.Default.ApiKey.Add("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.ApiKey.Add("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.ApiKey.Add("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("sessionid", "Bearer");

            var apiInstance = new DNSApi();
            var domain = domain_example;  // string | 
            var ip = ip_example;  // string | 

            try
            {
                // Create DNS Domain
                apiInstance.AddDnsDomain(domain, ip);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling DNSApi.AddDnsDomain: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **string**|  | 
 **ip** | **string**|  | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="adddnsrecord"></a>
# **AddDnsRecord**
> void AddDnsRecord (string name, DnsRecordType type, string content, int? ttl, int? prio, string id)

Add DNS Record to Domain

Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class AddDnsRecordExample
    {
        public void main()
        {

            // Configure API key authorization: apiKeyAuth
            Configuration.Default.ApiKey.Add("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.ApiKey.Add("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.ApiKey.Add("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("sessionid", "Bearer");

            var apiInstance = new DNSApi();
            var name = name_example;  // string | 
            var type = new DnsRecordType(); // DnsRecordType | 
            var content = content_example;  // string | 
            var ttl = 56;  // int? | 
            var prio = 56;  // int? | 
            var id = id_example;  // string | The DNS Domain ID.

            try
            {
                // Add DNS Record to Domain
                apiInstance.AddDnsRecord(name, type, content, ttl, prio, id);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling DNSApi.AddDnsRecord: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string**|  | 
 **type** | [**DnsRecordType**](.md)|  | 
 **content** | **string**|  | 
 **ttl** | **int?**|  | 
 **prio** | **int?**|  | 
 **id** | **string**| The DNS Domain ID. | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="deletednsdomain"></a>
# **DeleteDnsDomain**
> void DeleteDnsDomain (string id)

Delete DNS Domain

Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class DeleteDnsDomainExample
    {
        public void main()
        {

            // Configure API key authorization: apiKeyAuth
            Configuration.Default.ApiKey.Add("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.ApiKey.Add("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.ApiKey.Add("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("sessionid", "Bearer");

            var apiInstance = new DNSApi();
            var id = id_example;  // string | The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain.

            try
            {
                // Delete DNS Domain
                apiInstance.DeleteDnsDomain(id);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling DNSApi.DeleteDnsDomain: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="deletednsrecord"></a>
# **DeleteDnsRecord**
> void DeleteDnsRecord (int? domainId, int? recordId)

Delete DNS Record

Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class DeleteDnsRecordExample
    {
        public void main()
        {

            // Configure API key authorization: apiKeyAuth
            Configuration.Default.ApiKey.Add("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.ApiKey.Add("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.ApiKey.Add("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("sessionid", "Bearer");

            var apiInstance = new DNSApi();
            var domainId = 56;  // int? | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
            var recordId = 56;  // int? | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.

            try
            {
                // Delete DNS Record
                apiInstance.DeleteDnsRecord(domainId, recordId);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling DNSApi.DeleteDnsRecord: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domainId** | **int?**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 
 **recordId** | **int?**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getdnsdomain"></a>
# **GetDnsDomain**
> List<DnsRecord> GetDnsDomain (int? id)

List Domain DNS Records

Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetDnsDomainExample
    {
        public void main()
        {

            // Configure API key authorization: apiKeyAuth
            Configuration.Default.ApiKey.Add("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.ApiKey.Add("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.ApiKey.Add("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("sessionid", "Bearer");

            var apiInstance = new DNSApi();
            var id = 56;  // int? | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.

            try
            {
                // List Domain DNS Records
                List&lt;DnsRecord&gt; result = apiInstance.GetDnsDomain(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling DNSApi.GetDnsDomain: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 

### Return type

[**List<DnsRecord>**](DnsRecord.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getdnslist"></a>
# **GetDnsList**
> List<DnsListItem> GetDnsList ()

List DNS Domains

Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetDnsListExample
    {
        public void main()
        {

            // Configure API key authorization: apiKeyAuth
            Configuration.Default.ApiKey.Add("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.ApiKey.Add("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.ApiKey.Add("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("sessionid", "Bearer");

            var apiInstance = new DNSApi();

            try
            {
                // List DNS Domains
                List&lt;DnsListItem&gt; result = apiInstance.GetDnsList();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling DNSApi.GetDnsList: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List<DnsListItem>**](DnsListItem.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="updatednsrecord"></a>
# **UpdateDnsRecord**
> void UpdateDnsRecord (string name, DnsRecordType type, string content, string ttl, string prio, string disabled, string ordername, string auth, int? domainId, int? recordId)

Update DNS Record

Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class UpdateDnsRecordExample
    {
        public void main()
        {

            // Configure API key authorization: apiKeyAuth
            Configuration.Default.ApiKey.Add("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.ApiKey.Add("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.ApiKey.Add("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.ApiKeyPrefix.Add("sessionid", "Bearer");

            var apiInstance = new DNSApi();
            var name = name_example;  // string | 
            var type = new DnsRecordType(); // DnsRecordType | 
            var content = content_example;  // string | 
            var ttl = ttl_example;  // string | 
            var prio = prio_example;  // string | 
            var disabled = disabled_example;  // string | 
            var ordername = ordername_example;  // string | 
            var auth = auth_example;  // string | 
            var domainId = 56;  // int? | The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
            var recordId = 56;  // int? | The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.

            try
            {
                // Update DNS Record
                apiInstance.UpdateDnsRecord(name, type, content, ttl, prio, disabled, ordername, auth, domainId, recordId);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling DNSApi.UpdateDnsRecord: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string**|  | 
 **type** | [**DnsRecordType**](.md)|  | 
 **content** | **string**|  | 
 **ttl** | **string**|  | 
 **prio** | **string**|  | 
 **disabled** | **string**|  | 
 **ordername** | **string**|  | 
 **auth** | **string**|  | 
 **domainId** | **int?**| The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. | 
 **recordId** | **int?**| The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

