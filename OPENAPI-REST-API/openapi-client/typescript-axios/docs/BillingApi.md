# BillingApi

All URIs are relative to *https://my.interserver.net/apiv2*

|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|[**addAccountCreditCard**](#addaccountcreditcard) | **POST** /account/creditcards | Add Credit Card to Account|
|[**addBillingCreditCard**](#addbillingcreditcard) | **POST** /billing/creditcards | Add Credit Card for Billing|
|[**addBillingPrepay**](#addbillingprepay) | **POST** /billing/prepays | Create Prepay Deposit|
|[**deleteAccountCreditCard**](#deleteaccountcreditcard) | **DELETE** /account/creditcards/{id} | Remove Credit Card|
|[**deleteBillingCreditCard**](#deletebillingcreditcard) | **DELETE** /billing/creditcards/{id} | Delete Credit Card|
|[**deleteBillingInvoice**](#deletebillinginvoice) | **DELETE** /billing/invoices/{id} | Delete Invoice|
|[**deleteBillingPrepay**](#deletebillingprepay) | **DELETE** /billing/prepays/{id} | Delete Prepay Balance|
|[**getAffiliateBanners**](#getaffiliatebanners) | **GET** /affiliate/banners | List Affiliate Banner Assets|
|[**getAffiliateRichReport**](#getaffiliaterichreport) | **GET** /affiliate/rich_report | Get Affiliate Performance Report|
|[**getAffiliateSalesGraph**](#getaffiliatesalesgraph) | **GET** /affiliate/sales_graph | Get Affiliate Sales Graph Data|
|[**getAffiliateSalesReport**](#getaffiliatesalesreport) | **GET** /affiliate/sales_report | Get Affiliate Sales Report|
|[**getAffiliateTrafficGraph**](#getaffiliatetrafficgraph) | **GET** /affiliate/traffic_graph | Get Affiliate Traffic Graph Data|
|[**getAffiliateWebTraffic**](#getaffiliatewebtraffic) | **GET** /affiliate/web_traffic | List Affiliate Web Traffic Entries|
|[**getBillingCart**](#getbillingcart) | **GET** /billing/cart | Get Shopping Cart Contents|
|[**getBillingCreditCardVerify**](#getbillingcreditcardverify) | **GET** /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements|
|[**getBillingInvoice**](#getbillinginvoice) | **GET** /billing/invoices/{id} | Get Invoice Details|
|[**getBillingInvoices**](#getbillinginvoices) | **GET** /billing/invoices | List Account Invoices|
|[**getBillingPrePays**](#getbillingprepays) | **GET** /billing/prepays | List Prepay Balances|
|[**getInvoices**](#getinvoices) | **GET** /invoices | Get Invoices|
|[**initiatePayment**](#initiatepayment) | **GET** /pay/{method}/{invoices} | Initiate Payment|
|[**postBillingCreditCardVerify**](#postbillingcreditcardverify) | **POST** /billing/creditcards/{id}/verify | Submit Credit Card Verification|
|[**updateAccountCreditCard**](#updateaccountcreditcard) | **POST** /account/creditcards/{id} | Update Credit Card|
|[**updateAffiliateDockSetup**](#updateaffiliatedocksetup) | **POST** /affiliate/dock_setup | Configure Affiliate Dock Settings|
|[**updateAffiliateLandingPage**](#updateaffiliatelandingpage) | **POST** /affiliate/landing_pg | Configure Affiliate Landing Page|
|[**updateAffiliatePaymentSetup**](#updateaffiliatepaymentsetup) | **POST** /affiliate/payment_setup | Configure Affiliate Payout Preferences|
|[**updateBillingCreditCard**](#updatebillingcreditcard) | **POST** /billing/creditcards/{id} | Update Credit Card Details|
|[**updateBillingPaymentMethod**](#updatebillingpaymentmethod) | **POST** /billing/payment_method | Update Default Payment Method|

# **addAccountCreditCard**
> SuccessTextResponse addAccountCreditCard()

Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let name: string; // (optional) (default to undefined)
let address: string; // (optional) (default to undefined)
let city: string; // (optional) (default to undefined)
let state: string; // (optional) (default to undefined)
let country: string; // (optional) (default to undefined)
let zip: string; // (optional) (default to undefined)
let cc: string; // (optional) (default to undefined)
let ccExp: string; // (optional) (default to undefined)
let ccCcv2: string; // (optional) (default to undefined)

const { status, data } = await apiInstance.addAccountCreditCard(
    name,
    address,
    city,
    state,
    country,
    zip,
    cc,
    ccExp,
    ccCcv2
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **name** | [**string**] |  | (optional) defaults to undefined|
| **address** | [**string**] |  | (optional) defaults to undefined|
| **city** | [**string**] |  | (optional) defaults to undefined|
| **state** | [**string**] |  | (optional) defaults to undefined|
| **country** | [**string**] |  | (optional) defaults to undefined|
| **zip** | [**string**] |  | (optional) defaults to undefined|
| **cc** | [**string**] |  | (optional) defaults to undefined|
| **ccExp** | [**string**] |  | (optional) defaults to undefined|
| **ccCcv2** | [**string**] |  | (optional) defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addBillingCreditCard**
> SuccessTextResponse addBillingCreditCard(billingAddCcRequest)

Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.

### Example

```typescript
import {
    BillingApi,
    Configuration,
    BillingAddCcRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let billingAddCcRequest: BillingAddCcRequest; //

const { status, data } = await apiInstance.addBillingCreditCard(
    billingAddCcRequest
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **billingAddCcRequest** | **BillingAddCcRequest**|  | |


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addBillingPrepay**
> SuccessTextResponse addBillingPrepay(billingPrepayRequest)

Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.

### Example

```typescript
import {
    BillingApi,
    Configuration,
    BillingPrepayRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let billingPrepayRequest: BillingPrepayRequest; //

const { status, data } = await apiInstance.addBillingPrepay(
    billingPrepayRequest
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **billingPrepayRequest** | **BillingPrepayRequest**|  | |


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteAccountCreditCard**
> string deleteAccountCreditCard()

Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let id: string; //The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`. (default to undefined)

const { status, data } = await apiInstance.deleteAccountCreditCard(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**string**] | The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | defaults to undefined|


### Return type

**string**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Simple string response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteBillingCreditCard**
> SuccessTextResponse deleteBillingCreditCard()

Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let id: number; //The credit card ID to remove. Use IDs from `GET /billing/creditcards`. (default to undefined)

const { status, data } = await apiInstance.deleteBillingCreditCard(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteBillingInvoice**
> SuccessTextResponse deleteBillingInvoice()

Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let id: number; //The invoice ID to delete. Only unpaid invoices can be deleted. (default to undefined)

const { status, data } = await apiInstance.deleteBillingInvoice(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The invoice ID to delete. Only unpaid invoices can be deleted. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteBillingPrepay**
> SuccessTextResponse deleteBillingPrepay()

Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let id: number; //The prepay balance ID to delete. (default to undefined)

const { status, data } = await apiInstance.deleteBillingPrepay(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The prepay balance ID to delete. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAffiliateBanners**
> Array<AffiliateBannerRow> getAffiliateBanners()

Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

const { status, data } = await apiInstance.getAffiliateBanners();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**Array<AffiliateBannerRow>**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Affiliate Banners Array |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAffiliateRichReport**
> TextResponse getAffiliateRichReport()

Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

const { status, data } = await apiInstance.getAffiliateRichReport();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response with a text message field. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAffiliateSalesGraph**
> StatusMonthlyBreakdown getAffiliateSalesGraph()

Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let days: number; //Number of days of sales history to include in the graph data. Determines the time window for the returned data points. (optional) (default to undefined)

const { status, data } = await apiInstance.getAffiliateSalesGraph(
    days
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **days** | [**number**] | Number of days of sales history to include in the graph data. Determines the time window for the returned data points. | (optional) defaults to undefined|


### Return type

**StatusMonthlyBreakdown**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Affiliate sales graph data broken down by time period. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAffiliateSalesReport**
> TextResponse getAffiliateSalesReport()

Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

const { status, data } = await apiInstance.getAffiliateSalesReport();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response with a text message field. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAffiliateTrafficGraph**
> MonthlyCounts getAffiliateTrafficGraph()

Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let days: number; //Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. (optional) (default to undefined)

const { status, data } = await apiInstance.getAffiliateTrafficGraph(
    days
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **days** | [**number**] | Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. | (optional) defaults to undefined|


### Return type

**MonthlyCounts**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Affiliate traffic graph data broken down by time period. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAffiliateWebTraffic**
> Array<AffiliateTrafficRow> getAffiliateWebTraffic()

Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

const { status, data } = await apiInstance.getAffiliateWebTraffic();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**Array<AffiliateTrafficRow>**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | The recent affiliate web traffic |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBillingCart**
> object getBillingCart()

Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

const { status, data } = await apiInstance.getBillingCart();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**object**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Current shopping cart contents and available payment methods. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBillingCreditCardVerify**
> SuccessTextResponse getBillingCreditCardVerify()

Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let id: number; //The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`. (default to undefined)

const { status, data } = await apiInstance.getBillingCreditCardVerify(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBillingInvoice**
> BillingInvoiceDetail getBillingInvoice()

Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let id: number; //The invoice ID. Use IDs from `GET /billing/invoices` or from order responses. (default to undefined)

const { status, data } = await apiInstance.getBillingInvoice(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses. | defaults to undefined|


### Return type

**BillingInvoiceDetail**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Detailed invoice payload for the requested invoice. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBillingInvoices**
> BillingInvoiceList getBillingInvoices()

Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

const { status, data } = await apiInstance.getBillingInvoices();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**BillingInvoiceList**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Invoice listing and summary for the account. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBillingPrePays**
> object getBillingPrePays()

Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

const { status, data } = await apiInstance.getBillingPrePays();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**object**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Prepay balances and metadata. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInvoices**
> Array<Invoice> getInvoices()

Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let searchString: string; //pass an optional search string for looking up inventory (optional) (default to undefined)
let skip: number; //number of records to skip for pagination (optional) (default to undefined)
let limit: number; //maximum number of records to return (optional) (default to undefined)

const { status, data } = await apiInstance.getInvoices(
    searchString,
    skip,
    limit
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **searchString** | [**string**] | pass an optional search string for looking up inventory | (optional) defaults to undefined|
| **skip** | [**number**] | number of records to skip for pagination | (optional) defaults to undefined|
| **limit** | [**number**] | maximum number of records to return | (optional) defaults to undefined|


### Return type

**Array<Invoice>**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | search results matching criteria |  -  |
|**400** | bad input parameter |  -  |
|**401** | Unauthorized |  -  |
|**404** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **initiatePayment**
> InitiatePayment200Response initiatePayment()

Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let method: 'cc' | 'paypal' | 'prepay' | 'payssion' | 'payu' | 'ccavenue' | 'cashfree' | 'coinbase' | 'btcpay'; //The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`. (default to undefined)
let invoices: string; //A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`. (default to undefined)

const { status, data } = await apiInstance.initiatePayment(
    method,
    invoices
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **method** | [**&#39;cc&#39; | &#39;paypal&#39; | &#39;prepay&#39; | &#39;payssion&#39; | &#39;payu&#39; | &#39;ccavenue&#39; | &#39;cashfree&#39; | &#39;coinbase&#39; | &#39;btcpay&#39;**]**Array<&#39;cc&#39; &#124; &#39;paypal&#39; &#124; &#39;prepay&#39; &#124; &#39;payssion&#39; &#124; &#39;payu&#39; &#124; &#39;ccavenue&#39; &#124; &#39;cashfree&#39; &#124; &#39;coinbase&#39; &#124; &#39;btcpay&#39;>** | The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;. | defaults to undefined|
| **invoices** | [**string**] | A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;. | defaults to undefined|


### Return type

**InitiatePayment200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Payment initiation response with redirect or form data. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postBillingCreditCardVerify**
> SuccessTextResponse postBillingCreditCardVerify(billingVerifyCcRequest)

Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.

### Example

```typescript
import {
    BillingApi,
    Configuration,
    BillingVerifyCcRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let id: number; //The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`. (default to undefined)
let billingVerifyCcRequest: BillingVerifyCcRequest; //

const { status, data } = await apiInstance.postBillingCreditCardVerify(
    id,
    billingVerifyCcRequest
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **billingVerifyCcRequest** | **BillingVerifyCcRequest**|  | |
| **id** | [**number**] | The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAccountCreditCard**
> string updateAccountCreditCard()

Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let id: number; //The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`. (default to undefined)

const { status, data } = await apiInstance.updateAccountCreditCard(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | defaults to undefined|


### Return type

**string**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Simple string response |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAffiliateDockSetup**
> TextResponse updateAffiliateDockSetup()

Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let affiliateDockTitle: string; // (optional) (default to undefined)
let affiliateDockDescription: string; // (optional) (default to undefined)
let referrerCoupon: string; // (optional) (default to undefined)

const { status, data } = await apiInstance.updateAffiliateDockSetup(
    affiliateDockTitle,
    affiliateDockDescription,
    referrerCoupon
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **affiliateDockTitle** | [**string**] |  | (optional) defaults to undefined|
| **affiliateDockDescription** | [**string**] |  | (optional) defaults to undefined|
| **referrerCoupon** | [**string**] |  | (optional) defaults to undefined|


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response with a text message field. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAffiliateLandingPage**
> TextResponse updateAffiliateLandingPage()

Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let affiliateDockTitle: string; // (optional) (default to undefined)
let affiliateDockDescription: string; // (optional) (default to undefined)
let referrerCoupon: string; // (optional) (default to undefined)

const { status, data } = await apiInstance.updateAffiliateLandingPage(
    affiliateDockTitle,
    affiliateDockDescription,
    referrerCoupon
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **affiliateDockTitle** | [**string**] |  | (optional) defaults to undefined|
| **affiliateDockDescription** | [**string**] |  | (optional) defaults to undefined|
| **referrerCoupon** | [**string**] |  | (optional) defaults to undefined|


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response with a text message field. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAffiliatePaymentSetup**
> TextResponse updateAffiliatePaymentSetup()

Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let affiliatePaypal: string; // (optional) (default to undefined)
let affiliatePaymentMethod: string; // (optional) (default to undefined)

const { status, data } = await apiInstance.updateAffiliatePaymentSetup(
    affiliatePaypal,
    affiliatePaymentMethod
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **affiliatePaypal** | [**string**] |  | (optional) defaults to undefined|
| **affiliatePaymentMethod** | [**string**] |  | (optional) defaults to undefined|


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response with a text message field. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBillingCreditCard**
> SuccessTextResponse updateBillingCreditCard()

Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.

### Example

```typescript
import {
    BillingApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let id: number; //The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`. (default to undefined)

const { status, data } = await apiInstance.updateBillingCreditCard(
    id
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **id** | [**number**] | The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBillingPaymentMethod**
> SuccessTextResponse updateBillingPaymentMethod(billingPaymentMethodRequest)

Updates the account\'s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.

### Example

```typescript
import {
    BillingApi,
    Configuration,
    BillingPaymentMethodRequest
} from './api';

const configuration = new Configuration();
const apiInstance = new BillingApi(configuration);

let billingPaymentMethodRequest: BillingPaymentMethodRequest; //

const { status, data } = await apiInstance.updateBillingPaymentMethod(
    billingPaymentMethodRequest
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **billingPaymentMethodRequest** | **BillingPaymentMethodRequest**|  | |


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

