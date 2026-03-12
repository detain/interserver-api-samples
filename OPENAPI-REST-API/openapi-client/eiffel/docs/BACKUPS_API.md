# BACKUPS_API

All URIs are relative to *https://my.interserver.net/apiv2*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**add_backup**](BACKUPS_API.md#add_backup) | **Post** /backups/order | Place Backup Order
[**backup_info**](BACKUPS_API.md#backup_info) | **Get** /backups/{id} | Get Backup Service Details
[**backup_invoices**](BACKUPS_API.md#backup_invoices) | **Get** /backups/{id}/invoices | Get Backup Order Invoices
[**backup_login**](BACKUPS_API.md#backup_login) | **Get** /backups/{id}/login | Get Backup Storage Panel Login
[**backups_list**](BACKUPS_API.md#backups_list) | **Get** /backups | List Backup Services
[**backups_welcome_email**](BACKUPS_API.md#backups_welcome_email) | **Get** /backups/{id}/welcome_email | Resend Backup Welcome Email
[**cancel_backup**](BACKUPS_API.md#cancel_backup) | **Delete** /backups/{id} | Cancel Backup Service
[**new_backup**](BACKUPS_API.md#new_backup) | **Get** /backups/order | Get Backup Order Form Data
[**update_backup_info**](BACKUPS_API.md#update_backup_info) | **Post** /backups/{id} | Update Backup Information
[**validate_backup_order**](BACKUPS_API.md#validate_backup_order) | **Put** /backups/order | Validate Backup Order


# **add_backup**
> add_backup (validate_only:  detachable BOOLEAN ; service_type:  detachable INTEGER_32 ; coupon:  detachable STRING_32 ): detachable BACKUP_ORDER_POST_RESPONSE


Place Backup Order

Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **validate_only** | **BOOLEAN**|  | [optional] [default to null]
 **service_type** | **INTEGER_32**|  | [optional] [default to null]
 **coupon** | **STRING_32**|  | [optional] [default to null]

### Return type

[**BACKUP_ORDER_POST_RESPONSE**](BackupOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **backup_info**
> backup_info (id: INTEGER_32 ): detachable BACKUP


Get Backup Service Details

Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | [default to null]

### Return type

[**BACKUP**](Backup.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **backup_invoices**
> backup_invoices (id: INTEGER_32 ): detachable CHARGE_INVOICE_ROWS


Get Backup Order Invoices

Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | [default to null]

### Return type

[**CHARGE_INVOICE_ROWS**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **backup_login**
> backup_login (id: INTEGER_32 ): detachable BACKUP_LOGIN_RESPONSE


Get Backup Storage Panel Login

Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | [default to null]

### Return type

[**BACKUP_LOGIN_RESPONSE**](BackupLoginResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **backups_list**
> backups_list : detachable LIST [BACKUP_ROW]


List Backup Services

Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.


### Parameters
This endpoint does not need any parameter.

### Return type

[**LIST [BACKUP_ROW]**](BackupRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **backups_welcome_email**
> backups_welcome_email (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Resend Backup Welcome Email

Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cancel_backup**
> cancel_backup (id: INTEGER_32 ): detachable CANCEL_BACKUP_200_RESPONSE


Cancel Backup Service

Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | [default to null]

### Return type

[**CANCEL_BACKUP_200_RESPONSE**](cancelBackup_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **new_backup**
> new_backup : detachable BACKUPS_ORDER


Get Backup Order Form Data

Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.


### Parameters
This endpoint does not need any parameter.

### Return type

[**BACKUPS_ORDER**](BackupsOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_backup_info**
> update_backup_info (id: INTEGER_32 )


Update Backup Information

Updates backup storage service metadata, such as stored credentials or settings for the order.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service. | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **validate_backup_order**
> validate_backup_order (validate_only:  detachable BOOLEAN ; service_type:  detachable INTEGER_32 ; coupon:  detachable STRING_32 ): detachable BACKUP_ORDER_PUT_RESPONSE


Validate Backup Order

Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **validate_only** | **BOOLEAN**|  | [optional] [default to null]
 **service_type** | **INTEGER_32**|  | [optional] [default to null]
 **coupon** | **STRING_32**|  | [optional] [default to null]

### Return type

[**BACKUP_ORDER_PUT_RESPONSE**](BackupOrderPutResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

