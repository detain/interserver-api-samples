# \DomainsAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddDomain**](DomainsAPI.md#AddDomain) | **Post** /domains/order | Place Domain Order
[**AddDomainDnssec**](DomainsAPI.md#AddDomainDnssec) | **Post** /domains/{id}/dnssec | Add Domain DNSSEC Records
[**AddDomainNameserver**](DomainsAPI.md#AddDomainNameserver) | **Post** /domains/{id}/nameservers | Add Registered Nameserver
[**CancelDomain**](DomainsAPI.md#CancelDomain) | **Delete** /domains/{id} | Cancel Domain Order
[**DeleteDomainDnssec**](DomainsAPI.md#DeleteDomainDnssec) | **Delete** /domains/{id}/dnssec | Remove Domain DNSSEC Records
[**DeleteDomainNameserver**](DomainsAPI.md#DeleteDomainNameserver) | **Delete** /domains/{id}/nameservers | Delete Registered Nameserver
[**GetDomainContact**](DomainsAPI.md#GetDomainContact) | **Get** /domains/{id}/contact | Get Domain Contact Details
[**GetDomainDnssec**](DomainsAPI.md#GetDomainDnssec) | **Get** /domains/{id}/dnssec | Get Domain DNSSEC Records
[**GetDomainInfo**](DomainsAPI.md#GetDomainInfo) | **Get** /domains/{id} | Get Domain Order
[**GetDomainInvoices**](DomainsAPI.md#GetDomainInvoices) | **Get** /domains/{id}/invoices | Get Domain Invoices
[**GetDomainLookup**](DomainsAPI.md#GetDomainLookup) | **Get** /domains/lookup/{name} | Lookup Domain Availability and Pricing
[**GetDomainNameservers**](DomainsAPI.md#GetDomainNameservers) | **Get** /domains/{id}/nameservers | List Registered Nameservers
[**GetDomainOrderFields**](DomainsAPI.md#GetDomainOrderFields) | **Get** /domains/order/{domain}/{regType} | Get Domain Order Fields
[**GetDomainOrderSearchResults**](DomainsAPI.md#GetDomainOrderSearchResults) | **Get** /domains/order/{domain} | Get Domain Order Search Results
[**GetDomainRenewal**](DomainsAPI.md#GetDomainRenewal) | **Get** /domains/{id}/renew | Start Domain Renewal Flow
[**GetDomainSearch**](DomainsAPI.md#GetDomainSearch) | **Get** /domains/search/{name} | Search Domain Suggestions
[**GetDomainTransfer**](DomainsAPI.md#GetDomainTransfer) | **Get** /domains/{id}/transfer | Start Domain Transfer Flow
[**GetDomainWhoisPrivacy**](DomainsAPI.md#GetDomainWhoisPrivacy) | **Get** /domains/{id}/whois | Get Whois Privacy Status
[**GetDomainsList**](DomainsAPI.md#GetDomainsList) | **Get** /domains | List Domain Orders
[**GetDomainsWelcomeEmail**](DomainsAPI.md#GetDomainsWelcomeEmail) | **Get** /domains/{id}/welcome_email | Resend Domain Welcome Email
[**GetNewDomain**](DomainsAPI.md#GetNewDomain) | **Get** /domains/order | Get Domain Ordering Information
[**PatchDomains**](DomainsAPI.md#PatchDomains) | **Patch** /domains/order | Validate Domain Order
[**PostDomainRenewal**](DomainsAPI.md#PostDomainRenewal) | **Post** /domains/{id}/renew | Request Domain Renewal
[**PostDomainTransfer**](DomainsAPI.md#PostDomainTransfer) | **Post** /domains/{id}/transfer | Request Domain Transfer
[**PutDomains**](DomainsAPI.md#PutDomains) | **Put** /domains/order | Domain Order Search
[**UpdateDomainContact**](DomainsAPI.md#UpdateDomainContact) | **Post** /domains/{id}/contact | Update Domain Contact Details
[**UpdateDomainInfo**](DomainsAPI.md#UpdateDomainInfo) | **Post** /domains/{id} | Update Domain Order
[**UpdateDomainNameservers**](DomainsAPI.md#UpdateDomainNameservers) | **Put** /domains/{id}/nameservers | Replace Nameserver Set
[**UpdateDomainWhoisPrivacy**](DomainsAPI.md#UpdateDomainWhoisPrivacy) | **Post** /domains/{id}/whois | Update Whois Privacy



## AddDomain

> AddDomain(ctx).Execute()

Place Domain Order



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
	r, err := apiClient.DomainsAPI.AddDomain(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.AddDomain``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiAddDomainRequest struct via the builder pattern


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


## AddDomainDnssec

> SuccessTextResponse AddDomainDnssec(ctx, id).DomainDnssecRequest(domainDnssecRequest).Execute()

Add Domain DNSSEC Records



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.
	domainDnssecRequest := *openapiclient.NewDomainDnssecRequest() // DomainDnssecRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.AddDomainDnssec(context.Background(), id).DomainDnssecRequest(domainDnssecRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.AddDomainDnssec``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `AddDomainDnssec`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.AddDomainDnssec`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiAddDomainDnssecRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **domainDnssecRequest** | [**DomainDnssecRequest**](DomainDnssecRequest.md) |  | 

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


## AddDomainNameserver

> TextResponse AddDomainNameserver(ctx, id).DomainNameserverPostRequest(domainNameserverPostRequest).Execute()

Add Registered Nameserver



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.
	domainNameserverPostRequest := *openapiclient.NewDomainNameserverPostRequest("ns1.host.com", "1.2.3.4Get") // DomainNameserverPostRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.AddDomainNameserver(context.Background(), id).DomainNameserverPostRequest(domainNameserverPostRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.AddDomainNameserver``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `AddDomainNameserver`: TextResponse
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.AddDomainNameserver`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiAddDomainNameserverRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **domainNameserverPostRequest** | [**DomainNameserverPostRequest**](DomainNameserverPostRequest.md) |  | 

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


## CancelDomain

> CancelDomain200Response CancelDomain(ctx, id).Execute()

Cancel Domain Order



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.CancelDomain(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.CancelDomain``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `CancelDomain`: CancelDomain200Response
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.CancelDomain`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiCancelDomainRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**CancelDomain200Response**](CancelDomain200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteDomainDnssec

> SuccessTextResponse DeleteDomainDnssec(ctx, id).Action(action).Execute()

Remove Domain DNSSEC Records



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.
	action := "action_example" // string | Set to `delete` to remove all DNSSEC records.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.DeleteDomainDnssec(context.Background(), id).Action(action).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.DeleteDomainDnssec``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `DeleteDomainDnssec`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.DeleteDomainDnssec`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiDeleteDomainDnssecRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **action** | **string** | Set to &#x60;delete&#x60; to remove all DNSSEC records. | 

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


## DeleteDomainNameserver

> TextResponse DeleteDomainNameserver(ctx, id).Index(index).Execute()

Delete Registered Nameserver



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.
	index := int32(56) // int32 | The index of the registered nameserver from the registered nameservers list to delete.  

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.DeleteDomainNameserver(context.Background(), id).Index(index).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.DeleteDomainNameserver``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `DeleteDomainNameserver`: TextResponse
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.DeleteDomainNameserver`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiDeleteDomainNameserverRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **index** | **int32** | The index of the registered nameserver from the registered nameservers list to delete.   | 

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


## GetDomainContact

> DomainContactDetails GetDomainContact(ctx, id).Execute()

Get Domain Contact Details



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.GetDomainContact(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.GetDomainContact``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetDomainContact`: DomainContactDetails
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.GetDomainContact`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetDomainContactRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**DomainContactDetails**](DomainContactDetails.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDomainDnssec

> DomainDnssecRecords GetDomainDnssec(ctx, id).Execute()

Get Domain DNSSEC Records



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.GetDomainDnssec(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.GetDomainDnssec``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetDomainDnssec`: DomainDnssecRecords
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.GetDomainDnssec`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetDomainDnssecRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**DomainDnssecRecords**](DomainDnssecRecords.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDomainInfo

> Domain GetDomainInfo(ctx, id).Execute()

Get Domain Order



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.GetDomainInfo(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.GetDomainInfo``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetDomainInfo`: Domain
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.GetDomainInfo`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetDomainInfoRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**Domain**](Domain.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDomainInvoices

> ChargeInvoiceRows GetDomainInvoices(ctx, id).Execute()

Get Domain Invoices



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.GetDomainInvoices(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.GetDomainInvoices``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetDomainInvoices`: ChargeInvoiceRows
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.GetDomainInvoices`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetDomainInvoicesRequest struct via the builder pattern


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


## GetDomainLookup

> DomainLookupResponse GetDomainLookup(ctx, name).Execute()

Lookup Domain Availability and Pricing



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
	name := "name_example" // string | The full domain name to look up (for example `example.com`).

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.GetDomainLookup(context.Background(), name).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.GetDomainLookup``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetDomainLookup`: DomainLookupResponse
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.GetDomainLookup`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**name** | **string** | The full domain name to look up (for example &#x60;example.com&#x60;). | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetDomainLookupRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**DomainLookupResponse**](DomainLookupResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDomainNameservers

> DomainNameserverGetResponse GetDomainNameservers(ctx, id).Execute()

List Registered Nameservers



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.GetDomainNameservers(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.GetDomainNameservers``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetDomainNameservers`: DomainNameserverGetResponse
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.GetDomainNameservers`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetDomainNameserversRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**DomainNameserverGetResponse**](DomainNameserverGetResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDomainOrderFields

> GetDomainOrderFields(ctx, domain, regType).Execute()

Get Domain Order Fields



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
	domain := "domain_example" // string | The fully qualified domain name (e.g. `example.com`).
	regType := "regType_example" // string | The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	r, err := apiClient.DomainsAPI.GetDomainOrderFields(context.Background(), domain, regType).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.GetDomainOrderFields``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**domain** | **string** | The fully qualified domain name (e.g. &#x60;example.com&#x60;). | 
**regType** | **string** | The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetDomainOrderFieldsRequest struct via the builder pattern


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


## GetDomainOrderSearchResults

> GetDomainOrderSearchResults(ctx, domain).Execute()

Get Domain Order Search Results



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
	domain := "domain_example" // string | The fully qualified domain name to look up (e.g. `example.com`).

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	r, err := apiClient.DomainsAPI.GetDomainOrderSearchResults(context.Background(), domain).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.GetDomainOrderSearchResults``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**domain** | **string** | The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;). | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetDomainOrderSearchResultsRequest struct via the builder pattern


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


## GetDomainRenewal

> SuccessTextResponse GetDomainRenewal(ctx, id).Execute()

Start Domain Renewal Flow



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.GetDomainRenewal(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.GetDomainRenewal``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetDomainRenewal`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.GetDomainRenewal`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetDomainRenewalRequest struct via the builder pattern


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


## GetDomainSearch

> DomainSearchResponse GetDomainSearch(ctx, name).Execute()

Search Domain Suggestions



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
	name := "name_example" // string | The base domain name to search (for example `example` or `example.com`).

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.GetDomainSearch(context.Background(), name).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.GetDomainSearch``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetDomainSearch`: DomainSearchResponse
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.GetDomainSearch`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**name** | **string** | The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;). | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetDomainSearchRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**DomainSearchResponse**](DomainSearchResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDomainTransfer

> SuccessTextResponse GetDomainTransfer(ctx, id).Execute()

Start Domain Transfer Flow



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.GetDomainTransfer(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.GetDomainTransfer``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetDomainTransfer`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.GetDomainTransfer`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetDomainTransferRequest struct via the builder pattern


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


## GetDomainWhoisPrivacy

> SuccessTextResponse GetDomainWhoisPrivacy(ctx, id).Execute()

Get Whois Privacy Status



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.GetDomainWhoisPrivacy(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.GetDomainWhoisPrivacy``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetDomainWhoisPrivacy`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.GetDomainWhoisPrivacy`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetDomainWhoisPrivacyRequest struct via the builder pattern


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


## GetDomainsList

> []DomainRow GetDomainsList(ctx).Execute()

List Domain Orders



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
	resp, r, err := apiClient.DomainsAPI.GetDomainsList(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.GetDomainsList``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetDomainsList`: []DomainRow
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.GetDomainsList`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetDomainsListRequest struct via the builder pattern


### Return type

[**[]DomainRow**](DomainRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDomainsWelcomeEmail

> SuccessTextResponse GetDomainsWelcomeEmail(ctx, id).Execute()

Resend Domain Welcome Email



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.GetDomainsWelcomeEmail(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.GetDomainsWelcomeEmail``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetDomainsWelcomeEmail`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.GetDomainsWelcomeEmail`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetDomainsWelcomeEmailRequest struct via the builder pattern


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


## GetNewDomain

> DomainOrder GetNewDomain(ctx).Execute()

Get Domain Ordering Information



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
	resp, r, err := apiClient.DomainsAPI.GetNewDomain(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.GetNewDomain``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetNewDomain`: DomainOrder
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.GetNewDomain`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiGetNewDomainRequest struct via the builder pattern


### Return type

[**DomainOrder**](DomainOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PatchDomains

> PatchDomains(ctx).Execute()

Validate Domain Order



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
	r, err := apiClient.DomainsAPI.PatchDomains(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.PatchDomains``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiPatchDomainsRequest struct via the builder pattern


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


## PostDomainRenewal

> SuccessTextResponse PostDomainRenewal(ctx, id).Execute()

Request Domain Renewal



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.PostDomainRenewal(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.PostDomainRenewal``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `PostDomainRenewal`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.PostDomainRenewal`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiPostDomainRenewalRequest struct via the builder pattern


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


## PostDomainTransfer

> SuccessTextResponse PostDomainTransfer(ctx, id).Execute()

Request Domain Transfer



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.PostDomainTransfer(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.PostDomainTransfer``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `PostDomainTransfer`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.PostDomainTransfer`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiPostDomainTransferRequest struct via the builder pattern


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


## PutDomains

> PutDomains(ctx).Execute()

Domain Order Search



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
	r, err := apiClient.DomainsAPI.PutDomains(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.PutDomains``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiPutDomainsRequest struct via the builder pattern


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


## UpdateDomainContact

> SuccessTextResponse UpdateDomainContact(ctx, id).DomainContactDetails(domainContactDetails).Execute()

Update Domain Contact Details



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.
	domainContactDetails := *openapiclient.NewDomainContactDetails() // DomainContactDetails | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.UpdateDomainContact(context.Background(), id).DomainContactDetails(domainContactDetails).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.UpdateDomainContact``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateDomainContact`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.UpdateDomainContact`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiUpdateDomainContactRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **domainContactDetails** | [**DomainContactDetails**](DomainContactDetails.md) |  | 

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


## UpdateDomainInfo

> UpdateDomainInfo(ctx, id).Execute()

Update Domain Order



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
	id := "id_example" // string | The domain service ID. Use `domain_id` from `GET /domains`.

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	r, err := apiClient.DomainsAPI.UpdateDomainInfo(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.UpdateDomainInfo``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **string** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiUpdateDomainInfoRequest struct via the builder pattern


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


## UpdateDomainNameservers

> TextResponse UpdateDomainNameservers(ctx, id).DomainNameserverPutRequest(domainNameserverPutRequest).Execute()

Replace Nameserver Set



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.
	domainNameserverPutRequest := *openapiclient.NewDomainNameserverPutRequest([]string{"ns1.example.com"}) // DomainNameserverPutRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.UpdateDomainNameservers(context.Background(), id).DomainNameserverPutRequest(domainNameserverPutRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.UpdateDomainNameservers``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateDomainNameservers`: TextResponse
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.UpdateDomainNameservers`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiUpdateDomainNameserversRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **domainNameserverPutRequest** | [**DomainNameserverPutRequest**](DomainNameserverPutRequest.md) |  | 

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


## UpdateDomainWhoisPrivacy

> SuccessTextResponse UpdateDomainWhoisPrivacy(ctx, id).DomainWhoisPrivacyRequest(domainWhoisPrivacyRequest).Execute()

Update Whois Privacy



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
	id := int32(56) // int32 | The domain service ID. Use `domain_id` from `GET /domains`.
	domainWhoisPrivacyRequest := *openapiclient.NewDomainWhoisPrivacyRequest() // DomainWhoisPrivacyRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DomainsAPI.UpdateDomainWhoisPrivacy(context.Background(), id).DomainWhoisPrivacyRequest(domainWhoisPrivacyRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DomainsAPI.UpdateDomainWhoisPrivacy``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `UpdateDomainWhoisPrivacy`: SuccessTextResponse
	fmt.Fprintf(os.Stdout, "Response from `DomainsAPI.UpdateDomainWhoisPrivacy`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int32** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Other Parameters

Other parameters are passed through a pointer to a apiUpdateDomainWhoisPrivacyRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **domainWhoisPrivacyRequest** | [**DomainWhoisPrivacyRequest**](DomainWhoisPrivacyRequest.md) |  | 

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

