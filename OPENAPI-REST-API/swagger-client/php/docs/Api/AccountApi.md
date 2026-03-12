# Interserver\MyAdmin\AccountApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**changeAccountUsername**](AccountApi.md#changeaccountusername) | **POST** /account/username | Change Account Username
[**deleteAccountOauthName**](AccountApi.md#deleteaccountoauthname) | **DELETE** /account/oauth/{name} | Unlink OAuth Account
[**deleteAccountTfa**](AccountApi.md#deleteaccounttfa) | **DELETE** /account/2fa | Disable Two-Factor Authentication
[**deleteIpLimit**](AccountApi.md#deleteiplimit) | **PATCH** /account/iplimits | Remove IP Access Restriction
[**getAccountInfo**](AccountApi.md#getaccountinfo) | **GET** /account | Retrieve Account Details
[**getAccountTfaSetup**](AccountApi.md#getaccounttfasetup) | **GET** /account/2fa | Get Two-Factor Setup Data
[**getHome**](AccountApi.md#gethome) | **GET** /home | Get Home Data
[**getSearch**](AccountApi.md#getsearch) | **GET** /search | Search Autocomplete
[**logout**](AccountApi.md#logout) | **GET** /logout | Log Out
[**logoutAccountOauth**](AccountApi.md#logoutaccountoauth) | **GET** /account/oauth/{name}/logout | Logout of OAuth
[**updateAccountApiKey**](AccountApi.md#updateaccountapikey) | **POST** /account/apikey | Generate New API Key
[**updateAccountFeatures**](AccountApi.md#updateaccountfeatures) | **POST** /account/features | Update Account Feature Flags
[**updateAccountInfo**](AccountApi.md#updateaccountinfo) | **POST** /account | Update Account Information
[**updateAccountIpLimits**](AccountApi.md#updateaccountiplimits) | **POST** /account/iplimits | Add IP Access Restriction
[**updateAccountPassword**](AccountApi.md#updateaccountpassword) | **POST** /account/password | Change Account Password
[**updateAccountSshKey**](AccountApi.md#updateaccountsshkey) | **POST** /account/sshkey | Update SSH Keys
[**updateAccountTfa**](AccountApi.md#updateaccounttfa) | **POST** /account/2fa | Enable Two-Factor Authentication

# **changeAccountUsername**
> \Interserver\MyAdmin\Model\TextResponse changeAccountUsername()

Change Account Username

Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->changeAccountUsername();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->changeAccountUsername: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**\Interserver\MyAdmin\Model\TextResponse**](../Model/TextResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **deleteAccountOauthName**
> \Interserver\MyAdmin\Model\SuccessTextResponse deleteAccountOauthName($name)

Unlink OAuth Account

Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$name = "name_example"; // string | 

try {
    $result = $apiInstance->deleteAccountOauthName($name);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->deleteAccountOauthName: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string**|  |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **deleteAccountTfa**
> \Interserver\MyAdmin\Model\SuccessTextResponse deleteAccountTfa()

Disable Two-Factor Authentication

Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->deleteAccountTfa();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->deleteAccountTfa: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **deleteIpLimit**
> \Interserver\MyAdmin\Model\GenericResponse deleteIpLimit()

Remove IP Access Restriction

Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->deleteIpLimit();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->deleteIpLimit: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**\Interserver\MyAdmin\Model\GenericResponse**](../Model/GenericResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **getAccountInfo**
> \Interserver\MyAdmin\Model\AccountInfo getAccountInfo()

Retrieve Account Details

Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getAccountInfo();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->getAccountInfo: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**\Interserver\MyAdmin\Model\AccountInfo**](../Model/AccountInfo.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **getAccountTfaSetup**
> \Interserver\MyAdmin\Model\InlineResponse200 getAccountTfaSetup()

Get Two-Factor Setup Data

Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getAccountTfaSetup();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->getAccountTfaSetup: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**\Interserver\MyAdmin\Model\InlineResponse200**](../Model/InlineResponse200.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **getHome**
> \Interserver\MyAdmin\Model\Home getHome()

Get Home Data

Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getHome();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->getHome: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**\Interserver\MyAdmin\Model\Home**](../Model/Home.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **getSearch**
> \Interserver\MyAdmin\Model\SearchAutocompleteResponse getSearch()

Search Autocomplete

Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getSearch();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->getSearch: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**\Interserver\MyAdmin\Model\SearchAutocompleteResponse**](../Model/SearchAutocompleteResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **logout**
> \Interserver\MyAdmin\Model\SuccessTextResponse logout()

Log Out

Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->logout();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->logout: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **logoutAccountOauth**
> \Interserver\MyAdmin\Model\SuccessTextResponse logoutAccountOauth($name)

Logout of OAuth

Logs out of the specified OAuth provider session.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$name = "name_example"; // string | 

try {
    $result = $apiInstance->logoutAccountOauth($name);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->logoutAccountOauth: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string**|  |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **updateAccountApiKey**
> \Interserver\MyAdmin\Model\SuccessTextResponse updateAccountApiKey()

Generate New API Key

Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->updateAccountApiKey();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->updateAccountApiKey: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **updateAccountFeatures**
> \Interserver\MyAdmin\Model\SuccessTextResponse updateAccountFeatures($disableReset, $disableReinstall)

Update Account Feature Flags

Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$disableReset = 56; // int | 
$disableReinstall = 56; // int | 

try {
    $result = $apiInstance->updateAccountFeatures($disableReset, $disableReinstall);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->updateAccountFeatures: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **disableReset** | **int**|  |
 **disableReinstall** | **int**|  |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **updateAccountFeatures**
> \Interserver\MyAdmin\Model\SuccessTextResponse updateAccountFeatures($body)

Update Account Feature Flags

Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$body = new \Interserver\MyAdmin\Model\AccountFeatures(); // \Interserver\MyAdmin\Model\AccountFeatures | 

try {
    $result = $apiInstance->updateAccountFeatures($body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->updateAccountFeatures: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\Interserver\MyAdmin\Model\AccountFeatures**](../Model/AccountFeatures.md)|  |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **updateAccountInfo**
> updateAccountInfo($name, $company, $address, $address2, $city, $state, $zip, $country, $phone, $locale, $emailInvoices, $emailAbuse, $disableReset, $disableReinstall, $disableServerNotifications, $disableEmailNotifications, $gstin)

Update Account Information

Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$name = "name_example"; // string | 
$company = "company_example"; // string | 
$address = "address_example"; // string | 
$address2 = "address2_example"; // string | 
$city = "city_example"; // string | 
$state = "state_example"; // string | 
$zip = "zip_example"; // string | 
$country = "country_example"; // string | 
$phone = "phone_example"; // string | 
$locale = "locale_example"; // string | 
$emailInvoices = "emailInvoices_example"; // string | 
$emailAbuse = "emailAbuse_example"; // string | 
$disableReset = true; // bool | 
$disableReinstall = true; // bool | 
$disableServerNotifications = true; // bool | 
$disableEmailNotifications = true; // bool | 
$gstin = "gstin_example"; // string | 

try {
    $apiInstance->updateAccountInfo($name, $company, $address, $address2, $city, $state, $zip, $country, $phone, $locale, $emailInvoices, $emailAbuse, $disableReset, $disableReinstall, $disableServerNotifications, $disableEmailNotifications, $gstin);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->updateAccountInfo: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string**|  |
 **company** | **string**|  |
 **address** | **string**|  |
 **address2** | **string**|  |
 **city** | **string**|  |
 **state** | **string**|  |
 **zip** | **string**|  |
 **country** | **string**|  |
 **phone** | **string**|  |
 **locale** | **string**|  |
 **emailInvoices** | **string**|  |
 **emailAbuse** | **string**|  |
 **disableReset** | **bool**|  |
 **disableReinstall** | **bool**|  |
 **disableServerNotifications** | **bool**|  |
 **disableEmailNotifications** | **bool**|  |
 **gstin** | **string**|  |

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **updateAccountInfo**
> updateAccountInfo($body)

Update Account Information

Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$body = new \Interserver\MyAdmin\Model\AccountInfoPost(); // \Interserver\MyAdmin\Model\AccountInfoPost | 

try {
    $apiInstance->updateAccountInfo($body);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->updateAccountInfo: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\Interserver\MyAdmin\Model\AccountInfoPost**](../Model/AccountInfoPost.md)|  |

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **updateAccountIpLimits**
> updateAccountIpLimits($start, $end)

Add IP Access Restriction

Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$start = "start_example"; // string | 
$end = "end_example"; // string | 

try {
    $apiInstance->updateAccountIpLimits($start, $end);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->updateAccountIpLimits: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **start** | **string**|  |
 **end** | **string**|  |

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **updateAccountIpLimits**
> updateAccountIpLimits($body)

Add IP Access Restriction

Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$body = new \Interserver\MyAdmin\Model\IpLimitRange(); // \Interserver\MyAdmin\Model\IpLimitRange | The lower and upper bounds of an ip range.

try {
    $apiInstance->updateAccountIpLimits($body);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->updateAccountIpLimits: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\Interserver\MyAdmin\Model\IpLimitRange**](../Model/IpLimitRange.md)| The lower and upper bounds of an ip range. |

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **updateAccountPassword**
> \Interserver\MyAdmin\Model\TextResponse updateAccountPassword($password)

Change Account Password

Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$password = "password_example"; // string | 

try {
    $result = $apiInstance->updateAccountPassword($password);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->updateAccountPassword: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **password** | **string**|  |

### Return type

[**\Interserver\MyAdmin\Model\TextResponse**](../Model/TextResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **updateAccountPassword**
> \Interserver\MyAdmin\Model\TextResponse updateAccountPassword($body)

Change Account Password

Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$body = new \Interserver\MyAdmin\Model\PasswordRequest(); // \Interserver\MyAdmin\Model\PasswordRequest | 

try {
    $result = $apiInstance->updateAccountPassword($body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->updateAccountPassword: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\Interserver\MyAdmin\Model\PasswordRequest**](../Model/PasswordRequest.md)|  |

### Return type

[**\Interserver\MyAdmin\Model\TextResponse**](../Model/TextResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **updateAccountSshKey**
> \Interserver\MyAdmin\Model\SuccessTextResponse updateAccountSshKey($sshKey)

Update SSH Keys

Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$sshKey = "sshKey_example"; // string | 

try {
    $result = $apiInstance->updateAccountSshKey($sshKey);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->updateAccountSshKey: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sshKey** | **string**|  |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **updateAccountSshKey**
> \Interserver\MyAdmin\Model\SuccessTextResponse updateAccountSshKey($body)

Update SSH Keys

Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$body = new \Interserver\MyAdmin\Model\AccountSshKey(); // \Interserver\MyAdmin\Model\AccountSshKey | 

try {
    $result = $apiInstance->updateAccountSshKey($body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->updateAccountSshKey: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\Interserver\MyAdmin\Model\AccountSshKey**](../Model/AccountSshKey.md)|  |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **updateAccountTfa**
> \Interserver\MyAdmin\Model\SuccessTextResponse updateAccountTfa($_2faGoogleCode)

Enable Two-Factor Authentication

Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$_2faGoogleCode = "_2faGoogleCode_example"; // string | 

try {
    $result = $apiInstance->updateAccountTfa($_2faGoogleCode);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->updateAccountTfa: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_2faGoogleCode** | **string**|  |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **updateAccountTfa**
> \Interserver\MyAdmin\Model\SuccessTextResponse updateAccountTfa($body)

Enable Two-Factor Authentication

Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');
// Configure API key authorization: apiKeyAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');// Configure API key authorization: sessionIdCookieAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');// Configure API key authorization: sessionIdHeaderAuth
$config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = Interserver\MyAdmin\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

$apiInstance = new Interserver\MyAdmin\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$body = new \Interserver\MyAdmin\Model\Account2faBody1(); // \Interserver\MyAdmin\Model\Account2faBody1 | 

try {
    $result = $apiInstance->updateAccountTfa($body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->updateAccountTfa: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\Interserver\MyAdmin\Model\Account2faBody1**](../Model/Account2faBody1.md)|  |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

