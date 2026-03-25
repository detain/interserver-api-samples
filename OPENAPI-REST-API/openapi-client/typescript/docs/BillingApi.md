# .BillingApi

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


# **addAccountCreditCard**
> SuccessTextResponse addAccountCreditCard()

Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiAddAccountCreditCardRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiAddAccountCreditCardRequest = {
  
  name: "name_example",
  
  address: "address_example",
  
  city: "city_example",
  
  state: "state_example",
  
  country: "country_example",
  
  zip: "zip_example",
  
  cc: "cc_example",
  
  ccExp: "ccExp_example",
  
  ccCcv2: "ccCcv2_example",
};

const data = await apiInstance.addAccountCreditCard(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | [**string**] |  | (optional) defaults to undefined
 **address** | [**string**] |  | (optional) defaults to undefined
 **city** | [**string**] |  | (optional) defaults to undefined
 **state** | [**string**] |  | (optional) defaults to undefined
 **country** | [**string**] |  | (optional) defaults to undefined
 **zip** | [**string**] |  | (optional) defaults to undefined
 **cc** | [**string**] |  | (optional) defaults to undefined
 **ccExp** | [**string**] |  | (optional) defaults to undefined
 **ccCcv2** | [**string**] |  | (optional) defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **addBillingCreditCard**
> SuccessTextResponse addBillingCreditCard(billingAddCcRequest)

Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiAddBillingCreditCardRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiAddBillingCreditCardRequest = {
  
  billingAddCcRequest: {
    name: "name_example",
    address: "address_example",
    city: "city_example",
    state: "state_example",
    country: "country_example",
    zip: "zip_example",
    cc: "cc_example",
    cc_exp: "cc_exp_example",
    cc_ccv2: "cc_ccv2_example",
  },
};

const data = await apiInstance.addBillingCreditCard(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **billingAddCcRequest** | **BillingAddCcRequest**|  |


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **addBillingPrepay**
> SuccessTextResponse addBillingPrepay(billingPrepayRequest)

Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiAddBillingPrepayRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiAddBillingPrepayRequest = {
  
  billingPrepayRequest: {
    module: "module_example",
    amount: 3.14,
    automatic_use: "1",
  },
};

const data = await apiInstance.addBillingPrepay(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **billingPrepayRequest** | **BillingPrepayRequest**|  |


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **deleteAccountCreditCard**
> deleteAccountCreditCard()

Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiDeleteAccountCreditCardRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiDeleteAccountCreditCardRequest = {
    // The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.
  id: "id_example",
};

const data = await apiInstance.deleteAccountCreditCard(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**string**] | The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | defaults to undefined


### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **deleteBillingCreditCard**
> SuccessTextResponse deleteBillingCreditCard()

Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiDeleteBillingCreditCardRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiDeleteBillingCreditCardRequest = {
    // The credit card ID to remove. Use IDs from `GET /billing/creditcards`.
  id: 1,
};

const data = await apiInstance.deleteBillingCreditCard(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **deleteBillingInvoice**
> SuccessTextResponse deleteBillingInvoice()

Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiDeleteBillingInvoiceRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiDeleteBillingInvoiceRequest = {
    // The invoice ID to delete. Only unpaid invoices can be deleted.
  id: 1,
};

const data = await apiInstance.deleteBillingInvoice(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The invoice ID to delete. Only unpaid invoices can be deleted. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **deleteBillingPrepay**
> SuccessTextResponse deleteBillingPrepay()

Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiDeleteBillingPrepayRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiDeleteBillingPrepayRequest = {
    // The prepay balance ID to delete.
  id: 1,
};

const data = await apiInstance.deleteBillingPrepay(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The prepay balance ID to delete. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getAffiliateBanners**
> Array<AffiliateBannerRow> getAffiliateBanners()

Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.

### Example


```typescript
import { createConfiguration, BillingApi } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request = {};

const data = await apiInstance.getAffiliateBanners(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**Array<AffiliateBannerRow>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Affiliate Banners Array |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getAffiliateRichReport**
> TextResponse getAffiliateRichReport()

Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.

### Example


```typescript
import { createConfiguration, BillingApi } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request = {};

const data = await apiInstance.getAffiliateRichReport(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response with a text message field. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getAffiliateSalesGraph**
> StatusMonthlyBreakdown getAffiliateSalesGraph()

Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiGetAffiliateSalesGraphRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiGetAffiliateSalesGraphRequest = {
    // Number of days of sales history to include in the graph data. Determines the time window for the returned data points. (optional)
  days: 1,
};

const data = await apiInstance.getAffiliateSalesGraph(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **days** | [**number**] | Number of days of sales history to include in the graph data. Determines the time window for the returned data points. | (optional) defaults to undefined


### Return type

**StatusMonthlyBreakdown**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Affiliate sales graph data broken down by time period. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getAffiliateSalesReport**
> TextResponse getAffiliateSalesReport()

Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.

### Example


```typescript
import { createConfiguration, BillingApi } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request = {};

const data = await apiInstance.getAffiliateSalesReport(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response with a text message field. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getAffiliateTrafficGraph**
> MonthlyCounts getAffiliateTrafficGraph()

Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiGetAffiliateTrafficGraphRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiGetAffiliateTrafficGraphRequest = {
    // Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. (optional)
  days: 1,
};

const data = await apiInstance.getAffiliateTrafficGraph(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **days** | [**number**] | Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. | (optional) defaults to undefined


### Return type

**MonthlyCounts**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Affiliate traffic graph data broken down by time period. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getAffiliateWebTraffic**
> Array<AffiliateTrafficRow> getAffiliateWebTraffic()

Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.

### Example


```typescript
import { createConfiguration, BillingApi } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request = {};

const data = await apiInstance.getAffiliateWebTraffic(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**Array<AffiliateTrafficRow>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The recent affiliate web traffic |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getBillingCart**
> getBillingCart()

Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.

### Example


```typescript
import { createConfiguration, BillingApi } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request = {};

const data = await apiInstance.getBillingCart(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getBillingCreditCardVerify**
> SuccessTextResponse getBillingCreditCardVerify()

Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiGetBillingCreditCardVerifyRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiGetBillingCreditCardVerifyRequest = {
    // The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
  id: 1,
};

const data = await apiInstance.getBillingCreditCardVerify(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getBillingInvoice**
> BillingInvoiceDetail getBillingInvoice()

Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiGetBillingInvoiceRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiGetBillingInvoiceRequest = {
    // The invoice ID. Use IDs from `GET /billing/invoices` or from order responses.
  id: 1,
};

const data = await apiInstance.getBillingInvoice(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses. | defaults to undefined


### Return type

**BillingInvoiceDetail**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Detailed invoice payload for the requested invoice. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getBillingInvoices**
> BillingInvoiceList getBillingInvoices()

Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.

### Example


```typescript
import { createConfiguration, BillingApi } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request = {};

const data = await apiInstance.getBillingInvoices(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**BillingInvoiceList**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Invoice listing and summary for the account. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getBillingPrePays**
> getBillingPrePays()

Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.

### Example


```typescript
import { createConfiguration, BillingApi } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request = {};

const data = await apiInstance.getBillingPrePays(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getInvoices**
> Array<Invoice> getInvoices()

Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiGetInvoicesRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiGetInvoicesRequest = {
    // pass an optional search string for looking up inventory (optional)
  searchString: "searchString_example",
    // number of records to skip for pagination (optional)
  skip: 0,
    // maximum number of records to return (optional)
  limit: 0,
};

const data = await apiInstance.getInvoices(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **searchString** | [**string**] | pass an optional search string for looking up inventory | (optional) defaults to undefined
 **skip** | [**number**] | number of records to skip for pagination | (optional) defaults to undefined
 **limit** | [**number**] | maximum number of records to return | (optional) defaults to undefined


### Return type

**Array<Invoice>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | search results matching criteria |  -  |
**400** | bad input parameter |  -  |
**401** | Unauthorized |  -  |
**404** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **initiatePayment**
> InitiatePayment200Response initiatePayment()

Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiInitiatePaymentRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiInitiatePaymentRequest = {
    // The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`.
  method: "cc",
    // A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`.
  invoices: "invoices_example",
};

const data = await apiInstance.initiatePayment(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **method** | [**&#39;cc&#39; | &#39;paypal&#39; | &#39;prepay&#39; | &#39;payssion&#39; | &#39;payu&#39; | &#39;ccavenue&#39; | &#39;cashfree&#39; | &#39;coinbase&#39; | &#39;btcpay&#39;**]**Array<&#39;cc&#39; &#124; &#39;paypal&#39; &#124; &#39;prepay&#39; &#124; &#39;payssion&#39; &#124; &#39;payu&#39; &#124; &#39;ccavenue&#39; &#124; &#39;cashfree&#39; &#124; &#39;coinbase&#39; &#124; &#39;btcpay&#39;>** | The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;. | defaults to undefined
 **invoices** | [**string**] | A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;. | defaults to undefined


### Return type

**InitiatePayment200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Payment initiation response with redirect or form data. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postBillingCreditCardVerify**
> SuccessTextResponse postBillingCreditCardVerify(billingVerifyCcRequest)

Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiPostBillingCreditCardVerifyRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiPostBillingCreditCardVerifyRequest = {
    // The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
  id: 1,
  
  billingVerifyCcRequest: {
    idx: 1,
    cc_ccv2: "cc_ccv2_example",
    cc_amount1: "cc_amount1_example",
    cc_amount2: "cc_amount2_example",
    terms: true,
  },
};

const data = await apiInstance.postBillingCreditCardVerify(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **billingVerifyCcRequest** | **BillingVerifyCcRequest**|  |
 **id** | [**number**] | The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateAccountCreditCard**
> updateAccountCreditCard()

Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiUpdateAccountCreditCardRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiUpdateAccountCreditCardRequest = {
    // The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.
  id: 1,
};

const data = await apiInstance.updateAccountCreditCard(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | defaults to undefined


### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateAffiliateDockSetup**
> TextResponse updateAffiliateDockSetup()

Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiUpdateAffiliateDockSetupRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiUpdateAffiliateDockSetupRequest = {
  
  affiliateDockTitle: "affiliateDockTitle_example",
  
  affiliateDockDescription: "affiliateDockDescription_example",
  
  referrerCoupon: "referrerCoupon_example",
};

const data = await apiInstance.updateAffiliateDockSetup(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliateDockTitle** | [**string**] |  | (optional) defaults to undefined
 **affiliateDockDescription** | [**string**] |  | (optional) defaults to undefined
 **referrerCoupon** | [**string**] |  | (optional) defaults to undefined


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response with a text message field. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateAffiliateLandingPage**
> TextResponse updateAffiliateLandingPage()

Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiUpdateAffiliateLandingPageRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiUpdateAffiliateLandingPageRequest = {
  
  affiliateDockTitle: "affiliateDockTitle_example",
  
  affiliateDockDescription: "affiliateDockDescription_example",
  
  referrerCoupon: "referrerCoupon_example",
};

const data = await apiInstance.updateAffiliateLandingPage(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliateDockTitle** | [**string**] |  | (optional) defaults to undefined
 **affiliateDockDescription** | [**string**] |  | (optional) defaults to undefined
 **referrerCoupon** | [**string**] |  | (optional) defaults to undefined


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response with a text message field. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateAffiliatePaymentSetup**
> TextResponse updateAffiliatePaymentSetup()

Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiUpdateAffiliatePaymentSetupRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiUpdateAffiliatePaymentSetupRequest = {
  
  affiliatePaypal: "affiliatePaypal_example",
  
  affiliatePaymentMethod: "affiliatePaymentMethod_example",
};

const data = await apiInstance.updateAffiliatePaymentSetup(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliatePaypal** | [**string**] |  | (optional) defaults to undefined
 **affiliatePaymentMethod** | [**string**] |  | (optional) defaults to undefined


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Response with a text message field. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateBillingCreditCard**
> SuccessTextResponse updateBillingCreditCard()

Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiUpdateBillingCreditCardRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiUpdateBillingCreditCardRequest = {
    // The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`.
  id: 1,
};

const data = await apiInstance.updateBillingCreditCard(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateBillingPaymentMethod**
> SuccessTextResponse updateBillingPaymentMethod(billingPaymentMethodRequest)

Updates the account\'s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.

### Example


```typescript
import { createConfiguration, BillingApi } from '';
import type { BillingApiUpdateBillingPaymentMethodRequest } from '';

const configuration = createConfiguration();
const apiInstance = new BillingApi(configuration);

const request: BillingApiUpdateBillingPaymentMethodRequest = {
  
  billingPaymentMethodRequest: {
    payment_method: "payment_method_example",
    cc_auto: "cc_auto_example",
  },
};

const data = await apiInstance.updateBillingPaymentMethod(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **billingPaymentMethodRequest** | **BillingPaymentMethodRequest**|  |


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)


