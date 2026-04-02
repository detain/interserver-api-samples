# BackupsApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addBackup**](BackupsApi.md#addBackup) | **POST** /backups/order | Place Backup Order |
| [**cancelBackup**](BackupsApi.md#cancelBackup) | **DELETE** /backups/{id} | Cancel Backup Service |
| [**getBackupInfo**](BackupsApi.md#getBackupInfo) | **GET** /backups/{id} | Get Backup Service Details |
| [**getBackupInvoices**](BackupsApi.md#getBackupInvoices) | **GET** /backups/{id}/invoices | Get Backup Order Invoices |
| [**getBackupLogin**](BackupsApi.md#getBackupLogin) | **GET** /backups/{id}/login | Get Backup Storage Panel Login |
| [**getBackupsList**](BackupsApi.md#getBackupsList) | **GET** /backups | List Backup Services |
| [**getBackupsWelcomeEmail**](BackupsApi.md#getBackupsWelcomeEmail) | **GET** /backups/{id}/welcome_email | Resend Backup Welcome Email |
| [**getNewBackup**](BackupsApi.md#getNewBackup) | **GET** /backups/order | Get Backup Order Form Data |
| [**updateBackupInfo**](BackupsApi.md#updateBackupInfo) | **POST** /backups/{id} | Update Backup Information |
| [**validateBackupOrder**](BackupsApi.md#validateBackupOrder) | **PUT** /backups/order | Validate Backup Order |


<a name="addBackup"></a>
# **addBackup**
> BackupOrderPostResponse addBackup(validateOnly, serviceType, coupon)

Place Backup Order

    Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with &#x60;/billing/invoices/{id}&#x60; to view the invoice or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. The service is provisioned after payment is confirmed.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **validateOnly** | **Boolean**|  | [optional] [default to null] |
| **serviceType** | **Integer**|  | [optional] [default to null] |
| **coupon** | **String**|  | [optional] [default to null] |

### Return type

[**BackupOrderPostResponse**](../Models/BackupOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="cancelBackup"></a>
# **cancelBackup**
> cancelBackup_200_response cancelBackup(id)

Cancel Backup Service

    Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | [default to null] |

### Return type

[**cancelBackup_200_response**](../Models/cancelBackup_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getBackupInfo"></a>
# **getBackupInfo**
> Backup getBackupInfo(id)

Get Backup Service Details

    Returns detailed service information for the specified backup storage order, including &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60; in &#x60;serviceInfo&#x60;. Also returns &#x60;client_links&#x60;, &#x60;billingDetails&#x60;, &#x60;extraInfoTables&#x60;, &#x60;package&#x60;, and &#x60;custCurrency&#x60;.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | [default to null] |

### Return type

[**Backup**](../Models/Backup.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getBackupInvoices"></a>
# **getBackupInvoices**
> ChargeInvoiceRows getBackupInvoices(id)

Get Backup Order Invoices

    Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | [default to null] |

### Return type

[**ChargeInvoiceRows**](../Models/ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getBackupLogin"></a>
# **getBackupLogin**
> BackupLoginResponse getBackupLogin(id)

Get Backup Storage Panel Login

    Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | [default to null] |

### Return type

[**BackupLoginResponse**](../Models/BackupLoginResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getBackupsList"></a>
# **getBackupsList**
> List getBackupsList()

List Backup Services

    Returns all backup storage services on your account. Each entry includes the &#x60;backup_id&#x60;, &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60;. Use the &#x60;backup_id&#x60; with &#x60;/backups/{id}&#x60; to retrieve full service details or &#x60;/backups/{id}/login&#x60; to obtain a storage panel session.

### Parameters
This endpoint does not need any parameter.

### Return type

[**List**](../Models/BackupRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getBackupsWelcomeEmail"></a>
# **getBackupsWelcomeEmail**
> SuccessTextResponse getBackupsWelcomeEmail(id)

Resend Backup Welcome Email

    Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getNewBackup"></a>
# **getNewBackup**
> BackupsOrder getNewBackup()

Get Backup Order Form Data

    Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via &#x60;PUT /backups/order&#x60; or placing an order via &#x60;POST /backups/order&#x60;.

### Parameters
This endpoint does not need any parameter.

### Return type

[**BackupsOrder**](../Models/BackupsOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateBackupInfo"></a>
# **updateBackupInfo**
> SuccessTextResponse updateBackupInfo(id)

Update Backup Information

    Updates backup storage service metadata, such as stored credentials or settings for the order.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="validateBackupOrder"></a>
# **validateBackupOrder**
> BackupOrderPutResponse validateBackupOrder(validateOnly, serviceType, coupon)

Validate Backup Order

    Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via &#x60;POST /backups/order&#x60;.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **validateOnly** | **Boolean**|  | [optional] [default to null] |
| **serviceType** | **Integer**|  | [optional] [default to null] |
| **coupon** | **String**|  | [optional] [default to null] |

### Return type

[**BackupOrderPutResponse**](../Models/BackupOrderPutResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

