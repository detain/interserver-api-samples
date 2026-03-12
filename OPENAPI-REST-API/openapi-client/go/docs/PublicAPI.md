# \PublicAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetCaptcha**](PublicAPI.md#GetCaptcha) | **Get** /captcha | Get Captcha Challenge
[**GetCountries**](PublicAPI.md#GetCountries) | **Get** /account/countries | Get Countries
[**GetInfo**](PublicAPI.md#GetInfo) | **Get** /info | Get Server Info
[**GetLoginInfo**](PublicAPI.md#GetLoginInfo) | **Get** /login | Get Login Info
[**GetMPServers**](PublicAPI.md#GetMPServers) | **Get** /buy_now_servers_list | List Marketplace Servers
[**GetOauthRedirect**](PublicAPI.md#GetOauthRedirect) | **Get** /oauth | Get OAuth Redirect URL
[**GetTimezones**](PublicAPI.md#GetTimezones) | **Get** /account/timezones | Get Available Timezones
[**PatchOauthTwoFactor**](PublicAPI.md#PatchOauthTwoFactor) | **Patch** /oauth | Complete OAuth Two-Factor Verification
[**PingServer**](PublicAPI.md#PingServer) | **Get** /ping | Ping Server
[**PostOauthCallback**](PublicAPI.md#PostOauthCallback) | **Post** /oauth | OAuth Callback
[**SubmitLogin**](PublicAPI.md#SubmitLogin) | **Post** /login | Submit Login Information
[**SubmitSignup**](PublicAPI.md#SubmitSignup) | **Post** /signup | Submit Signup Information



## GetCaptcha

> CaptchaResponse GetCaptcha(ctx).Execute()

Get Captcha Challenge



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
	resp, r, err := apiClient.PublicAPI.GetCaptcha(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `PublicAPI.GetCaptcha``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetCaptcha`: CaptchaResponse
	fmt.Fprintf(os.Stdout, "Response from `PublicAPI.GetCaptcha`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetCaptchaRequest struct via the builder pattern


### Return type

[**CaptchaResponse**](CaptchaResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetCountries

> map[string]interface{} GetCountries(ctx).FetchBy(fetchBy).Execute()

Get Countries



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
	fetchBy := "fetchBy_example" // string | Get countries by iso2 or iso3 or numcode (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.PublicAPI.GetCountries(context.Background()).FetchBy(fetchBy).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `PublicAPI.GetCountries``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetCountries`: map[string]interface{}
	fmt.Fprintf(os.Stdout, "Response from `PublicAPI.GetCountries`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiGetCountriesRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fetchBy** | **string** | Get countries by iso2 or iso3 or numcode | 

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


## GetInfo

> ServicesInfo GetInfo(ctx).Execute()

Get Server Info



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
	resp, r, err := apiClient.PublicAPI.GetInfo(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `PublicAPI.GetInfo``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetInfo`: ServicesInfo
	fmt.Fprintf(os.Stdout, "Response from `PublicAPI.GetInfo`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetInfoRequest struct via the builder pattern


### Return type

[**ServicesInfo**](ServicesInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetLoginInfo

> LoginInfo GetLoginInfo(ctx).Execute()

Get Login Info



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
	resp, r, err := apiClient.PublicAPI.GetLoginInfo(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `PublicAPI.GetLoginInfo``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetLoginInfo`: LoginInfo
	fmt.Fprintf(os.Stdout, "Response from `PublicAPI.GetLoginInfo`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetLoginInfoRequest struct via the builder pattern


### Return type

[**LoginInfo**](LoginInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetMPServers

> BuyItNowList GetMPServers(ctx).Execute()

List Marketplace Servers



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
	resp, r, err := apiClient.PublicAPI.GetMPServers(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `PublicAPI.GetMPServers``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetMPServers`: BuyItNowList
	fmt.Fprintf(os.Stdout, "Response from `PublicAPI.GetMPServers`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetMPServersRequest struct via the builder pattern


### Return type

[**BuyItNowList**](BuyItNowList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetOauthRedirect

> GetOauthRedirect200Response GetOauthRedirect(ctx).Provider(provider).Execute()

Get OAuth Redirect URL



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
	provider := "provider_example" // string | The OAuth provider name (e.g. `Google`).

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.PublicAPI.GetOauthRedirect(context.Background()).Provider(provider).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `PublicAPI.GetOauthRedirect``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetOauthRedirect`: GetOauthRedirect200Response
	fmt.Fprintf(os.Stdout, "Response from `PublicAPI.GetOauthRedirect`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiGetOauthRedirectRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **string** | The OAuth provider name (e.g. &#x60;Google&#x60;). | 

### Return type

[**GetOauthRedirect200Response**](GetOauthRedirect200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetTimezones

> []string GetTimezones(ctx).Execute()

Get Available Timezones



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
	resp, r, err := apiClient.PublicAPI.GetTimezones(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `PublicAPI.GetTimezones``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetTimezones`: []string
	fmt.Fprintf(os.Stdout, "Response from `PublicAPI.GetTimezones`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetTimezonesRequest struct via the builder pattern


### Return type

**[]string**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PatchOauthTwoFactor

> PatchOauthTwoFactor200Response PatchOauthTwoFactor(ctx).PatchOauthTwoFactorRequest(patchOauthTwoFactorRequest).Execute()

Complete OAuth Two-Factor Verification



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
	patchOauthTwoFactorRequest := *openapiclient.NewPatchOauthTwoFactorRequest(int32(123), "Code_example") // PatchOauthTwoFactorRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.PublicAPI.PatchOauthTwoFactor(context.Background()).PatchOauthTwoFactorRequest(patchOauthTwoFactorRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `PublicAPI.PatchOauthTwoFactor``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `PatchOauthTwoFactor`: PatchOauthTwoFactor200Response
	fmt.Fprintf(os.Stdout, "Response from `PublicAPI.PatchOauthTwoFactor`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiPatchOauthTwoFactorRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **patchOauthTwoFactorRequest** | [**PatchOauthTwoFactorRequest**](PatchOauthTwoFactorRequest.md) |  | 

### Return type

[**PatchOauthTwoFactor200Response**](PatchOauthTwoFactor200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PingServer

> string PingServer(ctx).Execute()

Ping Server



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
	resp, r, err := apiClient.PublicAPI.PingServer(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `PublicAPI.PingServer``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `PingServer`: string
	fmt.Fprintf(os.Stdout, "Response from `PublicAPI.PingServer`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiPingServerRequest struct via the builder pattern


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


## PostOauthCallback

> PostOauthCallback200Response PostOauthCallback(ctx).Provider(provider).PostOauthCallbackRequest(postOauthCallbackRequest).Execute()

OAuth Callback



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
	provider := "provider_example" // string | The OAuth provider name (e.g. `Google`).
	postOauthCallbackRequest := *openapiclient.NewPostOauthCallbackRequest() // PostOauthCallbackRequest |  (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.PublicAPI.PostOauthCallback(context.Background()).Provider(provider).PostOauthCallbackRequest(postOauthCallbackRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `PublicAPI.PostOauthCallback``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `PostOauthCallback`: PostOauthCallback200Response
	fmt.Fprintf(os.Stdout, "Response from `PublicAPI.PostOauthCallback`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiPostOauthCallbackRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **provider** | **string** | The OAuth provider name (e.g. &#x60;Google&#x60;). | 
 **postOauthCallbackRequest** | [**PostOauthCallbackRequest**](PostOauthCallbackRequest.md) |  | 

### Return type

[**PostOauthCallback200Response**](PostOauthCallback200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## SubmitLogin

> LoginSuccessResponse SubmitLogin(ctx).Login(login).Passwd(passwd).Remember(remember).GRecaptchaResponse(gRecaptchaResponse).Tfa(tfa).Execute()

Submit Login Information



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
	login := "login_example" // string | 
	passwd := "passwd_example" // string | 
	remember := "remember_example" // string |  (optional)
	gRecaptchaResponse := *openapiclient.NewLoginSubmissionExampleGRecaptchaResponse() // LoginSubmissionExampleGRecaptchaResponse |  (optional)
	tfa := "tfa_example" // string | Two Factor Authentication Response. (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.PublicAPI.SubmitLogin(context.Background()).Login(login).Passwd(passwd).Remember(remember).GRecaptchaResponse(gRecaptchaResponse).Tfa(tfa).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `PublicAPI.SubmitLogin``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `SubmitLogin`: LoginSuccessResponse
	fmt.Fprintf(os.Stdout, "Response from `PublicAPI.SubmitLogin`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiSubmitLoginRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **login** | **string** |  | 
 **passwd** | **string** |  | 
 **remember** | **string** |  | 
 **gRecaptchaResponse** | [**LoginSubmissionExampleGRecaptchaResponse**](LoginSubmissionExampleGRecaptchaResponse.md) |  | 
 **tfa** | **string** | Two Factor Authentication Response. | 

### Return type

[**LoginSuccessResponse**](LoginSuccessResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## SubmitSignup

> SubmitSignup(ctx).LoginSubmissionExample(loginSubmissionExample).Execute()

Submit Signup Information



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
	loginSubmissionExample := *openapiclient.NewLoginSubmissionExample("Login_example", "Passwd_example") // LoginSubmissionExample |  (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	r, err := apiClient.PublicAPI.SubmitSignup(context.Background()).LoginSubmissionExample(loginSubmissionExample).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `PublicAPI.SubmitSignup``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiSubmitSignupRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **loginSubmissionExample** | [**LoginSubmissionExample**](LoginSubmissionExample.md) |  | 

### Return type

 (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

