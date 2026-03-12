# \BackupsAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddBackup**](BackupsAPI.md#AddBackup) | **Post** /backups/order | Place Backup Order
[**CancelBackup**](BackupsAPI.md#CancelBackup) | **Delete** /backups/{id} | Cancel Backup Service
[**GetBackupInfo**](BackupsAPI.md#GetBackupInfo) | **Get** /backups/{id} | Get Backup Service Details
[**GetBackupInvoices**](BackupsAPI.md#GetBackupInvoices) | **Get** /backups/{id}/invoices | Get Backup Order Invoices
[**GetBackupLogin**](BackupsAPI.md#GetBackupLogin) | **Get** /backups/{id}/login | Get Backup Storage Panel Login
[**GetBackupsList**](BackupsAPI.md#GetBackupsList) | **Get** /backups | List Backup Services
[**GetBackupsWelcomeEmail**](BackupsAPI.md#GetBackupsWelcomeEmail) | **Get** /backups/{id}/welcome_email | Resend Backup Welcome Email
[**GetNewBackup**](BackupsAPI.md#GetNewBackup) | **Get** /backups/order | Get Backup Order Form Data
[**UpdateBackupInfo**](BackupsAPI.md#UpdateBackupInfo) | **Post** /backups/{id} | Update Backup Information
[**ValidateBackupOrder**](BackupsAPI.md#ValidateBackupOrder) | **Put** /backups/order | Validate Backup Order



## AddBackup

> BackupOrderPostResponse AddBackup(ctx).ValidateOnly(validateOnly).ServiceType(serviceType).Coupon(coupon).Execute()

Place Backup Order



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
	validateOnly := true // bool |  (optional)
	serviceType := int32(56) // int32 |  (optional)
	coupon := "coupon_example" // string |  (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BackupsAPI.AddBackup(context.Background()).ValidateOnly(validateOnly).ServiceType(serviceType).Coupon(coupon).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BackupsAPI.AddBackup``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `AddBackup`: BackupOrderPostResponse
	fmt.Fprintf(os.Stdout, "Response from `BackupsAPI.AddBackup`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiAddBackupRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **validateOnly** | **bool** |  | 
 **serviceType** | **int32** |  | 
 **coupon** | **string** |  | 

### Return type

[**BackupOrderPostResponse**](BackupOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CancelBackup

> CancelBackup200Response CancelBackup(ctx, id).Execute()

Cancel Backup Service



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
	id := int32(56) // int32 | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BackupsAPI.CancelBackup(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BackupsAPI.CancelBackup``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `CancelBackup`: CancelBackup200Response
	fmt.Fprintf(os.Stdout, "Response from `BackupsAPI.CancelBackup`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Other Parameters

Other parameters are passed through a pointer to a apiCancelBackupRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**CancelBackup200Response**](CancelBackup200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetBackupInfo

> Backup GetBackupInfo(ctx, id).Execute()

Get Backup Service Details



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
	id := int32(56) // int32 | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BackupsAPI.GetBackupInfo(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BackupsAPI.GetBackupInfo``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetBackupInfo`: Backup
	fmt.Fprintf(os.Stdout, "Response from `BackupsAPI.GetBackupInfo`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetBackupInfoRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**Backup**](Backup.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetBackupInvoices

> ChargeInvoiceRows GetBackupInvoices(ctx, id).Execute()

Get Backup Order Invoices



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
	id := int32(56) // int32 | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BackupsAPI.GetBackupInvoices(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BackupsAPI.GetBackupInvoices``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetBackupInvoices`: ChargeInvoiceRows
	fmt.Fprintf(os.Stdout, "Response from `BackupsAPI.GetBackupInvoices`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetBackupInvoicesRequest struct via the builder pattern


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


## GetBackupLogin

> BackupLoginResponse GetBackupLogin(ctx, id).Execute()

Get Backup Storage Panel Login



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
	id := int32(56) // int32 | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BackupsAPI.GetBackupLogin(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BackupsAPI.GetBackupLogin``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetBackupLogin`: BackupLoginResponse
	fmt.Fprintf(os.Stdout, "Response from `BackupsAPI.GetBackupLogin`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetBackupLoginRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**BackupLoginResponse**](BackupLoginResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetBackupsList

> []BackupRow GetBackupsList(ctx).Execute()

List Backup Services



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
	resp, r, err := apiClient.BackupsAPI.GetBackupsList(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BackupsAPI.GetBackupsList``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetBackupsList`: []BackupRow
	fmt.Fprintf(os.Stdout, "Response from `BackupsAPI.GetBackupsList`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetBackupsListRequest struct via the builder pattern


### Return type

[**[]BackupRow**](BackupRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetBackupsWelcomeEmail

> SuccessTextResponse GetBackupsWelcomeEmail(ctx, id).Execute()

Resend Backup Welcome Email



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
	id := int32(56) // int32 | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BackupsAPI.GetBackupsWelcomeEmail(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BackupsAPI.GetBackupsWelcomeEmail``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetBackupsWelcomeEmail`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `BackupsAPI.GetBackupsWelcomeEmail`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetBackupsWelcomeEmailRequest struct via the builder pattern


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


## GetNewBackup

> BackupsOrder GetNewBackup(ctx).Execute()

Get Backup Order Form Data



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
	resp, r, err := apiClient.BackupsAPI.GetNewBackup(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BackupsAPI.GetNewBackup``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetNewBackup`: BackupsOrder
	fmt.Fprintf(os.Stdout, "Response from `BackupsAPI.GetNewBackup`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetNewBackupRequest struct via the builder pattern


### Return type

[**BackupsOrder**](BackupsOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateBackupInfo

> UpdateBackupInfo(ctx, id).Execute()

Update Backup Information



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
	id := int32(56) // int32 | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	r, err := apiClient.BackupsAPI.UpdateBackupInfo(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BackupsAPI.UpdateBackupInfo``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | 

### Other Parameters

Other parameters are passed through a pointer to a apiUpdateBackupInfoRequest struct via the builder pattern


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


## ValidateBackupOrder

> BackupOrderPutResponse ValidateBackupOrder(ctx).ValidateOnly(validateOnly).ServiceType(serviceType).Coupon(coupon).Execute()

Validate Backup Order



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
	validateOnly := true // bool |  (optional)
	serviceType := int32(56) // int32 |  (optional)
	coupon := "coupon_example" // string |  (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.BackupsAPI.ValidateBackupOrder(context.Background()).ValidateOnly(validateOnly).ServiceType(serviceType).Coupon(coupon).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `BackupsAPI.ValidateBackupOrder``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `ValidateBackupOrder`: BackupOrderPutResponse
	fmt.Fprintf(os.Stdout, "Response from `BackupsAPI.ValidateBackupOrder`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiValidateBackupOrderRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **validateOnly** | **bool** |  | 
 **serviceType** | **int32** |  | 
 **coupon** | **string** |  | 

### Return type

[**BackupOrderPutResponse**](BackupOrderPutResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

