# InterServerManagementApi.BillingApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addAccountCreditCard**](BillingApi.md#addAccountCreditCard) | **POST** /account/creditcards | Add Credit Card to Account
[**addBillingCreditCard**](BillingApi.md#addBillingCreditCard) | **POST** /billing/creditcards | Add Credit Card for Billing
[**addBillingPrepay**](BillingApi.md#addBillingPrepay) | **POST** /billing/prepays | Create Prepay Deposit
[**deleteAccountCreditCard**](BillingApi.md#deleteAccountCreditCard) | **DELETE** /account/creditcards/{id} | Remove Credit Card
[**deleteBillingCreditCard**](BillingApi.md#deleteBillingCreditCard) | **DELETE** /billing/creditcards/{id} | Delete Credit Card
[**deleteBillingInvoice**](BillingApi.md#deleteBillingInvoice) | **DELETE** /billing/invoices/{id} | Delete Invoice
[**deleteBillingPrepay**](BillingApi.md#deleteBillingPrepay) | **DELETE** /billing/prepays/{id} | Delete Prepay Balance
[**getAffiliateBanners**](BillingApi.md#getAffiliateBanners) | **GET** /affiliate/banners | List Affiliate Banner Assets
[**getAffiliateRichReport**](BillingApi.md#getAffiliateRichReport) | **GET** /affiliate/rich_report | Get Affiliate Performance Report
[**getAffiliateSalesGraph**](BillingApi.md#getAffiliateSalesGraph) | **GET** /affiliate/sales_graph | Get Affiliate Sales Graph Data
[**getAffiliateSalesReport**](BillingApi.md#getAffiliateSalesReport) | **GET** /affiliate/sales_report | Get Affiliate Sales Report
[**getAffiliateTrafficGraph**](BillingApi.md#getAffiliateTrafficGraph) | **GET** /affiliate/traffic_graph | Get Affiliate Traffic Graph Data
[**getAffiliateWebTraffic**](BillingApi.md#getAffiliateWebTraffic) | **GET** /affiliate/web_traffic | List Affiliate Web Traffic Entries
[**getBillingCart**](BillingApi.md#getBillingCart) | **GET** /billing/cart | Get Shopping Cart Contents
[**getBillingCreditCardVerify**](BillingApi.md#getBillingCreditCardVerify) | **GET** /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements
[**getBillingInvoice**](BillingApi.md#getBillingInvoice) | **GET** /billing/invoices/{id} | Get Invoice Details
[**getBillingInvoices**](BillingApi.md#getBillingInvoices) | **GET** /billing/invoices | List Account Invoices
[**getBillingPrePays**](BillingApi.md#getBillingPrePays) | **GET** /billing/prepays | List Prepay Balances
[**getInvoices**](BillingApi.md#getInvoices) | **GET** /invoices | Get Invoices
[**initiatePayment**](BillingApi.md#initiatePayment) | **GET** /pay/{method}/{invoices} | Initiate Payment
[**postBillingCreditCardVerify**](BillingApi.md#postBillingCreditCardVerify) | **POST** /billing/creditcards/{id}/verify | Submit Credit Card Verification
[**updateAccountCreditCard**](BillingApi.md#updateAccountCreditCard) | **POST** /account/creditcards/{id} | Update Credit Card
[**updateAffiliateDockSetup**](BillingApi.md#updateAffiliateDockSetup) | **POST** /affiliate/dock_setup | Configure Affiliate Dock Settings
[**updateAffiliateLandingPage**](BillingApi.md#updateAffiliateLandingPage) | **POST** /affiliate/landing_pg | Configure Affiliate Landing Page
[**updateAffiliatePaymentSetup**](BillingApi.md#updateAffiliatePaymentSetup) | **POST** /affiliate/payment_setup | Configure Affiliate Payout Preferences
[**updateBillingCreditCard**](BillingApi.md#updateBillingCreditCard) | **POST** /billing/creditcards/{id} | Update Credit Card Details
[**updateBillingPaymentMethod**](BillingApi.md#updateBillingPaymentMethod) | **POST** /billing/payment_method | Update Default Payment Method

<a name="addAccountCreditCard"></a>
# **addAccountCreditCard**
> SuccessTextResponse addAccountCreditCard(name, address, city, state, country, zip, cc, cc_exp, cc_ccv2, body)

Add Credit Card to Account

Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let name = "name_example"; // String | 
let address = "address_example"; // String | 
let city = "city_example"; // String | 
let state = "state_example"; // String | 
let country = "country_example"; // String | 
let zip = "zip_example"; // String | 
let cc = "cc_example"; // String | 
let cc_exp = "cc_exp_example"; // String | 
let cc_ccv2 = "cc_ccv2_example"; // String | 
let body = new InterServerManagementApi.BillingAddCcRequest(); // BillingAddCcRequest | 

apiInstance.addAccountCreditCard(name, address, city, state, country, zip, cc, cc_exp, cc_ccv2, body, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **String**|  | 
 **address** | **String**|  | 
 **city** | **String**|  | 
 **state** | **String**|  | 
 **country** | **String**|  | 
 **zip** | **String**|  | 
 **cc** | **String**|  | 
 **cc_exp** | **String**|  | 
 **cc_ccv2** | **String**|  | 
 **body** | [**BillingAddCcRequest**](BillingAddCcRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="addBillingCreditCard"></a>
# **addBillingCreditCard**
> SuccessTextResponse addBillingCreditCard(body, name, address, city, state, country, zip, cc, cc_exp, cc_ccv2)

Add Credit Card for Billing

Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via &#x60;GET /billing/creditcards/{id}/verify&#x60; followed by &#x60;POST /billing/creditcards/{id}/verify&#x60; before the card can be used for payments.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let body = new InterServerManagementApi.BillingAddCcRequest(); // BillingAddCcRequest | 
let name = "name_example"; // String | 
let address = "address_example"; // String | 
let city = "city_example"; // String | 
let state = "state_example"; // String | 
let country = "country_example"; // String | 
let zip = "zip_example"; // String | 
let cc = "cc_example"; // String | 
let cc_exp = "cc_exp_example"; // String | 
let cc_ccv2 = "cc_ccv2_example"; // String | 

apiInstance.addBillingCreditCard(body, name, address, city, state, country, zip, cc, cc_exp, cc_ccv2, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**BillingAddCcRequest**](BillingAddCcRequest.md)|  | 
 **name** | **String**|  | 
 **address** | **String**|  | 
 **city** | **String**|  | 
 **state** | **String**|  | 
 **country** | **String**|  | 
 **zip** | **String**|  | 
 **cc** | **String**|  | 
 **cc_exp** | **String**|  | 
 **cc_ccv2** | **String**|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="addBillingPrepay"></a>
# **addBillingPrepay**
> SuccessTextResponse addBillingPrepay(body, module, amount, automatic_use)

Create Prepay Deposit

Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use &#x60;/billing/invoices/{id}&#x60; to retrieve the generated invoice details.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let body = new InterServerManagementApi.BillingPrepayRequest(); // BillingPrepayRequest | 
let module = "module_example"; // String | 
let amount = 1.2; // Number | 
let automatic_use = "automatic_use_example"; // String | 

apiInstance.addBillingPrepay(body, module, amount, automatic_use, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**BillingPrepayRequest**](BillingPrepayRequest.md)|  | 
 **module** | **String**|  | 
 **amount** | **Number**|  | 
 **automatic_use** | **String**|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="deleteAccountCreditCard"></a>
# **deleteAccountCreditCard**
> deleteAccountCreditCard(id)

Remove Credit Card

Removes a credit card from the account. If this is the default payment method, select a new default via &#x60;/billing/payment_method&#x60; afterward.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let id = "id_example"; // String | The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.

apiInstance.deleteAccountCreditCard(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | 

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteBillingCreditCard"></a>
# **deleteBillingCreditCard**
> SuccessTextResponse deleteBillingCreditCard(id)

Delete Credit Card

Removes the selected credit card from the account. Use &#x60;/billing/payment_method&#x60; to select a new default payment method after deleting a card.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let id = 56; // Number | The credit card ID to remove. Use IDs from `GET /billing/creditcards`.

apiInstance.deleteBillingCreditCard(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteBillingInvoice"></a>
# **deleteBillingInvoice**
> SuccessTextResponse deleteBillingInvoice(id)

Delete Invoice

Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let id = 56; // Number | The invoice ID to delete. Only unpaid invoices can be deleted.

apiInstance.deleteBillingInvoice(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The invoice ID to delete. Only unpaid invoices can be deleted. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteBillingPrepay"></a>
# **deleteBillingPrepay**
> SuccessTextResponse deleteBillingPrepay(id)

Delete Prepay Balance

Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use &#x60;GET /billing/prepays&#x60; to list available prepay balances and their IDs.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let id = 56; // Number | The prepay balance ID to delete.

apiInstance.deleteBillingPrepay(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The prepay balance ID to delete. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getAffiliateBanners"></a>
# **getAffiliateBanners**
> [AffiliateBannerRow] getAffiliateBanners()

List Affiliate Banner Assets

Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
apiInstance.getAffiliateBanners((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**[AffiliateBannerRow]**](AffiliateBannerRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getAffiliateRichReport"></a>
# **getAffiliateRichReport**
> TextResponse getAffiliateRichReport()

Get Affiliate Performance Report

Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
apiInstance.getAffiliateRichReport((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
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

<a name="getAffiliateSalesGraph"></a>
# **getAffiliateSalesGraph**
> StatusMonthlyBreakdown getAffiliateSalesGraph(opts)

Get Affiliate Sales Graph Data

Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let opts = { 
  'days': 56 // Number | Number of days of sales history to include in the graph data. Determines the time window for the returned data points.
};
apiInstance.getAffiliateSalesGraph(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **days** | **Number**| Number of days of sales history to include in the graph data. Determines the time window for the returned data points. | [optional] 

### Return type

[**StatusMonthlyBreakdown**](StatusMonthlyBreakdown.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getAffiliateSalesReport"></a>
# **getAffiliateSalesReport**
> TextResponse getAffiliateSalesReport()

Get Affiliate Sales Report

Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
apiInstance.getAffiliateSalesReport((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
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

<a name="getAffiliateTrafficGraph"></a>
# **getAffiliateTrafficGraph**
> MonthlyCounts getAffiliateTrafficGraph(opts)

Get Affiliate Traffic Graph Data

Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let opts = { 
  'days': 56 // Number | Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.
};
apiInstance.getAffiliateTrafficGraph(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **days** | **Number**| Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. | [optional] 

### Return type

[**MonthlyCounts**](MonthlyCounts.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getAffiliateWebTraffic"></a>
# **getAffiliateWebTraffic**
> [AffiliateTrafficRow] getAffiliateWebTraffic()

List Affiliate Web Traffic Entries

Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
apiInstance.getAffiliateWebTraffic((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**[AffiliateTrafficRow]**](AffiliateTrafficRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getBillingCart"></a>
# **getBillingCart**
> getBillingCart()

Get Shopping Cart Contents

Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to &#x60;/pay/{method}/{invoices}&#x60;.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
apiInstance.getBillingCart((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getBillingCreditCardVerify"></a>
# **getBillingCreditCardVerify**
> SuccessTextResponse getBillingCreditCardVerify(id)

Get Credit Card Verification Requirements

Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let id = 56; // Number | The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.

apiInstance.getBillingCreditCardVerify(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getBillingInvoice"></a>
# **getBillingInvoice**
> BillingInvoiceDetail getBillingInvoice(id)

Get Invoice Details

Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to &#x60;/pay/{method}/{invoices}&#x60; so you can display the exact amount due and confirm the invoice is still unpaid.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let id = 56; // Number | The invoice ID. Use IDs from `GET /billing/invoices` or from order responses.

apiInstance.getBillingInvoice(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses. | 

### Return type

[**BillingInvoiceDetail**](BillingInvoiceDetail.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getBillingInvoices"></a>
# **getBillingInvoices**
> BillingInvoiceList getBillingInvoices()

List Account Invoices

Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with &#x60;/billing/invoices/{id}&#x60; to retrieve detailed line items, or with &#x60;/pay/{method}/{invoices}&#x60; to initiate payment.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
apiInstance.getBillingInvoices((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
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

<a name="getBillingPrePays"></a>
# **getBillingPrePays**
> getBillingPrePays()

List Prepay Balances

Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting &#x60;prepay&#x60; as a payment method.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
apiInstance.getBillingPrePays((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getInvoices"></a>
# **getInvoices**
> [Invoice] getInvoices(opts)

Get Invoices

Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional &#x60;searchString&#x60; parameter to filter results and &#x60;skip&#x60;/&#x60;limit&#x60; for pagination.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let opts = { 
  'searchString': "searchString_example", // String | pass an optional search string for looking up inventory
  'skip': 56, // Number | number of records to skip for pagination
  'limit': 56 // Number | maximum number of records to return
};
apiInstance.getInvoices(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **searchString** | **String**| pass an optional search string for looking up inventory | [optional] 
 **skip** | **Number**| number of records to skip for pagination | [optional] 
 **limit** | **Number**| maximum number of records to return | [optional] 

### Return type

[**[Invoice]**](Invoice.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="initiatePayment"></a>
# **initiatePayment**
> InlineResponse2009 initiatePayment(method, invoices)

Initiate Payment

Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: &#x60;redirect&#x60; means send the user to the provided URL, &#x60;submit&#x60; means POST a form with the provided fields, and &#x60;single&#x60; means the payment was processed immediately. Use invoice IDs obtained from order responses or &#x60;/billing/invoices&#x60;.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let method = "method_example"; // String | The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`.
let invoices = "invoices_example"; // String | A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`.

apiInstance.initiatePayment(method, invoices, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **method** | **String**| The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;. | 
 **invoices** | **String**| A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;. | 

### Return type

[**InlineResponse2009**](InlineResponse2009.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postBillingCreditCardVerify"></a>
# **postBillingCreditCardVerify**
> SuccessTextResponse postBillingCreditCardVerify(body, idx, cc_ccv2, cc_amount1, cc_amount2, terms, id)

Submit Credit Card Verification

Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by &#x60;GET /billing/creditcards/{id}/verify&#x60;. A successful response means the card is verified and can be selected as a payment method via &#x60;/billing/payment_method&#x60;.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let body = new InterServerManagementApi.BillingVerifyCcRequest(); // BillingVerifyCcRequest | 
let idx = 56; // Number | 
let cc_ccv2 = "cc_ccv2_example"; // String | 
let cc_amount1 = "cc_amount1_example"; // String | 
let cc_amount2 = "cc_amount2_example"; // String | 
let terms = true; // Boolean | 
let id = 56; // Number | The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.

apiInstance.postBillingCreditCardVerify(body, idx, cc_ccv2, cc_amount1, cc_amount2, terms, id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**BillingVerifyCcRequest**](BillingVerifyCcRequest.md)|  | 
 **idx** | **Number**|  | 
 **cc_ccv2** | **String**|  | 
 **cc_amount1** | **String**|  | 
 **cc_amount2** | **String**|  | 
 **terms** | **Boolean**|  | 
 **id** | **Number**| The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="updateAccountCreditCard"></a>
# **updateAccountCreditCard**
> updateAccountCreditCard(id)

Update Credit Card

Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let id = 56; // Number | The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.

apiInstance.updateAccountCreditCard(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | 

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="updateAffiliateDockSetup"></a>
# **updateAffiliateDockSetup**
> TextResponse updateAffiliateDockSetup(affiliate_dock_title, affiliate_dock_description, referrer_coupon, body)

Configure Affiliate Dock Settings

Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let affiliate_dock_title = "affiliate_dock_title_example"; // String | 
let affiliate_dock_description = "affiliate_dock_description_example"; // String | 
let referrer_coupon = "referrer_coupon_example"; // String | 
let body = new InterServerManagementApi.AffiliateDockSetup(); // AffiliateDockSetup | 

apiInstance.updateAffiliateDockSetup(affiliate_dock_title, affiliate_dock_description, referrer_coupon, body, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliate_dock_title** | **String**|  | 
 **affiliate_dock_description** | **String**|  | 
 **referrer_coupon** | **String**|  | 
 **body** | [**AffiliateDockSetup**](AffiliateDockSetup.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="updateAffiliateLandingPage"></a>
# **updateAffiliateLandingPage**
> TextResponse updateAffiliateLandingPage(affiliate_dock_title, affiliate_dock_description, referrer_coupon, body)

Configure Affiliate Landing Page

Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let affiliate_dock_title = "affiliate_dock_title_example"; // String | 
let affiliate_dock_description = "affiliate_dock_description_example"; // String | 
let referrer_coupon = "referrer_coupon_example"; // String | 
let body = new InterServerManagementApi.AffiliateDockSetup(); // AffiliateDockSetup | 

apiInstance.updateAffiliateLandingPage(affiliate_dock_title, affiliate_dock_description, referrer_coupon, body, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliate_dock_title** | **String**|  | 
 **affiliate_dock_description** | **String**|  | 
 **referrer_coupon** | **String**|  | 
 **body** | [**AffiliateDockSetup**](AffiliateDockSetup.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="updateAffiliatePaymentSetup"></a>
# **updateAffiliatePaymentSetup**
> TextResponse updateAffiliatePaymentSetup(affiliate_paypal, affiliate_payment_method, body)

Configure Affiliate Payout Preferences

Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let affiliate_paypal = "affiliate_paypal_example"; // String | 
let affiliate_payment_method = "affiliate_payment_method_example"; // String | 
let body = new InterServerManagementApi.AffiliatePaymentSetup(); // AffiliatePaymentSetup | 

apiInstance.updateAffiliatePaymentSetup(affiliate_paypal, affiliate_payment_method, body, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliate_paypal** | **String**|  | 
 **affiliate_payment_method** | **String**|  | 
 **body** | [**AffiliatePaymentSetup**](AffiliatePaymentSetup.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="updateBillingCreditCard"></a>
# **updateBillingCreditCard**
> SuccessTextResponse updateBillingCreditCard(id)

Update Credit Card Details

Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let id = 56; // Number | The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`.

apiInstance.updateBillingCreditCard(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="updateBillingPaymentMethod"></a>
# **updateBillingPaymentMethod**
> SuccessTextResponse updateBillingPaymentMethod(body, payment_method, cc_auto)

Update Default Payment Method

Updates the account&#x27;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.

### Example
```javascript
import {InterServerManagementApi} from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;

// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';

// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.BillingApi();
let body = new InterServerManagementApi.BillingPaymentMethodRequest(); // BillingPaymentMethodRequest | 
let payment_method = "payment_method_example"; // String | 
let cc_auto = "cc_auto_example"; // String | 

apiInstance.updateBillingPaymentMethod(body, payment_method, cc_auto, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**BillingPaymentMethodRequest**](BillingPaymentMethodRequest.md)|  | 
 **payment_method** | **String**|  | 
 **cc_auto** | **String**|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

