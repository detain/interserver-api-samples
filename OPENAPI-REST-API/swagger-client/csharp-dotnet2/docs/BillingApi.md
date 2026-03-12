# IO.Swagger.Api.BillingApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddAccountCreditCard**](BillingApi.md#addaccountcreditcard) | **POST** /account/creditcards | Add Credit Card to Account
[**AddBillingCreditCard**](BillingApi.md#addbillingcreditcard) | **POST** /billing/creditcards | Add Credit Card for Billing
[**AddBillingPrepay**](BillingApi.md#addbillingprepay) | **POST** /billing/prepays | Create Prepay Deposit
[**DeleteAccountCreditCard**](BillingApi.md#deleteaccountcreditcard) | **DELETE** /account/creditcards/{id} | Remove Credit Card
[**DeleteBillingCreditCard**](BillingApi.md#deletebillingcreditcard) | **DELETE** /billing/creditcards/{id} | Delete Credit Card
[**DeleteBillingInvoice**](BillingApi.md#deletebillinginvoice) | **DELETE** /billing/invoices/{id} | Delete Invoice
[**DeleteBillingPrepay**](BillingApi.md#deletebillingprepay) | **DELETE** /billing/prepays/{id} | Delete Prepay Balance
[**GetAffiliateBanners**](BillingApi.md#getaffiliatebanners) | **GET** /affiliate/banners | List Affiliate Banner Assets
[**GetAffiliateRichReport**](BillingApi.md#getaffiliaterichreport) | **GET** /affiliate/rich_report | Get Affiliate Performance Report
[**GetAffiliateSalesGraph**](BillingApi.md#getaffiliatesalesgraph) | **GET** /affiliate/sales_graph | Get Affiliate Sales Graph Data
[**GetAffiliateSalesReport**](BillingApi.md#getaffiliatesalesreport) | **GET** /affiliate/sales_report | Get Affiliate Sales Report
[**GetAffiliateTrafficGraph**](BillingApi.md#getaffiliatetrafficgraph) | **GET** /affiliate/traffic_graph | Get Affiliate Traffic Graph Data
[**GetAffiliateWebTraffic**](BillingApi.md#getaffiliatewebtraffic) | **GET** /affiliate/web_traffic | List Affiliate Web Traffic Entries
[**GetBillingCart**](BillingApi.md#getbillingcart) | **GET** /billing/cart | Get Shopping Cart Contents
[**GetBillingCreditCardVerify**](BillingApi.md#getbillingcreditcardverify) | **GET** /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements
[**GetBillingInvoice**](BillingApi.md#getbillinginvoice) | **GET** /billing/invoices/{id} | Get Invoice Details
[**GetBillingInvoices**](BillingApi.md#getbillinginvoices) | **GET** /billing/invoices | List Account Invoices
[**GetBillingPrePays**](BillingApi.md#getbillingprepays) | **GET** /billing/prepays | List Prepay Balances
[**GetInvoices**](BillingApi.md#getinvoices) | **GET** /invoices | Get Invoices
[**InitiatePayment**](BillingApi.md#initiatepayment) | **GET** /pay/{method}/{invoices} | Initiate Payment
[**PostBillingCreditCardVerify**](BillingApi.md#postbillingcreditcardverify) | **POST** /billing/creditcards/{id}/verify | Submit Credit Card Verification
[**UpdateAccountCreditCard**](BillingApi.md#updateaccountcreditcard) | **POST** /account/creditcards/{id} | Update Credit Card
[**UpdateAffiliateDockSetup**](BillingApi.md#updateaffiliatedocksetup) | **POST** /affiliate/dock_setup | Configure Affiliate Dock Settings
[**UpdateAffiliateLandingPage**](BillingApi.md#updateaffiliatelandingpage) | **POST** /affiliate/landing_pg | Configure Affiliate Landing Page
[**UpdateAffiliatePaymentSetup**](BillingApi.md#updateaffiliatepaymentsetup) | **POST** /affiliate/payment_setup | Configure Affiliate Payout Preferences
[**UpdateBillingCreditCard**](BillingApi.md#updatebillingcreditcard) | **POST** /billing/creditcards/{id} | Update Credit Card Details
[**UpdateBillingPaymentMethod**](BillingApi.md#updatebillingpaymentmethod) | **POST** /billing/payment_method | Update Default Payment Method

<a name="addaccountcreditcard"></a>
# **AddAccountCreditCard**
> SuccessTextResponse AddAccountCreditCard (string name, string address, string city, string state, string country, string zip, string cc, string ccExp, string ccCcv2)

Add Credit Card to Account

Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class AddAccountCreditCardExample
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

            var apiInstance = new BillingApi();
            var name = name_example;  // string | 
            var address = address_example;  // string | 
            var city = city_example;  // string | 
            var state = state_example;  // string | 
            var country = country_example;  // string | 
            var zip = zip_example;  // string | 
            var cc = cc_example;  // string | 
            var ccExp = ccExp_example;  // string | 
            var ccCcv2 = ccCcv2_example;  // string | 

            try
            {
                // Add Credit Card to Account
                SuccessTextResponse result = apiInstance.AddAccountCreditCard(name, address, city, state, country, zip, cc, ccExp, ccCcv2);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.AddAccountCreditCard: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string**|  | 
 **address** | **string**|  | 
 **city** | **string**|  | 
 **state** | **string**|  | 
 **country** | **string**|  | 
 **zip** | **string**|  | 
 **cc** | **string**|  | 
 **ccExp** | **string**|  | 
 **ccCcv2** | **string**|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="addbillingcreditcard"></a>
# **AddBillingCreditCard**
> SuccessTextResponse AddBillingCreditCard (BillingAddCcRequest body)

Add Credit Card for Billing

Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class AddBillingCreditCardExample
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

            var apiInstance = new BillingApi();
            var body = new BillingAddCcRequest(); // BillingAddCcRequest | 

            try
            {
                // Add Credit Card for Billing
                SuccessTextResponse result = apiInstance.AddBillingCreditCard(body);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.AddBillingCreditCard: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**BillingAddCcRequest**](BillingAddCcRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="addbillingprepay"></a>
# **AddBillingPrepay**
> SuccessTextResponse AddBillingPrepay (BillingPrepayRequest body)

Create Prepay Deposit

Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class AddBillingPrepayExample
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

            var apiInstance = new BillingApi();
            var body = new BillingPrepayRequest(); // BillingPrepayRequest | 

            try
            {
                // Create Prepay Deposit
                SuccessTextResponse result = apiInstance.AddBillingPrepay(body);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.AddBillingPrepay: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**BillingPrepayRequest**](BillingPrepayRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="deleteaccountcreditcard"></a>
# **DeleteAccountCreditCard**
> void DeleteAccountCreditCard (string id)

Remove Credit Card

Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class DeleteAccountCreditCardExample
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

            var apiInstance = new BillingApi();
            var id = id_example;  // string | The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.

            try
            {
                // Remove Credit Card
                apiInstance.DeleteAccountCreditCard(id);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.DeleteAccountCreditCard: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="deletebillingcreditcard"></a>
# **DeleteBillingCreditCard**
> SuccessTextResponse DeleteBillingCreditCard (int? id)

Delete Credit Card

Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class DeleteBillingCreditCardExample
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

            var apiInstance = new BillingApi();
            var id = 56;  // int? | The credit card ID to remove. Use IDs from `GET /billing/creditcards`.

            try
            {
                // Delete Credit Card
                SuccessTextResponse result = apiInstance.DeleteBillingCreditCard(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.DeleteBillingCreditCard: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="deletebillinginvoice"></a>
# **DeleteBillingInvoice**
> SuccessTextResponse DeleteBillingInvoice (int? id)

Delete Invoice

Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class DeleteBillingInvoiceExample
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

            var apiInstance = new BillingApi();
            var id = 56;  // int? | The invoice ID to delete. Only unpaid invoices can be deleted.

            try
            {
                // Delete Invoice
                SuccessTextResponse result = apiInstance.DeleteBillingInvoice(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.DeleteBillingInvoice: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| The invoice ID to delete. Only unpaid invoices can be deleted. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="deletebillingprepay"></a>
# **DeleteBillingPrepay**
> SuccessTextResponse DeleteBillingPrepay (int? id)

Delete Prepay Balance

Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class DeleteBillingPrepayExample
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

            var apiInstance = new BillingApi();
            var id = 56;  // int? | The prepay balance ID to delete.

            try
            {
                // Delete Prepay Balance
                SuccessTextResponse result = apiInstance.DeleteBillingPrepay(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.DeleteBillingPrepay: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| The prepay balance ID to delete. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getaffiliatebanners"></a>
# **GetAffiliateBanners**
> List<AffiliateBannerRow> GetAffiliateBanners ()

List Affiliate Banner Assets

Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetAffiliateBannersExample
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

            var apiInstance = new BillingApi();

            try
            {
                // List Affiliate Banner Assets
                List&lt;AffiliateBannerRow&gt; result = apiInstance.GetAffiliateBanners();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.GetAffiliateBanners: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List<AffiliateBannerRow>**](AffiliateBannerRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getaffiliaterichreport"></a>
# **GetAffiliateRichReport**
> TextResponse GetAffiliateRichReport ()

Get Affiliate Performance Report

Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetAffiliateRichReportExample
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

            var apiInstance = new BillingApi();

            try
            {
                // Get Affiliate Performance Report
                TextResponse result = apiInstance.GetAffiliateRichReport();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.GetAffiliateRichReport: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getaffiliatesalesgraph"></a>
# **GetAffiliateSalesGraph**
> StatusMonthlyBreakdown GetAffiliateSalesGraph (int? days)

Get Affiliate Sales Graph Data

Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetAffiliateSalesGraphExample
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

            var apiInstance = new BillingApi();
            var days = 56;  // int? | Number of days of sales history to include in the graph data. Determines the time window for the returned data points. (optional) 

            try
            {
                // Get Affiliate Sales Graph Data
                StatusMonthlyBreakdown result = apiInstance.GetAffiliateSalesGraph(days);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.GetAffiliateSalesGraph: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **days** | **int?**| Number of days of sales history to include in the graph data. Determines the time window for the returned data points. | [optional] 

### Return type

[**StatusMonthlyBreakdown**](StatusMonthlyBreakdown.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getaffiliatesalesreport"></a>
# **GetAffiliateSalesReport**
> TextResponse GetAffiliateSalesReport ()

Get Affiliate Sales Report

Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetAffiliateSalesReportExample
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

            var apiInstance = new BillingApi();

            try
            {
                // Get Affiliate Sales Report
                TextResponse result = apiInstance.GetAffiliateSalesReport();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.GetAffiliateSalesReport: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getaffiliatetrafficgraph"></a>
# **GetAffiliateTrafficGraph**
> MonthlyCounts GetAffiliateTrafficGraph (int? days)

Get Affiliate Traffic Graph Data

Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetAffiliateTrafficGraphExample
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

            var apiInstance = new BillingApi();
            var days = 56;  // int? | Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. (optional) 

            try
            {
                // Get Affiliate Traffic Graph Data
                MonthlyCounts result = apiInstance.GetAffiliateTrafficGraph(days);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.GetAffiliateTrafficGraph: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **days** | **int?**| Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. | [optional] 

### Return type

[**MonthlyCounts**](MonthlyCounts.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getaffiliatewebtraffic"></a>
# **GetAffiliateWebTraffic**
> List<AffiliateTrafficRow> GetAffiliateWebTraffic ()

List Affiliate Web Traffic Entries

Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetAffiliateWebTrafficExample
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

            var apiInstance = new BillingApi();

            try
            {
                // List Affiliate Web Traffic Entries
                List&lt;AffiliateTrafficRow&gt; result = apiInstance.GetAffiliateWebTraffic();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.GetAffiliateWebTraffic: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List<AffiliateTrafficRow>**](AffiliateTrafficRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getbillingcart"></a>
# **GetBillingCart**
> void GetBillingCart ()

Get Shopping Cart Contents

Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetBillingCartExample
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

            var apiInstance = new BillingApi();

            try
            {
                // Get Shopping Cart Contents
                apiInstance.GetBillingCart();
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.GetBillingCart: " + e.Message );
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

<a name="getbillingcreditcardverify"></a>
# **GetBillingCreditCardVerify**
> SuccessTextResponse GetBillingCreditCardVerify (int? id)

Get Credit Card Verification Requirements

Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetBillingCreditCardVerifyExample
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

            var apiInstance = new BillingApi();
            var id = 56;  // int? | The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.

            try
            {
                // Get Credit Card Verification Requirements
                SuccessTextResponse result = apiInstance.GetBillingCreditCardVerify(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.GetBillingCreditCardVerify: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getbillinginvoice"></a>
# **GetBillingInvoice**
> BillingInvoiceDetail GetBillingInvoice (int? id)

Get Invoice Details

Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetBillingInvoiceExample
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

            var apiInstance = new BillingApi();
            var id = 56;  // int? | The invoice ID. Use IDs from `GET /billing/invoices` or from order responses.

            try
            {
                // Get Invoice Details
                BillingInvoiceDetail result = apiInstance.GetBillingInvoice(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.GetBillingInvoice: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses. | 

### Return type

[**BillingInvoiceDetail**](BillingInvoiceDetail.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getbillinginvoices"></a>
# **GetBillingInvoices**
> BillingInvoiceList GetBillingInvoices ()

List Account Invoices

Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetBillingInvoicesExample
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

            var apiInstance = new BillingApi();

            try
            {
                // List Account Invoices
                BillingInvoiceList result = apiInstance.GetBillingInvoices();
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.GetBillingInvoices: " + e.Message );
            }
        }
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BillingInvoiceList**](BillingInvoiceList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="getbillingprepays"></a>
# **GetBillingPrePays**
> void GetBillingPrePays ()

List Prepay Balances

Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetBillingPrePaysExample
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

            var apiInstance = new BillingApi();

            try
            {
                // List Prepay Balances
                apiInstance.GetBillingPrePays();
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.GetBillingPrePays: " + e.Message );
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

<a name="getinvoices"></a>
# **GetInvoices**
> List<Invoice> GetInvoices (string searchString, int? skip, int? limit)

Get Invoices

Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetInvoicesExample
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

            var apiInstance = new BillingApi();
            var searchString = searchString_example;  // string | pass an optional search string for looking up inventory (optional) 
            var skip = 56;  // int? | number of records to skip for pagination (optional) 
            var limit = 56;  // int? | maximum number of records to return (optional) 

            try
            {
                // Get Invoices
                List&lt;Invoice&gt; result = apiInstance.GetInvoices(searchString, skip, limit);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.GetInvoices: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **searchString** | **string**| pass an optional search string for looking up inventory | [optional] 
 **skip** | **int?**| number of records to skip for pagination | [optional] 
 **limit** | **int?**| maximum number of records to return | [optional] 

### Return type

[**List<Invoice>**](Invoice.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="initiatepayment"></a>
# **InitiatePayment**
> InlineResponse2009 InitiatePayment (string method, string invoices)

Initiate Payment

Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class InitiatePaymentExample
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

            var apiInstance = new BillingApi();
            var method = method_example;  // string | The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`.
            var invoices = invoices_example;  // string | A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`.

            try
            {
                // Initiate Payment
                InlineResponse2009 result = apiInstance.InitiatePayment(method, invoices);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.InitiatePayment: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **method** | **string**| The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;. | 
 **invoices** | **string**| A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;. | 

### Return type

[**InlineResponse2009**](InlineResponse2009.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="postbillingcreditcardverify"></a>
# **PostBillingCreditCardVerify**
> SuccessTextResponse PostBillingCreditCardVerify (BillingVerifyCcRequest body, int? id)

Submit Credit Card Verification

Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class PostBillingCreditCardVerifyExample
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

            var apiInstance = new BillingApi();
            var body = new BillingVerifyCcRequest(); // BillingVerifyCcRequest | 
            var id = 56;  // int? | The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.

            try
            {
                // Submit Credit Card Verification
                SuccessTextResponse result = apiInstance.PostBillingCreditCardVerify(body, id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.PostBillingCreditCardVerify: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**BillingVerifyCcRequest**](BillingVerifyCcRequest.md)|  | 
 **id** | **int?**| The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="updateaccountcreditcard"></a>
# **UpdateAccountCreditCard**
> void UpdateAccountCreditCard (int? id)

Update Credit Card

Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class UpdateAccountCreditCardExample
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

            var apiInstance = new BillingApi();
            var id = 56;  // int? | The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.

            try
            {
                // Update Credit Card
                apiInstance.UpdateAccountCreditCard(id);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.UpdateAccountCreditCard: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="updateaffiliatedocksetup"></a>
# **UpdateAffiliateDockSetup**
> TextResponse UpdateAffiliateDockSetup (string affiliateDockTitle, string affiliateDockDescription, string referrerCoupon)

Configure Affiliate Dock Settings

Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class UpdateAffiliateDockSetupExample
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

            var apiInstance = new BillingApi();
            var affiliateDockTitle = affiliateDockTitle_example;  // string | 
            var affiliateDockDescription = affiliateDockDescription_example;  // string | 
            var referrerCoupon = referrerCoupon_example;  // string | 

            try
            {
                // Configure Affiliate Dock Settings
                TextResponse result = apiInstance.UpdateAffiliateDockSetup(affiliateDockTitle, affiliateDockDescription, referrerCoupon);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.UpdateAffiliateDockSetup: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliateDockTitle** | **string**|  | 
 **affiliateDockDescription** | **string**|  | 
 **referrerCoupon** | **string**|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="updateaffiliatelandingpage"></a>
# **UpdateAffiliateLandingPage**
> TextResponse UpdateAffiliateLandingPage (string affiliateDockTitle, string affiliateDockDescription, string referrerCoupon)

Configure Affiliate Landing Page

Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class UpdateAffiliateLandingPageExample
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

            var apiInstance = new BillingApi();
            var affiliateDockTitle = affiliateDockTitle_example;  // string | 
            var affiliateDockDescription = affiliateDockDescription_example;  // string | 
            var referrerCoupon = referrerCoupon_example;  // string | 

            try
            {
                // Configure Affiliate Landing Page
                TextResponse result = apiInstance.UpdateAffiliateLandingPage(affiliateDockTitle, affiliateDockDescription, referrerCoupon);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.UpdateAffiliateLandingPage: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliateDockTitle** | **string**|  | 
 **affiliateDockDescription** | **string**|  | 
 **referrerCoupon** | **string**|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="updateaffiliatepaymentsetup"></a>
# **UpdateAffiliatePaymentSetup**
> TextResponse UpdateAffiliatePaymentSetup (string affiliatePaypal, string affiliatePaymentMethod)

Configure Affiliate Payout Preferences

Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class UpdateAffiliatePaymentSetupExample
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

            var apiInstance = new BillingApi();
            var affiliatePaypal = affiliatePaypal_example;  // string | 
            var affiliatePaymentMethod = affiliatePaymentMethod_example;  // string | 

            try
            {
                // Configure Affiliate Payout Preferences
                TextResponse result = apiInstance.UpdateAffiliatePaymentSetup(affiliatePaypal, affiliatePaymentMethod);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.UpdateAffiliatePaymentSetup: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliatePaypal** | **string**|  | 
 **affiliatePaymentMethod** | **string**|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="updatebillingcreditcard"></a>
# **UpdateBillingCreditCard**
> SuccessTextResponse UpdateBillingCreditCard (int? id)

Update Credit Card Details

Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class UpdateBillingCreditCardExample
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

            var apiInstance = new BillingApi();
            var id = 56;  // int? | The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`.

            try
            {
                // Update Credit Card Details
                SuccessTextResponse result = apiInstance.UpdateBillingCreditCard(id);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.UpdateBillingCreditCard: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int?**| The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="updatebillingpaymentmethod"></a>
# **UpdateBillingPaymentMethod**
> SuccessTextResponse UpdateBillingPaymentMethod (BillingPaymentMethodRequest body)

Update Default Payment Method

Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class UpdateBillingPaymentMethodExample
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

            var apiInstance = new BillingApi();
            var body = new BillingPaymentMethodRequest(); // BillingPaymentMethodRequest | 

            try
            {
                // Update Default Payment Method
                SuccessTextResponse result = apiInstance.UpdateBillingPaymentMethod(body);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BillingApi.UpdateBillingPaymentMethod: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**BillingPaymentMethodRequest**](BillingPaymentMethodRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

