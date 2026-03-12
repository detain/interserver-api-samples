# \WebhostingAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddWebsite**](WebhostingAPI.md#AddWebsite) | **Post** /websites/order | Place Website Order
[**GetNewWebsite**](WebhostingAPI.md#GetNewWebsite) | **Get** /websites/order | Website Ordering Information
[**GetWebsiteBuyIp**](WebhostingAPI.md#GetWebsiteBuyIp) | **Get** /websites/{id}/buy_ip | Get Website IP Information
[**GetWebsiteInfo**](WebhostingAPI.md#GetWebsiteInfo) | **Get** /websites/{id} | Get Website Order
[**GetWebsiteInvoices**](WebhostingAPI.md#GetWebsiteInvoices) | **Get** /websites/{id}/invoices | Get Website Invoices
[**GetWebsiteList**](WebhostingAPI.md#GetWebsiteList) | **Get** /websites | Get Website Listing
[**GetWebsitesBackups**](WebhostingAPI.md#GetWebsitesBackups) | **Get** /websites/{id}/backups | Get Website Backups
[**GetWebsitesLogin**](WebhostingAPI.md#GetWebsitesLogin) | **Get** /websites/{id}/login | Hosting Panel Auto Login
[**GetWebsitesWelcomeEmail**](WebhostingAPI.md#GetWebsitesWelcomeEmail) | **Get** /websites/{id}/welcome_email | Resend Website Welcome Email
[**GettWebsiteReverseDns**](WebhostingAPI.md#GettWebsiteReverseDns) | **Get** /websites/{id}/reverse_dns | Get Website Reverse DNS
[**PostWebsiteBuyIp**](WebhostingAPI.md#PostWebsiteBuyIp) | **Post** /websites/{id}/buy_ip | Update Website IP DNS
[**PostWebsiteMigration**](WebhostingAPI.md#PostWebsiteMigration) | **Post** /websites/{id}/migration | Request Website Migration
[**PostWebsitesReverseDns**](WebhostingAPI.md#PostWebsitesReverseDns) | **Post** /websites/{id}/reverse_dns | Update Website Reverse DNS
[**PutWebsites**](WebhostingAPI.md#PutWebsites) | **Put** /websites/order | Validate Webhosting Order
[**UpdateWebsiteInfo**](WebhostingAPI.md#UpdateWebsiteInfo) | **Post** /websites/{id} | Update Website Order
[**WebhostingCancel**](WebhostingAPI.md#WebhostingCancel) | **Delete** /websites/{id} | Cancel Website



## AddWebsite

> AddWebsite(ctx).Execute()

Place Website Order



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
	r, err := apiClient.WebhostingAPI.AddWebsite(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WebhostingAPI.AddWebsite``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiAddWebsiteRequest struct via the builder pattern


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


## GetNewWebsite

> WebsitesOrder GetNewWebsite(ctx).Execute()

Website Ordering Information



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
	resp, r, err := apiClient.WebhostingAPI.GetNewWebsite(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WebhostingAPI.GetNewWebsite``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetNewWebsite`: WebsitesOrder
	fmt.Fprintf(os.Stdout, "Response from `WebhostingAPI.GetNewWebsite`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetNewWebsiteRequest struct via the builder pattern


### Return type

[**WebsitesOrder**](WebsitesOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWebsiteBuyIp

> GetWebsiteBuyIp200Response GetWebsiteBuyIp(ctx, id).Execute()

Get Website IP Information



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
	id := int32(56) // int32 | The website service ID. Use `website_id` from `GET /websites`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.WebhostingAPI.GetWebsiteBuyIp(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WebhostingAPI.GetWebsiteBuyIp``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetWebsiteBuyIp`: GetWebsiteBuyIp200Response
	fmt.Fprintf(os.Stdout, "Response from `WebhostingAPI.GetWebsiteBuyIp`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetWebsiteBuyIpRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**GetWebsiteBuyIp200Response**](GetWebsiteBuyIp200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWebsiteInfo

> Website GetWebsiteInfo(ctx, id).Execute()

Get Website Order



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
	id := int32(56) // int32 | The website service ID. Use `website_id` from `GET /websites`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.WebhostingAPI.GetWebsiteInfo(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WebhostingAPI.GetWebsiteInfo``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetWebsiteInfo`: Website
	fmt.Fprintf(os.Stdout, "Response from `WebhostingAPI.GetWebsiteInfo`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetWebsiteInfoRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**Website**](Website.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWebsiteInvoices

> ChargeInvoiceRows GetWebsiteInvoices(ctx, id).Execute()

Get Website Invoices



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
	id := int32(56) // int32 | The website service ID. Use `website_id` from `GET /websites`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.WebhostingAPI.GetWebsiteInvoices(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WebhostingAPI.GetWebsiteInvoices``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetWebsiteInvoices`: ChargeInvoiceRows
	fmt.Fprintf(os.Stdout, "Response from `WebhostingAPI.GetWebsiteInvoices`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetWebsiteInvoicesRequest struct via the builder pattern


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


## GetWebsiteList

> []WebsiteRow GetWebsiteList(ctx).Execute()

Get Website Listing



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
	resp, r, err := apiClient.WebhostingAPI.GetWebsiteList(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WebhostingAPI.GetWebsiteList``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetWebsiteList`: []WebsiteRow
	fmt.Fprintf(os.Stdout, "Response from `WebhostingAPI.GetWebsiteList`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetWebsiteListRequest struct via the builder pattern


### Return type

[**[]WebsiteRow**](WebsiteRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWebsitesBackups

> WebsiteBackups GetWebsitesBackups(ctx, id).Execute()

Get Website Backups



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
	id := int32(56) // int32 | The website service ID. Use `website_id` from `GET /websites`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.WebhostingAPI.GetWebsitesBackups(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WebhostingAPI.GetWebsitesBackups``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetWebsitesBackups`: WebsiteBackups
	fmt.Fprintf(os.Stdout, "Response from `WebhostingAPI.GetWebsitesBackups`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetWebsitesBackupsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**WebsiteBackups**](WebsiteBackups.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWebsitesLogin

> WebsiteLoginResponse GetWebsitesLogin(ctx, id).Execute()

Hosting Panel Auto Login



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
	id := int32(56) // int32 | The website service ID. Use `website_id` from `GET /websites`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.WebhostingAPI.GetWebsitesLogin(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WebhostingAPI.GetWebsitesLogin``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetWebsitesLogin`: WebsiteLoginResponse
	fmt.Fprintf(os.Stdout, "Response from `WebhostingAPI.GetWebsitesLogin`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetWebsitesLoginRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**WebsiteLoginResponse**](WebsiteLoginResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWebsitesWelcomeEmail

> SuccessTextResponse GetWebsitesWelcomeEmail(ctx, id).Execute()

Resend Website Welcome Email



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
	id := int32(56) // int32 | The website service ID. Use `website_id` from `GET /websites`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.WebhostingAPI.GetWebsitesWelcomeEmail(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WebhostingAPI.GetWebsitesWelcomeEmail``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetWebsitesWelcomeEmail`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `WebhostingAPI.GetWebsitesWelcomeEmail`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetWebsitesWelcomeEmailRequest struct via the builder pattern


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


## GettWebsiteReverseDns

> ReverseDnsEntries GettWebsiteReverseDns(ctx, id).Execute()

Get Website Reverse DNS



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
	id := int32(56) // int32 | The website service ID. Use `website_id` from `GET /websites`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.WebhostingAPI.GettWebsiteReverseDns(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WebhostingAPI.GettWebsiteReverseDns``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GettWebsiteReverseDns`: ReverseDnsEntries
	fmt.Fprintf(os.Stdout, "Response from `WebhostingAPI.GettWebsiteReverseDns`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGettWebsiteReverseDnsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PostWebsiteBuyIp

> PostWebsiteBuyIp200Response PostWebsiteBuyIp(ctx, id).PostWebsiteBuyIpRequest(postWebsiteBuyIpRequest).Execute()

Update Website IP DNS



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
	id := int32(56) // int32 | The website service ID. Use `website_id` from `GET /websites`.
	postWebsiteBuyIpRequest := *openapiclient.NewPostWebsiteBuyIpRequest() // PostWebsiteBuyIpRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.WebhostingAPI.PostWebsiteBuyIp(context.Background(), id).PostWebsiteBuyIpRequest(postWebsiteBuyIpRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WebhostingAPI.PostWebsiteBuyIp``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `PostWebsiteBuyIp`: PostWebsiteBuyIp200Response
	fmt.Fprintf(os.Stdout, "Response from `WebhostingAPI.PostWebsiteBuyIp`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiPostWebsiteBuyIpRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **postWebsiteBuyIpRequest** | [**PostWebsiteBuyIpRequest**](PostWebsiteBuyIpRequest.md) |  | 

### Return type

[**PostWebsiteBuyIp200Response**](PostWebsiteBuyIp200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PostWebsiteMigration

> PostWebsiteMigration200Response PostWebsiteMigration(ctx, id).PostWebsiteMigrationRequest(postWebsiteMigrationRequest).Execute()

Request Website Migration



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
	id := int32(56) // int32 | The website service ID. Use `website_id` from `GET /websites`.
	postWebsiteMigrationRequest := *openapiclient.NewPostWebsiteMigrationRequest() // PostWebsiteMigrationRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.WebhostingAPI.PostWebsiteMigration(context.Background(), id).PostWebsiteMigrationRequest(postWebsiteMigrationRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WebhostingAPI.PostWebsiteMigration``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `PostWebsiteMigration`: PostWebsiteMigration200Response
	fmt.Fprintf(os.Stdout, "Response from `WebhostingAPI.PostWebsiteMigration`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiPostWebsiteMigrationRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **postWebsiteMigrationRequest** | [**PostWebsiteMigrationRequest**](PostWebsiteMigrationRequest.md) |  | 

### Return type

[**PostWebsiteMigration200Response**](PostWebsiteMigration200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PostWebsitesReverseDns

> TextResponse PostWebsitesReverseDns(ctx, id).ReverseDnsEntries(reverseDnsEntries).Execute()

Update Website Reverse DNS



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
	id := int32(56) // int32 | The website service ID. Use `website_id` from `GET /websites`.
	reverseDnsEntries := *openapiclient.NewReverseDnsEntries() // ReverseDnsEntries | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.WebhostingAPI.PostWebsitesReverseDns(context.Background(), id).ReverseDnsEntries(reverseDnsEntries).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WebhostingAPI.PostWebsitesReverseDns``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `PostWebsitesReverseDns`: TextResponse
	fmt.Fprintf(os.Stdout, "Response from `WebhostingAPI.PostWebsitesReverseDns`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiPostWebsitesReverseDnsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **reverseDnsEntries** | [**ReverseDnsEntries**](ReverseDnsEntries.md) |  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PutWebsites

> PutWebsites(ctx).Execute()

Validate Webhosting Order



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
	r, err := apiClient.WebhostingAPI.PutWebsites(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WebhostingAPI.PutWebsites``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiPutWebsitesRequest struct via the builder pattern


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


## UpdateWebsiteInfo

> UpdateWebsiteInfo(ctx, id).Execute()

Update Website Order



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
	id := "id_example" // string | The website service ID. Use `website_id` from `GET /websites`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	r, err := apiClient.WebhostingAPI.UpdateWebsiteInfo(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WebhostingAPI.UpdateWebsiteInfo``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **string** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiUpdateWebsiteInfoRequest struct via the builder pattern


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


## WebhostingCancel

> WebhostingCancel200Response WebhostingCancel(ctx, id).Execute()

Cancel Website



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
	id := "123" // string | The website service ID. Use `website_id` from `GET /websites`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.WebhostingAPI.WebhostingCancel(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WebhostingAPI.WebhostingCancel``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `WebhostingCancel`: WebhostingCancel200Response
	fmt.Fprintf(os.Stdout, "Response from `WebhostingAPI.WebhostingCancel`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **string** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiWebhostingCancelRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**WebhostingCancel200Response**](WebhostingCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

