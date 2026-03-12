# Interserver\MyAdmin\BackupsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addBackup**](BackupsApi.md#addbackup) | **POST** /backups/order | Place Backup Order
[**cancelBackup**](BackupsApi.md#cancelbackup) | **DELETE** /backups/{id} | Cancel Backup Service
[**getBackupInfo**](BackupsApi.md#getbackupinfo) | **GET** /backups/{id} | Get Backup Service Details
[**getBackupInvoices**](BackupsApi.md#getbackupinvoices) | **GET** /backups/{id}/invoices | Get Backup Order Invoices
[**getBackupLogin**](BackupsApi.md#getbackuplogin) | **GET** /backups/{id}/login | Get Backup Storage Panel Login
[**getBackupsList**](BackupsApi.md#getbackupslist) | **GET** /backups | List Backup Services
[**getBackupsWelcomeEmail**](BackupsApi.md#getbackupswelcomeemail) | **GET** /backups/{id}/welcome_email | Resend Backup Welcome Email
[**getNewBackup**](BackupsApi.md#getnewbackup) | **GET** /backups/order | Get Backup Order Form Data
[**updateBackupInfo**](BackupsApi.md#updatebackupinfo) | **POST** /backups/{id} | Update Backup Information
[**validateBackupOrder**](BackupsApi.md#validatebackuporder) | **PUT** /backups/order | Validate Backup Order

# **addBackup**
> \Interserver\MyAdmin\Model\BackupOrderPostResponse addBackup($validateOnly, $serviceType, $coupon)

Place Backup Order

Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.

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

$apiInstance = new Interserver\MyAdmin\Api\BackupsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$validateOnly = true; // bool | 
$serviceType = 56; // int | 
$coupon = "coupon_example"; // string | 

try {
    $result = $apiInstance->addBackup($validateOnly, $serviceType, $coupon);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling BackupsApi->addBackup: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **validateOnly** | **bool**|  |
 **serviceType** | **int**|  |
 **coupon** | **string**|  |

### Return type

[**\Interserver\MyAdmin\Model\BackupOrderPostResponse**](../Model/BackupOrderPostResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **addBackup**
> \Interserver\MyAdmin\Model\BackupOrderPostResponse addBackup($body)

Place Backup Order

Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.

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

$apiInstance = new Interserver\MyAdmin\Api\BackupsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$body = new \Interserver\MyAdmin\Model\BackupOrderPutRequest(); // \Interserver\MyAdmin\Model\BackupOrderPutRequest | 

try {
    $result = $apiInstance->addBackup($body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling BackupsApi->addBackup: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\Interserver\MyAdmin\Model\BackupOrderPutRequest**](../Model/BackupOrderPutRequest.md)|  |

### Return type

[**\Interserver\MyAdmin\Model\BackupOrderPostResponse**](../Model/BackupOrderPostResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **cancelBackup**
> \Interserver\MyAdmin\Model\InlineResponse2001 cancelBackup($id)

Cancel Backup Service

Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.

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

$apiInstance = new Interserver\MyAdmin\Api\BackupsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

try {
    $result = $apiInstance->cancelBackup($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling BackupsApi->cancelBackup: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. |

### Return type

[**\Interserver\MyAdmin\Model\InlineResponse2001**](../Model/InlineResponse2001.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **getBackupInfo**
> \Interserver\MyAdmin\Model\Backup getBackupInfo($id)

Get Backup Service Details

Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.

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

$apiInstance = new Interserver\MyAdmin\Api\BackupsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

try {
    $result = $apiInstance->getBackupInfo($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling BackupsApi->getBackupInfo: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. |

### Return type

[**\Interserver\MyAdmin\Model\Backup**](../Model/Backup.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **getBackupInvoices**
> \Interserver\MyAdmin\Model\ChargeInvoiceRows getBackupInvoices($id)

Get Backup Order Invoices

Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.

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

$apiInstance = new Interserver\MyAdmin\Api\BackupsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

try {
    $result = $apiInstance->getBackupInvoices($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling BackupsApi->getBackupInvoices: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. |

### Return type

[**\Interserver\MyAdmin\Model\ChargeInvoiceRows**](../Model/ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **getBackupLogin**
> \Interserver\MyAdmin\Model\BackupLoginResponse getBackupLogin($id)

Get Backup Storage Panel Login

Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.

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

$apiInstance = new Interserver\MyAdmin\Api\BackupsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

try {
    $result = $apiInstance->getBackupLogin($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling BackupsApi->getBackupLogin: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. |

### Return type

[**\Interserver\MyAdmin\Model\BackupLoginResponse**](../Model/BackupLoginResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **getBackupsList**
> \Interserver\MyAdmin\Model\BackupRow[] getBackupsList()

List Backup Services

Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.

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

$apiInstance = new Interserver\MyAdmin\Api\BackupsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getBackupsList();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling BackupsApi->getBackupsList: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**\Interserver\MyAdmin\Model\BackupRow[]**](../Model/BackupRow.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **getBackupsWelcomeEmail**
> \Interserver\MyAdmin\Model\SuccessTextResponse getBackupsWelcomeEmail($id)

Resend Backup Welcome Email

Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.

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

$apiInstance = new Interserver\MyAdmin\Api\BackupsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

try {
    $result = $apiInstance->getBackupsWelcomeEmail($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling BackupsApi->getBackupsWelcomeEmail: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. |

### Return type

[**\Interserver\MyAdmin\Model\SuccessTextResponse**](../Model/SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **getNewBackup**
> \Interserver\MyAdmin\Model\BackupsOrder getNewBackup()

Get Backup Order Form Data

Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.

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

$apiInstance = new Interserver\MyAdmin\Api\BackupsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getNewBackup();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling BackupsApi->getNewBackup: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**\Interserver\MyAdmin\Model\BackupsOrder**](../Model/BackupsOrder.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **updateBackupInfo**
> updateBackupInfo($id)

Update Backup Information

Updates backup storage service metadata, such as stored credentials or settings for the order.

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

$apiInstance = new Interserver\MyAdmin\Api\BackupsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 56; // int | The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.

try {
    $apiInstance->updateBackupInfo($id);
} catch (Exception $e) {
    echo 'Exception when calling BackupsApi->updateBackupInfo: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. |

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **validateBackupOrder**
> \Interserver\MyAdmin\Model\BackupOrderPutResponse validateBackupOrder($validateOnly, $serviceType, $coupon)

Validate Backup Order

Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.

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

$apiInstance = new Interserver\MyAdmin\Api\BackupsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$validateOnly = true; // bool | 
$serviceType = 56; // int | 
$coupon = "coupon_example"; // string | 

try {
    $result = $apiInstance->validateBackupOrder($validateOnly, $serviceType, $coupon);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling BackupsApi->validateBackupOrder: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **validateOnly** | **bool**|  |
 **serviceType** | **int**|  |
 **coupon** | **string**|  |

### Return type

[**\Interserver\MyAdmin\Model\BackupOrderPutResponse**](../Model/BackupOrderPutResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **validateBackupOrder**
> \Interserver\MyAdmin\Model\BackupOrderPutResponse validateBackupOrder($body)

Validate Backup Order

Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.

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

$apiInstance = new Interserver\MyAdmin\Api\BackupsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$body = new \Interserver\MyAdmin\Model\BackupOrderPutRequest(); // \Interserver\MyAdmin\Model\BackupOrderPutRequest | 

try {
    $result = $apiInstance->validateBackupOrder($body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling BackupsApi->validateBackupOrder: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\Interserver\MyAdmin\Model\BackupOrderPutRequest**](../Model/BackupOrderPutRequest.md)|  |

### Return type

[**\Interserver\MyAdmin\Model\BackupOrderPutResponse**](../Model/BackupOrderPutResponse.md)

### Authorization

[apiKeyAuth](../../README.md#apiKeyAuth), [sessionIdCookieAuth](../../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

