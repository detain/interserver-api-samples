# Interserver.MyAdmin.Client.Api.ScrubIpsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CancelScrubIp**](ScrubIpsApi.md#cancelscrubip) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service
[**CreateFilter**](ScrubIpsApi.md#createfilter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter
[**CreateGeoRule**](ScrubIpsApi.md#creategeorule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule
[**CreateRule**](ScrubIpsApi.md#createrule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule
[**DeleteFilter**](ScrubIpsApi.md#deletefilter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter
[**DisableScrub**](ScrubIpsApi.md#disablescrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection
[**EnableScrub**](ScrubIpsApi.md#enablescrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection
[**GetOrderDetail**](ScrubIpsApi.md#getorderdetail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information
[**GetScrubIpDetails**](ScrubIpsApi.md#getscrubipdetails) | **GET** /scrub_ips/{id} | Get Scrub IP Details
[**GetScrubIpFilterTypes**](ScrubIpsApi.md#getscrubipfiltertypes) | **GET** /scrub_ips/filter_types | List Scrub Filter Types
[**GetScrubIpInvoices**](ScrubIpsApi.md#getscrubipinvoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices
[**GetScrubIpLogs**](ScrubIpsApi.md#getscrubiplogs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs
[**GetScrubIpsList**](ScrubIpsApi.md#getscrubipslist) | **GET** /scrub_ips | List Scrub IP Services
[**PlaceScrubOrder**](ScrubIpsApi.md#placescruborder) | **POST** /scrub_ips/order | Place Scrub IP Order
[**ScrubIpsDeleteGeoRule**](ScrubIpsApi.md#scrubipsdeletegeorule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule
[**ScrubIpsDeleteRule**](ScrubIpsApi.md#scrubipsdeleterule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule

<a name="cancelscrubip"></a>
# **CancelScrubIp**
> InlineResponse20013 CancelScrubIp (int? id)

Cancel Scrub IP Service

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class CancelScrubIpExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new ScrubIpsApi();
            var id = 56;  // int? | ScrubIp ID number

            try
            {
                // Cancel Scrub IP Service
                InlineResponse20013 result = apiInstance.CancelScrubIp(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ScrubIpsApi.CancelScrubIp: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| ScrubIp ID number | 

### Return type

[**InlineResponse20013**](InlineResponse20013.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="createfilter"></a>
# **CreateFilter**
> InlineResponse2011 CreateFilter (CreateFilter body, int? id)

Create Traffic Filter

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class CreateFilterExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new ScrubIpsApi();
            var body = new CreateFilter(); // CreateFilter | 
            var id = 56;  // int? | ScrubIp ID number

            try
            {
                // Create Traffic Filter
                InlineResponse2011 result = apiInstance.CreateFilter(body, id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ScrubIpsApi.CreateFilter: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFilter**](CreateFilter.md)|  | 
 **id** | **int?**| ScrubIp ID number | 

### Return type

[**InlineResponse2011**](InlineResponse2011.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="creategeorule"></a>
# **CreateGeoRule**
> InlineResponse201 CreateGeoRule (CreateGeoFirewallRule body, int? id)

Create Geo Firewall Rule

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class CreateGeoRuleExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new ScrubIpsApi();
            var body = new CreateGeoFirewallRule(); // CreateGeoFirewallRule | 
            var id = 56;  // int? | ScrubIp ID number

            try
            {
                // Create Geo Firewall Rule
                InlineResponse201 result = apiInstance.CreateGeoRule(body, id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ScrubIpsApi.CreateGeoRule: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateGeoFirewallRule**](CreateGeoFirewallRule.md)|  | 
 **id** | **int?**| ScrubIp ID number | 

### Return type

[**InlineResponse201**](InlineResponse201.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="createrule"></a>
# **CreateRule**
> InlineResponse201 CreateRule (CreateFirewallRule body, int? id)

Create Firewall Rule

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class CreateRuleExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new ScrubIpsApi();
            var body = new CreateFirewallRule(); // CreateFirewallRule | 
            var id = 56;  // int? | ScrubIp ID number

            try
            {
                // Create Firewall Rule
                InlineResponse201 result = apiInstance.CreateRule(body, id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ScrubIpsApi.CreateRule: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFirewallRule**](CreateFirewallRule.md)|  | 
 **id** | **int?**| ScrubIp ID number | 

### Return type

[**InlineResponse201**](InlineResponse201.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="deletefilter"></a>
# **DeleteFilter**
> InlineResponse20017 DeleteFilter (CreateFilter body, int? id)

Delete Traffic Filter

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class DeleteFilterExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new ScrubIpsApi();
            var body = new CreateFilter(); // CreateFilter | 
            var id = 56;  // int? | ScrubIp ID number

            try
            {
                // Delete Traffic Filter
                InlineResponse20017 result = apiInstance.DeleteFilter(body, id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ScrubIpsApi.DeleteFilter: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFilter**](CreateFilter.md)|  | 
 **id** | **int?**| ScrubIp ID number | 

### Return type

[**InlineResponse20017**](InlineResponse20017.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="disablescrub"></a>
# **DisableScrub**
> InlineResponse20015 DisableScrub (int? id)

Disable Scrub Protection

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class DisableScrubExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new ScrubIpsApi();
            var id = 56;  // int? | ScrubIp ID number

            try
            {
                // Disable Scrub Protection
                InlineResponse20015 result = apiInstance.DisableScrub(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ScrubIpsApi.DisableScrub: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| ScrubIp ID number | 

### Return type

[**InlineResponse20015**](InlineResponse20015.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="enablescrub"></a>
# **EnableScrub**
> InlineResponse20014 EnableScrub (int? id)

Enable Scrub Protection

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class EnableScrubExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new ScrubIpsApi();
            var id = 56;  // int? | ScrubIp ID number

            try
            {
                // Enable Scrub Protection
                InlineResponse20014 result = apiInstance.EnableScrub(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ScrubIpsApi.EnableScrub: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| ScrubIp ID number | 

### Return type

[**InlineResponse20014**](InlineResponse20014.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getorderdetail"></a>
# **GetOrderDetail**
> InlineResponse20018 GetOrderDetail ()

Get Scrub IP Ordering Information

Returns the available Scrub IP service plans and pricing information needed to build an order form.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetOrderDetailExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new ScrubIpsApi();

            try
            {
                // Get Scrub IP Ordering Information
                InlineResponse20018 result = apiInstance.GetOrderDetail();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ScrubIpsApi.GetOrderDetail: " + e.Message );
            }
        }
    }
}
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
<a name="getscrubipdetails"></a>
# **GetScrubIpDetails**
> InlineResponse20012 GetScrubIpDetails (int? id)

Get Scrub IP Details

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetScrubIpDetailsExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new ScrubIpsApi();
            var id = 56;  // int? | ScrubIp ID number

            try
            {
                // Get Scrub IP Details
                InlineResponse20012 result = apiInstance.GetScrubIpDetails(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ScrubIpsApi.GetScrubIpDetails: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| ScrubIp ID number | 

### Return type

[**InlineResponse20012**](InlineResponse20012.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getscrubipfiltertypes"></a>
# **GetScrubIpFilterTypes**
> ScrubIpFilterTypes GetScrubIpFilterTypes ()

List Scrub Filter Types

Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetScrubIpFilterTypesExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new ScrubIpsApi();

            try
            {
                // List Scrub Filter Types
                ScrubIpFilterTypes result = apiInstance.GetScrubIpFilterTypes();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ScrubIpsApi.GetScrubIpFilterTypes: " + e.Message );
            }
        }
    }
}
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
<a name="getscrubipinvoices"></a>
# **GetScrubIpInvoices**
> ChargeInvoiceRows GetScrubIpInvoices (int? id)

Get ScrubIp Invoices

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetScrubIpInvoicesExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new ScrubIpsApi();
            var id = 56;  // int? | ScrubIp ID number

            try
            {
                // Get ScrubIp Invoices
                ChargeInvoiceRows result = apiInstance.GetScrubIpInvoices(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ScrubIpsApi.GetScrubIpInvoices: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| ScrubIp ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getscrubiplogs"></a>
# **GetScrubIpLogs**
> List<ScrubIpsLogRowSchema> GetScrubIpLogs (string id)

Get Scrub IP Logs

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetScrubIpLogsExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new ScrubIpsApi();
            var id = id_example;  // string | Scrub Order ID

            try
            {
                // Get Scrub IP Logs
                List&lt;ScrubIpsLogRowSchema&gt; result = apiInstance.GetScrubIpLogs(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ScrubIpsApi.GetScrubIpLogs: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| Scrub Order ID | 

### Return type

[**List<ScrubIpsLogRowSchema>**](ScrubIpsLogRowSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getscrubipslist"></a>
# **GetScrubIpsList**
> List<ScrubIpsRowSchema> GetScrubIpsList ()

List Scrub IP Services

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetScrubIpsListExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new ScrubIpsApi();

            try
            {
                // List Scrub IP Services
                List&lt;ScrubIpsRowSchema&gt; result = apiInstance.GetScrubIpsList();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ScrubIpsApi.GetScrubIpsList: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List<ScrubIpsRowSchema>**](ScrubIpsRowSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="placescruborder"></a>
# **PlaceScrubOrder**
> InlineResponse2012 PlaceScrubOrder (ScrubIpPlaceOrder body)

Place Scrub IP Order

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class PlaceScrubOrderExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new ScrubIpsApi();
            var body = new ScrubIpPlaceOrder(); // ScrubIpPlaceOrder | 

            try
            {
                // Place Scrub IP Order
                InlineResponse2012 result = apiInstance.PlaceScrubOrder(body);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ScrubIpsApi.PlaceScrubOrder: " + e.Message );
            }
        }
    }
}
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
<a name="scrubipsdeletegeorule"></a>
# **ScrubIpsDeleteGeoRule**
> InlineResponse20016 ScrubIpsDeleteGeoRule (DeleteGeoFirewallRule body, int? id)

Delete Geo Firewall Rule

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class ScrubIpsDeleteGeoRuleExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new ScrubIpsApi();
            var body = new DeleteGeoFirewallRule(); // DeleteGeoFirewallRule | 
            var id = 56;  // int? | ScrubIp ID number

            try
            {
                // Delete Geo Firewall Rule
                InlineResponse20016 result = apiInstance.ScrubIpsDeleteGeoRule(body, id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ScrubIpsApi.ScrubIpsDeleteGeoRule: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DeleteGeoFirewallRule**](DeleteGeoFirewallRule.md)|  | 
 **id** | **int?**| ScrubIp ID number | 

### Return type

[**InlineResponse20016**](InlineResponse20016.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="scrubipsdeleterule"></a>
# **ScrubIpsDeleteRule**
> InlineResponse20016 ScrubIpsDeleteRule (DeleteFirewallRule body, int? id)

Delete Firewall Rule

Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class ScrubIpsDeleteRuleExample
    {
        public void main()
        {
            // Configure API key authorization: apiKeyAuth
            Configuration.Default.AddApiKey("X-API-KEY", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-KEY", "Bearer");
            // Configure API key authorization: sessionIdCookieAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");
            // Configure API key authorization: sessionIdHeaderAuth
            Configuration.Default.AddApiKey("sessionid", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("sessionid", "Bearer");

            var apiInstance = new ScrubIpsApi();
            var body = new DeleteFirewallRule(); // DeleteFirewallRule | 
            var id = 56;  // int? | ScrubIp ID number

            try
            {
                // Delete Firewall Rule
                InlineResponse20016 result = apiInstance.ScrubIpsDeleteRule(body, id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ScrubIpsApi.ScrubIpsDeleteRule: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DeleteFirewallRule**](DeleteFirewallRule.md)|  | 
 **id** | **int?**| ScrubIp ID number | 

### Return type

[**InlineResponse20016**](InlineResponse20016.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
