# BILLING_API

All URIs are relative to *https://my.interserver.net/apiv2*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**add_account_credit_card**](BILLING_API.md#add_account_credit_card) | **Post** /account/creditcards | Add Credit Card to Account
[**add_billing_credit_card**](BILLING_API.md#add_billing_credit_card) | **Post** /billing/creditcards | Add Credit Card for Billing
[**add_billing_prepay**](BILLING_API.md#add_billing_prepay) | **Post** /billing/prepays | Create Prepay Deposit
[**affiliate_banners**](BILLING_API.md#affiliate_banners) | **Get** /affiliate/banners | List Affiliate Banner Assets
[**affiliate_rich_report**](BILLING_API.md#affiliate_rich_report) | **Get** /affiliate/rich_report | Get Affiliate Performance Report
[**affiliate_sales_graph**](BILLING_API.md#affiliate_sales_graph) | **Get** /affiliate/sales_graph | Get Affiliate Sales Graph Data
[**affiliate_sales_report**](BILLING_API.md#affiliate_sales_report) | **Get** /affiliate/sales_report | Get Affiliate Sales Report
[**affiliate_traffic_graph**](BILLING_API.md#affiliate_traffic_graph) | **Get** /affiliate/traffic_graph | Get Affiliate Traffic Graph Data
[**affiliate_web_traffic**](BILLING_API.md#affiliate_web_traffic) | **Get** /affiliate/web_traffic | List Affiliate Web Traffic Entries
[**billing_cart**](BILLING_API.md#billing_cart) | **Get** /billing/cart | Get Shopping Cart Contents
[**billing_credit_card_verify**](BILLING_API.md#billing_credit_card_verify) | **Get** /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements
[**billing_invoice**](BILLING_API.md#billing_invoice) | **Get** /billing/invoices/{id} | Get Invoice Details
[**billing_invoices**](BILLING_API.md#billing_invoices) | **Get** /billing/invoices | List Account Invoices
[**billing_pre_pays**](BILLING_API.md#billing_pre_pays) | **Get** /billing/prepays | List Prepay Balances
[**delete_account_credit_card**](BILLING_API.md#delete_account_credit_card) | **Delete** /account/creditcards/{id} | Remove Credit Card
[**delete_billing_credit_card**](BILLING_API.md#delete_billing_credit_card) | **Delete** /billing/creditcards/{id} | Delete Credit Card
[**delete_billing_invoice**](BILLING_API.md#delete_billing_invoice) | **Delete** /billing/invoices/{id} | Delete Invoice
[**delete_billing_prepay**](BILLING_API.md#delete_billing_prepay) | **Delete** /billing/prepays/{id} | Delete Prepay Balance
[**initiate_payment**](BILLING_API.md#initiate_payment) | **Get** /pay/{method}/{invoices} | Initiate Payment
[**invoices**](BILLING_API.md#invoices) | **Get** /invoices | Get Invoices
[**post_billing_credit_card_verify**](BILLING_API.md#post_billing_credit_card_verify) | **Post** /billing/creditcards/{id}/verify | Submit Credit Card Verification
[**update_account_credit_card**](BILLING_API.md#update_account_credit_card) | **Post** /account/creditcards/{id} | Update Credit Card
[**update_affiliate_dock_setup**](BILLING_API.md#update_affiliate_dock_setup) | **Post** /affiliate/dock_setup | Configure Affiliate Dock Settings
[**update_affiliate_landing_page**](BILLING_API.md#update_affiliate_landing_page) | **Post** /affiliate/landing_pg | Configure Affiliate Landing Page
[**update_affiliate_payment_setup**](BILLING_API.md#update_affiliate_payment_setup) | **Post** /affiliate/payment_setup | Configure Affiliate Payout Preferences
[**update_billing_credit_card**](BILLING_API.md#update_billing_credit_card) | **Post** /billing/creditcards/{id} | Update Credit Card Details
[**update_billing_payment_method**](BILLING_API.md#update_billing_payment_method) | **Post** /billing/payment_method | Update Default Payment Method


# **add_account_credit_card**
> add_account_credit_card (name:  detachable STRING_32 ; address:  detachable STRING_32 ; city:  detachable STRING_32 ; state:  detachable STRING_32 ; country:  detachable STRING_32 ; zip:  detachable STRING_32 ; cc:  detachable STRING_32 ; cc_exp:  detachable STRING_32 ; cc_ccv2:  detachable STRING_32 ): detachable SUCCESS_TEXT_RESPONSE


Add Credit Card to Account

Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **STRING_32**|  | [optional] [default to null]
 **address** | **STRING_32**|  | [optional] [default to null]
 **city** | **STRING_32**|  | [optional] [default to null]
 **state** | **STRING_32**|  | [optional] [default to null]
 **country** | **STRING_32**|  | [optional] [default to null]
 **zip** | **STRING_32**|  | [optional] [default to null]
 **cc** | **STRING_32**|  | [optional] [default to null]
 **cc_exp** | **STRING_32**|  | [optional] [default to null]
 **cc_ccv2** | **STRING_32**|  | [optional] [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **add_billing_credit_card**
> add_billing_credit_card (billing_add_cc_request: BILLING_ADD_CC_REQUEST ): detachable SUCCESS_TEXT_RESPONSE


Add Credit Card for Billing

Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **billing_add_cc_request** | [**BILLING_ADD_CC_REQUEST**](BILLING_ADD_CC_REQUEST.md)|  | 

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **add_billing_prepay**
> add_billing_prepay (billing_prepay_request: BILLING_PREPAY_REQUEST ): detachable SUCCESS_TEXT_RESPONSE


Create Prepay Deposit

Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **billing_prepay_request** | [**BILLING_PREPAY_REQUEST**](BILLING_PREPAY_REQUEST.md)|  | 

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **affiliate_banners**
> affiliate_banners : detachable LIST [AFFILIATE_BANNER_ROW]


List Affiliate Banner Assets

Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.


### Parameters
This endpoint does not need any parameter.

### Return type

[**LIST [AFFILIATE_BANNER_ROW]**](AffiliateBannerRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **affiliate_rich_report**
> affiliate_rich_report : detachable TEXT_RESPONSE


Get Affiliate Performance Report

Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.


### Parameters
This endpoint does not need any parameter.

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **affiliate_sales_graph**
> affiliate_sales_graph (days:  detachable INTEGER_32 ): detachable STATUS_MONTHLY_BREAKDOWN


Get Affiliate Sales Graph Data

Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **days** | **INTEGER_32**| Number of days of sales history to include in the graph data. Determines the time window for the returned data points. | [optional] [default to null]

### Return type

[**STATUS_MONTHLY_BREAKDOWN**](StatusMonthlyBreakdown.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **affiliate_sales_report**
> affiliate_sales_report : detachable TEXT_RESPONSE


Get Affiliate Sales Report

Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.


### Parameters
This endpoint does not need any parameter.

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **affiliate_traffic_graph**
> affiliate_traffic_graph (days:  detachable INTEGER_32 ): detachable MONTHLY_COUNTS


Get Affiliate Traffic Graph Data

Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **days** | **INTEGER_32**| Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. | [optional] [default to null]

### Return type

[**MONTHLY_COUNTS**](MonthlyCounts.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **affiliate_web_traffic**
> affiliate_web_traffic : detachable LIST [AFFILIATE_TRAFFIC_ROW]


List Affiliate Web Traffic Entries

Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.


### Parameters
This endpoint does not need any parameter.

### Return type

[**LIST [AFFILIATE_TRAFFIC_ROW]**](AffiliateTrafficRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **billing_cart**
> billing_cart : detachable ANY


Get Shopping Cart Contents

Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.


### Parameters
This endpoint does not need any parameter.

### Return type

[**ANY**](ANY.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **billing_credit_card_verify**
> billing_credit_card_verify (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Get Credit Card Verification Requirements

Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **billing_invoice**
> billing_invoice (id: INTEGER_32 ): detachable BILLING_INVOICE_DETAIL


Get Invoice Details

Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses. | [default to null]

### Return type

[**BILLING_INVOICE_DETAIL**](BillingInvoiceDetail.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **billing_invoices**
> billing_invoices : detachable BILLING_INVOICE_LIST


List Account Invoices

Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.


### Parameters
This endpoint does not need any parameter.

### Return type

[**BILLING_INVOICE_LIST**](BillingInvoiceList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **billing_pre_pays**
> billing_pre_pays : detachable ANY


List Prepay Balances

Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.


### Parameters
This endpoint does not need any parameter.

### Return type

[**ANY**](ANY.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_account_credit_card**
> delete_account_credit_card (id: STRING_32 ): detachable STRING_32


Remove Credit Card

Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | [default to null]

### Return type

[**STRING_32**](STRING_32.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_billing_credit_card**
> delete_billing_credit_card (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Delete Credit Card

Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_billing_invoice**
> delete_billing_invoice (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Delete Invoice

Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The invoice ID to delete. Only unpaid invoices can be deleted. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_billing_prepay**
> delete_billing_prepay (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Delete Prepay Balance

Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The prepay balance ID to delete. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **initiate_payment**
> initiate_payment (method: STRING_32 ; invoices: STRING_32 ): detachable INITIATE_PAYMENT_200_RESPONSE


Initiate Payment

Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **method** | **STRING_32**| The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;. | [default to null]
 **invoices** | **STRING_32**| A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;. | [default to null]

### Return type

[**INITIATE_PAYMENT_200_RESPONSE**](initiatePayment_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **invoices**
> invoices (search_string:  detachable STRING_32 ; skip:  detachable INTEGER_32 ; limit:  detachable INTEGER_32 ): detachable LIST [INVOICE]


Get Invoices

Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **search_string** | **STRING_32**| pass an optional search string for looking up inventory | [optional] [default to null]
 **skip** | **INTEGER_32**| number of records to skip for pagination | [optional] [default to null]
 **limit** | **INTEGER_32**| maximum number of records to return | [optional] [default to null]

### Return type

[**LIST [INVOICE]**](Invoice.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_billing_credit_card_verify**
> post_billing_credit_card_verify (id: INTEGER_32 ; billing_verify_cc_request: BILLING_VERIFY_CC_REQUEST ): detachable SUCCESS_TEXT_RESPONSE


Submit Credit Card Verification

Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | [default to null]
 **billing_verify_cc_request** | [**BILLING_VERIFY_CC_REQUEST**](BILLING_VERIFY_CC_REQUEST.md)|  | 

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_account_credit_card**
> update_account_credit_card (id: INTEGER_32 ): detachable STRING_32


Update Credit Card

Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | [default to null]

### Return type

[**STRING_32**](STRING_32.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_affiliate_dock_setup**
> update_affiliate_dock_setup (affiliate_dock_title:  detachable STRING_32 ; affiliate_dock_description:  detachable STRING_32 ; referrer_coupon:  detachable STRING_32 ): detachable TEXT_RESPONSE


Configure Affiliate Dock Settings

Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliate_dock_title** | **STRING_32**|  | [optional] [default to null]
 **affiliate_dock_description** | **STRING_32**|  | [optional] [default to null]
 **referrer_coupon** | **STRING_32**|  | [optional] [default to null]

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_affiliate_landing_page**
> update_affiliate_landing_page (affiliate_dock_title:  detachable STRING_32 ; affiliate_dock_description:  detachable STRING_32 ; referrer_coupon:  detachable STRING_32 ): detachable TEXT_RESPONSE


Configure Affiliate Landing Page

Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliate_dock_title** | **STRING_32**|  | [optional] [default to null]
 **affiliate_dock_description** | **STRING_32**|  | [optional] [default to null]
 **referrer_coupon** | **STRING_32**|  | [optional] [default to null]

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_affiliate_payment_setup**
> update_affiliate_payment_setup (affiliate_paypal:  detachable STRING_32 ; affiliate_payment_method:  detachable STRING_32 ): detachable TEXT_RESPONSE


Configure Affiliate Payout Preferences

Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliate_paypal** | **STRING_32**|  | [optional] [default to null]
 **affiliate_payment_method** | **STRING_32**|  | [optional] [default to null]

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_billing_credit_card**
> update_billing_credit_card (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Update Credit Card Details

Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_billing_payment_method**
> update_billing_payment_method (billing_payment_method_request: BILLING_PAYMENT_METHOD_REQUEST ): detachable SUCCESS_TEXT_RESPONSE


Update Default Payment Method

Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **billing_payment_method_request** | [**BILLING_PAYMENT_METHOD_REQUEST**](BILLING_PAYMENT_METHOD_REQUEST.md)|  | 

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

