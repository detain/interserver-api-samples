# \BillingAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddAccountCreditCard**](BillingAPI.md#AddAccountCreditCard) | **Post** /account/creditcards | Add Credit Card to Account
[**AddBillingCreditCard**](BillingAPI.md#AddBillingCreditCard) | **Post** /billing/creditcards | Add Credit Card for Billing
[**AddBillingPrepay**](BillingAPI.md#AddBillingPrepay) | **Post** /billing/prepays | Create Prepay Deposit
[**DeleteAccountCreditCard**](BillingAPI.md#DeleteAccountCreditCard) | **Delete** /account/creditcards/{id} | Remove Credit Card
[**DeleteBillingCreditCard**](BillingAPI.md#DeleteBillingCreditCard) | **Delete** /billing/creditcards/{id} | Delete Credit Card
[**DeleteBillingInvoice**](BillingAPI.md#DeleteBillingInvoice) | **Delete** /billing/invoices/{id} | Delete Invoice
[**DeleteBillingPrepay**](BillingAPI.md#DeleteBillingPrepay) | **Delete** /billing/prepays/{id} | Delete Prepay Balance
[**GetAffiliateBanners**](BillingAPI.md#GetAffiliateBanners) | **Get** /affiliate/banners | List Affiliate Banner Assets
[**GetAffiliateRichReport**](BillingAPI.md#GetAffiliateRichReport) | **Get** /affiliate/rich_report | Get Affiliate Performance Report
[**GetAffiliateSalesGraph**](BillingAPI.md#GetAffiliateSalesGraph) | **Get** /affiliate/sales_graph | Get Affiliate Sales Graph Data
[**GetAffiliateSalesReport**](BillingAPI.md#GetAffiliateSalesReport) | **Get** /affiliate/sales_report | Get Affiliate Sales Report
[**GetAffiliateTrafficGraph**](BillingAPI.md#GetAffiliateTrafficGraph) | **Get** /affiliate/traffic_graph | Get Affiliate Traffic Graph Data
[**GetAffiliateWebTraffic**](BillingAPI.md#GetAffiliateWebTraffic) | **Get** /affiliate/web_traffic | List Affiliate Web Traffic Entries
[**GetBillingCart**](BillingAPI.md#GetBillingCart) | **Get** /billing/cart | Get Shopping Cart Contents
[**GetBillingCreditCardVerify**](BillingAPI.md#GetBillingCreditCardVerify) | **Get** /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements
[**GetBillingInvoice**](BillingAPI.md#GetBillingInvoice) | **Get** /billing/invoices/{id} | Get Invoice Details
[**GetBillingInvoices**](BillingAPI.md#GetBillingInvoices) | **Get** /billing/invoices | List Account Invoices
[**GetBillingPrePays**](BillingAPI.md#GetBillingPrePays) | **Get** /billing/prepays | List Prepay Balances
[**GetInvoices**](BillingAPI.md#GetInvoices) | **Get** /invoices | Get Invoices
[**InitiatePayment**](BillingAPI.md#InitiatePayment) | **Get** /pay/{method}/{invoices} | Initiate Payment
[**PostBillingCreditCardVerify**](BillingAPI.md#PostBillingCreditCardVerify) | **Post** /billing/creditcards/{id}/verify | Submit Credit Card Verification
[**UpdateAccountCreditCard**](BillingAPI.md#UpdateAccountCreditCard) | **Post** /account/creditcards/{id} | Update Credit Card
[**UpdateAffiliateDockSetup**](BillingAPI.md#UpdateAffiliateDockSetup) | **Post** /affiliate/dock_setup | Configure Affiliate Dock Settings
[**UpdateAffiliateLandingPage**](BillingAPI.md#UpdateAffiliateLandingPage) | **Post** /affiliate/landing_pg | Configure Affiliate Landing Page
[**UpdateAffiliatePaymentSetup**](BillingAPI.md#UpdateAffiliatePaymentSetup) | **Post** /affiliate/payment_setup | Configure Affiliate Payout Preferences
[**UpdateBillingCreditCard**](BillingAPI.md#UpdateBillingCreditCard) | **Post** /billing/creditcards/{id} | Update Credit Card Details
[**UpdateBillingPaymentMethod**](BillingAPI.md#UpdateBillingPaymentMethod) | **Post** /billing/payment_method | Update Default Payment Method



## AddAccountCreditCard

> SuccessTextResponse AddAccountCreditCard(ctx).Name(name).Address(address).City(city).State(state).Country(country).Zip(zip).Cc(cc).CcExp(ccExp).CcCcv2(ccCcv2).Execute()

Add Credit Card to Account



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	name := "name_example" // string |  (optional)
	address := "address_example" // string |  (optional)
	city := "city_example" // string |  (optional)
	state := "state_example" // string |  (optional)
	country := "country_example" // string |  (optional)
	zip := "zip_example" // string |  (optional)
	cc := "cc_example" // string |  (optional)
	ccExp := "ccExp_example" // string |  (optional)
	ccCcv2 := "ccCcv2_example" // string |  (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.AddAccountCreditCard(context.Background()).Name(name).Address(address).City(city).State(state).Country(country).Zip(zip).Cc(cc).CcExp(ccExp).CcCcv2(ccCcv2).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.AddAccountCreditCard``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `AddAccountCreditCard`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.AddAccountCreditCard`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiAddAccountCreditCardRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string** |  | 
 **address** | **string** |  | 
 **city** | **string** |  | 
 **state** | **string** |  | 
 **country** | **string** |  | 
 **zip** | **string** |  | 
 **cc** | **string** |  | 
 **ccExp** | **string** |  | 
 **ccCcv2** | **string** |  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## AddBillingCreditCard

> SuccessTextResponse AddBillingCreditCard(ctx).BillingAddCcRequest(billingAddCcRequest).Execute()

Add Credit Card for Billing



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	billingAddCcRequest := *openapiclient.NewBillingAddCcRequest() // BillingAddCcRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.AddBillingCreditCard(context.Background()).BillingAddCcRequest(billingAddCcRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.AddBillingCreditCard``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `AddBillingCreditCard`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.AddBillingCreditCard`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiAddBillingCreditCardRequest struct via the builder pattern


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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## AddBillingPrepay

> SuccessTextResponse AddBillingPrepay(ctx).BillingPrepayRequest(billingPrepayRequest).Execute()

Create Prepay Deposit



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	billingPrepayRequest := *openapiclient.NewBillingPrepayRequest() // BillingPrepayRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.AddBillingPrepay(context.Background()).BillingPrepayRequest(billingPrepayRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.AddBillingPrepay``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `AddBillingPrepay`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.AddBillingPrepay`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiAddBillingPrepayRequest struct via the builder pattern


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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteAccountCreditCard

> string DeleteAccountCreditCard(ctx, id).Execute()

Remove Credit Card



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	id := "id_example" // string | The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.DeleteAccountCreditCard(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.DeleteAccountCreditCard``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `DeleteAccountCreditCard`: string
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.DeleteAccountCreditCard`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **string** | The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiDeleteAccountCreditCardRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

**string**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteBillingCreditCard

> SuccessTextResponse DeleteBillingCreditCard(ctx, id).Execute()

Delete Credit Card



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	id := int32(56) // int32 | The credit card ID to remove. Use IDs from `GET /billing/creditcards`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.DeleteBillingCreditCard(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.DeleteBillingCreditCard``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `DeleteBillingCreditCard`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.DeleteBillingCreditCard`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiDeleteBillingCreditCardRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteBillingInvoice

> SuccessTextResponse DeleteBillingInvoice(ctx, id).Execute()

Delete Invoice



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	id := int32(56) // int32 | The invoice ID to delete. Only unpaid invoices can be deleted.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.DeleteBillingInvoice(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.DeleteBillingInvoice``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `DeleteBillingInvoice`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.DeleteBillingInvoice`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The invoice ID to delete. Only unpaid invoices can be deleted. | 

### Other Parameters

Other parameters are passed through a pointer to a apiDeleteBillingInvoiceRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteBillingPrepay

> SuccessTextResponse DeleteBillingPrepay(ctx, id).Execute()

Delete Prepay Balance



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	id := int32(56) // int32 | The prepay balance ID to delete.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.DeleteBillingPrepay(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.DeleteBillingPrepay``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `DeleteBillingPrepay`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.DeleteBillingPrepay`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The prepay balance ID to delete. | 

### Other Parameters

Other parameters are passed through a pointer to a apiDeleteBillingPrepayRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAffiliateBanners

> []AffiliateBannerRow GetAffiliateBanners(ctx).Execute()

List Affiliate Banner Assets



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.GetAffiliateBanners(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.GetAffiliateBanners``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetAffiliateBanners`: []AffiliateBannerRow
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.GetAffiliateBanners`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetAffiliateBannersRequest struct via the builder pattern


### Return type

[**[]AffiliateBannerRow**](AffiliateBannerRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAffiliateRichReport

> TextResponse GetAffiliateRichReport(ctx).Execute()

Get Affiliate Performance Report



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.GetAffiliateRichReport(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.GetAffiliateRichReport``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetAffiliateRichReport`: TextResponse
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.GetAffiliateRichReport`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetAffiliateRichReportRequest struct via the builder pattern


### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAffiliateSalesGraph

> StatusMonthlyBreakdown GetAffiliateSalesGraph(ctx).Days(days).Execute()

Get Affiliate Sales Graph Data



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	days := int32(56) // int32 | Number of days of sales history to include in the graph data. Determines the time window for the returned data points. (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.GetAffiliateSalesGraph(context.Background()).Days(days).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.GetAffiliateSalesGraph``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetAffiliateSalesGraph`: StatusMonthlyBreakdown
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.GetAffiliateSalesGraph`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiGetAffiliateSalesGraphRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **days** | **int32** | Number of days of sales history to include in the graph data. Determines the time window for the returned data points. | 

### Return type

[**StatusMonthlyBreakdown**](StatusMonthlyBreakdown.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAffiliateSalesReport

> TextResponse GetAffiliateSalesReport(ctx).Execute()

Get Affiliate Sales Report



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.GetAffiliateSalesReport(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.GetAffiliateSalesReport``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetAffiliateSalesReport`: TextResponse
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.GetAffiliateSalesReport`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetAffiliateSalesReportRequest struct via the builder pattern


### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAffiliateTrafficGraph

> MonthlyCounts GetAffiliateTrafficGraph(ctx).Days(days).Execute()

Get Affiliate Traffic Graph Data



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	days := int32(56) // int32 | Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.GetAffiliateTrafficGraph(context.Background()).Days(days).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.GetAffiliateTrafficGraph``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetAffiliateTrafficGraph`: MonthlyCounts
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.GetAffiliateTrafficGraph`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiGetAffiliateTrafficGraphRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **days** | **int32** | Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. | 

### Return type

[**MonthlyCounts**](MonthlyCounts.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAffiliateWebTraffic

> []AffiliateTrafficRow GetAffiliateWebTraffic(ctx).Execute()

List Affiliate Web Traffic Entries



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.GetAffiliateWebTraffic(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.GetAffiliateWebTraffic``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetAffiliateWebTraffic`: []AffiliateTrafficRow
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.GetAffiliateWebTraffic`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetAffiliateWebTrafficRequest struct via the builder pattern


### Return type

[**[]AffiliateTrafficRow**](AffiliateTrafficRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetBillingCart

> map[string]interface{} GetBillingCart(ctx).Execute()

Get Shopping Cart Contents



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.GetBillingCart(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.GetBillingCart``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetBillingCart`: map[string]interface{}
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.GetBillingCart`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetBillingCartRequest struct via the builder pattern


### Return type

**map[string]interface{}**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetBillingCreditCardVerify

> SuccessTextResponse GetBillingCreditCardVerify(ctx, id).Execute()

Get Credit Card Verification Requirements



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	id := int32(56) // int32 | The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.GetBillingCreditCardVerify(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.GetBillingCreditCardVerify``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetBillingCreditCardVerify`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.GetBillingCreditCardVerify`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetBillingCreditCardVerifyRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetBillingInvoice

> BillingInvoiceDetail GetBillingInvoice(ctx, id).Execute()

Get Invoice Details



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	id := int32(56) // int32 | The invoice ID. Use IDs from `GET /billing/invoices` or from order responses.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.GetBillingInvoice(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.GetBillingInvoice``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetBillingInvoice`: BillingInvoiceDetail
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.GetBillingInvoice`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetBillingInvoiceRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**BillingInvoiceDetail**](BillingInvoiceDetail.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetBillingInvoices

> BillingInvoiceList GetBillingInvoices(ctx).Execute()

List Account Invoices



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.GetBillingInvoices(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.GetBillingInvoices``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetBillingInvoices`: BillingInvoiceList
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.GetBillingInvoices`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetBillingInvoicesRequest struct via the builder pattern


### Return type

[**BillingInvoiceList**](BillingInvoiceList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetBillingPrePays

> map[string]interface{} GetBillingPrePays(ctx).Execute()

List Prepay Balances



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.GetBillingPrePays(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.GetBillingPrePays``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetBillingPrePays`: map[string]interface{}
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.GetBillingPrePays`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetBillingPrePaysRequest struct via the builder pattern


### Return type

**map[string]interface{}**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetInvoices

> []Invoice GetInvoices(ctx).SearchString(searchString).Skip(skip).Limit(limit).Execute()

Get Invoices



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	searchString := "searchString_example" // string | pass an optional search string for looking up inventory (optional)
	skip := int32(56) // int32 | number of records to skip for pagination (optional)
	limit := int32(56) // int32 | maximum number of records to return (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.GetInvoices(context.Background()).SearchString(searchString).Skip(skip).Limit(limit).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.GetInvoices``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetInvoices`: []Invoice
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.GetInvoices`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiGetInvoicesRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **searchString** | **string** | pass an optional search string for looking up inventory | 
 **skip** | **int32** | number of records to skip for pagination | 
 **limit** | **int32** | maximum number of records to return | 

### Return type

[**[]Invoice**](Invoice.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## InitiatePayment

> InitiatePayment200Response InitiatePayment(ctx, method, invoices).Execute()

Initiate Payment



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	method := "method_example" // string | The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`.
	invoices := "invoices_example" // string | A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.InitiatePayment(context.Background(), method, invoices).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.InitiatePayment``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `InitiatePayment`: InitiatePayment200Response
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.InitiatePayment`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**method** | **string** | The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;. | 
**invoices** | **string** | A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiInitiatePaymentRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



### Return type

[**InitiatePayment200Response**](InitiatePayment200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PostBillingCreditCardVerify

> SuccessTextResponse PostBillingCreditCardVerify(ctx, id).BillingVerifyCcRequest(billingVerifyCcRequest).Execute()

Submit Credit Card Verification



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	id := int32(56) // int32 | The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
	billingVerifyCcRequest := *openapiclient.NewBillingVerifyCcRequest() // BillingVerifyCcRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.PostBillingCreditCardVerify(context.Background(), id).BillingVerifyCcRequest(billingVerifyCcRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.PostBillingCreditCardVerify``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `PostBillingCreditCardVerify`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.PostBillingCreditCardVerify`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiPostBillingCreditCardVerifyRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **billingVerifyCcRequest** | [**BillingVerifyCcRequest**](BillingVerifyCcRequest.md) |  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateAccountCreditCard

> string UpdateAccountCreditCard(ctx, id).Execute()

Update Credit Card



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	id := int32(56) // int32 | The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.UpdateAccountCreditCard(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.UpdateAccountCreditCard``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateAccountCreditCard`: string
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.UpdateAccountCreditCard`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiUpdateAccountCreditCardRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

**string**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateAffiliateDockSetup

> TextResponse UpdateAffiliateDockSetup(ctx).AffiliateDockTitle(affiliateDockTitle).AffiliateDockDescription(affiliateDockDescription).ReferrerCoupon(referrerCoupon).Execute()

Configure Affiliate Dock Settings



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	affiliateDockTitle := "affiliateDockTitle_example" // string |  (optional)
	affiliateDockDescription := "affiliateDockDescription_example" // string |  (optional)
	referrerCoupon := "referrerCoupon_example" // string |  (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.UpdateAffiliateDockSetup(context.Background()).AffiliateDockTitle(affiliateDockTitle).AffiliateDockDescription(affiliateDockDescription).ReferrerCoupon(referrerCoupon).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.UpdateAffiliateDockSetup``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateAffiliateDockSetup`: TextResponse
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.UpdateAffiliateDockSetup`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiUpdateAffiliateDockSetupRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliateDockTitle** | **string** |  | 
 **affiliateDockDescription** | **string** |  | 
 **referrerCoupon** | **string** |  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateAffiliateLandingPage

> TextResponse UpdateAffiliateLandingPage(ctx).AffiliateDockTitle(affiliateDockTitle).AffiliateDockDescription(affiliateDockDescription).ReferrerCoupon(referrerCoupon).Execute()

Configure Affiliate Landing Page



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	affiliateDockTitle := "affiliateDockTitle_example" // string |  (optional)
	affiliateDockDescription := "affiliateDockDescription_example" // string |  (optional)
	referrerCoupon := "referrerCoupon_example" // string |  (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.UpdateAffiliateLandingPage(context.Background()).AffiliateDockTitle(affiliateDockTitle).AffiliateDockDescription(affiliateDockDescription).ReferrerCoupon(referrerCoupon).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.UpdateAffiliateLandingPage``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateAffiliateLandingPage`: TextResponse
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.UpdateAffiliateLandingPage`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiUpdateAffiliateLandingPageRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliateDockTitle** | **string** |  | 
 **affiliateDockDescription** | **string** |  | 
 **referrerCoupon** | **string** |  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateAffiliatePaymentSetup

> TextResponse UpdateAffiliatePaymentSetup(ctx).AffiliatePaypal(affiliatePaypal).AffiliatePaymentMethod(affiliatePaymentMethod).Execute()

Configure Affiliate Payout Preferences



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	affiliatePaypal := "affiliatePaypal_example" // string |  (optional)
	affiliatePaymentMethod := "affiliatePaymentMethod_example" // string |  (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.UpdateAffiliatePaymentSetup(context.Background()).AffiliatePaypal(affiliatePaypal).AffiliatePaymentMethod(affiliatePaymentMethod).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.UpdateAffiliatePaymentSetup``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateAffiliatePaymentSetup`: TextResponse
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.UpdateAffiliatePaymentSetup`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiUpdateAffiliatePaymentSetupRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliatePaypal** | **string** |  | 
 **affiliatePaymentMethod** | **string** |  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateBillingCreditCard

> SuccessTextResponse UpdateBillingCreditCard(ctx, id).Execute()

Update Credit Card Details



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	id := int32(56) // int32 | The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.UpdateBillingCreditCard(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.UpdateBillingCreditCard``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateBillingCreditCard`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.UpdateBillingCreditCard`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiUpdateBillingCreditCardRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateBillingPaymentMethod

> SuccessTextResponse UpdateBillingPaymentMethod(ctx).BillingPaymentMethodRequest(billingPaymentMethodRequest).Execute()

Update Default Payment Method



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	billingPaymentMethodRequest := *openapiclient.NewBillingPaymentMethodRequest() // BillingPaymentMethodRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BillingAPI.UpdateBillingPaymentMethod(context.Background()).BillingPaymentMethodRequest(billingPaymentMethodRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BillingAPI.UpdateBillingPaymentMethod``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateBillingPaymentMethod`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `BillingAPI.UpdateBillingPaymentMethod`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiUpdateBillingPaymentMethodRequest struct via the builder pattern


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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

