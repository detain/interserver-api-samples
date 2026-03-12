# BillingApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addAccountCreditCard**](BillingApi.md#addAccountCreditCard) | **POST** /account/creditcards | Add Credit Card to Account |
| [**addBillingCreditCard**](BillingApi.md#addBillingCreditCard) | **POST** /billing/creditcards | Add Credit Card for Billing |
| [**addBillingPrepay**](BillingApi.md#addBillingPrepay) | **POST** /billing/prepays | Create Prepay Deposit |
| [**deleteAccountCreditCard**](BillingApi.md#deleteAccountCreditCard) | **DELETE** /account/creditcards/{id} | Remove Credit Card |
| [**deleteBillingCreditCard**](BillingApi.md#deleteBillingCreditCard) | **DELETE** /billing/creditcards/{id} | Delete Credit Card |
| [**deleteBillingInvoice**](BillingApi.md#deleteBillingInvoice) | **DELETE** /billing/invoices/{id} | Delete Invoice |
| [**deleteBillingPrepay**](BillingApi.md#deleteBillingPrepay) | **DELETE** /billing/prepays/{id} | Delete Prepay Balance |
| [**getAffiliateBanners**](BillingApi.md#getAffiliateBanners) | **GET** /affiliate/banners | List Affiliate Banner Assets |
| [**getAffiliateRichReport**](BillingApi.md#getAffiliateRichReport) | **GET** /affiliate/rich_report | Get Affiliate Performance Report |
| [**getAffiliateSalesGraph**](BillingApi.md#getAffiliateSalesGraph) | **GET** /affiliate/sales_graph | Get Affiliate Sales Graph Data |
| [**getAffiliateSalesReport**](BillingApi.md#getAffiliateSalesReport) | **GET** /affiliate/sales_report | Get Affiliate Sales Report |
| [**getAffiliateTrafficGraph**](BillingApi.md#getAffiliateTrafficGraph) | **GET** /affiliate/traffic_graph | Get Affiliate Traffic Graph Data |
| [**getAffiliateWebTraffic**](BillingApi.md#getAffiliateWebTraffic) | **GET** /affiliate/web_traffic | List Affiliate Web Traffic Entries |
| [**getBillingCart**](BillingApi.md#getBillingCart) | **GET** /billing/cart | Get Shopping Cart Contents |
| [**getBillingCreditCardVerify**](BillingApi.md#getBillingCreditCardVerify) | **GET** /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements |
| [**getBillingInvoice**](BillingApi.md#getBillingInvoice) | **GET** /billing/invoices/{id} | Get Invoice Details |
| [**getBillingInvoices**](BillingApi.md#getBillingInvoices) | **GET** /billing/invoices | List Account Invoices |
| [**getBillingPrePays**](BillingApi.md#getBillingPrePays) | **GET** /billing/prepays | List Prepay Balances |
| [**getInvoices**](BillingApi.md#getInvoices) | **GET** /invoices | Get Invoices |
| [**initiatePayment**](BillingApi.md#initiatePayment) | **GET** /pay/{method}/{invoices} | Initiate Payment |
| [**postBillingCreditCardVerify**](BillingApi.md#postBillingCreditCardVerify) | **POST** /billing/creditcards/{id}/verify | Submit Credit Card Verification |
| [**updateAccountCreditCard**](BillingApi.md#updateAccountCreditCard) | **POST** /account/creditcards/{id} | Update Credit Card |
| [**updateAffiliateDockSetup**](BillingApi.md#updateAffiliateDockSetup) | **POST** /affiliate/dock_setup | Configure Affiliate Dock Settings |
| [**updateAffiliateLandingPage**](BillingApi.md#updateAffiliateLandingPage) | **POST** /affiliate/landing_pg | Configure Affiliate Landing Page |
| [**updateAffiliatePaymentSetup**](BillingApi.md#updateAffiliatePaymentSetup) | **POST** /affiliate/payment_setup | Configure Affiliate Payout Preferences |
| [**updateBillingCreditCard**](BillingApi.md#updateBillingCreditCard) | **POST** /billing/creditcards/{id} | Update Credit Card Details |
| [**updateBillingPaymentMethod**](BillingApi.md#updateBillingPaymentMethod) | **POST** /billing/payment_method | Update Default Payment Method |


<a name="addAccountCreditCard"></a>
# **addAccountCreditCard**
> SuccessTextResponse addAccountCreditCard(name, address, city, state, country, zip, cc, cc\_exp, cc\_ccv2)

Add Credit Card to Account

    Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | **String**|  | [optional] [default to null] |
| **address** | **String**|  | [optional] [default to null] |
| **city** | **String**|  | [optional] [default to null] |
| **state** | **String**|  | [optional] [default to null] |
| **country** | **String**|  | [optional] [default to null] |
| **zip** | **String**|  | [optional] [default to null] |
| **cc** | **String**|  | [optional] [default to null] |
| **cc\_exp** | **String**|  | [optional] [default to null] |
| **cc\_ccv2** | **String**|  | [optional] [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="addBillingCreditCard"></a>
# **addBillingCreditCard**
> SuccessTextResponse addBillingCreditCard(BillingAddCcRequest)

Add Credit Card for Billing

    Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via &#x60;GET /billing/creditcards/{id}/verify&#x60; followed by &#x60;POST /billing/creditcards/{id}/verify&#x60; before the card can be used for payments.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **BillingAddCcRequest** | [**BillingAddCcRequest**](../Models/BillingAddCcRequest.md)|  | |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="addBillingPrepay"></a>
# **addBillingPrepay**
> SuccessTextResponse addBillingPrepay(BillingPrepayRequest)

Create Prepay Deposit

    Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use &#x60;/billing/invoices/{id}&#x60; to retrieve the generated invoice details.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **BillingPrepayRequest** | [**BillingPrepayRequest**](../Models/BillingPrepayRequest.md)|  | |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="deleteAccountCreditCard"></a>
# **deleteAccountCreditCard**
> deleteAccountCreditCard(id)

Remove Credit Card

    Removes a credit card from the account. If this is the default payment method, select a new default via &#x60;/billing/payment_method&#x60; afterward.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteBillingCreditCard"></a>
# **deleteBillingCreditCard**
> SuccessTextResponse deleteBillingCreditCard(id)

Delete Credit Card

    Removes the selected credit card from the account. Use &#x60;/billing/payment_method&#x60; to select a new default payment method after deleting a card.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteBillingInvoice"></a>
# **deleteBillingInvoice**
> SuccessTextResponse deleteBillingInvoice(id)

Delete Invoice

    Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The invoice ID to delete. Only unpaid invoices can be deleted. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteBillingPrepay"></a>
# **deleteBillingPrepay**
> SuccessTextResponse deleteBillingPrepay(id)

Delete Prepay Balance

    Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use &#x60;GET /billing/prepays&#x60; to list available prepay balances and their IDs.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The prepay balance ID to delete. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getAffiliateBanners"></a>
# **getAffiliateBanners**
> List getAffiliateBanners()

List Affiliate Banner Assets

    Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.

### Parameters
This endpoint does not need any parameter.

### Return type

[**List**](../Models/AffiliateBannerRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getAffiliateRichReport"></a>
# **getAffiliateRichReport**
> TextResponse getAffiliateRichReport()

Get Affiliate Performance Report

    Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.

### Parameters
This endpoint does not need any parameter.

### Return type

[**TextResponse**](../Models/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getAffiliateSalesGraph"></a>
# **getAffiliateSalesGraph**
> StatusMonthlyBreakdown getAffiliateSalesGraph(days)

Get Affiliate Sales Graph Data

    Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **days** | **Integer**| Number of days of sales history to include in the graph data. Determines the time window for the returned data points. | [optional] [default to null] |

### Return type

[**StatusMonthlyBreakdown**](../Models/StatusMonthlyBreakdown.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getAffiliateSalesReport"></a>
# **getAffiliateSalesReport**
> TextResponse getAffiliateSalesReport()

Get Affiliate Sales Report

    Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.

### Parameters
This endpoint does not need any parameter.

### Return type

[**TextResponse**](../Models/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getAffiliateTrafficGraph"></a>
# **getAffiliateTrafficGraph**
> MonthlyCounts getAffiliateTrafficGraph(days)

Get Affiliate Traffic Graph Data

    Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **days** | **Integer**| Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. | [optional] [default to null] |

### Return type

[**MonthlyCounts**](../Models/MonthlyCounts.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getAffiliateWebTraffic"></a>
# **getAffiliateWebTraffic**
> List getAffiliateWebTraffic()

List Affiliate Web Traffic Entries

    Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.

### Parameters
This endpoint does not need any parameter.

### Return type

[**List**](../Models/AffiliateTrafficRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getBillingCart"></a>
# **getBillingCart**
> getBillingCart()

Get Shopping Cart Contents

    Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to &#x60;/pay/{method}/{invoices}&#x60;.

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getBillingCreditCardVerify"></a>
# **getBillingCreditCardVerify**
> SuccessTextResponse getBillingCreditCardVerify(id)

Get Credit Card Verification Requirements

    Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getBillingInvoice"></a>
# **getBillingInvoice**
> BillingInvoiceDetail getBillingInvoice(id)

Get Invoice Details

    Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to &#x60;/pay/{method}/{invoices}&#x60; so you can display the exact amount due and confirm the invoice is still unpaid.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses. | [default to null] |

### Return type

[**BillingInvoiceDetail**](../Models/BillingInvoiceDetail.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getBillingInvoices"></a>
# **getBillingInvoices**
> BillingInvoiceList getBillingInvoices()

List Account Invoices

    Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with &#x60;/billing/invoices/{id}&#x60; to retrieve detailed line items, or with &#x60;/pay/{method}/{invoices}&#x60; to initiate payment.

### Parameters
This endpoint does not need any parameter.

### Return type

[**BillingInvoiceList**](../Models/BillingInvoiceList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getBillingPrePays"></a>
# **getBillingPrePays**
> getBillingPrePays()

List Prepay Balances

    Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting &#x60;prepay&#x60; as a payment method.

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getInvoices"></a>
# **getInvoices**
> List getInvoices(searchString, skip, limit)

Get Invoices

    Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional &#x60;searchString&#x60; parameter to filter results and &#x60;skip&#x60;/&#x60;limit&#x60; for pagination.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **searchString** | **String**| pass an optional search string for looking up inventory | [optional] [default to null] |
| **skip** | **Integer**| number of records to skip for pagination | [optional] [default to null] |
| **limit** | **Integer**| maximum number of records to return | [optional] [default to null] |

### Return type

[**List**](../Models/Invoice.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="initiatePayment"></a>
# **initiatePayment**
> initiatePayment_200_response initiatePayment(method, invoices)

Initiate Payment

    Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: &#x60;redirect&#x60; means send the user to the provided URL, &#x60;submit&#x60; means POST a form with the provided fields, and &#x60;single&#x60; means the payment was processed immediately. Use invoice IDs obtained from order responses or &#x60;/billing/invoices&#x60;.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **method** | **String**| The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;. | [default to null] [enum: cc, paypal, prepay, payssion, payu, ccavenue, cashfree, coinbase, btcpay] |
| **invoices** | **String**| A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;. | [default to null] |

### Return type

[**initiatePayment_200_response**](../Models/initiatePayment_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postBillingCreditCardVerify"></a>
# **postBillingCreditCardVerify**
> SuccessTextResponse postBillingCreditCardVerify(id, BillingVerifyCcRequest)

Submit Credit Card Verification

    Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by &#x60;GET /billing/creditcards/{id}/verify&#x60;. A successful response means the card is verified and can be selected as a payment method via &#x60;/billing/payment_method&#x60;.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | [default to null] |
| **BillingVerifyCcRequest** | [**BillingVerifyCcRequest**](../Models/BillingVerifyCcRequest.md)|  | |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="updateAccountCreditCard"></a>
# **updateAccountCreditCard**
> updateAccountCreditCard(id)

Update Credit Card

    Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateAffiliateDockSetup"></a>
# **updateAffiliateDockSetup**
> TextResponse updateAffiliateDockSetup(affiliate\_dock\_title, affiliate\_dock\_description, referrer\_coupon)

Configure Affiliate Dock Settings

    Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **affiliate\_dock\_title** | **String**|  | [optional] [default to null] |
| **affiliate\_dock\_description** | **String**|  | [optional] [default to null] |
| **referrer\_coupon** | **String**|  | [optional] [default to null] |

### Return type

[**TextResponse**](../Models/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="updateAffiliateLandingPage"></a>
# **updateAffiliateLandingPage**
> TextResponse updateAffiliateLandingPage(affiliate\_dock\_title, affiliate\_dock\_description, referrer\_coupon)

Configure Affiliate Landing Page

    Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **affiliate\_dock\_title** | **String**|  | [optional] [default to null] |
| **affiliate\_dock\_description** | **String**|  | [optional] [default to null] |
| **referrer\_coupon** | **String**|  | [optional] [default to null] |

### Return type

[**TextResponse**](../Models/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="updateAffiliatePaymentSetup"></a>
# **updateAffiliatePaymentSetup**
> TextResponse updateAffiliatePaymentSetup(affiliate\_paypal, affiliate\_payment\_method)

Configure Affiliate Payout Preferences

    Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **affiliate\_paypal** | **String**|  | [optional] [default to null] |
| **affiliate\_payment\_method** | **String**|  | [optional] [default to null] |

### Return type

[**TextResponse**](../Models/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="updateBillingCreditCard"></a>
# **updateBillingCreditCard**
> SuccessTextResponse updateBillingCreditCard(id)

Update Credit Card Details

    Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateBillingPaymentMethod"></a>
# **updateBillingPaymentMethod**
> SuccessTextResponse updateBillingPaymentMethod(BillingPaymentMethodRequest)

Update Default Payment Method

    Updates the account&#39;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **BillingPaymentMethodRequest** | [**BillingPaymentMethodRequest**](../Models/BillingPaymentMethodRequest.md)|  | |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

