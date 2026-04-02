# BillingApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
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


<a id="addAccountCreditCard"></a>
# **addAccountCreditCard**
> SuccessTextResponse addAccountCreditCard(name, address, city, state, country, zip, cc, ccExp, ccCcv2)

Add Credit Card to Account

Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val name : kotlin.String = name_example // kotlin.String | 
val address : kotlin.String = address_example // kotlin.String | 
val city : kotlin.String = city_example // kotlin.String | 
val state : kotlin.String = state_example // kotlin.String | 
val country : kotlin.String = country_example // kotlin.String | 
val zip : kotlin.String = zip_example // kotlin.String | 
val cc : kotlin.String = cc_example // kotlin.String | 
val ccExp : kotlin.String = ccExp_example // kotlin.String | 
val ccCcv2 : kotlin.String = ccCcv2_example // kotlin.String | 
try {
    val result : SuccessTextResponse = apiInstance.addAccountCreditCard(name, address, city, state, country, zip, cc, ccExp, ccCcv2)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#addAccountCreditCard")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#addAccountCreditCard")
    e.printStackTrace()
}
```

### Parameters
| **name** | **kotlin.String**|  | [optional] |
| **address** | **kotlin.String**|  | [optional] |
| **city** | **kotlin.String**|  | [optional] |
| **state** | **kotlin.String**|  | [optional] |
| **country** | **kotlin.String**|  | [optional] |
| **zip** | **kotlin.String**|  | [optional] |
| **cc** | **kotlin.String**|  | [optional] |
| **ccExp** | **kotlin.String**|  | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **ccCcv2** | **kotlin.String**|  | [optional] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="addBillingCreditCard"></a>
# **addBillingCreditCard**
> SuccessTextResponse addBillingCreditCard(billingAddCcRequest)

Add Credit Card for Billing

Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via &#x60;GET /billing/creditcards/{id}/verify&#x60; followed by &#x60;POST /billing/creditcards/{id}/verify&#x60; before the card can be used for payments.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val billingAddCcRequest : BillingAddCcRequest =  // BillingAddCcRequest | 
try {
    val result : SuccessTextResponse = apiInstance.addBillingCreditCard(billingAddCcRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#addBillingCreditCard")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#addBillingCreditCard")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **billingAddCcRequest** | [**BillingAddCcRequest**](BillingAddCcRequest.md)|  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="addBillingPrepay"></a>
# **addBillingPrepay**
> SuccessTextResponse addBillingPrepay(billingPrepayRequest)

Create Prepay Deposit

Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use &#x60;/billing/invoices/{id}&#x60; to retrieve the generated invoice details.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val billingPrepayRequest : BillingPrepayRequest =  // BillingPrepayRequest | 
try {
    val result : SuccessTextResponse = apiInstance.addBillingPrepay(billingPrepayRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#addBillingPrepay")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#addBillingPrepay")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **billingPrepayRequest** | [**BillingPrepayRequest**](BillingPrepayRequest.md)|  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="deleteAccountCreditCard"></a>
# **deleteAccountCreditCard**
> kotlin.String deleteAccountCreditCard(id)

Remove Credit Card

Removes a credit card from the account. If this is the default payment method, select a new default via &#x60;/billing/payment_method&#x60; afterward.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val id : kotlin.String = id_example // kotlin.String | The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.
try {
    val result : kotlin.String = apiInstance.deleteAccountCreditCard(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#deleteAccountCreditCard")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#deleteAccountCreditCard")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.String**| The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | |

### Return type

**kotlin.String**

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="deleteBillingCreditCard"></a>
# **deleteBillingCreditCard**
> SuccessTextResponse deleteBillingCreditCard(id)

Delete Credit Card

Removes the selected credit card from the account. Use &#x60;/billing/payment_method&#x60; to select a new default payment method after deleting a card.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val id : kotlin.Int = 56 // kotlin.Int | The credit card ID to remove. Use IDs from `GET /billing/creditcards`.
try {
    val result : SuccessTextResponse = apiInstance.deleteBillingCreditCard(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#deleteBillingCreditCard")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#deleteBillingCreditCard")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;. | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="deleteBillingInvoice"></a>
# **deleteBillingInvoice**
> SuccessTextResponse deleteBillingInvoice(id)

Delete Invoice

Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val id : kotlin.Int = 56 // kotlin.Int | The invoice ID to delete. Only unpaid invoices can be deleted.
try {
    val result : SuccessTextResponse = apiInstance.deleteBillingInvoice(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#deleteBillingInvoice")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#deleteBillingInvoice")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The invoice ID to delete. Only unpaid invoices can be deleted. | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="deleteBillingPrepay"></a>
# **deleteBillingPrepay**
> SuccessTextResponse deleteBillingPrepay(id)

Delete Prepay Balance

Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use &#x60;GET /billing/prepays&#x60; to list available prepay balances and their IDs.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val id : kotlin.Int = 56 // kotlin.Int | The prepay balance ID to delete.
try {
    val result : SuccessTextResponse = apiInstance.deleteBillingPrepay(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#deleteBillingPrepay")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#deleteBillingPrepay")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The prepay balance ID to delete. | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getAffiliateBanners"></a>
# **getAffiliateBanners**
> kotlin.collections.List&lt;AffiliateBannerRow&gt; getAffiliateBanners()

List Affiliate Banner Assets

Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
try {
    val result : kotlin.collections.List<AffiliateBannerRow> = apiInstance.getAffiliateBanners()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#getAffiliateBanners")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#getAffiliateBanners")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.collections.List&lt;AffiliateBannerRow&gt;**](AffiliateBannerRow.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getAffiliateRichReport"></a>
# **getAffiliateRichReport**
> TextResponse getAffiliateRichReport()

Get Affiliate Performance Report

Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
try {
    val result : TextResponse = apiInstance.getAffiliateRichReport()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#getAffiliateRichReport")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#getAffiliateRichReport")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**TextResponse**](TextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getAffiliateSalesGraph"></a>
# **getAffiliateSalesGraph**
> StatusMonthlyBreakdown getAffiliateSalesGraph(days)

Get Affiliate Sales Graph Data

Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val days : kotlin.Int = 56 // kotlin.Int | Number of days of sales history to include in the graph data. Determines the time window for the returned data points.
try {
    val result : StatusMonthlyBreakdown = apiInstance.getAffiliateSalesGraph(days)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#getAffiliateSalesGraph")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#getAffiliateSalesGraph")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **days** | **kotlin.Int**| Number of days of sales history to include in the graph data. Determines the time window for the returned data points. | [optional] |

### Return type

[**StatusMonthlyBreakdown**](StatusMonthlyBreakdown.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getAffiliateSalesReport"></a>
# **getAffiliateSalesReport**
> TextResponse getAffiliateSalesReport()

Get Affiliate Sales Report

Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
try {
    val result : TextResponse = apiInstance.getAffiliateSalesReport()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#getAffiliateSalesReport")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#getAffiliateSalesReport")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**TextResponse**](TextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getAffiliateTrafficGraph"></a>
# **getAffiliateTrafficGraph**
> MonthlyCounts getAffiliateTrafficGraph(days)

Get Affiliate Traffic Graph Data

Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val days : kotlin.Int = 56 // kotlin.Int | Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.
try {
    val result : MonthlyCounts = apiInstance.getAffiliateTrafficGraph(days)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#getAffiliateTrafficGraph")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#getAffiliateTrafficGraph")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **days** | **kotlin.Int**| Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. | [optional] |

### Return type

[**MonthlyCounts**](MonthlyCounts.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getAffiliateWebTraffic"></a>
# **getAffiliateWebTraffic**
> kotlin.collections.List&lt;AffiliateTrafficRow&gt; getAffiliateWebTraffic()

List Affiliate Web Traffic Entries

Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
try {
    val result : kotlin.collections.List<AffiliateTrafficRow> = apiInstance.getAffiliateWebTraffic()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#getAffiliateWebTraffic")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#getAffiliateWebTraffic")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.collections.List&lt;AffiliateTrafficRow&gt;**](AffiliateTrafficRow.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getBillingCart"></a>
# **getBillingCart**
> kotlin.Any getBillingCart()

Get Shopping Cart Contents

Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to &#x60;/pay/{method}/{invoices}&#x60;.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
try {
    val result : kotlin.Any = apiInstance.getBillingCart()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#getBillingCart")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#getBillingCart")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.Any**](kotlin.Any.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getBillingCreditCardVerify"></a>
# **getBillingCreditCardVerify**
> SuccessTextResponse getBillingCreditCardVerify(id)

Get Credit Card Verification Requirements

Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val id : kotlin.Int = 56 // kotlin.Int | The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
try {
    val result : SuccessTextResponse = apiInstance.getBillingCreditCardVerify(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#getBillingCreditCardVerify")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#getBillingCreditCardVerify")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getBillingInvoice"></a>
# **getBillingInvoice**
> BillingInvoiceDetail getBillingInvoice(id)

Get Invoice Details

Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to &#x60;/pay/{method}/{invoices}&#x60; so you can display the exact amount due and confirm the invoice is still unpaid.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val id : kotlin.Int = 56 // kotlin.Int | The invoice ID. Use IDs from `GET /billing/invoices` or from order responses.
try {
    val result : BillingInvoiceDetail = apiInstance.getBillingInvoice(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#getBillingInvoice")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#getBillingInvoice")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses. | |

### Return type

[**BillingInvoiceDetail**](BillingInvoiceDetail.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getBillingInvoices"></a>
# **getBillingInvoices**
> BillingInvoiceList getBillingInvoices()

List Account Invoices

Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with &#x60;/billing/invoices/{id}&#x60; to retrieve detailed line items, or with &#x60;/pay/{method}/{invoices}&#x60; to initiate payment.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
try {
    val result : BillingInvoiceList = apiInstance.getBillingInvoices()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#getBillingInvoices")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#getBillingInvoices")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BillingInvoiceList**](BillingInvoiceList.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getBillingPrePays"></a>
# **getBillingPrePays**
> kotlin.Any getBillingPrePays()

List Prepay Balances

Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting &#x60;prepay&#x60; as a payment method.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
try {
    val result : kotlin.Any = apiInstance.getBillingPrePays()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#getBillingPrePays")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#getBillingPrePays")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.Any**](kotlin.Any.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getInvoices"></a>
# **getInvoices**
> kotlin.collections.List&lt;Invoice&gt; getInvoices(searchString, skip, limit)

Get Invoices

Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional &#x60;searchString&#x60; parameter to filter results and &#x60;skip&#x60;/&#x60;limit&#x60; for pagination.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val searchString : kotlin.String = searchString_example // kotlin.String | pass an optional search string for looking up inventory
val skip : kotlin.Int = 56 // kotlin.Int | number of records to skip for pagination
val limit : kotlin.Int = 56 // kotlin.Int | maximum number of records to return
try {
    val result : kotlin.collections.List<Invoice> = apiInstance.getInvoices(searchString, skip, limit)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#getInvoices")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#getInvoices")
    e.printStackTrace()
}
```

