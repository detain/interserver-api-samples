# BillingAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BillingAPI_addAccountCreditCard**](BillingAPI.md#BillingAPI_addAccountCreditCard) | **POST** /account/creditcards | Add Credit Card to Account
[**BillingAPI_addBillingCreditCard**](BillingAPI.md#BillingAPI_addBillingCreditCard) | **POST** /billing/creditcards | Add Credit Card for Billing
[**BillingAPI_addBillingPrepay**](BillingAPI.md#BillingAPI_addBillingPrepay) | **POST** /billing/prepays | Create Prepay Deposit
[**BillingAPI_deleteAccountCreditCard**](BillingAPI.md#BillingAPI_deleteAccountCreditCard) | **DELETE** /account/creditcards/{id} | Remove Credit Card
[**BillingAPI_deleteBillingCreditCard**](BillingAPI.md#BillingAPI_deleteBillingCreditCard) | **DELETE** /billing/creditcards/{id} | Delete Credit Card
[**BillingAPI_deleteBillingInvoice**](BillingAPI.md#BillingAPI_deleteBillingInvoice) | **DELETE** /billing/invoices/{id} | Delete Invoice
[**BillingAPI_deleteBillingPrepay**](BillingAPI.md#BillingAPI_deleteBillingPrepay) | **DELETE** /billing/prepays/{id} | Delete Prepay Balance
[**BillingAPI_getAffiliateBanners**](BillingAPI.md#BillingAPI_getAffiliateBanners) | **GET** /affiliate/banners | List Affiliate Banner Assets
[**BillingAPI_getAffiliateRichReport**](BillingAPI.md#BillingAPI_getAffiliateRichReport) | **GET** /affiliate/rich_report | Get Affiliate Performance Report
[**BillingAPI_getAffiliateSalesGraph**](BillingAPI.md#BillingAPI_getAffiliateSalesGraph) | **GET** /affiliate/sales_graph | Get Affiliate Sales Graph Data
[**BillingAPI_getAffiliateSalesReport**](BillingAPI.md#BillingAPI_getAffiliateSalesReport) | **GET** /affiliate/sales_report | Get Affiliate Sales Report
[**BillingAPI_getAffiliateTrafficGraph**](BillingAPI.md#BillingAPI_getAffiliateTrafficGraph) | **GET** /affiliate/traffic_graph | Get Affiliate Traffic Graph Data
[**BillingAPI_getAffiliateWebTraffic**](BillingAPI.md#BillingAPI_getAffiliateWebTraffic) | **GET** /affiliate/web_traffic | List Affiliate Web Traffic Entries
[**BillingAPI_getBillingCart**](BillingAPI.md#BillingAPI_getBillingCart) | **GET** /billing/cart | Get Shopping Cart Contents
[**BillingAPI_getBillingCreditCardVerify**](BillingAPI.md#BillingAPI_getBillingCreditCardVerify) | **GET** /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements
[**BillingAPI_getBillingInvoice**](BillingAPI.md#BillingAPI_getBillingInvoice) | **GET** /billing/invoices/{id} | Get Invoice Details
[**BillingAPI_getBillingInvoices**](BillingAPI.md#BillingAPI_getBillingInvoices) | **GET** /billing/invoices | List Account Invoices
[**BillingAPI_getBillingPrePays**](BillingAPI.md#BillingAPI_getBillingPrePays) | **GET** /billing/prepays | List Prepay Balances
[**BillingAPI_getInvoices**](BillingAPI.md#BillingAPI_getInvoices) | **GET** /invoices | Get Invoices
[**BillingAPI_initiatePayment**](BillingAPI.md#BillingAPI_initiatePayment) | **GET** /pay/{method}/{invoices} | Initiate Payment
[**BillingAPI_postBillingCreditCardVerify**](BillingAPI.md#BillingAPI_postBillingCreditCardVerify) | **POST** /billing/creditcards/{id}/verify | Submit Credit Card Verification
[**BillingAPI_updateAccountCreditCard**](BillingAPI.md#BillingAPI_updateAccountCreditCard) | **POST** /account/creditcards/{id} | Update Credit Card
[**BillingAPI_updateAffiliateDockSetup**](BillingAPI.md#BillingAPI_updateAffiliateDockSetup) | **POST** /affiliate/dock_setup | Configure Affiliate Dock Settings
[**BillingAPI_updateAffiliateLandingPage**](BillingAPI.md#BillingAPI_updateAffiliateLandingPage) | **POST** /affiliate/landing_pg | Configure Affiliate Landing Page
[**BillingAPI_updateAffiliatePaymentSetup**](BillingAPI.md#BillingAPI_updateAffiliatePaymentSetup) | **POST** /affiliate/payment_setup | Configure Affiliate Payout Preferences
[**BillingAPI_updateBillingCreditCard**](BillingAPI.md#BillingAPI_updateBillingCreditCard) | **POST** /billing/creditcards/{id} | Update Credit Card Details
[**BillingAPI_updateBillingPaymentMethod**](BillingAPI.md#BillingAPI_updateBillingPaymentMethod) | **POST** /billing/payment_method | Update Default Payment Method


# **BillingAPI_addAccountCreditCard**
```c
// Add Credit Card to Account
//
// Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
//
success_text_response_t* BillingAPI_addAccountCreditCard(apiClient_t *apiClient, char *name, char *address, char *city, char *state, char *country, char *zip, char *cc, char *cc_exp, char *cc_ccv2);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** |  | [optional] 
**address** | **char \*** |  | [optional] 
**city** | **char \*** |  | [optional] 
**state** | **char \*** |  | [optional] 
**country** | **char \*** |  | [optional] 
**zip** | **char \*** |  | [optional] 
**cc** | **char \*** |  | [optional] 
**cc_exp** | **char \*** |  | [optional] 
**cc_ccv2** | **char \*** |  | [optional] 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_addBillingCreditCard**
```c
// Add Credit Card for Billing
//
// Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
//
success_text_response_t* BillingAPI_addBillingCreditCard(apiClient_t *apiClient, billing_add_cc_request_t *billing_add_cc_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**billing_add_cc_request** | **[billing_add_cc_request_t](billing_add_cc_request.md) \*** |  | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_addBillingPrepay**
```c
// Create Prepay Deposit
//
// Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
//
success_text_response_t* BillingAPI_addBillingPrepay(apiClient_t *apiClient, billing_prepay_request_t *billing_prepay_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**billing_prepay_request** | **[billing_prepay_request_t](billing_prepay_request.md) \*** |  | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_deleteAccountCreditCard**
```c
// Remove Credit Card
//
// Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
//
char* BillingAPI_deleteAccountCreditCard(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | 

### Return type

char*



### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_deleteBillingCreditCard**
```c
// Delete Credit Card
//
// Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
//
success_text_response_t* BillingAPI_deleteBillingCreditCard(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_deleteBillingInvoice**
```c
// Delete Invoice
//
// Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
//
success_text_response_t* BillingAPI_deleteBillingInvoice(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The invoice ID to delete. Only unpaid invoices can be deleted. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_deleteBillingPrepay**
```c
// Delete Prepay Balance
//
// Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
//
success_text_response_t* BillingAPI_deleteBillingPrepay(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The prepay balance ID to delete. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_getAffiliateBanners**
```c
// List Affiliate Banner Assets
//
// Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
//
list_t* BillingAPI_getAffiliateBanners(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](affiliate_banner_row.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_getAffiliateRichReport**
```c
// Get Affiliate Performance Report
//
// Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
//
text_response_t* BillingAPI_getAffiliateRichReport(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_getAffiliateSalesGraph**
```c
// Get Affiliate Sales Graph Data
//
// Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
//
status_monthly_breakdown_t* BillingAPI_getAffiliateSalesGraph(apiClient_t *apiClient, int *days);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**days** | **int \*** | Number of days of sales history to include in the graph data. Determines the time window for the returned data points. | [optional] 

### Return type

[status_monthly_breakdown_t](status_monthly_breakdown.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_getAffiliateSalesReport**
```c
// Get Affiliate Sales Report
//
// Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
//
text_response_t* BillingAPI_getAffiliateSalesReport(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_getAffiliateTrafficGraph**
```c
// Get Affiliate Traffic Graph Data
//
// Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
//
monthly_counts_t* BillingAPI_getAffiliateTrafficGraph(apiClient_t *apiClient, int *days);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**days** | **int \*** | Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. | [optional] 

### Return type

[monthly_counts_t](monthly_counts.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_getAffiliateWebTraffic**
```c
// List Affiliate Web Traffic Entries
//
// Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
//
list_t* BillingAPI_getAffiliateWebTraffic(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](affiliate_traffic_row.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_getBillingCart**
```c
// Get Shopping Cart Contents
//
// Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
//
object_t* BillingAPI_getBillingCart(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[object_t](object.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_getBillingCreditCardVerify**
```c
// Get Credit Card Verification Requirements
//
// Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
//
success_text_response_t* BillingAPI_getBillingCreditCardVerify(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_getBillingInvoice**
```c
// Get Invoice Details
//
// Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
//
billing_invoice_detail_t* BillingAPI_getBillingInvoice(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses. | 

### Return type

[billing_invoice_detail_t](billing_invoice_detail.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_getBillingInvoices**
```c
// List Account Invoices
//
// Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
//
billing_invoice_list_t* BillingAPI_getBillingInvoices(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[billing_invoice_list_t](billing_invoice_list.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_getBillingPrePays**
```c
// List Prepay Balances
//
// Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
//
object_t* BillingAPI_getBillingPrePays(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[object_t](object.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_getInvoices**
```c
// Get Invoices
//
// Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
//
list_t* BillingAPI_getInvoices(apiClient_t *apiClient, char *searchString, int *skip, int *limit);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**searchString** | **char \*** | pass an optional search string for looking up inventory | [optional] 
**skip** | **int \*** | number of records to skip for pagination | [optional] 
**limit** | **int \*** | maximum number of records to return | [optional] 

### Return type

[list_t](invoice.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_initiatePayment**
```c
// Initiate Payment
//
// Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
//
initiate_payment_200_response_t* BillingAPI_initiatePayment(apiClient_t *apiClient, interserver_management_api_initiatePayment_method_e method, char *invoices);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**method** | **interserver_management_api_initiatePayment_method_e** | The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;. | 
**invoices** | **char \*** | A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;. | 

### Return type

[initiate_payment_200_response_t](initiate_payment_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_postBillingCreditCardVerify**
```c
// Submit Credit Card Verification
//
// Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
//
success_text_response_t* BillingAPI_postBillingCreditCardVerify(apiClient_t *apiClient, int *id, billing_verify_cc_request_t *billing_verify_cc_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | 
**billing_verify_cc_request** | **[billing_verify_cc_request_t](billing_verify_cc_request.md) \*** |  | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_updateAccountCreditCard**
```c
// Update Credit Card
//
// Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
//
char* BillingAPI_updateAccountCreditCard(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | 

### Return type

char*



### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_updateAffiliateDockSetup**
```c
// Configure Affiliate Dock Settings
//
// Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
//
text_response_t* BillingAPI_updateAffiliateDockSetup(apiClient_t *apiClient, char *affiliate_dock_title, char *affiliate_dock_description, char *referrer_coupon);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**affiliate_dock_title** | **char \*** |  | [optional] 
**affiliate_dock_description** | **char \*** |  | [optional] 
**referrer_coupon** | **char \*** |  | [optional] 

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_updateAffiliateLandingPage**
```c
// Configure Affiliate Landing Page
//
// Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
//
text_response_t* BillingAPI_updateAffiliateLandingPage(apiClient_t *apiClient, char *affiliate_dock_title, char *affiliate_dock_description, char *referrer_coupon);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**affiliate_dock_title** | **char \*** |  | [optional] 
**affiliate_dock_description** | **char \*** |  | [optional] 
**referrer_coupon** | **char \*** |  | [optional] 

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_updateAffiliatePaymentSetup**
```c
// Configure Affiliate Payout Preferences
//
// Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
//
text_response_t* BillingAPI_updateAffiliatePaymentSetup(apiClient_t *apiClient, char *affiliate_paypal, char *affiliate_payment_method);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**affiliate_paypal** | **char \*** |  | [optional] 
**affiliate_payment_method** | **char \*** |  | [optional] 

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_updateBillingCreditCard**
```c
// Update Credit Card Details
//
// Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
//
success_text_response_t* BillingAPI_updateBillingCreditCard(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingAPI_updateBillingPaymentMethod**
```c
// Update Default Payment Method
//
// Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
//
success_text_response_t* BillingAPI_updateBillingPaymentMethod(apiClient_t *apiClient, billing_payment_method_request_t *billing_payment_method_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**billing_payment_method_request** | **[billing_payment_method_request_t](billing_payment_method_request.md) \*** |  | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

