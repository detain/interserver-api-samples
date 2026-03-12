# BillingApi

All URIs are relative to */apiv2*

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



## addAccountCreditCard

Add Credit Card to Account

Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.

### Example

```bash
 addAccountCreditCard
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string** |  | [optional] [default to null]
 **address** | **string** |  | [optional] [default to null]
 **city** | **string** |  | [optional] [default to null]
 **state** | **string** |  | [optional] [default to null]
 **country** | **string** |  | [optional] [default to null]
 **zip** | **string** |  | [optional] [default to null]
 **cc** | **string** |  | [optional] [default to null]
 **ccExp** | **string** |  | [optional] [default to null]
 **ccCcv2** | **string** |  | [optional] [default to null]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## addBillingCreditCard

Add Credit Card for Billing

Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via 'GET /billing/creditcards/{id}/verify' followed by 'POST /billing/creditcards/{id}/verify' before the card can be used for payments.

### Example

```bash
 addBillingCreditCard
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **billingAddCcRequest** | [**BillingAddCcRequest**](BillingAddCcRequest.md) |  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## addBillingPrepay

Create Prepay Deposit

Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use '/billing/invoices/{id}' to retrieve the generated invoice details.

### Example

```bash
 addBillingPrepay
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **billingPrepayRequest** | [**BillingPrepayRequest**](BillingPrepayRequest.md) |  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## deleteAccountCreditCard

Remove Credit Card

Removes a credit card from the account. If this is the default payment method, select a new default via '/billing/payment_method' afterward.

### Example

```bash
 deleteAccountCreditCard id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string** | The credit card ID. Use the card ID returned from 'POST /account/creditcards' or listed in '/billing/creditcards'. | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## deleteBillingCreditCard

Delete Credit Card

Removes the selected credit card from the account. Use '/billing/payment_method' to select a new default payment method after deleting a card.

### Example

```bash
 deleteBillingCreditCard id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The credit card ID to remove. Use IDs from 'GET /billing/creditcards'. | [default to null]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## deleteBillingInvoice

Delete Invoice

Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.

### Example

```bash
 deleteBillingInvoice id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The invoice ID to delete. Only unpaid invoices can be deleted. | [default to null]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## deleteBillingPrepay

Delete Prepay Balance

Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use 'GET /billing/prepays' to list available prepay balances and their IDs.

### Example

