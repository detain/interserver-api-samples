# OpenAPI\Client\ScrubIpsApi

All URIs are relative to https://my.interserver.net/apiv2, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**cancelScrubIp()**](ScrubIpsApi.md#cancelScrubIp) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service |
| [**createFilter()**](ScrubIpsApi.md#createFilter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter |
| [**createGeoRule()**](ScrubIpsApi.md#createGeoRule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule |
| [**createRule()**](ScrubIpsApi.md#createRule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule |
| [**deleteFilter()**](ScrubIpsApi.md#deleteFilter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter |
| [**disableScrub()**](ScrubIpsApi.md#disableScrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection |
| [**enableScrub()**](ScrubIpsApi.md#enableScrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection |
| [**getOrderDetail()**](ScrubIpsApi.md#getOrderDetail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information |
| [**getScrubIpDetails()**](ScrubIpsApi.md#getScrubIpDetails) | **GET** /scrub_ips/{id} | Get Scrub IP Details |
| [**getScrubIpFilterTypes()**](ScrubIpsApi.md#getScrubIpFilterTypes) | **GET** /scrub_ips/filter_types | List Scrub Filter Types |
| [**getScrubIpInvoices()**](ScrubIpsApi.md#getScrubIpInvoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices |
| [**getScrubIpLogs()**](ScrubIpsApi.md#getScrubIpLogs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs |
| [**getScrubIpsList()**](ScrubIpsApi.md#getScrubIpsList) | **GET** /scrub_ips | List Scrub IP Services |
| [**placeScrubOrder()**](ScrubIpsApi.md#placeScrubOrder) | **POST** /scrub_ips/order | Place Scrub IP Order |
| [**scrubIpsDeleteGeoRule()**](ScrubIpsApi.md#scrubIpsDeleteGeoRule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule |
| [**scrubIpsDeleteRule()**](ScrubIpsApi.md#scrubIpsDeleteRule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule |


## `cancelScrubIp()`

```php
cancelScrubIp($id): \OpenAPI\Client\Model\CancelScrubIp200Response
```

Cancel Scrub IP Service

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ScrubIpsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | ScrubIp ID number

try {
    $result = $apiInstance->cancelScrubIp($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ScrubIpsApi->cancelScrubIp: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| ScrubIp ID number | |

### Return type

[**\OpenAPI\Client\Model\CancelScrubIp200Response**](../Model/CancelScrubIp200Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `createFilter()`

```php
createFilter($id, $create_filter): \OpenAPI\Client\Model\CreateFilter201Response
```

Create Traffic Filter

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ScrubIpsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | ScrubIp ID number
$create_filter = new \OpenAPI\Client\Model\CreateFilter(); // \OpenAPI\Client\Model\CreateFilter

try {
    $result = $apiInstance->createFilter($id, $create_filter);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ScrubIpsApi->createFilter: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| ScrubIp ID number | |
| **create_filter** | [**\OpenAPI\Client\Model\CreateFilter**](../Model/CreateFilter.md)|  | |

### Return type

[**\OpenAPI\Client\Model\CreateFilter201Response**](../Model/CreateFilter201Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `createGeoRule()`

```php
createGeoRule($id, $create_geo_firewall_rule): \OpenAPI\Client\Model\CreateRule201Response
```

Create Geo Firewall Rule

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ScrubIpsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | ScrubIp ID number
$create_geo_firewall_rule = new \OpenAPI\Client\Model\CreateGeoFirewallRule(); // \OpenAPI\Client\Model\CreateGeoFirewallRule

try {
    $result = $apiInstance->createGeoRule($id, $create_geo_firewall_rule);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ScrubIpsApi->createGeoRule: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| ScrubIp ID number | |
| **create_geo_firewall_rule** | [**\OpenAPI\Client\Model\CreateGeoFirewallRule**](../Model/CreateGeoFirewallRule.md)|  | |

### Return type

[**\OpenAPI\Client\Model\CreateRule201Response**](../Model/CreateRule201Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `createRule()`

```php
createRule($id, $create_firewall_rule): \OpenAPI\Client\Model\CreateRule201Response
```

Create Firewall Rule

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ScrubIpsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | ScrubIp ID number
$create_firewall_rule = new \OpenAPI\Client\Model\CreateFirewallRule(); // \OpenAPI\Client\Model\CreateFirewallRule

try {
    $result = $apiInstance->createRule($id, $create_firewall_rule);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ScrubIpsApi->createRule: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| ScrubIp ID number | |
| **create_firewall_rule** | [**\OpenAPI\Client\Model\CreateFirewallRule**](../Model/CreateFirewallRule.md)|  | |

### Return type

[**\OpenAPI\Client\Model\CreateRule201Response**](../Model/CreateRule201Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `deleteFilter()`

```php
deleteFilter($id, $create_filter): \OpenAPI\Client\Model\DeleteFilter200Response
```

Delete Traffic Filter

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ScrubIpsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | ScrubIp ID number
$create_filter = new \OpenAPI\Client\Model\CreateFilter(); // \OpenAPI\Client\Model\CreateFilter

try {
    $result = $apiInstance->deleteFilter($id, $create_filter);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ScrubIpsApi->deleteFilter: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| ScrubIp ID number | |
| **create_filter** | [**\OpenAPI\Client\Model\CreateFilter**](../Model/CreateFilter.md)|  | |

### Return type

[**\OpenAPI\Client\Model\DeleteFilter200Response**](../Model/DeleteFilter200Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `disableScrub()`

```php
disableScrub($id): \OpenAPI\Client\Model\DisableScrub200Response
```

Disable Scrub Protection

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ScrubIpsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | ScrubIp ID number

try {
    $result = $apiInstance->disableScrub($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ScrubIpsApi->disableScrub: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| ScrubIp ID number | |

### Return type

[**\OpenAPI\Client\Model\DisableScrub200Response**](../Model/DisableScrub200Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `enableScrub()`

```php
enableScrub($id): \OpenAPI\Client\Model\EnableScrub200Response
```

Enable Scrub Protection

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ScrubIpsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | ScrubIp ID number

try {
    $result = $apiInstance->enableScrub($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ScrubIpsApi->enableScrub: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| ScrubIp ID number | |

### Return type

[**\OpenAPI\Client\Model\EnableScrub200Response**](../Model/EnableScrub200Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getOrderDetail()`

```php
getOrderDetail(): \OpenAPI\Client\Model\GetOrderDetail200Response
```

Get Scrub IP Ordering Information

Returns the available Scrub IP service plans and pricing information needed to build an order form.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ScrubIpsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getOrderDetail();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ScrubIpsApi->getOrderDetail: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\GetOrderDetail200Response**](../Model/GetOrderDetail200Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getScrubIpDetails()`

```php
getScrubIpDetails($id): \OpenAPI\Client\Model\GetScrubIpDetails200Response
```

Get Scrub IP Details

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ScrubIpsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | ScrubIp ID number

try {
    $result = $apiInstance->getScrubIpDetails($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ScrubIpsApi->getScrubIpDetails: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| ScrubIp ID number | |

### Return type

[**\OpenAPI\Client\Model\GetScrubIpDetails200Response**](../Model/GetScrubIpDetails200Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getScrubIpFilterTypes()`

```php
getScrubIpFilterTypes(): \OpenAPI\Client\Model\ScrubIpFilterTypes
```

List Scrub Filter Types

Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ScrubIpsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getScrubIpFilterTypes();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ScrubIpsApi->getScrubIpFilterTypes: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\ScrubIpFilterTypes**](../Model/ScrubIpFilterTypes.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getScrubIpInvoices()`

```php
getScrubIpInvoices($id): \OpenAPI\Client\Model\ChargeInvoiceRows
```

Get ScrubIp Invoices

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ScrubIpsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | ScrubIp ID number

try {
    $result = $apiInstance->getScrubIpInvoices($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ScrubIpsApi->getScrubIpInvoices: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| ScrubIp ID number | |

### Return type

[**\OpenAPI\Client\Model\ChargeInvoiceRows**](../Model/ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getScrubIpLogs()`

```php
getScrubIpLogs($id): \OpenAPI\Client\Model\ScrubIpsLogRowSchema[]
```

Get Scrub IP Logs

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ScrubIpsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 413232  ; // string | Scrub Order ID

try {
    $result = $apiInstance->getScrubIpLogs($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ScrubIpsApi->getScrubIpLogs: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **string**| Scrub Order ID | |

### Return type

[**\OpenAPI\Client\Model\ScrubIpsLogRowSchema[]**](../Model/ScrubIpsLogRowSchema.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getScrubIpsList()`

```php
getScrubIpsList(): \OpenAPI\Client\Model\ScrubIpsRowSchema[]
```

List Scrub IP Services

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ScrubIpsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getScrubIpsList();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ScrubIpsApi->getScrubIpsList: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\ScrubIpsRowSchema[]**](../Model/ScrubIpsRowSchema.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `placeScrubOrder()`

```php
placeScrubOrder($scrub_ip_place_order): \OpenAPI\Client\Model\PlaceScrubOrder201Response
```

Place Scrub IP Order

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ScrubIpsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$scrub_ip_place_order = new \OpenAPI\Client\Model\ScrubIpPlaceOrder(); // \OpenAPI\Client\Model\ScrubIpPlaceOrder

try {
    $result = $apiInstance->placeScrubOrder($scrub_ip_place_order);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ScrubIpsApi->placeScrubOrder: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **scrub_ip_place_order** | [**\OpenAPI\Client\Model\ScrubIpPlaceOrder**](../Model/ScrubIpPlaceOrder.md)|  | |

### Return type

[**\OpenAPI\Client\Model\PlaceScrubOrder201Response**](../Model/PlaceScrubOrder201Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `scrubIpsDeleteGeoRule()`

```php
scrubIpsDeleteGeoRule($id, $delete_geo_firewall_rule): \OpenAPI\Client\Model\ScrubIpsDeleteRule200Response
```

Delete Geo Firewall Rule

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ScrubIpsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | ScrubIp ID number
$delete_geo_firewall_rule = new \OpenAPI\Client\Model\DeleteGeoFirewallRule(); // \OpenAPI\Client\Model\DeleteGeoFirewallRule

try {
    $result = $apiInstance->scrubIpsDeleteGeoRule($id, $delete_geo_firewall_rule);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ScrubIpsApi->scrubIpsDeleteGeoRule: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| ScrubIp ID number | |
| **delete_geo_firewall_rule** | [**\OpenAPI\Client\Model\DeleteGeoFirewallRule**](../Model/DeleteGeoFirewallRule.md)|  | |

### Return type

[**\OpenAPI\Client\Model\ScrubIpsDeleteRule200Response**](../Model/ScrubIpsDeleteRule200Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `scrubIpsDeleteRule()`

```php
scrubIpsDeleteRule($id, $delete_firewall_rule): \OpenAPI\Client\Model\ScrubIpsDeleteRule200Response
```

Delete Firewall Rule

Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ScrubIpsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | ScrubIp ID number
$delete_firewall_rule = new \OpenAPI\Client\Model\DeleteFirewallRule(); // \OpenAPI\Client\Model\DeleteFirewallRule

try {
    $result = $apiInstance->scrubIpsDeleteRule($id, $delete_firewall_rule);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ScrubIpsApi->scrubIpsDeleteRule: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**| ScrubIp ID number | |
| **delete_firewall_rule** | [**\OpenAPI\Client\Model\DeleteFirewallRule**](../Model/DeleteFirewallRule.md)|  | |

### Return type

[**\OpenAPI\Client\Model\ScrubIpsDeleteRule200Response**](../Model/ScrubIpsDeleteRule200Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
