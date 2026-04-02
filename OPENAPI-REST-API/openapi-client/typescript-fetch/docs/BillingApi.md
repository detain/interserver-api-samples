# BillingApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addAccountCreditCard**](BillingApi.md#addaccountcreditcard) | **POST** /account/creditcards | Add Credit Card to Account |
| [**addBillingCreditCard**](BillingApi.md#addbillingcreditcard) | **POST** /billing/creditcards | Add Credit Card for Billing |
| [**addBillingPrepay**](BillingApi.md#addbillingprepay) | **POST** /billing/prepays | Create Prepay Deposit |
| [**deleteAccountCreditCard**](BillingApi.md#deleteaccountcreditcard) | **DELETE** /account/creditcards/{id} | Remove Credit Card |
| [**deleteBillingCreditCard**](BillingApi.md#deletebillingcreditcard) | **DELETE** /billing/creditcards/{id} | Delete Credit Card |
| [**deleteBillingInvoice**](BillingApi.md#deletebillinginvoice) | **DELETE** /billing/invoices/{id} | Delete Invoice |
| [**deleteBillingPrepay**](BillingApi.md#deletebillingprepay) | **DELETE** /billing/prepays/{id} | Delete Prepay Balance |
| [**getAffiliateBanners**](BillingApi.md#getaffiliatebanners) | **GET** /affiliate/banners | List Affiliate Banner Assets |
| [**getAffiliateRichReport**](BillingApi.md#getaffiliaterichreport) | **GET** /affiliate/rich_report | Get Affiliate Performance Report |
| [**getAffiliateSalesGraph**](BillingApi.md#getaffiliatesalesgraph) | **GET** /affiliate/sales_graph | Get Affiliate Sales Graph Data |
| [**getAffiliateSalesReport**](BillingApi.md#getaffiliatesalesreport) | **GET** /affiliate/sales_report | Get Affiliate Sales Report |
| [**getAffiliateTrafficGraph**](BillingApi.md#getaffiliatetrafficgraph) | **GET** /affiliate/traffic_graph | Get Affiliate Traffic Graph Data |
| [**getAffiliateWebTraffic**](BillingApi.md#getaffiliatewebtraffic) | **GET** /affiliate/web_traffic | List Affiliate Web Traffic Entries |
| [**getBillingCart**](BillingApi.md#getbillingcart) | **GET** /billing/cart | Get Shopping Cart Contents |
| [**getBillingCreditCardVerify**](BillingApi.md#getbillingcreditcardverify) | **GET** /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements |
| [**getBillingInvoice**](BillingApi.md#getbillinginvoice) | **GET** /billing/invoices/{id} | Get Invoice Details |
| [**getBillingInvoices**](BillingApi.md#getbillinginvoices) | **GET** /billing/invoices | List Account Invoices |
| [**getBillingPrePays**](BillingApi.md#getbillingprepays) | **GET** /billing/prepays | List Prepay Balances |
| [**getInvoices**](BillingApi.md#getinvoices) | **GET** /invoices | Get Invoices |
| [**initiatePayment**](BillingApi.md#initiatepayment) | **GET** /pay/{method}/{invoices} | Initiate Payment |
| [**postBillingCreditCardVerify**](BillingApi.md#postbillingcreditcardverify) | **POST** /billing/creditcards/{id}/verify | Submit Credit Card Verification |
| [**updateAccountCreditCard**](BillingApi.md#updateaccountcreditcard) | **POST** /account/creditcards/{id} | Update Credit Card |
| [**updateAffiliateDockSetup**](BillingApi.md#updateaffiliatedocksetup) | **POST** /affiliate/dock_setup | Configure Affiliate Dock Settings |
| [**updateAffiliateLandingPage**](BillingApi.md#updateaffiliatelandingpage) | **POST** /affiliate/landing_pg | Configure Affiliate Landing Page |
| [**updateAffiliatePaymentSetup**](BillingApi.md#updateaffiliatepaymentsetup) | **POST** /affiliate/payment_setup | Configure Affiliate Payout Preferences |
| [**updateBillingCreditCard**](BillingApi.md#updatebillingcreditcard) | **POST** /billing/creditcards/{id} | Update Credit Card Details |
| [**updateBillingPaymentMethod**](BillingApi.md#updatebillingpaymentmethod) | **POST** /billing/payment_method | Update Default Payment Method |



## addAccountCreditCard

> SuccessTextResponse addAccountCreditCard(name, address, city, state, country, zip, cc, ccExp, ccCcv2)

Add Credit Card to Account

Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { AddAccountCreditCardRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // string (optional)
    name: name_example,
    // string (optional)
    address: address_example,
    // string (optional)
    city: city_example,
    // string (optional)
    state: state_example,
    // string (optional)
    country: country_example,
    // string (optional)
    zip: zip_example,
    // string (optional)
    cc: cc_example,
    // string (optional)
    ccExp: ccExp_example,
    // string (optional)
    ccCcv2: ccCcv2_example,
  } satisfies AddAccountCreditCardRequest;

  try {
    const data = await api.addAccountCreditCard(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | `string` |  | [Optional] [Defaults to `undefined`] |
| **address** | `string` |  | [Optional] [Defaults to `undefined`] |
| **city** | `string` |  | [Optional] [Defaults to `undefined`] |
| **state** | `string` |  | [Optional] [Defaults to `undefined`] |
| **country** | `string` |  | [Optional] [Defaults to `undefined`] |
| **zip** | `string` |  | [Optional] [Defaults to `undefined`] |
| **cc** | `string` |  | [Optional] [Defaults to `undefined`] |
| **ccExp** | `string` |  | [Optional] [Defaults to `undefined`] |
| **ccCcv2** | `string` |  | [Optional] [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## addBillingCreditCard

> SuccessTextResponse addBillingCreditCard(billingAddCcRequest)

Add Credit Card for Billing

Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via &#x60;GET /billing/creditcards/{id}/verify&#x60; followed by &#x60;POST /billing/creditcards/{id}/verify&#x60; before the card can be used for payments.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { AddBillingCreditCardRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // BillingAddCcRequest
    billingAddCcRequest: ...,
  } satisfies AddBillingCreditCardRequest;

  try {
    const data = await api.addBillingCreditCard(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **billingAddCcRequest** | [BillingAddCcRequest](BillingAddCcRequest.md) |  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## addBillingPrepay

> SuccessTextResponse addBillingPrepay(billingPrepayRequest)

Create Prepay Deposit

Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use &#x60;/billing/invoices/{id}&#x60; to retrieve the generated invoice details.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { AddBillingPrepayRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // BillingPrepayRequest
    billingPrepayRequest: ...,
  } satisfies AddBillingPrepayRequest;

  try {
    const data = await api.addBillingPrepay(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **billingPrepayRequest** | [BillingPrepayRequest](BillingPrepayRequest.md) |  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## deleteAccountCreditCard

> string deleteAccountCreditCard(id)

Remove Credit Card

Removes a credit card from the account. If this is the default payment method, select a new default via &#x60;/billing/payment_method&#x60; afterward.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { DeleteAccountCreditCardRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // string | The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.
    id: id_example,
  } satisfies DeleteAccountCreditCardRequest;

  try {
    const data = await api.deleteAccountCreditCard(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `string` | The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | [Defaults to `undefined`] |

### Return type

**string**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Simple string response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## deleteBillingCreditCard

> SuccessTextResponse deleteBillingCreditCard(id)

Delete Credit Card

Removes the selected credit card from the account. Use &#x60;/billing/payment_method&#x60; to select a new default payment method after deleting a card.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { DeleteBillingCreditCardRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // number | The credit card ID to remove. Use IDs from `GET /billing/creditcards`.
    id: 56,
  } satisfies DeleteBillingCreditCardRequest;

  try {
    const data = await api.deleteBillingCreditCard(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## deleteBillingInvoice

> SuccessTextResponse deleteBillingInvoice(id)

Delete Invoice

Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { DeleteBillingInvoiceRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // number | The invoice ID to delete. Only unpaid invoices can be deleted.
    id: 56,
  } satisfies DeleteBillingInvoiceRequest;

  try {
    const data = await api.deleteBillingInvoice(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The invoice ID to delete. Only unpaid invoices can be deleted. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## deleteBillingPrepay

> SuccessTextResponse deleteBillingPrepay(id)

Delete Prepay Balance

Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use &#x60;GET /billing/prepays&#x60; to list available prepay balances and their IDs.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { DeleteBillingPrepayRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // number | The prepay balance ID to delete.
    id: 56,
  } satisfies DeleteBillingPrepayRequest;

  try {
    const data = await api.deleteBillingPrepay(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The prepay balance ID to delete. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getAffiliateBanners

> Array&lt;AffiliateBannerRow&gt; getAffiliateBanners()

List Affiliate Banner Assets

Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { GetAffiliateBannersRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  try {
    const data = await api.getAffiliateBanners();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Array&lt;AffiliateBannerRow&gt;**](AffiliateBannerRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Affiliate Banners Array |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getAffiliateRichReport

> TextResponse getAffiliateRichReport()

Get Affiliate Performance Report

Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { GetAffiliateRichReportRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  try {
    const data = await api.getAffiliateRichReport();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getAffiliateSalesGraph

> StatusMonthlyBreakdown getAffiliateSalesGraph(days)

Get Affiliate Sales Graph Data

Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { GetAffiliateSalesGraphRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // number | Number of days of sales history to include in the graph data. Determines the time window for the returned data points. (optional)
    days: 56,
  } satisfies GetAffiliateSalesGraphRequest;

  try {
    const data = await api.getAffiliateSalesGraph(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **days** | `number` | Number of days of sales history to include in the graph data. Determines the time window for the returned data points. | [Optional] [Defaults to `undefined`] |

### Return type

[**StatusMonthlyBreakdown**](StatusMonthlyBreakdown.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Affiliate sales graph data broken down by time period. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getAffiliateSalesReport

> TextResponse getAffiliateSalesReport()

Get Affiliate Sales Report

Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { GetAffiliateSalesReportRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  try {
    const data = await api.getAffiliateSalesReport();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getAffiliateTrafficGraph

> MonthlyCounts getAffiliateTrafficGraph(days)

Get Affiliate Traffic Graph Data

Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { GetAffiliateTrafficGraphRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // number | Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. (optional)
    days: 56,
  } satisfies GetAffiliateTrafficGraphRequest;

  try {
    const data = await api.getAffiliateTrafficGraph(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **days** | `number` | Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. | [Optional] [Defaults to `undefined`] |

### Return type

[**MonthlyCounts**](MonthlyCounts.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Affiliate traffic graph data broken down by time period. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getAffiliateWebTraffic

> Array&lt;AffiliateTrafficRow&gt; getAffiliateWebTraffic()

List Affiliate Web Traffic Entries

Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { GetAffiliateWebTrafficRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  try {
    const data = await api.getAffiliateWebTraffic();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Array&lt;AffiliateTrafficRow&gt;**](AffiliateTrafficRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The recent affiliate web traffic |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getBillingCart

> object getBillingCart()

Get Shopping Cart Contents

Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to &#x60;/pay/{method}/{invoices}&#x60;.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { GetBillingCartRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  try {
    const data = await api.getBillingCart();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

**object**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Current shopping cart contents and available payment methods. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getBillingCreditCardVerify

> SuccessTextResponse getBillingCreditCardVerify(id)

Get Credit Card Verification Requirements

Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { GetBillingCreditCardVerifyRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // number | The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
    id: 56,
  } satisfies GetBillingCreditCardVerifyRequest;

  try {
    const data = await api.getBillingCreditCardVerify(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getBillingInvoice

> BillingInvoiceDetail getBillingInvoice(id)

Get Invoice Details

Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to &#x60;/pay/{method}/{invoices}&#x60; so you can display the exact amount due and confirm the invoice is still unpaid.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { GetBillingInvoiceRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // number | The invoice ID. Use IDs from `GET /billing/invoices` or from order responses.
    id: 56,
  } satisfies GetBillingInvoiceRequest;

  try {
    const data = await api.getBillingInvoice(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses. | [Defaults to `undefined`] |

### Return type

[**BillingInvoiceDetail**](BillingInvoiceDetail.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Detailed invoice payload for the requested invoice. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getBillingInvoices

> BillingInvoiceList getBillingInvoices()

List Account Invoices

Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with &#x60;/billing/invoices/{id}&#x60; to retrieve detailed line items, or with &#x60;/pay/{method}/{invoices}&#x60; to initiate payment.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { GetBillingInvoicesRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  try {
    const data = await api.getBillingInvoices();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**BillingInvoiceList**](BillingInvoiceList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Invoice listing and summary for the account. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getBillingPrePays

> object getBillingPrePays()

List Prepay Balances

Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting &#x60;prepay&#x60; as a payment method.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { GetBillingPrePaysRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  try {
    const data = await api.getBillingPrePays();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

**object**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Prepay balances and metadata. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getInvoices

> Array&lt;Invoice&gt; getInvoices(searchString, skip, limit)

Get Invoices

Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional &#x60;searchString&#x60; parameter to filter results and &#x60;skip&#x60;/&#x60;limit&#x60; for pagination.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { GetInvoicesRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // string | pass an optional search string for looking up inventory (optional)
    searchString: searchString_example,
    // number | number of records to skip for pagination (optional)
    skip: 56,
    // number | maximum number of records to return (optional)
    limit: 56,
  } satisfies GetInvoicesRequest;

  try {
    const data = await api.getInvoices(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **searchString** | `string` | pass an optional search string for looking up inventory | [Optional] [Defaults to `undefined`] |
| **skip** | `number` | number of records to skip for pagination | [Optional] [Defaults to `undefined`] |
| **limit** | `number` | maximum number of records to return | [Optional] [Defaults to `undefined`] |

### Return type

[**Array&lt;Invoice&gt;**](Invoice.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | search results matching criteria |  -  |
| **400** | bad input parameter |  -  |
| **401** | Unauthorized |  -  |
| **404** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## initiatePayment

> InitiatePayment200Response initiatePayment(method, invoices)

Initiate Payment

Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: &#x60;redirect&#x60; means send the user to the provided URL, &#x60;submit&#x60; means POST a form with the provided fields, and &#x60;single&#x60; means the payment was processed immediately. Use invoice IDs obtained from order responses or &#x60;/billing/invoices&#x60;.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { InitiatePaymentRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // 'cc' | 'paypal' | 'prepay' | 'payssion' | 'payu' | 'ccavenue' | 'cashfree' | 'coinbase' | 'btcpay' | The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`.
    method: method_example,
    // string | A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`.
    invoices: invoices_example,
  } satisfies InitiatePaymentRequest;

  try {
    const data = await api.initiatePayment(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **method** | `cc`, `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay` | The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;. | [Defaults to `undefined`] [Enum: cc, paypal, prepay, payssion, payu, ccavenue, cashfree, coinbase, btcpay] |
| **invoices** | `string` | A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;. | [Defaults to `undefined`] |

### Return type

[**InitiatePayment200Response**](InitiatePayment200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Payment initiation response with redirect or form data. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postBillingCreditCardVerify

> SuccessTextResponse postBillingCreditCardVerify(id, billingVerifyCcRequest)

Submit Credit Card Verification

Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by &#x60;GET /billing/creditcards/{id}/verify&#x60;. A successful response means the card is verified and can be selected as a payment method via &#x60;/billing/payment_method&#x60;.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { PostBillingCreditCardVerifyRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // number | The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
    id: 56,
    // BillingVerifyCcRequest
    billingVerifyCcRequest: ...,
  } satisfies PostBillingCreditCardVerifyRequest;

  try {
    const data = await api.postBillingCreditCardVerify(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | [Defaults to `undefined`] |
| **billingVerifyCcRequest** | [BillingVerifyCcRequest](BillingVerifyCcRequest.md) |  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateAccountCreditCard

> string updateAccountCreditCard(id)

Update Credit Card

Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { UpdateAccountCreditCardRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // number | The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.
    id: 56,
  } satisfies UpdateAccountCreditCardRequest;

  try {
    const data = await api.updateAccountCreditCard(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | [Defaults to `undefined`] |

### Return type

**string**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Simple string response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateAffiliateDockSetup

> TextResponse updateAffiliateDockSetup(affiliateDockTitle, affiliateDockDescription, referrerCoupon)

Configure Affiliate Dock Settings

Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { UpdateAffiliateDockSetupRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // string (optional)
    affiliateDockTitle: affiliateDockTitle_example,
    // string (optional)
    affiliateDockDescription: affiliateDockDescription_example,
    // string (optional)
    referrerCoupon: referrerCoupon_example,
  } satisfies UpdateAffiliateDockSetupRequest;

  try {
    const data = await api.updateAffiliateDockSetup(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **affiliateDockTitle** | `string` |  | [Optional] [Defaults to `undefined`] |
| **affiliateDockDescription** | `string` |  | [Optional] [Defaults to `undefined`] |
| **referrerCoupon** | `string` |  | [Optional] [Defaults to `undefined`] |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateAffiliateLandingPage

> TextResponse updateAffiliateLandingPage(affiliateDockTitle, affiliateDockDescription, referrerCoupon)

Configure Affiliate Landing Page

Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { UpdateAffiliateLandingPageRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // string (optional)
    affiliateDockTitle: affiliateDockTitle_example,
    // string (optional)
    affiliateDockDescription: affiliateDockDescription_example,
    // string (optional)
    referrerCoupon: referrerCoupon_example,
  } satisfies UpdateAffiliateLandingPageRequest;

  try {
    const data = await api.updateAffiliateLandingPage(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **affiliateDockTitle** | `string` |  | [Optional] [Defaults to `undefined`] |
| **affiliateDockDescription** | `string` |  | [Optional] [Defaults to `undefined`] |
| **referrerCoupon** | `string` |  | [Optional] [Defaults to `undefined`] |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateAffiliatePaymentSetup

> TextResponse updateAffiliatePaymentSetup(affiliatePaypal, affiliatePaymentMethod)

Configure Affiliate Payout Preferences

Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { UpdateAffiliatePaymentSetupRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // string (optional)
    affiliatePaypal: affiliatePaypal_example,
    // string (optional)
    affiliatePaymentMethod: affiliatePaymentMethod_example,
  } satisfies UpdateAffiliatePaymentSetupRequest;

  try {
    const data = await api.updateAffiliatePaymentSetup(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **affiliatePaypal** | `string` |  | [Optional] [Defaults to `undefined`] |
| **affiliatePaymentMethod** | `string` |  | [Optional] [Defaults to `undefined`] |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateBillingCreditCard

> SuccessTextResponse updateBillingCreditCard(id)

Update Credit Card Details

Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { UpdateBillingCreditCardRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // number | The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`.
    id: 56,
  } satisfies UpdateBillingCreditCardRequest;

  try {
    const data = await api.updateBillingCreditCard(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateBillingPaymentMethod

> SuccessTextResponse updateBillingPaymentMethod(billingPaymentMethodRequest)

Update Default Payment Method

Updates the account\&#39;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.

### Example

```ts
import {
  Configuration,
  BillingApi,
} from '';
import type { UpdateBillingPaymentMethodRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new BillingApi(config);

  const body = {
    // BillingPaymentMethodRequest
    billingPaymentMethodRequest: ...,
  } satisfies UpdateBillingPaymentMethodRequest;

  try {
    const data = await api.updateBillingPaymentMethod(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **billingPaymentMethodRequest** | [BillingPaymentMethodRequest](BillingPaymentMethodRequest.md) |  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)

