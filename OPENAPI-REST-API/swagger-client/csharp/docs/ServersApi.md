# Interserver.MyAdmin.Client.Api.ServersApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddServer**](ServersApi.md#addserver) | **POST** /servers/order | Place Server Order
[**BuyItNowServerOrder**](ServersApi.md#buyitnowserverorder) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options
[**GetMPServers**](ServersApi.md#getmpservers) | **GET** /buy_now_servers_list | List Marketplace Servers
[**GetNewServer**](ServersApi.md#getnewserver) | **GET** /servers/order | Server Ordering Information
[**GetServerInfo**](ServersApi.md#getserverinfo) | **GET** /servers/{id} | Get Server Order
[**GetServerInvoices**](ServersApi.md#getserverinvoices) | **GET** /servers/{id}/invoices | Get Server Invoices
[**GetServerList**](ServersApi.md#getserverlist) | **GET** /servers | List Servers
[**GetServerReverseDns**](ServersApi.md#getserverreversedns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info
[**GetServersWelcomeEmail**](ServersApi.md#getserverswelcomeemail) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email
[**PlaceBuyNowServer**](ServersApi.md#placebuynowserver) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order
[**PostServerReverseDns**](ServersApi.md#postserverreversedns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS
[**PutServers**](ServersApi.md#putservers) | **PUT** /servers/order | Validate Server Order
[**ServerIpmiLiveGet**](ServersApi.md#serveripmiliveget) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information
[**ServerIpmiLivePost**](ServersApi.md#serveripmilivepost) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup
[**ServerIpmiPowerGet**](ServersApi.md#serveripmipowerget) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status
[**ServerIpmiPowerPost**](ServersApi.md#serveripmipowerpost) | **POST** /servers/{id}/ipmi_power | Server IPMI Power
[**ServersCancel**](ServersApi.md#serverscancel) | **DELETE** /servers/{id} | Cancel Server Service
[**UpdateServerInfo**](ServersApi.md#updateserverinfo) | **POST** /servers/{id} | Update Server Order

<a name="addserver"></a>
# **AddServer**
> InlineResponse20019 AddServer ()

Place Server Order

Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class AddServerExample
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

            var apiInstance = new ServersApi();

            try
            {
                // Place Server Order
                InlineResponse20019 result = apiInstance.AddServer();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.AddServer: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse20019**](InlineResponse20019.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="buyitnowserverorder"></a>
# **BuyItNowServerOrder**
> InlineResponse20027 BuyItNowServerOrder ()

Get Buy Now Server Options

Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class BuyItNowServerOrderExample
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

            var apiInstance = new ServersApi();

            try
            {
                // Get Buy Now Server Options
                InlineResponse20027 result = apiInstance.BuyItNowServerOrder();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.BuyItNowServerOrder: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse20027**](InlineResponse20027.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getmpservers"></a>
# **GetMPServers**
> BuyItNowList GetMPServers ()

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetMPServersExample
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

            var apiInstance = new ServersApi();

            try
            {
                // List Marketplace Servers
                BuyItNowList result = apiInstance.GetMPServers();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.GetMPServers: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BuyItNowList**](BuyItNowList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getnewserver"></a>
# **GetNewServer**
> ServerOrder GetNewServer ()

Server Ordering Information

Retrieves available server configurations and pricing for ordering a new dedicated server.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetNewServerExample
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

            var apiInstance = new ServersApi();

            try
            {
                // Server Ordering Information
                ServerOrder result = apiInstance.GetNewServer();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.GetNewServer: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServerOrder**](ServerOrder.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getserverinfo"></a>
# **GetServerInfo**
> Server GetServerInfo (int? id)

Get Server Order

Returns detailed information about a specific server including its hardware configuration, IPs, and status.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetServerInfoExample
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

            var apiInstance = new ServersApi();
            var id = 56;  // int? | Server ID number.

            try
            {
                // Get Server Order
                Server result = apiInstance.GetServerInfo(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.GetServerInfo: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| Server ID number. | 

### Return type

[**Server**](Server.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getserverinvoices"></a>
# **GetServerInvoices**
> ChargeInvoiceRows GetServerInvoices (int? id)

Get Server Invoices

Returns the billing invoices associated with this dedicated server.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetServerInvoicesExample
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

            var apiInstance = new ServersApi();
            var id = 56;  // int? | Server ID number

            try
            {
                // Get Server Invoices
                ChargeInvoiceRows result = apiInstance.GetServerInvoices(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.GetServerInvoices: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| Server ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getserverlist"></a>
# **GetServerList**
> List<ServerRow> GetServerList ()

List Servers

Returns all dedicated server services on the account with their current status and configuration.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetServerListExample
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

            var apiInstance = new ServersApi();

            try
            {
                // List Servers
                List&lt;ServerRow&gt; result = apiInstance.GetServerList();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.GetServerList: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List<ServerRow>**](ServerRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getserverreversedns"></a>
# **GetServerReverseDns**
> ReverseDnsEntries GetServerReverseDns (int? id)

Reverse DNS Info

Returns the current reverse DNS (PTR record) entries for the server's IP addresses.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetServerReverseDnsExample
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

            var apiInstance = new ServersApi();
            var id = 56;  // int? | Server ID number

            try
            {
                // Reverse DNS Info
                ReverseDnsEntries result = apiInstance.GetServerReverseDns(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.GetServerReverseDns: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| Server ID number | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getserverswelcomeemail"></a>
# **GetServersWelcomeEmail**
> SuccessTextResponse GetServersWelcomeEmail (int? id)

Resend Server Welcome Email

Resends the welcome email for the order.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetServersWelcomeEmailExample
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

            var apiInstance = new ServersApi();
            var id = 56;  // int? | Server ID number

            try
            {
                // Resend Server Welcome Email
                SuccessTextResponse result = apiInstance.GetServersWelcomeEmail(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.GetServersWelcomeEmail: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| Server ID number | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="placebuynowserver"></a>
# **PlaceBuyNowServer**
> ServersBuyNowResponse PlaceBuyNowServer (OrderBuyNowServerBody body = null)

Place Buy Now Server Order

Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class PlaceBuyNowServerExample
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

            var apiInstance = new ServersApi();
            var body = new OrderBuyNowServerBody(); // OrderBuyNowServerBody |  (optional) 

            try
            {
                // Place Buy Now Server Order
                ServersBuyNowResponse result = apiInstance.PlaceBuyNowServer(body);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.PlaceBuyNowServer: " + e.Message );
            }
        }
    }
}
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
<a name="postserverreversedns"></a>
# **PostServerReverseDns**
> TextResponse PostServerReverseDns (ReverseDnsEntries body, int? id)

Update Reverse DNS

Updates the reverse DNS (PTR record) entries for the server's IP addresses.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class PostServerReverseDnsExample
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

            var apiInstance = new ServersApi();
            var body = new ReverseDnsEntries(); // ReverseDnsEntries | 
            var id = 56;  // int? | Server ID number

            try
            {
                // Update Reverse DNS
                TextResponse result = apiInstance.PostServerReverseDns(body, id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.PostServerReverseDns: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 
 **id** | **int?**| Server ID number | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="putservers"></a>
# **PutServers**
> void PutServers ()

Validate Server Order

Validates a server order before placing it. Use this to check for errors before committing to a purchase.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class PutServersExample
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

            var apiInstance = new ServersApi();

            try
            {
                // Validate Server Order
                apiInstance.PutServers();
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.PutServers: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="serveripmiliveget"></a>
# **ServerIpmiLiveGet**
> ServerIpmiLiveInfo ServerIpmiLiveGet (int? id)

Server IPMI Live Information

Returns the current IPMI live connection information for the server.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class ServerIpmiLiveGetExample
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

            var apiInstance = new ServersApi();
            var id = 56;  // int? | Server ID number

            try
            {
                // Server IPMI Live Information
                ServerIpmiLiveInfo result = apiInstance.ServerIpmiLiveGet(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.ServerIpmiLiveGet: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| Server ID number | 

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="serveripmilivepost"></a>
# **ServerIpmiLivePost**
> ServerIpmiLiveInfo ServerIpmiLivePost (int? asset, string ip, int? id)

Server IPMI Live Setup

Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class ServerIpmiLivePostExample
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

            var apiInstance = new ServersApi();
            var asset = 56;  // int? | 
            var ip = ip_example;  // string | 
            var id = 56;  // int? | Server ID number

            try
            {
                // Server IPMI Live Setup
                ServerIpmiLiveInfo result = apiInstance.ServerIpmiLivePost(asset, ip, id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.ServerIpmiLivePost: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **asset** | **int?**|  | 
 **ip** | **string**|  | 
 **id** | **int?**| Server ID number | 

### Return type

[**ServerIpmiLiveInfo**](ServerIpmiLiveInfo.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="serveripmipowerget"></a>
# **ServerIpmiPowerGet**
> TextResponse ServerIpmiPowerGet (int? id)

Get IPMI Power Status

Returns the chassis power status from ipmi.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class ServerIpmiPowerGetExample
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

            var apiInstance = new ServersApi();
            var id = 56;  // int? | Server ID number

            try
            {
                // Get IPMI Power Status
                TextResponse result = apiInstance.ServerIpmiPowerGet(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.ServerIpmiPowerGet: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| Server ID number | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="serveripmipowerpost"></a>
# **ServerIpmiPowerPost**
> TextResponse ServerIpmiPowerPost (int? asset, string action, int? id)

Server IPMI Power

Uses the IPMI interface to set the Power status on the server.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class ServerIpmiPowerPostExample
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

            var apiInstance = new ServersApi();
            var asset = 56;  // int? | 
            var action = action_example;  // string | 
            var id = 56;  // int? | Server ID number

            try
            {
                // Server IPMI Power
                TextResponse result = apiInstance.ServerIpmiPowerPost(asset, action, id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.ServerIpmiPowerPost: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **asset** | **int?**|  | 
 **action** | **string**|  | 
 **id** | **int?**| Server ID number | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="serverscancel"></a>
# **ServersCancel**
> InlineResponse20020 ServersCancel (int? id)

Cancel Server Service

Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class ServersCancelExample
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

            var apiInstance = new ServersApi();
            var id = 56;  // int? | Server ID number

            try
            {
                // Cancel Server Service
                InlineResponse20020 result = apiInstance.ServersCancel(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.ServersCancel: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| Server ID number | 

### Return type

[**InlineResponse20020**](InlineResponse20020.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="updateserverinfo"></a>
# **UpdateServerInfo**
> SuccessTextResponse UpdateServerInfo (string id)

Update Server Order

Updates settings on a dedicated server order.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class UpdateServerInfoExample
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

            var apiInstance = new ServersApi();
            var id = id_example;  // string | Server ID number.

            try
            {
                // Update Server Order
                SuccessTextResponse result = apiInstance.UpdateServerInfo(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling ServersApi.UpdateServerInfo: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| Server ID number. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
