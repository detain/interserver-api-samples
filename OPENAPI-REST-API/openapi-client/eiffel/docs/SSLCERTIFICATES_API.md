# SSLCERTIFICATES_API

All URIs are relative to *https://my.interserver.net/apiv2*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**add_ssl**](SSLCERTIFICATES_API.md#add_ssl) | **Post** /ssl/order | Place SSL Cert Order
[**new_ssl**](SSLCERTIFICATES_API.md#new_ssl) | **Get** /ssl/order | SSL Cert Ordering Information
[**put_ssl**](SSLCERTIFICATES_API.md#put_ssl) | **Put** /ssl/order | Validate SSL Cert Order
[**ssl_cancel**](SSLCERTIFICATES_API.md#ssl_cancel) | **Delete** /ssl/{id} | Cancel SSL Certificate Service
[**ssl_info**](SSLCERTIFICATES_API.md#ssl_info) | **Get** /ssl/{id} | Get SSL Cert Info
[**ssl_invoices**](SSLCERTIFICATES_API.md#ssl_invoices) | **Get** /ssl/{id}/invoices | Get SSL Cert Invoices
[**ssl_list**](SSLCERTIFICATES_API.md#ssl_list) | **Get** /ssl | List SSL Certs
[**ssl_welcome_email**](SSLCERTIFICATES_API.md#ssl_welcome_email) | **Get** /ssl/{id}/welcome_email | Resend SSL Welcome Email
[**update_ssl_info**](SSLCERTIFICATES_API.md#update_ssl_info) | **Post** /ssl/{id} | Update SSL Cert Order


# **add_ssl**
> add_ssl : detachable SERVICE_ORDER_POST_RESPONSE


Place SSL Cert Order

Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.


### Parameters
This endpoint does not need any parameter.

### Return type

[**SERVICE_ORDER_POST_RESPONSE**](ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **new_ssl**
> new_ssl : detachable ANY


SSL Cert Ordering Information

Retrieves available SSL certificate types and pricing for ordering.


### Parameters
This endpoint does not need any parameter.

### Return type

[**ANY**](ANY.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_ssl**
> put_ssl 


Validate SSL Cert Order

Validates an SSL certificate order before placing it.


### Parameters
This endpoint does not need any parameter.

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ssl_cancel**
> ssl_cancel (id: INTEGER_32 ): detachable SSL_CANCEL_200_RESPONSE


Cancel SSL Certificate Service

Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| SSL Cert ID number | [default to null]

### Return type

[**SSL_CANCEL_200_RESPONSE**](sslCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ssl_info**
> ssl_info (id: INTEGER_32 ): detachable ANY


Get SSL Cert Info

Returns detailed information about a specific SSL certificate including its domain and expiration.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| SSL certificate ID number. | [default to null]

### Return type

[**ANY**](ANY.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ssl_invoices**
> ssl_invoices (id: INTEGER_32 ): detachable CHARGE_INVOICE_ROWS


Get SSL Cert Invoices

Returns the billing invoices associated with this SSL certificate.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| SSL Cert ID number | [default to null]

### Return type

[**CHARGE_INVOICE_ROWS**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ssl_list**
> ssl_list 


List SSL Certs

Returns all SSL certificate services on the account with their current status.


### Parameters
This endpoint does not need any parameter.

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ssl_welcome_email**
> ssl_welcome_email (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Resend SSL Welcome Email

Resends the welcome email for the order.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| SSL Cert ID number | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_ssl_info**
> update_ssl_info (id: STRING_32 ): detachable SUCCESS_TEXT_RESPONSE


Update SSL Cert Order

Updates settings on an SSL certificate order.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| SSL certificate ID number. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

