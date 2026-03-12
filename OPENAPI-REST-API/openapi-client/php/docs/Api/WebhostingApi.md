# Interserver\MyAdmin\WebhostingApi

Webhosting related services

All URIs are relative to https://my.interserver.net/apiv2, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**addWebsite()**](WebhostingApi.md#addWebsite) | **POST** /websites/order | Place Website Order |
| [**getNewWebsite()**](WebhostingApi.md#getNewWebsite) | **GET** /websites/order | Website Ordering Information |
| [**getWebsiteBuyIp()**](WebhostingApi.md#getWebsiteBuyIp) | **GET** /websites/{id}/buy_ip | Get Website IP Information |
| [**getWebsiteInfo()**](WebhostingApi.md#getWebsiteInfo) | **GET** /websites/{id} | Get Website Order |
| [**getWebsiteInvoices()**](WebhostingApi.md#getWebsiteInvoices) | **GET** /websites/{id}/invoices | Get Website Invoices |
| [**getWebsiteList()**](WebhostingApi.md#getWebsiteList) | **GET** /websites | Get Website Listing |
| [**getWebsitesBackups()**](WebhostingApi.md#getWebsitesBackups) | **GET** /websites/{id}/backups | Get Website Backups |
| [**getWebsitesLogin()**](WebhostingApi.md#getWebsitesLogin) | **GET** /websites/{id}/login | Hosting Panel Auto Login |
| [**getWebsitesWelcomeEmail()**](WebhostingApi.md#getWebsitesWelcomeEmail) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email |
| [**gettWebsiteReverseDns()**](WebhostingApi.md#gettWebsiteReverseDns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS |
| [**postWebsiteBuyIp()**](WebhostingApi.md#postWebsiteBuyIp) | **POST** /websites/{id}/buy_ip | Update Website IP DNS |
| [**postWebsiteMigration()**](WebhostingApi.md#postWebsiteMigration) | **POST** /websites/{id}/migration | Request Website Migration |
| [**postWebsitesReverseDns()**](WebhostingApi.md#postWebsitesReverseDns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS |
| [**putWebsites()**](WebhostingApi.md#putWebsites) | **PUT** /websites/order | Validate Webhosting Order |
| [**updateWebsiteInfo()**](WebhostingApi.md#updateWebsiteInfo) | **POST** /websites/{id} | Update Website Order |
| [**webhostingCancel()**](WebhostingApi.md#webhostingCancel) | **DELETE** /websites/{id} | Cancel Website |


## `addWebsite()`

```php
addWebsite()
```

Place Website Order

Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.

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


$apiInstance = new Interserver\MyAdmin\Api\WebhostingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $apiInstance->addWebsite();
} catch (Exception $e) {
    echo 'Exception when calling WebhostingApi->addWebsite: ', $e->getMessage(), PHP_EOL;
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

## `getNewWebsite()`

```php
getNewWebsite(): \Interserver\MyAdmin\Model\WebsitesOrder
```

Website Ordering Information

Retrieves available webhosting plans and pricing for ordering.

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


$apiInstance = new Interserver\MyAdmin\Api\WebhostingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getNewWebsite();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling WebhostingApi->getNewWebsite: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\Interserver\MyAdmin\Model\WebsitesOrder**](../Model/WebsitesOrder.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getWebsiteBuyIp()`

```php
getWebsiteBuyIp($id): \Interserver\MyAdmin\Model\GetWebsiteBuyIp200Response
```

Get Website IP Information

Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.

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


$apiInstance = new Interserver\MyAdmin\Api\WebhostingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The website service ID. Use `website_id` from `GET /websites`.

try {
    $result = $apiInstance->getWebsiteBuyIp($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling WebhostingApi->getWebsiteBuyIp: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\GetWebsiteBuyIp200Response**](../Model/GetWebsiteBuyIp200Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getWebsiteInfo()`

```php
getWebsiteInfo($id): \Interserver\MyAdmin\Model\Website
```

Get Website Order

Returns detailed information about a specific webhosting order including its domain, plan, and status.

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


$apiInstance = new Interserver\MyAdmin\Api\WebhostingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The website service ID. Use `website_id` from `GET /websites`.

try {
    $result = $apiInstance->getWebsiteInfo($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling WebhostingApi->getWebsiteInfo: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\Website**](../Model/Website.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getWebsiteInvoices()`

```php
getWebsiteInvoices($id): \Interserver\MyAdmin\Model\ChargeInvoiceRows
```

Get Website Invoices

Returns the billing invoices associated with this webhosting service.

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


$apiInstance = new Interserver\MyAdmin\Api\WebhostingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The website service ID. Use `website_id` from `GET /websites`.

try {
    $result = $apiInstance->getWebsiteInvoices($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling WebhostingApi->getWebsiteInvoices: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

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

## `getWebsiteList()`

```php
getWebsiteList(): \Interserver\MyAdmin\Model\WebsiteRow[]
```

Get Website Listing

Gets a listing of your webhosting orders and service details.

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


$apiInstance = new Interserver\MyAdmin\Api\WebhostingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getWebsiteList();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling WebhostingApi->getWebsiteList: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\Interserver\MyAdmin\Model\WebsiteRow[]**](../Model/WebsiteRow.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`, `multipart/form-data`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getWebsitesBackups()`

```php
getWebsitesBackups($id): \Interserver\MyAdmin\Model\WebsiteBackups
```

Get Website Backups

Gets a list of the backups that exist for a website and their sizes.

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


$apiInstance = new Interserver\MyAdmin\Api\WebhostingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The website service ID. Use `website_id` from `GET /websites`.

try {
    $result = $apiInstance->getWebsitesBackups($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling WebhostingApi->getWebsitesBackups: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\WebsiteBackups**](../Model/WebsiteBackups.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getWebsitesLogin()`

```php
getWebsitesLogin($id): \Interserver\MyAdmin\Model\WebsiteLoginResponse
```

Hosting Panel Auto Login

Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.

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


$apiInstance = new Interserver\MyAdmin\Api\WebhostingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The website service ID. Use `website_id` from `GET /websites`.

try {
    $result = $apiInstance->getWebsitesLogin($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling WebhostingApi->getWebsitesLogin: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\WebsiteLoginResponse**](../Model/WebsiteLoginResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getWebsitesWelcomeEmail()`

```php
getWebsitesWelcomeEmail($id): \Interserver\MyAdmin\Model\SuccessTextResponse
```

Resend Website Welcome Email

Resends the welcome email containing hosting credentials and panel access details for the webhosting order.

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


$apiInstance = new Interserver\MyAdmin\Api\WebhostingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The website service ID. Use `website_id` from `GET /websites`.

try {
    $result = $apiInstance->getWebsitesWelcomeEmail($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling WebhostingApi->getWebsitesWelcomeEmail: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

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

## `gettWebsiteReverseDns()`

```php
gettWebsiteReverseDns($id): \Interserver\MyAdmin\Model\ReverseDnsEntries
```

Get Website Reverse DNS

Returns the current reverse DNS (PTR record) entries for the website's IP addresses.

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


$apiInstance = new Interserver\MyAdmin\Api\WebhostingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The website service ID. Use `website_id` from `GET /websites`.

try {
    $result = $apiInstance->gettWebsiteReverseDns($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling WebhostingApi->gettWebsiteReverseDns: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\ReverseDnsEntries**](../Model/ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `postWebsiteBuyIp()`

```php
postWebsiteBuyIp($id, $postWebsiteBuyIpRequest): \Interserver\MyAdmin\Model\PostWebsiteBuyIp200Response
```

Update Website IP DNS

Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.

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


$apiInstance = new Interserver\MyAdmin\Api\WebhostingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The website service ID. Use `website_id` from `GET /websites`.
$postWebsiteBuyIpRequest = new \Interserver\MyAdmin\Model\PostWebsiteBuyIpRequest(); // \Interserver\MyAdmin\Model\PostWebsiteBuyIpRequest

try {
    $result = $apiInstance->postWebsiteBuyIp($id, $postWebsiteBuyIpRequest);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling WebhostingApi->postWebsiteBuyIp: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |
| **postWebsiteBuyIpRequest** | [**\Interserver\MyAdmin\Model\PostWebsiteBuyIpRequest**](../Model/PostWebsiteBuyIpRequest.md)|  | |

### Return type

[**\Interserver\MyAdmin\Model\PostWebsiteBuyIp200Response**](../Model/PostWebsiteBuyIp200Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `postWebsiteMigration()`

```php
postWebsiteMigration($id, $postWebsiteMigrationRequest): \Interserver\MyAdmin\Model\PostWebsiteMigration200Response
```

Request Website Migration

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.

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


$apiInstance = new Interserver\MyAdmin\Api\WebhostingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The website service ID. Use `website_id` from `GET /websites`.
$postWebsiteMigrationRequest = new \Interserver\MyAdmin\Model\PostWebsiteMigrationRequest(); // \Interserver\MyAdmin\Model\PostWebsiteMigrationRequest

try {
    $result = $apiInstance->postWebsiteMigration($id, $postWebsiteMigrationRequest);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling WebhostingApi->postWebsiteMigration: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |
| **postWebsiteMigrationRequest** | [**\Interserver\MyAdmin\Model\PostWebsiteMigrationRequest**](../Model/PostWebsiteMigrationRequest.md)|  | |

### Return type

[**\Interserver\MyAdmin\Model\PostWebsiteMigration200Response**](../Model/PostWebsiteMigration200Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `postWebsitesReverseDns()`

```php
postWebsitesReverseDns($id, $reverseDnsEntries): \Interserver\MyAdmin\Model\TextResponse
```

Update Website Reverse DNS

Updates the reverse DNS entries for each of the IP addresses for the website.

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


$apiInstance = new Interserver\MyAdmin\Api\WebhostingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The website service ID. Use `website_id` from `GET /websites`.
$reverseDnsEntries = new \Interserver\MyAdmin\Model\ReverseDnsEntries(); // \Interserver\MyAdmin\Model\ReverseDnsEntries

try {
    $result = $apiInstance->postWebsitesReverseDns($id, $reverseDnsEntries);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling WebhostingApi->postWebsitesReverseDns: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |
| **reverseDnsEntries** | [**\Interserver\MyAdmin\Model\ReverseDnsEntries**](../Model/ReverseDnsEntries.md)|  | |

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

## `putWebsites()`

```php
putWebsites()
```

Validate Webhosting Order

Validates a webhosting order before placing it.

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


$apiInstance = new Interserver\MyAdmin\Api\WebhostingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $apiInstance->putWebsites();
} catch (Exception $e) {
    echo 'Exception when calling WebhostingApi->putWebsites: ', $e->getMessage(), PHP_EOL;
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

## `updateWebsiteInfo()`

```php
updateWebsiteInfo($id)
```

Update Website Order

Updates settings on a webhosting order.

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


$apiInstance = new Interserver\MyAdmin\Api\WebhostingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 'id_example'; // string | The website service ID. Use `website_id` from `GET /websites`.

try {
    $apiInstance->updateWebsiteInfo($id);
} catch (Exception $e) {
    echo 'Exception when calling WebhostingApi->updateWebsiteInfo: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **string**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

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

## `webhostingCancel()`

```php
webhostingCancel($id): \Interserver\MyAdmin\Model\WebhostingCancel200Response
```

Cancel Website

Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.

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


$apiInstance = new Interserver\MyAdmin\Api\WebhostingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 123; // string | The website service ID. Use `website_id` from `GET /websites`.

try {
    $result = $apiInstance->webhostingCancel($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling WebhostingApi->webhostingCancel: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **string**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |

### Return type

[**\Interserver\MyAdmin\Model\WebhostingCancel200Response**](../Model/WebhostingCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