```bash
 deleteBillingPrepay id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The prepay balance ID to delete. | [default to null]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getAffiliateBanners

List Affiliate Banner Assets

Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.

### Example

```bash
 getAffiliateBanners
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**array[AffiliateBannerRow]**](AffiliateBannerRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getAffiliateRichReport

Get Affiliate Performance Report

Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.

### Example

```bash
 getAffiliateRichReport
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getAffiliateSalesGraph

Get Affiliate Sales Graph Data

Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.

### Example

```bash
 getAffiliateSalesGraph  days=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **days** | **integer** | Number of days of sales history to include in the graph data. Determines the time window for the returned data points. | [optional] [default to null]

### Return type

[**StatusMonthlyBreakdown**](StatusMonthlyBreakdown.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getAffiliateSalesReport

Get Affiliate Sales Report

Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.

### Example

```bash
 getAffiliateSalesReport
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getAffiliateTrafficGraph

Get Affiliate Traffic Graph Data

Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.

### Example

```bash
 getAffiliateTrafficGraph  days=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **days** | **integer** | Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. | [optional] [default to null]

### Return type

[**MonthlyCounts**](MonthlyCounts.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getAffiliateWebTraffic

List Affiliate Web Traffic Entries

Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.

### Example

```bash
 getAffiliateWebTraffic
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**array[AffiliateTrafficRow]**](AffiliateTrafficRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getBillingCart

Get Shopping Cart Contents

Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to '/pay/{method}/{invoices}'.

### Example

```bash
 getBillingCart
```

### Parameters

This endpoint does not need any parameter.

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getBillingCreditCardVerify

Get Credit Card Verification Requirements

Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.

### Example

```bash
 getBillingCreditCardVerify id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The credit card ID to verify. Use the ID returned from 'POST /billing/creditcards'. | [default to null]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getBillingInvoice

Get Invoice Details

Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to '/pay/{method}/{invoices}' so you can display the exact amount due and confirm the invoice is still unpaid.

### Example

```bash
 getBillingInvoice id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The invoice ID. Use IDs from 'GET /billing/invoices' or from order responses. | [default to null]

### Return type

[**BillingInvoiceDetail**](BillingInvoiceDetail.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getBillingInvoices

List Account Invoices

Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with '/billing/invoices/{id}' to retrieve detailed line items, or with '/pay/{method}/{invoices}' to initiate payment.

### Example

```bash
 getBillingInvoices
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**BillingInvoiceList**](BillingInvoiceList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getBillingPrePays

List Prepay Balances

Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting 'prepay' as a payment method.

### Example

```bash
 getBillingPrePays
```

### Parameters

This endpoint does not need any parameter.

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getInvoices

Get Invoices

Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional 'searchString' parameter to filter results and 'skip'/'limit' for pagination.

### Example

```bash
 getInvoices  searchString=value  skip=value  limit=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **searchString** | **string** | pass an optional search string for looking up inventory | [optional] [default to null]
 **skip** | **integer** | number of records to skip for pagination | [optional] [default to null]
 **limit** | **integer** | maximum number of records to return | [optional] [default to null]

### Return type

[**array[Invoice]**](Invoice.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## initiatePayment

Initiate Payment

Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: 'redirect' means send the user to the provided URL, 'submit' means POST a form with the provided fields, and 'single' means the payment was processed immediately. Use invoice IDs obtained from order responses or '/billing/invoices'.

### Example

```bash
 initiatePayment method=value invoices=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **method** | **string** | The payment method to use. Valid values: 'cc' (credit card), 'paypal', 'prepay', 'payssion', 'payu', 'ccavenue', 'cashfree', 'coinbase', 'btcpay'. | [default to null]
 **invoices** | **string** | A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. '/backups/order', '/vps/order') and by '/billing/invoices'. | [default to null]

### Return type

[**InitiatePayment200Response**](InitiatePayment200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postBillingCreditCardVerify

Submit Credit Card Verification

Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by 'GET /billing/creditcards/{id}/verify'. A successful response means the card is verified and can be selected as a payment method via '/billing/payment_method'.

### Example

```bash
 postBillingCreditCardVerify id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The credit card ID to verify. Use the ID returned from 'POST /billing/creditcards'. | [default to null]
 **billingVerifyCcRequest** | [**BillingVerifyCcRequest**](BillingVerifyCcRequest.md) |  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## updateAccountCreditCard

Update Credit Card

Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.

### Example

```bash
 updateAccountCreditCard id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The credit card ID. Use the card ID returned from 'POST /account/creditcards' or listed in '/billing/creditcards'. | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## updateAffiliateDockSetup

Configure Affiliate Dock Settings

Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.

### Example

```bash
 updateAffiliateDockSetup
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliateDockTitle** | **string** |  | [optional] [default to null]
 **affiliateDockDescription** | **string** |  | [optional] [default to null]
 **referrerCoupon** | **string** |  | [optional] [default to null]

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## updateAffiliateLandingPage

Configure Affiliate Landing Page

Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.

### Example

```bash
 updateAffiliateLandingPage
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliateDockTitle** | **string** |  | [optional] [default to null]
 **affiliateDockDescription** | **string** |  | [optional] [default to null]
 **referrerCoupon** | **string** |  | [optional] [default to null]

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## updateAffiliatePaymentSetup

Configure Affiliate Payout Preferences

Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.

### Example

```bash
 updateAffiliatePaymentSetup
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliatePaypal** | **string** |  | [optional] [default to null]
 **affiliatePaymentMethod** | **string** |  | [optional] [default to null]

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## updateBillingCreditCard

Update Credit Card Details

Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.

### Example

```bash
 updateBillingCreditCard id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The credit card ID. Use IDs from 'GET /billing/creditcards' or the response from 'POST /billing/creditcards'. | [default to null]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## updateBillingPaymentMethod

Update Default Payment Method

Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.

### Example

```bash
 updateBillingPaymentMethod
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **billingPaymentMethodRequest** | [**BillingPaymentMethodRequest**](BillingPaymentMethodRequest.md) |  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

