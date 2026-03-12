# IO.Swagger.Api.WebhostingApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddWebsite**](WebhostingApi.md#addwebsite) | **POST** /websites/order | Place Website Order
[**GetNewWebsite**](WebhostingApi.md#getnewwebsite) | **GET** /websites/order | Website Ordering Information
[**GetWebsiteBuyIp**](WebhostingApi.md#getwebsitebuyip) | **GET** /websites/{id}/buy_ip | Get Website IP Information
[**GetWebsiteInfo**](WebhostingApi.md#getwebsiteinfo) | **GET** /websites/{id} | Get Website Order
[**GetWebsiteInvoices**](WebhostingApi.md#getwebsiteinvoices) | **GET** /websites/{id}/invoices | Get Website Invoices
[**GetWebsiteList**](WebhostingApi.md#getwebsitelist) | **GET** /websites | Get Website Listing
[**GetWebsitesBackups**](WebhostingApi.md#getwebsitesbackups) | **GET** /websites/{id}/backups | Get Website Backups
[**GetWebsitesLogin**](WebhostingApi.md#getwebsiteslogin) | **GET** /websites/{id}/login | Hosting Panel Auto Login
[**GetWebsitesWelcomeEmail**](WebhostingApi.md#getwebsiteswelcomeemail) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email
[**GettWebsiteReverseDns**](WebhostingApi.md#gettwebsitereversedns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS
[**PostWebsiteBuyIp**](WebhostingApi.md#postwebsitebuyip) | **POST** /websites/{id}/buy_ip | Update Website IP DNS
[**PostWebsiteMigration**](WebhostingApi.md#postwebsitemigration) | **POST** /websites/{id}/migration | Request Website Migration
[**PostWebsitesReverseDns**](WebhostingApi.md#postwebsitesreversedns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS
[**PutWebsites**](WebhostingApi.md#putwebsites) | **PUT** /websites/order | Validate Webhosting Order
[**UpdateWebsiteInfo**](WebhostingApi.md#updatewebsiteinfo) | **POST** /websites/{id} | Update Website Order
[**WebhostingCancel**](WebhostingApi.md#webhostingcancel) | **DELETE** /websites/{id} | Cancel Website

<a name="addwebsite"></a>
# **AddWebsite**
> void AddWebsite ()

Place Website Order

Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class AddWebsiteExample
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

            var apiInstance = new WebhostingApi();

            try
            {
                // Place Website Order
                apiInstance.AddWebsite();
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling WebhostingApi.AddWebsite: " + e.Message );
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

<a name="getnewwebsite"></a>
# **GetNewWebsite**
> WebsitesOrder GetNewWebsite ()

Website Ordering Information

Retrieves available webhosting plans and pricing for ordering.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetNewWebsiteExample
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

            var apiInstance = new WebhostingApi();

            try
            {
                // Website Ordering Information
                WebsitesOrder result = apiInstance.GetNewWebsite();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling WebhostingApi.GetNewWebsite: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**WebsitesOrder**](WebsitesOrder.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getwebsitebuyip"></a>
# **GetWebsiteBuyIp**
> InlineResponse20023 GetWebsiteBuyIp (int? id)

Get Website IP Information

Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetWebsiteBuyIpExample
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

            var apiInstance = new WebhostingApi();
            var id = 56;  // int? | The website service ID. Use `website_id` from `GET /websites`.

            try
            {
                // Get Website IP Information
                InlineResponse20023 result = apiInstance.GetWebsiteBuyIp(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling WebhostingApi.GetWebsiteBuyIp: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**InlineResponse20023**](InlineResponse20023.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getwebsiteinfo"></a>
# **GetWebsiteInfo**
> Website GetWebsiteInfo (int? id)

Get Website Order

Returns detailed information about a specific webhosting order including its domain, plan, and status.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetWebsiteInfoExample
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

            var apiInstance = new WebhostingApi();
            var id = 56;  // int? | The website service ID. Use `website_id` from `GET /websites`.

            try
            {
                // Get Website Order
                Website result = apiInstance.GetWebsiteInfo(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling WebhostingApi.GetWebsiteInfo: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**Website**](Website.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getwebsiteinvoices"></a>
# **GetWebsiteInvoices**
> ChargeInvoiceRows GetWebsiteInvoices (int? id)

Get Website Invoices

Returns the billing invoices associated with this webhosting service.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetWebsiteInvoicesExample
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

            var apiInstance = new WebhostingApi();
            var id = 56;  // int? | The website service ID. Use `website_id` from `GET /websites`.

            try
            {
                // Get Website Invoices
                ChargeInvoiceRows result = apiInstance.GetWebsiteInvoices(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling WebhostingApi.GetWebsiteInvoices: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getwebsitelist"></a>
# **GetWebsiteList**
> List<WebsiteRow> GetWebsiteList ()

Get Website Listing

Gets a listing of your webhosting orders and service details.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetWebsiteListExample
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

            var apiInstance = new WebhostingApi();

            try
            {
                // Get Website Listing
                List&lt;WebsiteRow&gt; result = apiInstance.GetWebsiteList();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling WebhostingApi.GetWebsiteList: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List<WebsiteRow>**](WebsiteRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getwebsitesbackups"></a>
# **GetWebsitesBackups**
> WebsiteBackups GetWebsitesBackups (int? id)

Get Website Backups

Gets a list of the backups that exist for a website and their sizes.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetWebsitesBackupsExample
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

            var apiInstance = new WebhostingApi();
            var id = 56;  // int? | The website service ID. Use `website_id` from `GET /websites`.

            try
            {
                // Get Website Backups
                WebsiteBackups result = apiInstance.GetWebsitesBackups(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling WebhostingApi.GetWebsitesBackups: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**WebsiteBackups**](WebsiteBackups.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getwebsiteslogin"></a>
# **GetWebsitesLogin**
> WebsiteLoginResponse GetWebsitesLogin (int? id)

Hosting Panel Auto Login

Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetWebsitesLoginExample
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

            var apiInstance = new WebhostingApi();
            var id = 56;  // int? | The website service ID. Use `website_id` from `GET /websites`.

            try
            {
                // Hosting Panel Auto Login
                WebsiteLoginResponse result = apiInstance.GetWebsitesLogin(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling WebhostingApi.GetWebsitesLogin: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**WebsiteLoginResponse**](WebsiteLoginResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getwebsiteswelcomeemail"></a>
# **GetWebsitesWelcomeEmail**
> SuccessTextResponse GetWebsitesWelcomeEmail (int? id)

Resend Website Welcome Email

Resends the welcome email containing hosting credentials and panel access details for the webhosting order.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetWebsitesWelcomeEmailExample
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

            var apiInstance = new WebhostingApi();
            var id = 56;  // int? | The website service ID. Use `website_id` from `GET /websites`.

            try
            {
                // Resend Website Welcome Email
                SuccessTextResponse result = apiInstance.GetWebsitesWelcomeEmail(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling WebhostingApi.GetWebsitesWelcomeEmail: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="gettwebsitereversedns"></a>
# **GettWebsiteReverseDns**
> ReverseDnsEntries GettWebsiteReverseDns (int? id)

Get Website Reverse DNS

Returns the current reverse DNS (PTR record) entries for the website's IP addresses.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GettWebsiteReverseDnsExample
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

            var apiInstance = new WebhostingApi();
            var id = 56;  // int? | The website service ID. Use `website_id` from `GET /websites`.

            try
            {
                // Get Website Reverse DNS
                ReverseDnsEntries result = apiInstance.GettWebsiteReverseDns(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling WebhostingApi.GettWebsiteReverseDns: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="postwebsitebuyip"></a>
# **PostWebsiteBuyIp**
> InlineResponse20024 PostWebsiteBuyIp (IdBuyIpBody body, int? id)

Update Website IP DNS

Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class PostWebsiteBuyIpExample
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

            var apiInstance = new WebhostingApi();
            var body = new IdBuyIpBody(); // IdBuyIpBody | 
            var id = 56;  // int? | The website service ID. Use `website_id` from `GET /websites`.

            try
            {
                // Update Website IP DNS
                InlineResponse20024 result = apiInstance.PostWebsiteBuyIp(body, id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling WebhostingApi.PostWebsiteBuyIp: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IdBuyIpBody**](IdBuyIpBody.md)|  | 
 **id** | **int?**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**InlineResponse20024**](InlineResponse20024.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="postwebsitemigration"></a>
# **PostWebsiteMigration**
> InlineResponse20025 PostWebsiteMigration (IdMigrationBody body, int? id)

Request Website Migration

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class PostWebsiteMigrationExample
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

            var apiInstance = new WebhostingApi();
            var body = new IdMigrationBody(); // IdMigrationBody | 
            var id = 56;  // int? | The website service ID. Use `website_id` from `GET /websites`.

            try
            {
                // Request Website Migration
                InlineResponse20025 result = apiInstance.PostWebsiteMigration(body, id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling WebhostingApi.PostWebsiteMigration: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IdMigrationBody**](IdMigrationBody.md)|  | 
 **id** | **int?**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**InlineResponse20025**](InlineResponse20025.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="postwebsitesreversedns"></a>
# **PostWebsitesReverseDns**
> TextResponse PostWebsitesReverseDns (ReverseDnsEntries body, int? id)

Update Website Reverse DNS

Updates the reverse DNS entries for each of the IP addresses for the website.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class PostWebsitesReverseDnsExample
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

            var apiInstance = new WebhostingApi();
            var body = new ReverseDnsEntries(); // ReverseDnsEntries | 
            var id = 56;  // int? | The website service ID. Use `website_id` from `GET /websites`.

            try
            {
                // Update Website Reverse DNS
                TextResponse result = apiInstance.PostWebsitesReverseDns(body, id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling WebhostingApi.PostWebsitesReverseDns: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 
 **id** | **int?**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="putwebsites"></a>
# **PutWebsites**
> void PutWebsites ()

Validate Webhosting Order

Validates a webhosting order before placing it.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class PutWebsitesExample
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

            var apiInstance = new WebhostingApi();

            try
            {
                // Validate Webhosting Order
                apiInstance.PutWebsites();
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling WebhostingApi.PutWebsites: " + e.Message );
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

<a name="updatewebsiteinfo"></a>
# **UpdateWebsiteInfo**
> void UpdateWebsiteInfo (string id)

Update Website Order

Updates settings on a webhosting order.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class UpdateWebsiteInfoExample
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

            var apiInstance = new WebhostingApi();
            var id = id_example;  // string | The website service ID. Use `website_id` from `GET /websites`.

            try
            {
                // Update Website Order
                apiInstance.UpdateWebsiteInfo(id);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling WebhostingApi.UpdateWebsiteInfo: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="webhostingcancel"></a>
# **WebhostingCancel**
> InlineResponse20022 WebhostingCancel (string id)

Cancel Website

Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class WebhostingCancelExample
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

            var apiInstance = new WebhostingApi();
            var id = id_example;  // string | The website service ID. Use `website_id` from `GET /websites`.

            try
            {
                // Cancel Website
                InlineResponse20022 result = apiInstance.WebhostingCancel(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling WebhostingApi.WebhostingCancel: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**InlineResponse20022**](InlineResponse20022.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

