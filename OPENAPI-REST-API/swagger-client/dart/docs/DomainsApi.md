# swagger.api.DomainsApi

## Load the API package
```dart
import 'package:swagger/api.dart';
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addDomain**](DomainsApi.md#addDomain) | **POST** /domains/order | Place Domain Order
[**addDomainDnssec**](DomainsApi.md#addDomainDnssec) | **POST** /domains/{id}/dnssec | Add Domain DNSSEC Records
[**addDomainNameserver**](DomainsApi.md#addDomainNameserver) | **POST** /domains/{id}/nameservers | Add Registered Nameserver
[**cancelDomain**](DomainsApi.md#cancelDomain) | **DELETE** /domains/{id} | Cancel Domain Order
[**deleteDomainDnssec**](DomainsApi.md#deleteDomainDnssec) | **DELETE** /domains/{id}/dnssec | Remove Domain DNSSEC Records
[**deleteDomainNameserver**](DomainsApi.md#deleteDomainNameserver) | **DELETE** /domains/{id}/nameservers | Delete Registered Nameserver
[**getDomainContact**](DomainsApi.md#getDomainContact) | **GET** /domains/{id}/contact | Get Domain Contact Details
[**getDomainDnssec**](DomainsApi.md#getDomainDnssec) | **GET** /domains/{id}/dnssec | Get Domain DNSSEC Records
[**getDomainInfo**](DomainsApi.md#getDomainInfo) | **GET** /domains/{id} | Get Domain Order
[**getDomainInvoices**](DomainsApi.md#getDomainInvoices) | **GET** /domains/{id}/invoices | Get Domain Invoices
[**getDomainLookup**](DomainsApi.md#getDomainLookup) | **GET** /domains/lookup/{name} | Lookup Domain Availability and Pricing
[**getDomainNameservers**](DomainsApi.md#getDomainNameservers) | **GET** /domains/{id}/nameservers | List Registered Nameservers
[**getDomainOrderFields**](DomainsApi.md#getDomainOrderFields) | **GET** /domains/order/{domain}/{regType} | Get Domain Order Fields
[**getDomainOrderSearchResults**](DomainsApi.md#getDomainOrderSearchResults) | **GET** /domains/order/{domain} | Get Domain Order Search Results
[**getDomainRenewal**](DomainsApi.md#getDomainRenewal) | **GET** /domains/{id}/renew | Start Domain Renewal Flow
[**getDomainSearch**](DomainsApi.md#getDomainSearch) | **GET** /domains/search/{name} | Search Domain Suggestions
[**getDomainTransfer**](DomainsApi.md#getDomainTransfer) | **GET** /domains/{id}/transfer | Start Domain Transfer Flow
[**getDomainWhoisPrivacy**](DomainsApi.md#getDomainWhoisPrivacy) | **GET** /domains/{id}/whois | Get Whois Privacy Status
[**getDomainsList**](DomainsApi.md#getDomainsList) | **GET** /domains | List Domain Orders
[**getDomainsWelcomeEmail**](DomainsApi.md#getDomainsWelcomeEmail) | **GET** /domains/{id}/welcome_email | Resend Domain Welcome Email
[**getNewDomain**](DomainsApi.md#getNewDomain) | **GET** /domains/order | Get Domain Ordering Information
[**patchDomains**](DomainsApi.md#patchDomains) | **PATCH** /domains/order | Validate Domain Order
[**postDomainRenewal**](DomainsApi.md#postDomainRenewal) | **POST** /domains/{id}/renew | Request Domain Renewal
[**postDomainTransfer**](DomainsApi.md#postDomainTransfer) | **POST** /domains/{id}/transfer | Request Domain Transfer
[**putDomains**](DomainsApi.md#putDomains) | **PUT** /domains/order | Domain Order Search
[**updateDomainContact**](DomainsApi.md#updateDomainContact) | **POST** /domains/{id}/contact | Update Domain Contact Details
[**updateDomainInfo**](DomainsApi.md#updateDomainInfo) | **POST** /domains/{id} | Update Domain Order
[**updateDomainNameservers**](DomainsApi.md#updateDomainNameservers) | **PUT** /domains/{id}/nameservers | Replace Nameserver Set
[**updateDomainWhoisPrivacy**](DomainsApi.md#updateDomainWhoisPrivacy) | **POST** /domains/{id}/whois | Update Whois Privacy

# **addDomain**
> addDomain()

Place Domain Order

Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();

try {
    api_instance.addDomain();
} catch (e) {
    print("Exception when calling DomainsApi->addDomain: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addDomainDnssec**
> SuccessTextResponse addDomainDnssec(body, algorithm, digestType, digest, keyTag, id)

Add Domain DNSSEC Records

Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var body = new DomainDnssecRequest(); // DomainDnssecRequest | 
var algorithm = []; // List<int> | 
var digestType = []; // List<int> | 
var digest = []; // List<String> | 
var keyTag = []; // List<int> | 
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.addDomainDnssec(body, algorithm, digestType, digest, keyTag, id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->addDomainDnssec: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DomainDnssecRequest**](DomainDnssecRequest.md)|  | 
 **algorithm** | [**List&lt;int&gt;**](int.md)|  | 
 **digestType** | [**List&lt;int&gt;**](int.md)|  | 
 **digest** | [**List&lt;String&gt;**](String.md)|  | 
 **keyTag** | [**List&lt;int&gt;**](int.md)|  | 
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addDomainNameserver**
> TextResponse addDomainNameserver(body, name, ipAddress, id)

Add Registered Nameserver

Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var body = new DomainNameserverPostRequest(); // DomainNameserverPostRequest | 
var name = name_example; // String | 
var ipAddress = ipAddress_example; // String | 
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.addDomainNameserver(body, name, ipAddress, id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->addDomainNameserver: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DomainNameserverPostRequest**](DomainNameserverPostRequest.md)|  | 
 **name** | **String**|  | 
 **ipAddress** | **String**|  | 
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cancelDomain**
> InlineResponse2002 cancelDomain(id)

Cancel Domain Order

Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.cancelDomain(id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->cancelDomain: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**InlineResponse2002**](InlineResponse2002.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDomainDnssec**
> SuccessTextResponse deleteDomainDnssec(id, action)

Remove Domain DNSSEC Records

Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.
var action = action_example; // String | Set to `delete` to remove all DNSSEC records.

try {
    var result = api_instance.deleteDomainDnssec(id, action);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->deleteDomainDnssec: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **action** | **String**| Set to &#x60;delete&#x60; to remove all DNSSEC records. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDomainNameserver**
> TextResponse deleteDomainNameserver(id, index)

Delete Registered Nameserver

Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.
var index = 56; // int | The index of the registered nameserver from the registered nameservers list to delete.  

try {
    var result = api_instance.deleteDomainNameserver(id, index);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->deleteDomainNameserver: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **index** | **int**| The index of the registered nameserver from the registered nameservers list to delete.   | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainContact**
> DomainContactDetails getDomainContact(id)

Get Domain Contact Details

Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.getDomainContact(id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->getDomainContact: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**DomainContactDetails**](DomainContactDetails.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainDnssec**
> DomainDnssecRecords getDomainDnssec(id)

Get Domain DNSSEC Records

Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.getDomainDnssec(id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->getDomainDnssec: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**DomainDnssecRecords**](DomainDnssecRecords.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainInfo**
> Domain getDomainInfo(id)

Get Domain Order

Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.getDomainInfo(id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->getDomainInfo: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**Domain**](Domain.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainInvoices**
> ChargeInvoiceRows getDomainInvoices(id)

Get Domain Invoices

Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.getDomainInvoices(id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->getDomainInvoices: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainLookup**
> DomainLookupResponse getDomainLookup(name)

Lookup Domain Availability and Pricing

Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var name = name_example; // String | The full domain name to look up (for example `example.com`).

try {
    var result = api_instance.getDomainLookup(name);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->getDomainLookup: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **String**| The full domain name to look up (for example &#x60;example.com&#x60;). | 

### Return type

[**DomainLookupResponse**](DomainLookupResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainNameservers**
> DomainNameserverGetResponse getDomainNameservers(id)

List Registered Nameservers

Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.getDomainNameservers(id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->getDomainNameservers: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**DomainNameserverGetResponse**](DomainNameserverGetResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainOrderFields**
> getDomainOrderFields(domain, regType)

Get Domain Order Fields

Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var domain = domain_example; // String | The fully qualified domain name (e.g. `example.com`).
var regType = regType_example; // String | The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers.

try {
    api_instance.getDomainOrderFields(domain, regType);
} catch (e) {
    print("Exception when calling DomainsApi->getDomainOrderFields: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **String**| The fully qualified domain name (e.g. &#x60;example.com&#x60;). | 
 **regType** | **String**| The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers. | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainOrderSearchResults**
> getDomainOrderSearchResults(domain)

Get Domain Order Search Results

Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var domain = domain_example; // String | The fully qualified domain name to look up (e.g. `example.com`).

try {
    api_instance.getDomainOrderSearchResults(domain);
} catch (e) {
    print("Exception when calling DomainsApi->getDomainOrderSearchResults: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **String**| The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;). | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainRenewal**
> SuccessTextResponse getDomainRenewal(id)

Start Domain Renewal Flow

Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.getDomainRenewal(id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->getDomainRenewal: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainSearch**
> DomainSearchResponse getDomainSearch(name)

Search Domain Suggestions

Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var name = name_example; // String | The base domain name to search (for example `example` or `example.com`).

try {
    var result = api_instance.getDomainSearch(name);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->getDomainSearch: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **String**| The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;). | 

### Return type

[**DomainSearchResponse**](DomainSearchResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainTransfer**
> SuccessTextResponse getDomainTransfer(id)

Start Domain Transfer Flow

Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.getDomainTransfer(id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->getDomainTransfer: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainWhoisPrivacy**
> SuccessTextResponse getDomainWhoisPrivacy(id)

Get Whois Privacy Status

Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.getDomainWhoisPrivacy(id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->getDomainWhoisPrivacy: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainsList**
> List<DomainRow> getDomainsList()

List Domain Orders

Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();

try {
    var result = api_instance.getDomainsList();
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->getDomainsList: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List<DomainRow>**](DomainRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomainsWelcomeEmail**
> SuccessTextResponse getDomainsWelcomeEmail(id)

Resend Domain Welcome Email

Resends the welcome email for the domain service. The email contains registration details and management instructions.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.getDomainsWelcomeEmail(id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->getDomainsWelcomeEmail: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getNewDomain**
> DomainOrder getNewDomain()

Get Domain Ordering Information

Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();

try {
    var result = api_instance.getNewDomain();
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->getNewDomain: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**DomainOrder**](DomainOrder.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **patchDomains**
> patchDomains()

Validate Domain Order

Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();

try {
    api_instance.patchDomains();
} catch (e) {
    print("Exception when calling DomainsApi->patchDomains: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postDomainRenewal**
> SuccessTextResponse postDomainRenewal(id)

Request Domain Renewal

Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.postDomainRenewal(id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->postDomainRenewal: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postDomainTransfer**
> SuccessTextResponse postDomainTransfer(id)

Request Domain Transfer

Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.postDomainTransfer(id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->postDomainTransfer: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **putDomains**
> putDomains()

Domain Order Search

Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();

try {
    api_instance.putDomains();
} catch (e) {
    print("Exception when calling DomainsApi->putDomains: $e\n");
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateDomainContact**
> SuccessTextResponse updateDomainContact(body, status, state, orgName, country, postalCode, email, fax, address2, address3, address1, city, phone, firstName, lastName, id)

Update Domain Contact Details

Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var body = new DomainContactDetails(); // DomainContactDetails | 
var status = status_example; // String | 
var state = state_example; // String | 
var orgName = orgName_example; // String | 
var country = country_example; // String | 
var postalCode = postalCode_example; // String | 
var email = email_example; // String | 
var fax = fax_example; // String | 
var address2 = address2_example; // String | 
var address3 = address3_example; // String | 
var address1 = address1_example; // String | 
var city = city_example; // String | 
var phone = phone_example; // String | 
var firstName = firstName_example; // String | 
var lastName = lastName_example; // String | 
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.updateDomainContact(body, status, state, orgName, country, postalCode, email, fax, address2, address3, address1, city, phone, firstName, lastName, id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->updateDomainContact: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DomainContactDetails**](DomainContactDetails.md)|  | 
 **status** | **String**|  | 
 **state** | **String**|  | 
 **orgName** | **String**|  | 
 **country** | **String**|  | 
 **postalCode** | **String**|  | 
 **email** | **String**|  | 
 **fax** | **String**|  | 
 **address2** | **String**|  | 
 **address3** | **String**|  | 
 **address1** | **String**|  | 
 **city** | **String**|  | 
 **phone** | **String**|  | 
 **firstName** | **String**|  | 
 **lastName** | **String**|  | 
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateDomainInfo**
> updateDomainInfo(id)

Update Domain Order

Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var id = id_example; // String | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    api_instance.updateDomainInfo(id);
} catch (e) {
    print("Exception when calling DomainsApi->updateDomainInfo: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateDomainNameservers**
> TextResponse updateDomainNameservers(body, nameserver, id)

Replace Nameserver Set

Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var body = new DomainNameserverPutRequest(); // DomainNameserverPutRequest | 
var nameserver = []; // List<String> | 
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.updateDomainNameservers(body, nameserver, id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->updateDomainNameservers: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DomainNameserverPutRequest**](DomainNameserverPutRequest.md)|  | 
 **nameserver** | [**List&lt;String&gt;**](String.md)|  | 
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateDomainWhoisPrivacy**
> SuccessTextResponse updateDomainWhoisPrivacy(body, func, csrfToken, domainFirstname, domainLastname, domainEmail, domainAddress, domainAddress2, domainAddress3, domainCity, domainState, domainZip, domainCountry, domainPhone, domainFax, domainCompany, domainExtra, id)

Update Whois Privacy

Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.

### Example
```dart
import 'package:swagger/api.dart';
// TODO Configure API key authorization: apiKeyAuth
//swagger.api.Configuration.apiKey{'X-API-KEY'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'X-API-KEY'} = "Bearer";
// TODO Configure API key authorization: sessionIdCookieAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";
// TODO Configure API key authorization: sessionIdHeaderAuth
//swagger.api.Configuration.apiKey{'sessionid'} = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//swagger.api.Configuration.apiKeyPrefix{'sessionid'} = "Bearer";

