# Interserver.MyAdmin.Client.Api.SSLCertificatesApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddSsl**](SSLCertificatesApi.md#addssl) | **POST** /ssl/order | Place SSL Cert Order
[**GetNewSsl**](SSLCertificatesApi.md#getnewssl) | **GET** /ssl/order | SSL Cert Ordering Information
[**GetSslInfo**](SSLCertificatesApi.md#getsslinfo) | **GET** /ssl/{id} | Get SSL Cert Info
[**GetSslInvoices**](SSLCertificatesApi.md#getsslinvoices) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices
[**GetSslList**](SSLCertificatesApi.md#getssllist) | **GET** /ssl | List SSL Certs
[**GetSslWelcomeEmail**](SSLCertificatesApi.md#getsslwelcomeemail) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email
[**PutSsl**](SSLCertificatesApi.md#putssl) | **PUT** /ssl/order | Validate SSL Cert Order
[**SslCancel**](SSLCertificatesApi.md#sslcancel) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service
[**UpdateSslInfo**](SSLCertificatesApi.md#updatesslinfo) | **POST** /ssl/{id} | Update SSL Cert Order

<a name="addssl"></a>
# **AddSsl**
> ServiceOrderPostResponse AddSsl ()

Place SSL Cert Order

Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class AddSslExample
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

            var apiInstance = new SSLCertificatesApi();

            try
            {
                // Place SSL Cert Order
                ServiceOrderPostResponse result = apiInstance.AddSsl();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling SSLCertificatesApi.AddSsl: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getnewssl"></a>
# **GetNewSsl**
> Object GetNewSsl ()

SSL Cert Ordering Information

Retrieves available SSL certificate types and pricing for ordering.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetNewSslExample
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

            var apiInstance = new SSLCertificatesApi();

            try
            {
                // SSL Cert Ordering Information
                Object result = apiInstance.GetNewSsl();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling SSLCertificatesApi.GetNewSsl: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**Object**

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getsslinfo"></a>
# **GetSslInfo**
> Object GetSslInfo (int? id)

Get SSL Cert Info

Returns detailed information about a specific SSL certificate including its domain and expiration.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetSslInfoExample
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

            var apiInstance = new SSLCertificatesApi();
            var id = 56;  // int? | SSL certificate ID number.

            try
            {
                // Get SSL Cert Info
                Object result = apiInstance.GetSslInfo(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling SSLCertificatesApi.GetSslInfo: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| SSL certificate ID number. | 

### Return type

**Object**

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getsslinvoices"></a>
# **GetSslInvoices**
> ChargeInvoiceRows GetSslInvoices (int? id)

Get SSL Cert Invoices

Returns the billing invoices associated with this SSL certificate.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetSslInvoicesExample
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

            var apiInstance = new SSLCertificatesApi();
            var id = 56;  // int? | SSL Cert ID number

            try
            {
                // Get SSL Cert Invoices
                ChargeInvoiceRows result = apiInstance.GetSslInvoices(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling SSLCertificatesApi.GetSslInvoices: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| SSL Cert ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="getssllist"></a>
# **GetSslList**
> void GetSslList ()

List SSL Certs

Returns all SSL certificate services on the account with their current status.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class GetSslListExample
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

            var apiInstance = new SSLCertificatesApi();

            try
            {
                // List SSL Certs
                apiInstance.GetSslList();
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling SSLCertificatesApi.GetSslList: " + e.Message );
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
<a name="getsslwelcomeemail"></a>
# **GetSslWelcomeEmail**
> SuccessTextResponse GetSslWelcomeEmail (int? id)

Resend SSL Welcome Email

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
    public class GetSslWelcomeEmailExample
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

            var apiInstance = new SSLCertificatesApi();
            var id = 56;  // int? | SSL Cert ID number

            try
            {
                // Resend SSL Welcome Email
                SuccessTextResponse result = apiInstance.GetSslWelcomeEmail(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling SSLCertificatesApi.GetSslWelcomeEmail: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| SSL Cert ID number | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="putssl"></a>
# **PutSsl**
> void PutSsl ()

Validate SSL Cert Order

Validates an SSL certificate order before placing it.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class PutSslExample
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

            var apiInstance = new SSLCertificatesApi();

            try
            {
                // Validate SSL Cert Order
                apiInstance.PutSsl();
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling SSLCertificatesApi.PutSsl: " + e.Message );
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
<a name="sslcancel"></a>
# **SslCancel**
> InlineResponse20021 SslCancel (int? id)

Cancel SSL Certificate Service

Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class SslCancelExample
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

            var apiInstance = new SSLCertificatesApi();
            var id = 56;  // int? | SSL Cert ID number

            try
            {
                // Cancel SSL Certificate Service
                InlineResponse20021 result = apiInstance.SslCancel(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling SSLCertificatesApi.SslCancel: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| SSL Cert ID number | 

### Return type

[**InlineResponse20021**](InlineResponse20021.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
<a name="updatesslinfo"></a>
# **UpdateSslInfo**
> SuccessTextResponse UpdateSslInfo (string id)

Update SSL Cert Order

Updates settings on an SSL certificate order.

### Example
```csharp
using System;
using System.Diagnostics;
using Interserver.MyAdmin.Client.Api;
using Interserver.MyAdmin.Client.Client;
using Interserver.MyAdmin.Client.Model;

namespace Example
{
    public class UpdateSslInfoExample
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

            var apiInstance = new SSLCertificatesApi();
            var id = id_example;  // string | SSL certificate ID number.

            try
            {
                // Update SSL Cert Order
                SuccessTextResponse result = apiInstance.UpdateSslInfo(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling SSLCertificatesApi.UpdateSslInfo: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| SSL certificate ID number. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
