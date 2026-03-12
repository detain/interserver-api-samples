# Interserver\MyAdmin\DomainsApi

Domain Registration related services

All URIs are relative to https://my.interserver.net/apiv2, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**addDomain()**](DomainsApi.md#addDomain) | **POST** /domains/order | Place Domain Order |
| [**addDomainDnssec()**](DomainsApi.md#addDomainDnssec) | **POST** /domains/{id}/dnssec | Add Domain DNSSEC Records |
| [**addDomainNameserver()**](DomainsApi.md#addDomainNameserver) | **POST** /domains/{id}/nameservers | Add Registered Nameserver |
| [**cancelDomain()**](DomainsApi.md#cancelDomain) | **DELETE** /domains/{id} | Cancel Domain Order |
| [**deleteDomainDnssec()**](DomainsApi.md#deleteDomainDnssec) | **DELETE** /domains/{id}/dnssec | Remove Domain DNSSEC Records |
| [**deleteDomainNameserver()**](DomainsApi.md#deleteDomainNameserver) | **DELETE** /domains/{id}/nameservers | Delete Registered Nameserver |
| [**getDomainContact()**](DomainsApi.md#getDomainContact) | **GET** /domains/{id}/contact | Get Domain Contact Details |
| [**getDomainDnssec()**](DomainsApi.md#getDomainDnssec) | **GET** /domains/{id}/dnssec | Get Domain DNSSEC Records |
| [**getDomainInfo()**](DomainsApi.md#getDomainInfo) | **GET** /domains/{id} | Get Domain Order |
| [**getDomainInvoices()**](DomainsApi.md#getDomainInvoices) | **GET** /domains/{id}/invoices | Get Domain Invoices |
| [**getDomainLookup()**](DomainsApi.md#getDomainLookup) | **GET** /domains/lookup/{name} | Lookup Domain Availability and Pricing |
| [**getDomainNameservers()**](DomainsApi.md#getDomainNameservers) | **GET** /domains/{id}/nameservers | List Registered Nameservers |
| [**getDomainOrderFields()**](DomainsApi.md#getDomainOrderFields) | **GET** /domains/order/{domain}/{regType} | Get Domain Order Fields |
| [**getDomainOrderSearchResults()**](DomainsApi.md#getDomainOrderSearchResults) | **GET** /domains/order/{domain} | Get Domain Order Search Results |
| [**getDomainRenewal()**](DomainsApi.md#getDomainRenewal) | **GET** /domains/{id}/renew | Start Domain Renewal Flow |
| [**getDomainSearch()**](DomainsApi.md#getDomainSearch) | **GET** /domains/search/{name} | Search Domain Suggestions |
| [**getDomainTransfer()**](DomainsApi.md#getDomainTransfer) | **GET** /domains/{id}/transfer | Start Domain Transfer Flow |
| [**getDomainWhoisPrivacy()**](DomainsApi.md#getDomainWhoisPrivacy) | **GET** /domains/{id}/whois | Get Whois Privacy Status |
| [**getDomainsList()**](DomainsApi.md#getDomainsList) | **GET** /domains | List Domain Orders |
| [**getDomainsWelcomeEmail()**](DomainsApi.md#getDomainsWelcomeEmail) | **GET** /domains/{id}/welcome_email | Resend Domain Welcome Email |
| [**getNewDomain()**](DomainsApi.md#getNewDomain) | **GET** /domains/order | Get Domain Ordering Information |
| [**patchDomains()**](DomainsApi.md#patchDomains) | **PATCH** /domains/order | Validate Domain Order |
| [**postDomainRenewal()**](DomainsApi.md#postDomainRenewal) | **POST** /domains/{id}/renew | Request Domain Renewal |
| [**postDomainTransfer()**](DomainsApi.md#postDomainTransfer) | **POST** /domains/{id}/transfer | Request Domain Transfer |
| [**putDomains()**](DomainsApi.md#putDomains) | **PUT** /domains/order | Domain Order Search |
| [**updateDomainContact()**](DomainsApi.md#updateDomainContact) | **POST** /domains/{id}/contact | Update Domain Contact Details |
| [**updateDomainInfo()**](DomainsApi.md#updateDomainInfo) | **POST** /domains/{id} | Update Domain Order |
| [**updateDomainNameservers()**](DomainsApi.md#updateDomainNameservers) | **PUT** /domains/{id}/nameservers | Replace Nameserver Set |
| [**updateDomainWhoisPrivacy()**](DomainsApi.md#updateDomainWhoisPrivacy) | **POST** /domains/{id}/whois | Update Whois Privacy |


## `addDomain()`

```php
addDomain()
```

Place Domain Order

Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $apiInstance->addDomain();
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->addDomain: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `addDomainDnssec()`

```php
addDomainDnssec($id, $domainDnssecRequest): \Interserver\MyAdmin\Model\SuccessTextResponse
```

Add Domain DNSSEC Records

Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.
$domainDnssecRequest = new \Interserver\MyAdmin\Model\DomainDnssecRequest(); // \Interserver\MyAdmin\Model\DomainDnssecRequest

try {
    $result = $apiInstance->addDomainDnssec($id, $domainDnssecRequest);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->addDomainDnssec: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| **domainDnssecRequest** | [**\Interserver\MyAdmin\Model\DomainDnssecRequest**](../Model/DomainDnssecRequest.md)|  | |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `addDomainNameserver()`

```php
addDomainNameserver($id, $domainNameserverPostRequest): \Interserver\MyAdmin\Model\TextResponse
```

Add Registered Nameserver

Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.
$domainNameserverPostRequest = new \Interserver\MyAdmin\Model\DomainNameserverPostRequest(); // \Interserver\MyAdmin\Model\DomainNameserverPostRequest

try {
    $result = $apiInstance->addDomainNameserver($id, $domainNameserverPostRequest);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->addDomainNameserver: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| **domainNameserverPostRequest** | [**\Interserver\MyAdmin\Model\DomainNameserverPostRequest**](../Model/DomainNameserverPostRequest.md)|  | |

### Return type

[**\Interserver\MyAdmin\Model\TextResponse**](../Model/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `cancelDomain()`

```php
cancelDomain($id): \Interserver\MyAdmin\Model\CancelDomain200Response
```

Cancel Domain Order

Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    $result = $apiInstance->cancelDomain($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->cancelDomain: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\CancelDomain200Response**](../Model/CancelDomain200Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `deleteDomainDnssec()`

```php
deleteDomainDnssec($id, $action): \Interserver\MyAdmin\Model\SuccessTextResponse
```

Remove Domain DNSSEC Records

Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.
$action = 'action_example'; // string | Set to `delete` to remove all DNSSEC records.

try {
    $result = $apiInstance->deleteDomainDnssec($id, $action);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->deleteDomainDnssec: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| **action** | **string**| Set to &#x60;delete&#x60; to remove all DNSSEC records. | |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `deleteDomainNameserver()`

```php
deleteDomainNameserver($id, $index): \Interserver\MyAdmin\Model\TextResponse
```

Delete Registered Nameserver

Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.
$index = 56; // int | The index of the registered nameserver from the registered nameservers list to delete.

try {
    $result = $apiInstance->deleteDomainNameserver($id, $index);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->deleteDomainNameserver: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| **index** | **int**| The index of the registered nameserver from the registered nameservers list to delete. | |

### Return type

[**\Interserver\MyAdmin\Model\TextResponse**](../Model/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getDomainContact()`

```php
getDomainContact($id): \Interserver\MyAdmin\Model\DomainContactDetails
```

Get Domain Contact Details

Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    $result = $apiInstance->getDomainContact($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->getDomainContact: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\DomainContactDetails**](../Model/DomainContactDetails.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getDomainDnssec()`

```php
getDomainDnssec($id): \Interserver\MyAdmin\Model\DomainDnssecRecords
```

Get Domain DNSSEC Records

Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    $result = $apiInstance->getDomainDnssec($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->getDomainDnssec: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\DomainDnssecRecords**](../Model/DomainDnssecRecords.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getDomainInfo()`

```php
getDomainInfo($id): \Interserver\MyAdmin\Model\Domain
```

Get Domain Order

Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    $result = $apiInstance->getDomainInfo($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->getDomainInfo: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\Domain**](../Model/Domain.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getDomainInvoices()`

```php
getDomainInvoices($id): \Interserver\MyAdmin\Model\ChargeInvoiceRows
```

Get Domain Invoices

Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    $result = $apiInstance->getDomainInvoices($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->getDomainInvoices: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\ChargeInvoiceRows**](../Model/ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getDomainLookup()`

```php
getDomainLookup($name): \Interserver\MyAdmin\Model\DomainLookupResponse
```

Lookup Domain Availability and Pricing

Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$name = 'name_example'; // string | The full domain name to look up (for example `example.com`).

try {
    $result = $apiInstance->getDomainLookup($name);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->getDomainLookup: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **name** | **string**| The full domain name to look up (for example &#x60;example.com&#x60;). | |

### Return type

[**\Interserver\MyAdmin\Model\DomainLookupResponse**](../Model/DomainLookupResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getDomainNameservers()`

```php
getDomainNameservers($id): \Interserver\MyAdmin\Model\DomainNameserverGetResponse
```

List Registered Nameservers

Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    $result = $apiInstance->getDomainNameservers($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->getDomainNameservers: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\DomainNameserverGetResponse**](../Model/DomainNameserverGetResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getDomainOrderFields()`

```php
getDomainOrderFields($domain, $regType)
```

Get Domain Order Fields

Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$domain = 'domain_example'; // string | The fully qualified domain name (e.g. `example.com`).
$regType = 'regType_example'; // string | The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers.

try {
    $apiInstance->getDomainOrderFields($domain, $regType);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->getDomainOrderFields: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **domain** | **string**| The fully qualified domain name (e.g. &#x60;example.com&#x60;). | |
| **regType** | **string**| The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers. | |

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getDomainOrderSearchResults()`

```php
getDomainOrderSearchResults($domain)
```

Get Domain Order Search Results

Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$domain = 'domain_example'; // string | The fully qualified domain name to look up (e.g. `example.com`).

try {
    $apiInstance->getDomainOrderSearchResults($domain);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->getDomainOrderSearchResults: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **domain** | **string**| The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;). | |

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getDomainRenewal()`

```php
getDomainRenewal($id): \Interserver\MyAdmin\Model\SuccessTextResponse
```

Start Domain Renewal Flow

Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    $result = $apiInstance->getDomainRenewal($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->getDomainRenewal: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getDomainSearch()`

```php
getDomainSearch($name): \Interserver\MyAdmin\Model\DomainSearchResponse
```

Search Domain Suggestions

Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$name = 'name_example'; // string | The base domain name to search (for example `example` or `example.com`).

try {
    $result = $apiInstance->getDomainSearch($name);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->getDomainSearch: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **name** | **string**| The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;). | |

### Return type

[**\Interserver\MyAdmin\Model\DomainSearchResponse**](../Model/DomainSearchResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getDomainTransfer()`

```php
getDomainTransfer($id): \Interserver\MyAdmin\Model\SuccessTextResponse
```

Start Domain Transfer Flow

Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    $result = $apiInstance->getDomainTransfer($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->getDomainTransfer: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getDomainWhoisPrivacy()`

```php
getDomainWhoisPrivacy($id): \Interserver\MyAdmin\Model\SuccessTextResponse
```

Get Whois Privacy Status

Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    $result = $apiInstance->getDomainWhoisPrivacy($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->getDomainWhoisPrivacy: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getDomainsList()`

```php
getDomainsList(): \Interserver\MyAdmin\Model\DomainRow[]
```

List Domain Orders

Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getDomainsList();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->getDomainsList: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\Interserver\MyAdmin\Model\DomainRow[]**](../Model/DomainRow.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getDomainsWelcomeEmail()`

```php
getDomainsWelcomeEmail($id): \Interserver\MyAdmin\Model\SuccessTextResponse
```

Resend Domain Welcome Email

Resends the welcome email for the domain service. The email contains registration details and management instructions.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    $result = $apiInstance->getDomainsWelcomeEmail($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->getDomainsWelcomeEmail: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getNewDomain()`

```php
getNewDomain(): \Interserver\MyAdmin\Model\DomainOrder
```

Get Domain Ordering Information

Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getNewDomain();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->getNewDomain: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\Interserver\MyAdmin\Model\DomainOrder**](../Model/DomainOrder.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `patchDomains()`

```php
patchDomains()
```

Validate Domain Order

Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $apiInstance->patchDomains();
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->patchDomains: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `postDomainRenewal()`

```php
postDomainRenewal($id): \Interserver\MyAdmin\Model\SuccessTextResponse
```

Request Domain Renewal

Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    $result = $apiInstance->postDomainRenewal($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->postDomainRenewal: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `postDomainTransfer()`

```php
postDomainTransfer($id): \Interserver\MyAdmin\Model\SuccessTextResponse
```

Request Domain Transfer

Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    $result = $apiInstance->postDomainTransfer($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->postDomainTransfer: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `putDomains()`

```php
putDomains()
```

Domain Order Search

Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $apiInstance->putDomains();
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->putDomains: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `updateDomainContact()`

```php
updateDomainContact($id, $domainContactDetails): \Interserver\MyAdmin\Model\SuccessTextResponse
```

Update Domain Contact Details

Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.
$domainContactDetails = new \Interserver\MyAdmin\Model\DomainContactDetails(); // \Interserver\MyAdmin\Model\DomainContactDetails

try {
    $result = $apiInstance->updateDomainContact($id, $domainContactDetails);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->updateDomainContact: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| **domainContactDetails** | [**\Interserver\MyAdmin\Model\DomainContactDetails**](../Model/DomainContactDetails.md)|  | |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `updateDomainInfo()`

```php
updateDomainInfo($id)
```

Update Domain Order

Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 'id_example'; // string | The domain service ID. Use `domain_id` from `GET /domains`.

try {
    $apiInstance->updateDomainInfo($id);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->updateDomainInfo: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **string**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `updateDomainNameservers()`

```php
updateDomainNameservers($id, $domainNameserverPutRequest): \Interserver\MyAdmin\Model\TextResponse
```

Replace Nameserver Set

Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.
$domainNameserverPutRequest = new \Interserver\MyAdmin\Model\DomainNameserverPutRequest(); // \Interserver\MyAdmin\Model\DomainNameserverPutRequest

try {
    $result = $apiInstance->updateDomainNameservers($id, $domainNameserverPutRequest);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->updateDomainNameservers: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| **domainNameserverPutRequest** | [**\Interserver\MyAdmin\Model\DomainNameserverPutRequest**](../Model/DomainNameserverPutRequest.md)|  | |

### Return type

[**\Interserver\MyAdmin\Model\TextResponse**](../Model/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `updateDomainWhoisPrivacy()`

```php
updateDomainWhoisPrivacy($id, $domainWhoisPrivacyRequest): \Interserver\MyAdmin\Model\SuccessTextResponse
```

Update Whois Privacy

Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new Interserver\MyAdmin\Api\DomainsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The domain service ID. Use `domain_id` from `GET /domains`.
$domainWhoisPrivacyRequest = new \Interserver\MyAdmin\Model\DomainWhoisPrivacyRequest(); // \Interserver\MyAdmin\Model\DomainWhoisPrivacyRequest

try {
    $result = $apiInstance->updateDomainWhoisPrivacy($id, $domainWhoisPrivacyRequest);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DomainsApi->updateDomainWhoisPrivacy: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | |
| **domainWhoisPrivacyRequest** | [**\Interserver\MyAdmin\Model\DomainWhoisPrivacyRequest**](../Model/DomainWhoisPrivacyRequest.md)|  | |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