var api_instance = new DomainsApi();
var body = new DomainWhoisPrivacyRequest(); // DomainWhoisPrivacyRequest | 
var func = func_example; // String | 
var csrfToken = csrfToken_example; // String | 
var domainFirstname = domainFirstname_example; // String | 
var domainLastname = domainLastname_example; // String | 
var domainEmail = domainEmail_example; // String | 
var domainAddress = domainAddress_example; // String | 
var domainAddress2 = domainAddress2_example; // String | 
var domainAddress3 = domainAddress3_example; // String | 
var domainCity = domainCity_example; // String | 
var domainState = domainState_example; // String | 
var domainZip = domainZip_example; // String | 
var domainCountry = domainCountry_example; // String | 
var domainPhone = domainPhone_example; // String | 
var domainFax = domainFax_example; // String | 
var domainCompany = domainCompany_example; // String | 
var domainExtra = domainExtra_example; // String | 
var id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    var result = api_instance.updateDomainWhoisPrivacy(body, func, csrfToken, domainFirstname, domainLastname, domainEmail, domainAddress, domainAddress2, domainAddress3, domainCity, domainState, domainZip, domainCountry, domainPhone, domainFax, domainCompany, domainExtra, id);
    print(result);
} catch (e) {
    print("Exception when calling DomainsApi->updateDomainWhoisPrivacy: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DomainWhoisPrivacyRequest**](DomainWhoisPrivacyRequest.md)|  | 
 **func** | **String**|  | 
 **csrfToken** | **String**|  | 
 **domainFirstname** | **String**|  | 
 **domainLastname** | **String**|  | 
 **domainEmail** | **String**|  | 
 **domainAddress** | **String**|  | 
 **domainAddress2** | **String**|  | 
 **domainAddress3** | **String**|  | 
 **domainCity** | **String**|  | 
 **domainState** | **String**|  | 
 **domainZip** | **String**|  | 
 **domainCountry** | **String**|  | 
 **domainPhone** | **String**|  | 
 **domainFax** | **String**|  | 
 **domainCompany** | **String**|  | 
 **domainExtra** | **String**|  | 
 **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

