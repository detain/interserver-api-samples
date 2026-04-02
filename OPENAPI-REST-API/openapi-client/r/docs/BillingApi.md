# BillingApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddAccountCreditCard**](BillingApi.md#AddAccountCreditCard) | **POST** /account/creditcards | Add Credit Card to Account
[**AddBillingCreditCard**](BillingApi.md#AddBillingCreditCard) | **POST** /billing/creditcards | Add Credit Card for Billing
[**AddBillingPrepay**](BillingApi.md#AddBillingPrepay) | **POST** /billing/prepays | Create Prepay Deposit
[**DeleteAccountCreditCard**](BillingApi.md#DeleteAccountCreditCard) | **DELETE** /account/creditcards/{id} | Remove Credit Card
[**DeleteBillingCreditCard**](BillingApi.md#DeleteBillingCreditCard) | **DELETE** /billing/creditcards/{id} | Delete Credit Card
[**DeleteBillingInvoice**](BillingApi.md#DeleteBillingInvoice) | **DELETE** /billing/invoices/{id} | Delete Invoice
[**DeleteBillingPrepay**](BillingApi.md#DeleteBillingPrepay) | **DELETE** /billing/prepays/{id} | Delete Prepay Balance
[**GetAffiliateBanners**](BillingApi.md#GetAffiliateBanners) | **GET** /affiliate/banners | List Affiliate Banner Assets
[**GetAffiliateRichReport**](BillingApi.md#GetAffiliateRichReport) | **GET** /affiliate/rich_report | Get Affiliate Performance Report
[**GetAffiliateSalesGraph**](BillingApi.md#GetAffiliateSalesGraph) | **GET** /affiliate/sales_graph | Get Affiliate Sales Graph Data
[**GetAffiliateSalesReport**](BillingApi.md#GetAffiliateSalesReport) | **GET** /affiliate/sales_report | Get Affiliate Sales Report
[**GetAffiliateTrafficGraph**](BillingApi.md#GetAffiliateTrafficGraph) | **GET** /affiliate/traffic_graph | Get Affiliate Traffic Graph Data
[**GetAffiliateWebTraffic**](BillingApi.md#GetAffiliateWebTraffic) | **GET** /affiliate/web_traffic | List Affiliate Web Traffic Entries
[**GetBillingCart**](BillingApi.md#GetBillingCart) | **GET** /billing/cart | Get Shopping Cart Contents
[**GetBillingCreditCardVerify**](BillingApi.md#GetBillingCreditCardVerify) | **GET** /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements
[**GetBillingInvoice**](BillingApi.md#GetBillingInvoice) | **GET** /billing/invoices/{id} | Get Invoice Details
[**GetBillingInvoices**](BillingApi.md#GetBillingInvoices) | **GET** /billing/invoices | List Account Invoices
[**GetBillingPrePays**](BillingApi.md#GetBillingPrePays) | **GET** /billing/prepays | List Prepay Balances
[**GetInvoices**](BillingApi.md#GetInvoices) | **GET** /invoices | Get Invoices
[**InitiatePayment**](BillingApi.md#InitiatePayment) | **GET** /pay/{method}/{invoices} | Initiate Payment
[**PostBillingCreditCardVerify**](BillingApi.md#PostBillingCreditCardVerify) | **POST** /billing/creditcards/{id}/verify | Submit Credit Card Verification
[**UpdateAccountCreditCard**](BillingApi.md#UpdateAccountCreditCard) | **POST** /account/creditcards/{id} | Update Credit Card
[**UpdateAffiliateDockSetup**](BillingApi.md#UpdateAffiliateDockSetup) | **POST** /affiliate/dock_setup | Configure Affiliate Dock Settings
[**UpdateAffiliateLandingPage**](BillingApi.md#UpdateAffiliateLandingPage) | **POST** /affiliate/landing_pg | Configure Affiliate Landing Page
[**UpdateAffiliatePaymentSetup**](BillingApi.md#UpdateAffiliatePaymentSetup) | **POST** /affiliate/payment_setup | Configure Affiliate Payout Preferences
[**UpdateBillingCreditCard**](BillingApi.md#UpdateBillingCreditCard) | **POST** /billing/creditcards/{id} | Update Credit Card Details
[**UpdateBillingPaymentMethod**](BillingApi.md#UpdateBillingPaymentMethod) | **POST** /billing/payment_method | Update Default Payment Method


# **AddAccountCreditCard**
> SuccessTextResponse AddAccountCreditCard(name = var.name, address = var.address, city = var.city, state = var.state, country = var.country, zip = var.zip, cc = var.cc, cc_exp = var.cc_exp, cc_ccv2 = var.cc_ccv2)

Add Credit Card to Account

Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.

### Example
```R
library(openapi)

# Add Credit Card to Account
#
# prepare function argument(s)
var_name <- "name_example" # character |  (Optional)
var_address <- "address_example" # character |  (Optional)
var_city <- "city_example" # character |  (Optional)
var_state <- "state_example" # character |  (Optional)
var_country <- "country_example" # character |  (Optional)
var_zip <- "zip_example" # character |  (Optional)
var_cc <- "cc_example" # character |  (Optional)
var_cc_exp <- "cc_exp_example" # character |  (Optional)
var_cc_ccv2 <- "cc_ccv2_example" # character |  (Optional)

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$AddAccountCreditCard(name = var_name, address = var_address, city = var_city, state = var_state, country = var_country, zip = var_zip, cc = var_cc, cc_exp = var_cc_exp, cc_ccv2 = var_cc_ccv2data_file = "result.txt")
result <- api_instance$AddAccountCreditCard(name = var_name, address = var_address, city = var_city, state = var_state, country = var_country, zip = var_zip, cc = var_cc, cc_exp = var_cc_exp, cc_ccv2 = var_cc_ccv2)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **character**|  | [optional] 
 **address** | **character**|  | [optional] 
 **city** | **character**|  | [optional] 
 **state** | **character**|  | [optional] 
 **country** | **character**|  | [optional] 
 **zip** | **character**|  | [optional] 
 **cc** | **character**|  | [optional] 
 **cc_exp** | **character**|  | [optional] 
 **cc_ccv2** | **character**|  | [optional] 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **AddBillingCreditCard**
> SuccessTextResponse AddBillingCreditCard(billing_add_cc_request)

Add Credit Card for Billing

Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.

### Example
```R
library(openapi)

# Add Credit Card for Billing
#
# prepare function argument(s)
var_billing_add_cc_request <- BillingAddCcRequest$new("name_example", "address_example", "city_example", "state_example", "country_example", "zip_example", "cc_example", "cc_exp_example", "cc_ccv2_example") # BillingAddCcRequest | 

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$AddBillingCreditCard(var_billing_add_cc_requestdata_file = "result.txt")
result <- api_instance$AddBillingCreditCard(var_billing_add_cc_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **billing_add_cc_request** | [**BillingAddCcRequest**](BillingAddCcRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **AddBillingPrepay**
> SuccessTextResponse AddBillingPrepay(billing_prepay_request)

Create Prepay Deposit

Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.

### Example
```R
library(openapi)

# Create Prepay Deposit
#
# prepare function argument(s)
var_billing_prepay_request <- BillingPrepayRequest$new("module_example", 123, "automatic_use_example") # BillingPrepayRequest | 

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$AddBillingPrepay(var_billing_prepay_requestdata_file = "result.txt")
result <- api_instance$AddBillingPrepay(var_billing_prepay_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **billing_prepay_request** | [**BillingPrepayRequest**](BillingPrepayRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **DeleteAccountCreditCard**
> character DeleteAccountCreditCard(id)

Remove Credit Card

Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.

### Example
```R
library(openapi)

# Remove Credit Card
#
# prepare function argument(s)
var_id <- "id_example" # character | The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DeleteAccountCreditCard(var_iddata_file = "result.txt")
result <- api_instance$DeleteAccountCreditCard(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | 

### Return type

**character**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Simple string response |  -  |
| **401** | Unauthorized |  -  |

# **DeleteBillingCreditCard**
> SuccessTextResponse DeleteBillingCreditCard(id)

Delete Credit Card

Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.

### Example
```R
library(openapi)

# Delete Credit Card
#
# prepare function argument(s)
var_id <- 56 # integer | The credit card ID to remove. Use IDs from `GET /billing/creditcards`.

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DeleteBillingCreditCard(var_iddata_file = "result.txt")
result <- api_instance$DeleteBillingCreditCard(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **DeleteBillingInvoice**
> SuccessTextResponse DeleteBillingInvoice(id)

Delete Invoice

Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.

### Example
```R
library(openapi)

# Delete Invoice
#
# prepare function argument(s)
var_id <- 56 # integer | The invoice ID to delete. Only unpaid invoices can be deleted.

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DeleteBillingInvoice(var_iddata_file = "result.txt")
result <- api_instance$DeleteBillingInvoice(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The invoice ID to delete. Only unpaid invoices can be deleted. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **DeleteBillingPrepay**
> SuccessTextResponse DeleteBillingPrepay(id)

Delete Prepay Balance

Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.

### Example
```R
library(openapi)

# Delete Prepay Balance
#
# prepare function argument(s)
var_id <- 56 # integer | The prepay balance ID to delete.

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DeleteBillingPrepay(var_iddata_file = "result.txt")
result <- api_instance$DeleteBillingPrepay(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The prepay balance ID to delete. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **GetAffiliateBanners**
> array[AffiliateBannerRow] GetAffiliateBanners()

List Affiliate Banner Assets

Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.

### Example
```R
library(openapi)

# List Affiliate Banner Assets
#

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetAffiliateBanners(data_file = "result.txt")
result <- api_instance$GetAffiliateBanners()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**array[AffiliateBannerRow]**](AffiliateBannerRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Affiliate Banners Array |  -  |
| **401** | Unauthorized |  -  |

# **GetAffiliateRichReport**
> TextResponse GetAffiliateRichReport()

Get Affiliate Performance Report

Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.

### Example
```R
library(openapi)

# Get Affiliate Performance Report
#

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetAffiliateRichReport(data_file = "result.txt")
result <- api_instance$GetAffiliateRichReport()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

# **GetAffiliateSalesGraph**
> StatusMonthlyBreakdown GetAffiliateSalesGraph(days = var.days)

Get Affiliate Sales Graph Data

Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.

### Example
```R
library(openapi)

# Get Affiliate Sales Graph Data
#
# prepare function argument(s)
var_days <- 56 # integer | Number of days of sales history to include in the graph data. Determines the time window for the returned data points. (Optional)

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetAffiliateSalesGraph(days = var_daysdata_file = "result.txt")
result <- api_instance$GetAffiliateSalesGraph(days = var_days)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **days** | **integer**| Number of days of sales history to include in the graph data. Determines the time window for the returned data points. | [optional] 

### Return type

[**StatusMonthlyBreakdown**](StatusMonthlyBreakdown.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Affiliate sales graph data broken down by time period. |  -  |
| **401** | Unauthorized |  -  |

# **GetAffiliateSalesReport**
> TextResponse GetAffiliateSalesReport()

Get Affiliate Sales Report

Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.

### Example
```R
library(openapi)

# Get Affiliate Sales Report
#

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetAffiliateSalesReport(data_file = "result.txt")
result <- api_instance$GetAffiliateSalesReport()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

# **GetAffiliateTrafficGraph**
> MonthlyCounts GetAffiliateTrafficGraph(days = var.days)

Get Affiliate Traffic Graph Data

Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.

### Example
```R
library(openapi)

# Get Affiliate Traffic Graph Data
#
# prepare function argument(s)
var_days <- 56 # integer | Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. (Optional)

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetAffiliateTrafficGraph(days = var_daysdata_file = "result.txt")
result <- api_instance$GetAffiliateTrafficGraph(days = var_days)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **days** | **integer**| Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. | [optional] 

### Return type

[**MonthlyCounts**](MonthlyCounts.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Affiliate traffic graph data broken down by time period. |  -  |
| **401** | Unauthorized |  -  |

# **GetAffiliateWebTraffic**
> array[AffiliateTrafficRow] GetAffiliateWebTraffic()

List Affiliate Web Traffic Entries

Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.

### Example
```R
library(openapi)

# List Affiliate Web Traffic Entries
#

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetAffiliateWebTraffic(data_file = "result.txt")
result <- api_instance$GetAffiliateWebTraffic()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**array[AffiliateTrafficRow]**](AffiliateTrafficRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The recent affiliate web traffic |  -  |
| **401** | Unauthorized |  -  |

# **GetBillingCart**
> object GetBillingCart()

Get Shopping Cart Contents

Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.

### Example
```R
library(openapi)

# Get Shopping Cart Contents
#

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetBillingCart(data_file = "result.txt")
result <- api_instance$GetBillingCart()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

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
| **200** | Current shopping cart contents and available payment methods. |  -  |
| **401** | Unauthorized |  -  |

# **GetBillingCreditCardVerify**
> SuccessTextResponse GetBillingCreditCardVerify(id)

Get Credit Card Verification Requirements

Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.

### Example
```R
library(openapi)

# Get Credit Card Verification Requirements
#
# prepare function argument(s)
var_id <- 56 # integer | The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetBillingCreditCardVerify(var_iddata_file = "result.txt")
result <- api_instance$GetBillingCreditCardVerify(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **GetBillingInvoice**
> BillingInvoiceDetail GetBillingInvoice(id)

Get Invoice Details

Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.

### Example
```R
library(openapi)

# Get Invoice Details
#
# prepare function argument(s)
var_id <- 56 # integer | The invoice ID. Use IDs from `GET /billing/invoices` or from order responses.

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetBillingInvoice(var_iddata_file = "result.txt")
result <- api_instance$GetBillingInvoice(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses. | 

### Return type

[**BillingInvoiceDetail**](BillingInvoiceDetail.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Detailed invoice payload for the requested invoice. |  -  |
| **401** | Unauthorized |  -  |

# **GetBillingInvoices**
> BillingInvoiceList GetBillingInvoices()

List Account Invoices

Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.

### Example
```R
library(openapi)

# List Account Invoices
#

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetBillingInvoices(data_file = "result.txt")
result <- api_instance$GetBillingInvoices()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BillingInvoiceList**](BillingInvoiceList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Invoice listing and summary for the account. |  -  |
| **401** | Unauthorized |  -  |

# **GetBillingPrePays**
> object GetBillingPrePays()

List Prepay Balances

Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.

### Example
```R
library(openapi)

# List Prepay Balances
#

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetBillingPrePays(data_file = "result.txt")
result <- api_instance$GetBillingPrePays()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

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
| **200** | Prepay balances and metadata. |  -  |
| **401** | Unauthorized |  -  |

# **GetInvoices**
> array[Invoice] GetInvoices(search_string = var.search_string, skip = var.skip, limit = var.limit)

Get Invoices

Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.

### Example
```R
library(openapi)

# Get Invoices
#
# prepare function argument(s)
var_search_string <- "search_string_example" # character | pass an optional search string for looking up inventory (Optional)
var_skip <- 56 # integer | number of records to skip for pagination (Optional)
var_limit <- 56 # integer | maximum number of records to return (Optional)

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetInvoices(search_string = var_search_string, skip = var_skip, limit = var_limitdata_file = "result.txt")
result <- api_instance$GetInvoices(search_string = var_search_string, skip = var_skip, limit = var_limit)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **search_string** | **character**| pass an optional search string for looking up inventory | [optional] 
 **skip** | **integer**| number of records to skip for pagination | [optional] 
 **limit** | **integer**| maximum number of records to return | [optional] 

### Return type

[**array[Invoice]**](Invoice.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | search results matching criteria |  -  |
| **400** | bad input parameter |  -  |
| **401** | Unauthorized |  -  |
| **404** | Unauthorized |  -  |

# **InitiatePayment**
> InitiatePayment200Response InitiatePayment(method, invoices)

Initiate Payment

Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.

### Example
```R
library(openapi)

# Initiate Payment
#
# prepare function argument(s)
var_method <- "method_example" # character | The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`.
var_invoices <- "invoices_example" # character | A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`.

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$InitiatePayment(var_method, var_invoicesdata_file = "result.txt")
result <- api_instance$InitiatePayment(var_method, var_invoices)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **method** | Enum [cc, paypal, prepay, payssion, payu, ccavenue, cashfree, coinbase, btcpay] | The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;. | 
 **invoices** | **character**| A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;. | 

### Return type

[**InitiatePayment200Response**](initiatePayment_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Payment initiation response with redirect or form data. |  -  |
| **401** | Unauthorized |  -  |

# **PostBillingCreditCardVerify**
> SuccessTextResponse PostBillingCreditCardVerify(id, billing_verify_cc_request)

Submit Credit Card Verification

Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.

### Example
```R
library(openapi)

# Submit Credit Card Verification
#
# prepare function argument(s)
var_id <- 56 # integer | The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
var_billing_verify_cc_request <- BillingVerifyCcRequest$new(123, "cc_ccv2_example", "cc_amount1_example", "cc_amount2_example", "terms_example") # BillingVerifyCcRequest | 

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostBillingCreditCardVerify(var_id, var_billing_verify_cc_requestdata_file = "result.txt")
result <- api_instance$PostBillingCreditCardVerify(var_id, var_billing_verify_cc_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | 
 **billing_verify_cc_request** | [**BillingVerifyCcRequest**](BillingVerifyCcRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **UpdateAccountCreditCard**
> character UpdateAccountCreditCard(id)

Update Credit Card

Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.

### Example
```R
library(openapi)

# Update Credit Card
#
# prepare function argument(s)
var_id <- 56 # integer | The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateAccountCreditCard(var_iddata_file = "result.txt")
result <- api_instance$UpdateAccountCreditCard(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | 

### Return type

**character**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Simple string response |  -  |
| **401** | Unauthorized |  -  |

# **UpdateAffiliateDockSetup**
> TextResponse UpdateAffiliateDockSetup(affiliate_dock_title = var.affiliate_dock_title, affiliate_dock_description = var.affiliate_dock_description, referrer_coupon = var.referrer_coupon)

Configure Affiliate Dock Settings

Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.

### Example
```R
library(openapi)

# Configure Affiliate Dock Settings
#
# prepare function argument(s)
var_affiliate_dock_title <- "affiliate_dock_title_example" # character |  (Optional)
var_affiliate_dock_description <- "affiliate_dock_description_example" # character |  (Optional)
var_referrer_coupon <- "referrer_coupon_example" # character |  (Optional)

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateAffiliateDockSetup(affiliate_dock_title = var_affiliate_dock_title, affiliate_dock_description = var_affiliate_dock_description, referrer_coupon = var_referrer_coupondata_file = "result.txt")
result <- api_instance$UpdateAffiliateDockSetup(affiliate_dock_title = var_affiliate_dock_title, affiliate_dock_description = var_affiliate_dock_description, referrer_coupon = var_referrer_coupon)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliate_dock_title** | **character**|  | [optional] 
 **affiliate_dock_description** | **character**|  | [optional] 
 **referrer_coupon** | **character**|  | [optional] 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

# **UpdateAffiliateLandingPage**
> TextResponse UpdateAffiliateLandingPage(affiliate_dock_title = var.affiliate_dock_title, affiliate_dock_description = var.affiliate_dock_description, referrer_coupon = var.referrer_coupon)

Configure Affiliate Landing Page

Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.

### Example
```R
library(openapi)

# Configure Affiliate Landing Page
#
# prepare function argument(s)
var_affiliate_dock_title <- "affiliate_dock_title_example" # character |  (Optional)
var_affiliate_dock_description <- "affiliate_dock_description_example" # character |  (Optional)
var_referrer_coupon <- "referrer_coupon_example" # character |  (Optional)

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateAffiliateLandingPage(affiliate_dock_title = var_affiliate_dock_title, affiliate_dock_description = var_affiliate_dock_description, referrer_coupon = var_referrer_coupondata_file = "result.txt")
result <- api_instance$UpdateAffiliateLandingPage(affiliate_dock_title = var_affiliate_dock_title, affiliate_dock_description = var_affiliate_dock_description, referrer_coupon = var_referrer_coupon)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliate_dock_title** | **character**|  | [optional] 
 **affiliate_dock_description** | **character**|  | [optional] 
 **referrer_coupon** | **character**|  | [optional] 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

# **UpdateAffiliatePaymentSetup**
> TextResponse UpdateAffiliatePaymentSetup(affiliate_paypal = var.affiliate_paypal, affiliate_payment_method = var.affiliate_payment_method)

Configure Affiliate Payout Preferences

Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.

### Example
```R
library(openapi)

# Configure Affiliate Payout Preferences
#
# prepare function argument(s)
var_affiliate_paypal <- "affiliate_paypal_example" # character |  (Optional)
var_affiliate_payment_method <- "affiliate_payment_method_example" # character |  (Optional)

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateAffiliatePaymentSetup(affiliate_paypal = var_affiliate_paypal, affiliate_payment_method = var_affiliate_payment_methoddata_file = "result.txt")
result <- api_instance$UpdateAffiliatePaymentSetup(affiliate_paypal = var_affiliate_paypal, affiliate_payment_method = var_affiliate_payment_method)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliate_paypal** | **character**|  | [optional] 
 **affiliate_payment_method** | **character**|  | [optional] 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

# **UpdateBillingCreditCard**
> SuccessTextResponse UpdateBillingCreditCard(id)

Update Credit Card Details

Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.

### Example
```R
library(openapi)

# Update Credit Card Details
#
# prepare function argument(s)
var_id <- 56 # integer | The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`.

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateBillingCreditCard(var_iddata_file = "result.txt")
result <- api_instance$UpdateBillingCreditCard(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **UpdateBillingPaymentMethod**
> SuccessTextResponse UpdateBillingPaymentMethod(billing_payment_method_request)

Update Default Payment Method

Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.

### Example
```R
library(openapi)

# Update Default Payment Method
#
# prepare function argument(s)
var_billing_payment_method_request <- BillingPaymentMethodRequest$new("payment_method_example", "cc_auto_example") # BillingPaymentMethodRequest | 

api_instance <- BillingApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateBillingPaymentMethod(var_billing_payment_method_requestdata_file = "result.txt")
result <- api_instance$UpdateBillingPaymentMethod(var_billing_payment_method_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **billing_payment_method_request** | [**BillingPaymentMethodRequest**](BillingPaymentMethodRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

