# \AccountAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ChangeAccountUsername**](AccountAPI.md#ChangeAccountUsername) | **Post** /account/username | Change Account Username
[**DeleteAccountOauthName**](AccountAPI.md#DeleteAccountOauthName) | **Delete** /account/oauth/{name} | Unlink OAuth Account
[**DeleteAccountTfa**](AccountAPI.md#DeleteAccountTfa) | **Delete** /account/2fa | Disable Two-Factor Authentication
[**DeleteIpLimit**](AccountAPI.md#DeleteIpLimit) | **Patch** /account/iplimits | Remove IP Access Restriction
[**GetAccountInfo**](AccountAPI.md#GetAccountInfo) | **Get** /account | Retrieve Account Details
[**GetAccountTfaSetup**](AccountAPI.md#GetAccountTfaSetup) | **Get** /account/2fa | Get Two-Factor Setup Data
[**GetHome**](AccountAPI.md#GetHome) | **Get** /home | Get Home Data
[**GetSearch**](AccountAPI.md#GetSearch) | **Get** /search | Search Autocomplete
[**Logout**](AccountAPI.md#Logout) | **Get** /logout | Log Out
[**LogoutAccountOauth**](AccountAPI.md#LogoutAccountOauth) | **Get** /account/oauth/{name}/logout | Logout of OAuth
[**UpdateAccountApiKey**](AccountAPI.md#UpdateAccountApiKey) | **Post** /account/apikey | Generate New API Key
[**UpdateAccountFeatures**](AccountAPI.md#UpdateAccountFeatures) | **Post** /account/features | Update Account Feature Flags
[**UpdateAccountInfo**](AccountAPI.md#UpdateAccountInfo) | **Post** /account | Update Account Information
[**UpdateAccountIpLimits**](AccountAPI.md#UpdateAccountIpLimits) | **Post** /account/iplimits | Add IP Access Restriction
[**UpdateAccountPassword**](AccountAPI.md#UpdateAccountPassword) | **Post** /account/password | Change Account Password
[**UpdateAccountSshKey**](AccountAPI.md#UpdateAccountSshKey) | **Post** /account/sshkey | Update SSH Keys
[**UpdateAccountTfa**](AccountAPI.md#UpdateAccountTfa) | **Post** /account/2fa | Enable Two-Factor Authentication



## ChangeAccountUsername

> TextResponse ChangeAccountUsername(ctx).Execute()

Change Account Username



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
	resp, r, err := apiClient.AccountAPI.ChangeAccountUsername(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.ChangeAccountUsername``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `ChangeAccountUsername`: TextResponse
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.ChangeAccountUsername`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiChangeAccountUsernameRequest struct via the builder pattern


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


## DeleteAccountOauthName

> SuccessTextResponse DeleteAccountOauthName(ctx, name).Execute()

Unlink OAuth Account



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
	name := "name_example" // string | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.AccountAPI.DeleteAccountOauthName(context.Background(), name).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.DeleteAccountOauthName``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `DeleteAccountOauthName`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.DeleteAccountOauthName`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**name** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiDeleteAccountOauthNameRequest struct via the builder pattern


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


## DeleteAccountTfa

> SuccessTextResponse DeleteAccountTfa(ctx).Execute()

Disable Two-Factor Authentication



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
	resp, r, err := apiClient.AccountAPI.DeleteAccountTfa(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.DeleteAccountTfa``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `DeleteAccountTfa`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.DeleteAccountTfa`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiDeleteAccountTfaRequest struct via the builder pattern


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


## DeleteIpLimit

> GenericResponse DeleteIpLimit(ctx).IpLimitRange(ipLimitRange).Execute()

Remove IP Access Restriction



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
	ipLimitRange := *openapiclient.NewIpLimitRange("1.2.3.0", "1.2.3.255") // IpLimitRange |  (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.AccountAPI.DeleteIpLimit(context.Background()).IpLimitRange(ipLimitRange).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.DeleteIpLimit``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `DeleteIpLimit`: GenericResponse
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.DeleteIpLimit`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiDeleteIpLimitRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ipLimitRange** | [**IpLimitRange**](IpLimitRange.md) |  | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAccountInfo

> AccountInfo GetAccountInfo(ctx).Execute()

Retrieve Account Details



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
	resp, r, err := apiClient.AccountAPI.GetAccountInfo(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.GetAccountInfo``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetAccountInfo`: AccountInfo
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.GetAccountInfo`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetAccountInfoRequest struct via the builder pattern


### Return type

[**AccountInfo**](AccountInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAccountTfaSetup

> GetAccountTfaSetup200Response GetAccountTfaSetup(ctx).Execute()

Get Two-Factor Setup Data



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
	resp, r, err := apiClient.AccountAPI.GetAccountTfaSetup(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.GetAccountTfaSetup``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetAccountTfaSetup`: GetAccountTfaSetup200Response
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.GetAccountTfaSetup`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetAccountTfaSetupRequest struct via the builder pattern


### Return type

[**GetAccountTfaSetup200Response**](GetAccountTfaSetup200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetHome

> Home GetHome(ctx).Execute()

Get Home Data



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
	resp, r, err := apiClient.AccountAPI.GetHome(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.GetHome``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetHome`: Home
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.GetHome`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetHomeRequest struct via the builder pattern


### Return type

[**Home**](Home.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetSearch

> SearchAutocompleteResponse GetSearch(ctx).Execute()

Search Autocomplete



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
	resp, r, err := apiClient.AccountAPI.GetSearch(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.GetSearch``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetSearch`: SearchAutocompleteResponse
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.GetSearch`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetSearchRequest struct via the builder pattern


### Return type

[**SearchAutocompleteResponse**](SearchAutocompleteResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## Logout

> SuccessTextResponse Logout(ctx).Execute()

Log Out



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
	resp, r, err := apiClient.AccountAPI.Logout(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.Logout``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `Logout`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.Logout`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiLogoutRequest struct via the builder pattern


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


## LogoutAccountOauth

> SuccessTextResponse LogoutAccountOauth(ctx, name).Execute()

Logout of OAuth



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
	name := "name_example" // string | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.AccountAPI.LogoutAccountOauth(context.Background(), name).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.LogoutAccountOauth``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `LogoutAccountOauth`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.LogoutAccountOauth`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**name** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiLogoutAccountOauthRequest struct via the builder pattern


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


## UpdateAccountApiKey

> SuccessTextResponse UpdateAccountApiKey(ctx).Execute()

Generate New API Key



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
	resp, r, err := apiClient.AccountAPI.UpdateAccountApiKey(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.UpdateAccountApiKey``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateAccountApiKey`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.UpdateAccountApiKey`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiUpdateAccountApiKeyRequest struct via the builder pattern


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


## UpdateAccountFeatures

> SuccessTextResponse UpdateAccountFeatures(ctx).DisableReset(disableReset).DisableReinstall(disableReinstall).Execute()

Update Account Feature Flags



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
	disableReset := int32(56) // int32 |  (optional)
	disableReinstall := int32(56) // int32 |  (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.AccountAPI.UpdateAccountFeatures(context.Background()).DisableReset(disableReset).DisableReinstall(disableReinstall).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.UpdateAccountFeatures``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateAccountFeatures`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.UpdateAccountFeatures`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiUpdateAccountFeaturesRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **disableReset** | **int32** |  | 
 **disableReinstall** | **int32** |  | 

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


## UpdateAccountInfo

> SuccessTextResponse UpdateAccountInfo(ctx).Name(name).Address(address).City(city).State(state).Zip(zip).Country(country).Phone(phone).Company(company).Address2(address2).Locale(locale).EmailInvoices(emailInvoices).EmailAbuse(emailAbuse).DisableReset(disableReset).DisableReinstall(disableReinstall).DisableServerNotifications(disableServerNotifications).DisableEmailNotifications(disableEmailNotifications).Gstin(gstin).Execute()

Update Account Information



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
	name := "name_example" // string | Your name.
	address := "address_example" // string | Your address.
	city := "city_example" // string | Your city.
	state := "state_example" // string | Your state.
	zip := "zip_example" // string | Your ZIP code.
	country := "country_example" // string | Your country.
	phone := "phone_example" // string | Your phone number.
	company := "company_example" // string | Your company name. (optional)
	address2 := "address2_example" // string | Additional address information. (optional)
	locale := "locale_example" // string | Your preferred locale. (optional)
	emailInvoices := "emailInvoices_example" // string | Your email for invoice notifications. (optional)
	emailAbuse := "emailAbuse_example" // string | Your email for abuse notifications. (optional)
	disableReset := true // bool | Set to `true` to disable account resets, or `false` to enable them. (optional)
	disableReinstall := true // bool | Set to `true` to disable server reinstalls, or `false` to enable them. (optional)
	disableServerNotifications := true // bool | Set to `true` to disable server notifications, or `false` to enable them. (optional)
	disableEmailNotifications := true // bool | Set to `true` to disable email notifications, or `false` to enable them. (optional)
	gstin := "gstin_example" // string | Your GST identification number (if applicable). (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.AccountAPI.UpdateAccountInfo(context.Background()).Name(name).Address(address).City(city).State(state).Zip(zip).Country(country).Phone(phone).Company(company).Address2(address2).Locale(locale).EmailInvoices(emailInvoices).EmailAbuse(emailAbuse).DisableReset(disableReset).DisableReinstall(disableReinstall).DisableServerNotifications(disableServerNotifications).DisableEmailNotifications(disableEmailNotifications).Gstin(gstin).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.UpdateAccountInfo``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateAccountInfo`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.UpdateAccountInfo`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiUpdateAccountInfoRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string** | Your name. | 
 **address** | **string** | Your address. | 
 **city** | **string** | Your city. | 
 **state** | **string** | Your state. | 
 **zip** | **string** | Your ZIP code. | 
 **country** | **string** | Your country. | 
 **phone** | **string** | Your phone number. | 
 **company** | **string** | Your company name. | 
 **address2** | **string** | Additional address information. | 
 **locale** | **string** | Your preferred locale. | 
 **emailInvoices** | **string** | Your email for invoice notifications. | 
 **emailAbuse** | **string** | Your email for abuse notifications. | 
 **disableReset** | **bool** | Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them. | 
 **disableReinstall** | **bool** | Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them. | 
 **disableServerNotifications** | **bool** | Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them. | 
 **disableEmailNotifications** | **bool** | Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them. | 
 **gstin** | **string** | Your GST identification number (if applicable). | 

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


## UpdateAccountIpLimits

> SuccessTextResponse UpdateAccountIpLimits(ctx).Start(start).End(end).Execute()

Add IP Access Restriction



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
	start := "start_example" // string | The begining (or first) IP address in the range.
	end := "end_example" // string | The ending (or last) IP address in the range.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.AccountAPI.UpdateAccountIpLimits(context.Background()).Start(start).End(end).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.UpdateAccountIpLimits``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateAccountIpLimits`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.UpdateAccountIpLimits`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiUpdateAccountIpLimitsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **start** | **string** | The begining (or first) IP address in the range. | 
 **end** | **string** | The ending (or last) IP address in the range. | 

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


## UpdateAccountPassword

> TextResponse UpdateAccountPassword(ctx).Password(password).Execute()

Change Account Password



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
	password := "password_example" // string | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.AccountAPI.UpdateAccountPassword(context.Background()).Password(password).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.UpdateAccountPassword``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateAccountPassword`: TextResponse
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.UpdateAccountPassword`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiUpdateAccountPasswordRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **password** | **string** |  | 

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


## UpdateAccountSshKey

> SuccessTextResponse UpdateAccountSshKey(ctx).SshKey(sshKey).Execute()

Update SSH Keys



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
	sshKey := "sshKey_example" // string |  (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.AccountAPI.UpdateAccountSshKey(context.Background()).SshKey(sshKey).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.UpdateAccountSshKey``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateAccountSshKey`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.UpdateAccountSshKey`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiUpdateAccountSshKeyRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sshKey** | **string** |  | 

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


## UpdateAccountTfa

> SuccessTextResponse UpdateAccountTfa(ctx).Var2faGoogleCode(var2faGoogleCode).Execute()

Enable Two-Factor Authentication



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
	var2faGoogleCode := "var2faGoogleCode_example" // string | The 6-digit verification code from your authenticator app.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.AccountAPI.UpdateAccountTfa(context.Background()).Var2faGoogleCode(var2faGoogleCode).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `AccountAPI.UpdateAccountTfa``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateAccountTfa`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `AccountAPI.UpdateAccountTfa`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiUpdateAccountTfaRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **var2faGoogleCode** | **string** | The 6-digit verification code from your authenticator app. | 

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

