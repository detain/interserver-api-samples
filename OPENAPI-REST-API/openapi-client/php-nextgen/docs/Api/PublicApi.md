# OpenAPI\Client\PublicApi

All URIs are relative to https://my.interserver.net/apiv2, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**getCaptcha()**](PublicApi.md#getCaptcha) | **GET** /captcha | Get Captcha Challenge |
| [**getCountries()**](PublicApi.md#getCountries) | **GET** /account/countries | Get Countries |
| [**getInfo()**](PublicApi.md#getInfo) | **GET** /info | Get Server Info |
| [**getLoginInfo()**](PublicApi.md#getLoginInfo) | **GET** /login | Get Login Info |
| [**getMPServers()**](PublicApi.md#getMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers |
| [**getOauthRedirect()**](PublicApi.md#getOauthRedirect) | **GET** /oauth | Get OAuth Redirect URL |
| [**getTimezones()**](PublicApi.md#getTimezones) | **GET** /account/timezones | Get Available Timezones |
| [**patchOauthTwoFactor()**](PublicApi.md#patchOauthTwoFactor) | **PATCH** /oauth | Complete OAuth Two-Factor Verification |
| [**pingServer()**](PublicApi.md#pingServer) | **GET** /ping | Ping Server |
| [**postOauthCallback()**](PublicApi.md#postOauthCallback) | **POST** /oauth | OAuth Callback |
| [**submitLogin()**](PublicApi.md#submitLogin) | **POST** /login | Submit Login Information |
| [**submitSignup()**](PublicApi.md#submitSignup) | **POST** /signup | Submit Signup Information |


## `getCaptcha()`

```php
getCaptcha(): \OpenAPI\Client\Model\CaptchaResponse
```

Get Captcha Challenge

Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.

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


$apiInstance = new OpenAPI\Client\Api\PublicApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getCaptcha();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling PublicApi->getCaptcha: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\CaptchaResponse**](../Model/CaptchaResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getCountries()`

```php
getCountries($fetch_by): object
```

Get Countries

Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.

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


$apiInstance = new OpenAPI\Client\Api\PublicApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$fetch_by = 'fetch_by_example'; // string | Get countries by iso2 or iso3 or numcode

try {
    $result = $apiInstance->getCountries($fetch_by);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling PublicApi->getCountries: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **fetch_by** | **string**| Get countries by iso2 or iso3 or numcode | [optional] |

### Return type

**object**

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getInfo()`

```php
getInfo(): \OpenAPI\Client\Model\ServicesInfo
```

Get Server Info

Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.

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


$apiInstance = new OpenAPI\Client\Api\PublicApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getInfo();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling PublicApi->getInfo: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\ServicesInfo**](../Model/ServicesInfo.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getLoginInfo()`

```php
getLoginInfo(): \OpenAPI\Client\Model\LoginInfo
```

Get Login Info

Gets the various pieces of information useful for generating a login page.

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


$apiInstance = new OpenAPI\Client\Api\PublicApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getLoginInfo();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling PublicApi->getLoginInfo: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\LoginInfo**](../Model/LoginInfo.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getMPServers()`

```php
getMPServers(): \OpenAPI\Client\Model\BuyItNowList
```

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

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


$apiInstance = new OpenAPI\Client\Api\PublicApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getMPServers();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling PublicApi->getMPServers: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\BuyItNowList**](../Model/BuyItNowList.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getOauthRedirect()`

```php
getOauthRedirect($provider): \OpenAPI\Client\Model\GetOauthRedirect200Response
```

Get OAuth Redirect URL

Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.

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


$apiInstance = new OpenAPI\Client\Api\PublicApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$provider = 'provider_example'; // string | The OAuth provider name (e.g. `Google`).

try {
    $result = $apiInstance->getOauthRedirect($provider);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling PublicApi->getOauthRedirect: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **provider** | **string**| The OAuth provider name (e.g. &#x60;Google&#x60;). | |

### Return type

[**\OpenAPI\Client\Model\GetOauthRedirect200Response**](../Model/GetOauthRedirect200Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getTimezones()`

```php
getTimezones(): string[]
```

Get Available Timezones

Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.

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


$apiInstance = new OpenAPI\Client\Api\PublicApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getTimezones();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling PublicApi->getTimezones: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

**string[]**

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `patchOauthTwoFactor()`

```php
patchOauthTwoFactor($patch_oauth_two_factor_request): \OpenAPI\Client\Model\PatchOauthTwoFactor200Response
```

Complete OAuth Two-Factor Verification

Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.

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


$apiInstance = new OpenAPI\Client\Api\PublicApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$patch_oauth_two_factor_request = new \OpenAPI\Client\Model\PatchOauthTwoFactorRequest(); // \OpenAPI\Client\Model\PatchOauthTwoFactorRequest

try {
    $result = $apiInstance->patchOauthTwoFactor($patch_oauth_two_factor_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling PublicApi->patchOauthTwoFactor: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **patch_oauth_two_factor_request** | [**\OpenAPI\Client\Model\PatchOauthTwoFactorRequest**](../Model/PatchOauthTwoFactorRequest.md)|  | |

### Return type

[**\OpenAPI\Client\Model\PatchOauthTwoFactor200Response**](../Model/PatchOauthTwoFactor200Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `pingServer()`

```php
pingServer(): string
```

Ping Server

Performs a single ping/pong request to let you know if the server is up.

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


$apiInstance = new OpenAPI\Client\Api\PublicApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->pingServer();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling PublicApi->pingServer: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

**string**

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `postOauthCallback()`

```php
postOauthCallback($provider, $post_oauth_callback_request): \OpenAPI\Client\Model\PostOauthCallback200Response
```

OAuth Callback

Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.

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


$apiInstance = new OpenAPI\Client\Api\PublicApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$provider = 'provider_example'; // string | The OAuth provider name (e.g. `Google`).
$post_oauth_callback_request = new \OpenAPI\Client\Model\PostOauthCallbackRequest(); // \OpenAPI\Client\Model\PostOauthCallbackRequest

try {
    $result = $apiInstance->postOauthCallback($provider, $post_oauth_callback_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling PublicApi->postOauthCallback: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **provider** | **string**| The OAuth provider name (e.g. &#x60;Google&#x60;). | |
| **post_oauth_callback_request** | [**\OpenAPI\Client\Model\PostOauthCallbackRequest**](../Model/PostOauthCallbackRequest.md)|  | [optional] |

### Return type

[**\OpenAPI\Client\Model\PostOauthCallback200Response**](../Model/PostOauthCallback200Response.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `submitLogin()`

```php
submitLogin($login, $passwd, $remember, $g_recaptcha_response, $tfa): \OpenAPI\Client\Model\LoginSuccessResponse
```

Submit Login Information

Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.

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


$apiInstance = new OpenAPI\Client\Api\PublicApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$login = 'login_example'; // string
$passwd = 'passwd_example'; // string
$remember = 'remember_example'; // string
$g_recaptcha_response = new \OpenAPI\Client\Model\LoginSubmissionExampleGRecaptchaResponse(); // \OpenAPI\Client\Model\LoginSubmissionExampleGRecaptchaResponse
$tfa = 'tfa_example'; // string | Two Factor Authentication Response.

try {
    $result = $apiInstance->submitLogin($login, $passwd, $remember, $g_recaptcha_response, $tfa);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling PublicApi->submitLogin: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **login** | **string**|  | |
| **passwd** | **string**|  | |
| **remember** | **string**|  | [optional] |
| **g_recaptcha_response** | [**\OpenAPI\Client\Model\LoginSubmissionExampleGRecaptchaResponse**](../Model/LoginSubmissionExampleGRecaptchaResponse.md)|  | [optional] |
| **tfa** | **string**| Two Factor Authentication Response. | [optional] |

### Return type

[**\OpenAPI\Client\Model\LoginSuccessResponse**](../Model/LoginSuccessResponse.md)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `submitSignup()`

```php
submitSignup($login_submission_example)
```

Submit Signup Information

Creates a new account in our system using the provided information.

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


$apiInstance = new OpenAPI\Client\Api\PublicApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$login_submission_example = {"login":"user@domain.com","passwd":"mypassword","remember":"true","g-recaptcha-response":{"__v_isShallow":false,"dep":{"w":0,"n":0},"__v_isRef":true,"_rawValue":"zzzzz","_value":"zzzzz"}}; // \OpenAPI\Client\Model\LoginSubmissionExample

try {
    $apiInstance->submitSignup($login_submission_example);
} catch (Exception $e) {
    echo 'Exception when calling PublicApi->submitSignup: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **login_submission_example** | [**\OpenAPI\Client\Model\LoginSubmissionExample**](../Model/LoginSubmissionExample.md)|  | [optional] |

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