### Parameters
| **searchString** | **kotlin.String**| pass an optional search string for looking up inventory | [optional] |
| **skip** | **kotlin.Int**| number of records to skip for pagination | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **limit** | **kotlin.Int**| maximum number of records to return | [optional] |

### Return type

[**kotlin.collections.List&lt;Invoice&gt;**](Invoice.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="initiatePayment"></a>
# **initiatePayment**
> InitiatePayment200Response initiatePayment(method, invoices)

Initiate Payment

Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: &#x60;redirect&#x60; means send the user to the provided URL, &#x60;submit&#x60; means POST a form with the provided fields, and &#x60;single&#x60; means the payment was processed immediately. Use invoice IDs obtained from order responses or &#x60;/billing/invoices&#x60;.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val method : kotlin.String = method_example // kotlin.String | The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`.
val invoices : kotlin.String = invoices_example // kotlin.String | A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`.
try {
    val result : InitiatePayment200Response = apiInstance.initiatePayment(method, invoices)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#initiatePayment")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#initiatePayment")
    e.printStackTrace()
}
```

### Parameters
| **method** | **kotlin.String**| The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;. | [enum: cc, paypal, prepay, payssion, payu, ccavenue, cashfree, coinbase, btcpay] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **invoices** | **kotlin.String**| A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;. | |

### Return type

[**InitiatePayment200Response**](InitiatePayment200Response.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="postBillingCreditCardVerify"></a>
# **postBillingCreditCardVerify**
> SuccessTextResponse postBillingCreditCardVerify(id, billingVerifyCcRequest)

Submit Credit Card Verification

Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by &#x60;GET /billing/creditcards/{id}/verify&#x60;. A successful response means the card is verified and can be selected as a payment method via &#x60;/billing/payment_method&#x60;.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val id : kotlin.Int = 56 // kotlin.Int | The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
val billingVerifyCcRequest : BillingVerifyCcRequest =  // BillingVerifyCcRequest | 
try {
    val result : SuccessTextResponse = apiInstance.postBillingCreditCardVerify(id, billingVerifyCcRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#postBillingCreditCardVerify")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#postBillingCreditCardVerify")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **billingVerifyCcRequest** | [**BillingVerifyCcRequest**](BillingVerifyCcRequest.md)|  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="updateAccountCreditCard"></a>
# **updateAccountCreditCard**
> kotlin.String updateAccountCreditCard(id)

Update Credit Card

Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val id : kotlin.Int = 56 // kotlin.Int | The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.
try {
    val result : kotlin.String = apiInstance.updateAccountCreditCard(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#updateAccountCreditCard")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#updateAccountCreditCard")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | |

### Return type

**kotlin.String**

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="updateAffiliateDockSetup"></a>
# **updateAffiliateDockSetup**
> TextResponse updateAffiliateDockSetup(affiliateDockTitle, affiliateDockDescription, referrerCoupon)

Configure Affiliate Dock Settings

Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val affiliateDockTitle : kotlin.String = affiliateDockTitle_example // kotlin.String | 
val affiliateDockDescription : kotlin.String = affiliateDockDescription_example // kotlin.String | 
val referrerCoupon : kotlin.String = referrerCoupon_example // kotlin.String | 
try {
    val result : TextResponse = apiInstance.updateAffiliateDockSetup(affiliateDockTitle, affiliateDockDescription, referrerCoupon)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#updateAffiliateDockSetup")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#updateAffiliateDockSetup")
    e.printStackTrace()
}
```

### Parameters
| **affiliateDockTitle** | **kotlin.String**|  | [optional] |
| **affiliateDockDescription** | **kotlin.String**|  | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **referrerCoupon** | **kotlin.String**|  | [optional] |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="updateAffiliateLandingPage"></a>
# **updateAffiliateLandingPage**
> TextResponse updateAffiliateLandingPage(affiliateDockTitle, affiliateDockDescription, referrerCoupon)

Configure Affiliate Landing Page

Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val affiliateDockTitle : kotlin.String = affiliateDockTitle_example // kotlin.String | 
val affiliateDockDescription : kotlin.String = affiliateDockDescription_example // kotlin.String | 
val referrerCoupon : kotlin.String = referrerCoupon_example // kotlin.String | 
try {
    val result : TextResponse = apiInstance.updateAffiliateLandingPage(affiliateDockTitle, affiliateDockDescription, referrerCoupon)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#updateAffiliateLandingPage")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#updateAffiliateLandingPage")
    e.printStackTrace()
}
```

### Parameters
| **affiliateDockTitle** | **kotlin.String**|  | [optional] |
| **affiliateDockDescription** | **kotlin.String**|  | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **referrerCoupon** | **kotlin.String**|  | [optional] |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="updateAffiliatePaymentSetup"></a>
# **updateAffiliatePaymentSetup**
> TextResponse updateAffiliatePaymentSetup(affiliatePaypal, affiliatePaymentMethod)

Configure Affiliate Payout Preferences

Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val affiliatePaypal : kotlin.String = affiliatePaypal_example // kotlin.String | 
val affiliatePaymentMethod : kotlin.String = affiliatePaymentMethod_example // kotlin.String | 
try {
    val result : TextResponse = apiInstance.updateAffiliatePaymentSetup(affiliatePaypal, affiliatePaymentMethod)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#updateAffiliatePaymentSetup")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#updateAffiliatePaymentSetup")
    e.printStackTrace()
}
```

### Parameters
| **affiliatePaypal** | **kotlin.String**|  | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **affiliatePaymentMethod** | **kotlin.String**|  | [optional] |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="updateBillingCreditCard"></a>
# **updateBillingCreditCard**
> SuccessTextResponse updateBillingCreditCard(id)

Update Credit Card Details

Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val id : kotlin.Int = 56 // kotlin.Int | The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`.
try {
    val result : SuccessTextResponse = apiInstance.updateBillingCreditCard(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#updateBillingCreditCard")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#updateBillingCreditCard")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;. | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="updateBillingPaymentMethod"></a>
# **updateBillingPaymentMethod**
> SuccessTextResponse updateBillingPaymentMethod(billingPaymentMethodRequest)

Update Default Payment Method

Updates the account&#39;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BillingApi()
val billingPaymentMethodRequest : BillingPaymentMethodRequest =  // BillingPaymentMethodRequest | 
try {
    val result : SuccessTextResponse = apiInstance.updateBillingPaymentMethod(billingPaymentMethodRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BillingApi#updateBillingPaymentMethod")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BillingApi#updateBillingPaymentMethod")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **billingPaymentMethodRequest** | [**BillingPaymentMethodRequest**](BillingPaymentMethodRequest.md)|  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

