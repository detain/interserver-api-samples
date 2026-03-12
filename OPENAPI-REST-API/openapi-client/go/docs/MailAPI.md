# \MailAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddMail**](MailAPI.md#AddMail) | **Post** /mail/order | Place Mail Order
[**AddRule**](MailAPI.md#AddRule) | **Post** /mail/{id}/rules | Create Deny Rule
[**CreateMailAlert**](MailAPI.md#CreateMailAlert) | **Post** /mail/{id}/alerts | Create Mail Alert
[**DeleteMailAlert**](MailAPI.md#DeleteMailAlert) | **Delete** /mail/{id}/alerts | Delete Mail Alert
[**DeleteRule**](MailAPI.md#DeleteRule) | **Delete** /mail/{id}/rules/{rule} | Delete Deny Rule
[**DelistBlock**](MailAPI.md#DelistBlock) | **Post** /mail/{id}/blocks/delete | Remove Email Address from Block List
[**GetMailAlerts**](MailAPI.md#GetMailAlerts) | **Get** /mail/{id}/alerts | List Mail Alerts
[**GetMailBlocks**](MailAPI.md#GetMailBlocks) | **Get** /mail/{id}/blocks | List Blocked Email Addresses
[**GetMailDelist**](MailAPI.md#GetMailDelist) | **Get** /mail/{id}/delist | Get Delist Status
[**GetMailDeliverability**](MailAPI.md#GetMailDeliverability) | **Get** /mail/{id}/deliverability | Get Deliverability Metrics
[**GetMailInfo**](MailAPI.md#GetMailInfo) | **Get** /mail/{id} | Get Mail Order
[**GetMailInvoices**](MailAPI.md#GetMailInvoices) | **Get** /mail/{id}/invoices | Get Mail Invoices
[**GetMailList**](MailAPI.md#GetMailList) | **Get** /mail | List Mail Orders
[**GetMailWelcomeEmail**](MailAPI.md#GetMailWelcomeEmail) | **Get** /mail/{id}/welcome_email | Resend Mail Welcome Email
[**GetNewMail**](MailAPI.md#GetNewMail) | **Get** /mail/order | Get Mail Ordering Information
[**GetRules**](MailAPI.md#GetRules) | **Get** /mail/{id}/rules | List Deny Rules
[**GetStats**](MailAPI.md#GetStats) | **Get** /mail/{id}/stats | Get Mail Usage Statistics
[**MailCancel**](MailAPI.md#MailCancel) | **Delete** /mail/{id} | Cancel Mail
[**PostMailDelist**](MailAPI.md#PostMailDelist) | **Post** /mail/{id}/delist | Delist a Blocked Sender
[**PutMail**](MailAPI.md#PutMail) | **Put** /mail/order | Validate Mail Order
[**ResetMailPassword**](MailAPI.md#ResetMailPassword) | **Get** /mail/{id}/reset_password | Reset Mail Password
[**SendAdvMail**](MailAPI.md#SendAdvMail) | **Post** /mail/{id}/advsend | Send Email with Advanced Options
[**SendMail**](MailAPI.md#SendMail) | **Post** /mail/{id}/send | Send Email
[**UpdateMailAlert**](MailAPI.md#UpdateMailAlert) | **Put** /mail/{id}/alerts | Update Mail Alert
[**UpdateMailInfo**](MailAPI.md#UpdateMailInfo) | **Post** /mail/{id} | Update Mail Order
[**ViewMailLog**](MailAPI.md#ViewMailLog) | **Get** /mail/{id}/log | View Mail Log



## AddMail

> AddMail(ctx).Execute()

Place Mail Order



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
	r, err := apiClient.MailAPI.AddMail(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.AddMail``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiAddMailRequest struct via the builder pattern


### Return type

 (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## AddRule

> GenericResponse AddRule(ctx, id).DenyRuleNew(denyRuleNew).Execute()

Create Deny Rule



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.
	denyRuleNew := *openapiclient.NewDenyRuleNew("email", "domeinwo@server.guesshost.net") // DenyRuleNew | These are the fields needed to create a new email deny rule.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.AddRule(context.Background(), id).DenyRuleNew(denyRuleNew).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.AddRule``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `AddRule`: GenericResponse
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.AddRule`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiAddRuleRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **denyRuleNew** | [**DenyRuleNew**](DenyRuleNew.md) | These are the fields needed to create a new email deny rule. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, application/x-www-form-urlencoded
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CreateMailAlert

> SuccessTextResponse CreateMailAlert(ctx, id).MailAlertRequest(mailAlertRequest).Execute()

Create Mail Alert



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.
	mailAlertRequest := *openapiclient.NewMailAlertRequest() // MailAlertRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.CreateMailAlert(context.Background(), id).MailAlertRequest(mailAlertRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.CreateMailAlert``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `CreateMailAlert`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.CreateMailAlert`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiCreateMailAlertRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **mailAlertRequest** | [**MailAlertRequest**](MailAlertRequest.md) |  | 

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


## DeleteMailAlert

> SuccessTextResponse DeleteMailAlert(ctx, id).AlertId(alertId).Execute()

Delete Mail Alert



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.
	alertId := int32(56) // int32 | Alert ID to delete.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.DeleteMailAlert(context.Background(), id).AlertId(alertId).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.DeleteMailAlert``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `DeleteMailAlert`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.DeleteMailAlert`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiDeleteMailAlertRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **alertId** | **int32** | Alert ID to delete. | 

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


## DeleteRule

> GenericResponse DeleteRule(ctx, id, rule).Execute()

Delete Deny Rule



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.
	rule := "34" // string | The ID of the Rules entry.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.DeleteRule(context.Background(), id, rule).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.DeleteRule``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `DeleteRule`: GenericResponse
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.DeleteRule`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
**rule** | **string** | The ID of the Rules entry. | 

### Other Parameters

Other parameters are passed through a pointer to a apiDeleteRuleRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DelistBlock

> GenericResponse DelistBlock(ctx, id).Email(email).Execute()

Remove Email Address from Block List



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.
	email := "email_example" // string | an email address (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.DelistBlock(context.Background(), id).Email(email).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.DelistBlock``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `DelistBlock`: GenericResponse
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.DelistBlock`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiDelistBlockRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **email** | **string** | an email address | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetMailAlerts

> MailAlertsResponse GetMailAlerts(ctx, id).Execute()

List Mail Alerts



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.GetMailAlerts(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.GetMailAlerts``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetMailAlerts`: MailAlertsResponse
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.GetMailAlerts`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetMailAlertsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**MailAlertsResponse**](MailAlertsResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetMailBlocks

> MailBlocks GetMailBlocks(ctx, id).Execute()

List Blocked Email Addresses



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.GetMailBlocks(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.GetMailBlocks``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetMailBlocks`: MailBlocks
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.GetMailBlocks`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetMailBlocksRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**MailBlocks**](MailBlocks.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetMailDelist

> MailDelistResponse GetMailDelist(ctx, id).Execute()

Get Delist Status



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.GetMailDelist(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.GetMailDelist``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetMailDelist`: MailDelistResponse
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.GetMailDelist`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetMailDelistRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**MailDelistResponse**](MailDelistResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetMailDeliverability

> MailDeliverabilityResponse GetMailDeliverability(ctx, id).Execute()

Get Deliverability Metrics



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.GetMailDeliverability(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.GetMailDeliverability``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetMailDeliverability`: MailDeliverabilityResponse
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.GetMailDeliverability`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetMailDeliverabilityRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**MailDeliverabilityResponse**](MailDeliverabilityResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetMailInfo

> MailSchema GetMailInfo(ctx, id).Execute()

Get Mail Order



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.GetMailInfo(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.GetMailInfo``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetMailInfo`: MailSchema
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.GetMailInfo`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetMailInfoRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**MailSchema**](MailSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetMailInvoices

> ChargeInvoiceRows GetMailInvoices(ctx, id).Execute()

Get Mail Invoices



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.GetMailInvoices(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.GetMailInvoices``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetMailInvoices`: ChargeInvoiceRows
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.GetMailInvoices`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetMailInvoicesRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetMailList

> []MailRow GetMailList(ctx).Execute()

List Mail Orders



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
	resp, r, err := apiClient.MailAPI.GetMailList(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.GetMailList``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetMailList`: []MailRow
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.GetMailList`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetMailListRequest struct via the builder pattern


### Return type

[**[]MailRow**](MailRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetMailWelcomeEmail

> SuccessTextResponse GetMailWelcomeEmail(ctx, id).Execute()

Resend Mail Welcome Email



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.GetMailWelcomeEmail(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.GetMailWelcomeEmail``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetMailWelcomeEmail`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.GetMailWelcomeEmail`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetMailWelcomeEmailRequest struct via the builder pattern


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


## GetNewMail

> MailOrder GetNewMail(ctx).Execute()

Get Mail Ordering Information



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
	resp, r, err := apiClient.MailAPI.GetNewMail(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.GetNewMail``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetNewMail`: MailOrder
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.GetNewMail`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetNewMailRequest struct via the builder pattern


### Return type

[**MailOrder**](MailOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetRules

> []DenyRuleRecord GetRules(ctx, id).Execute()

List Deny Rules



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.GetRules(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.GetRules``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetRules`: []DenyRuleRecord
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.GetRules`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetRulesRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**[]DenyRuleRecord**](DenyRuleRecord.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetStats

> MailStatsType GetStats(ctx, id).Time(time).Execute()

Get Mail Usage Statistics



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.
	time := "time_example" // string | The timeframe for the statistics. (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.GetStats(context.Background(), id).Time(time).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.GetStats``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetStats`: MailStatsType
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.GetStats`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetStatsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **time** | **string** | The timeframe for the statistics. | 

### Return type

[**MailStatsType**](MailStatsType.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## MailCancel

> MailCancel200Response MailCancel(ctx, id).Execute()

Cancel Mail



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.MailCancel(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.MailCancel``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `MailCancel`: MailCancel200Response
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.MailCancel`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiMailCancelRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**MailCancel200Response**](MailCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PostMailDelist

> SuccessTextResponse PostMailDelist(ctx, id).MailDelistRequest(mailDelistRequest).Execute()

Delist a Blocked Sender



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.
	mailDelistRequest := *openapiclient.NewMailDelistRequest() // MailDelistRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.PostMailDelist(context.Background(), id).MailDelistRequest(mailDelistRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.PostMailDelist``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `PostMailDelist`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.PostMailDelist`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiPostMailDelistRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **mailDelistRequest** | [**MailDelistRequest**](MailDelistRequest.md) |  | 

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


## PutMail

> PutMail(ctx).Execute()

Validate Mail Order



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
	r, err := apiClient.MailAPI.PutMail(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.PutMail``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiPutMailRequest struct via the builder pattern


### Return type

 (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ResetMailPassword

> SuccessTextResponse ResetMailPassword(ctx, id).Execute()

Reset Mail Password



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.ResetMailPassword(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.ResetMailPassword``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `ResetMailPassword`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.ResetMailPassword`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiResetMailPasswordRequest struct via the builder pattern


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


## SendAdvMail

> GenericResponse SendAdvMail(ctx, id).SendMailAdv(sendMailAdv).Execute()

Send Email with Advanced Options



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.
	sendMailAdv := *openapiclient.NewSendMailAdv("Your Package has been Delivered!", "The package you ordered on 2021-01-23 has been delivered. If the package is broken into many pieces, please blaim someone else.", *openapiclient.NewEmailAddressName("user@domain.com"), []openapiclient.EmailAddressName{*openapiclient.NewEmailAddressName("user@domain.com")}) // SendMailAdv | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.SendAdvMail(context.Background(), id).SendMailAdv(sendMailAdv).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.SendAdvMail``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `SendAdvMail`: GenericResponse
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.SendAdvMail`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiSendAdvMailRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **sendMailAdv** | [**SendMailAdv**](SendMailAdv.md) |  | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, application/x-www-form-urlencoded
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## SendMail

> GenericResponse SendMail(ctx, id).SendMail(sendMail).Execute()

Send Email



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.
	sendMail := *openapiclient.NewSendMail("johndoe@company.com", "janedoe@company.com", "Attention Client", "This is an email to inform you that something noteworthy happened.") // SendMail | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.SendMail(context.Background(), id).SendMail(sendMail).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.SendMail``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `SendMail`: GenericResponse
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.SendMail`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiSendMailRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **sendMail** | [**SendMail**](SendMail.md) |  | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, application/x-www-form-urlencoded
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateMailAlert

> SuccessTextResponse UpdateMailAlert(ctx, id).MailAlertUpdateRequest(mailAlertUpdateRequest).Execute()

Update Mail Alert



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.
	mailAlertUpdateRequest := *openapiclient.NewMailAlertUpdateRequest() // MailAlertUpdateRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.UpdateMailAlert(context.Background(), id).MailAlertUpdateRequest(mailAlertUpdateRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.UpdateMailAlert``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateMailAlert`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.UpdateMailAlert`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiUpdateMailAlertRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **mailAlertUpdateRequest** | [**MailAlertUpdateRequest**](MailAlertUpdateRequest.md) |  | 

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


## UpdateMailInfo

> UpdateMailInfo(ctx, id).Execute()

Update Mail Order



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
	id := "id_example" // string | The mail service ID. Use `mail_id` from `GET /mail`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	r, err := apiClient.MailAPI.UpdateMailInfo(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.UpdateMailInfo``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **string** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiUpdateMailInfoRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

 (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ViewMailLog

> MailLog ViewMailLog(ctx, id).Id2(id2).Origin(origin).Mx(mx).From(from).To(to).Subject(subject).Mailid(mailid).Skip(skip).Limit(limit).StartDate(startDate).EndDate(endDate).Delivered(delivered).Execute()

View Mail Log



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
	id := int32(56) // int32 | The mail service ID. Use `mail_id` from `GET /mail`.
	id2 := int64(2604) // int64 | The ID of your mail order this will be sent through. (optional)
	origin := "1.2.3.4" // string | originating ip address sending mail (optional)
	mx := "mx.google.com" // string | mx record mail was sent to (optional)
	from := "me@sender.com" // string | from email address (optional)
	to := "you@receiver.com" // string | to/destination email address (optional)
	subject := "Support" // string | subject containing this string (optional)
	mailid := "185997065c60008840" // string | mail id (optional)
	skip := int32(1000) // int32 | number of records to skip for pagination (optional) (default to 0)
	limit := int32(1000) // int32 | maximum number of records to return (optional) (default to 100)
	startDate := int64(1641781008) // int64 | earliest date to get emails in unix timestamp format (optional)
	endDate := int64(1673317008) // int64 | Latest date to get emails in unix timestamp format. (optional)
	delivered := "delivered_example" // string | Filter emails by whether or not they were delivered. (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MailAPI.ViewMailLog(context.Background(), id).Id2(id2).Origin(origin).Mx(mx).From(from).To(to).Subject(subject).Mailid(mailid).Skip(skip).Limit(limit).StartDate(startDate).EndDate(endDate).Delivered(delivered).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MailAPI.ViewMailLog``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `ViewMailLog`: MailLog
	fmt.Fprintf(os.Stdout, "Response from `MailAPI.ViewMailLog`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiViewMailLogRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **id2** | **int64** | The ID of your mail order this will be sent through. | 
 **origin** | **string** | originating ip address sending mail | 
 **mx** | **string** | mx record mail was sent to | 
 **from** | **string** | from email address | 
 **to** | **string** | to/destination email address | 
 **subject** | **string** | subject containing this string | 
 **mailid** | **string** | mail id | 
 **skip** | **int32** | number of records to skip for pagination | [default to 0]
 **limit** | **int32** | maximum number of records to return | [default to 100]
 **startDate** | **int64** | earliest date to get emails in unix timestamp format | 
 **endDate** | **int64** | Latest date to get emails in unix timestamp format. | 
 **delivered** | **string** | Filter emails by whether or not they were delivered. | 

### Return type

[**MailLog**](MailLog.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

