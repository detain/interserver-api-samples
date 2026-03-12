# SSLCertificatesApi

All URIs are relative to */apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addSsl**](SSLCertificatesApi.md#addSsl) | **POST** /ssl/order | Place SSL Cert Order
[**getNewSsl**](SSLCertificatesApi.md#getNewSsl) | **GET** /ssl/order | SSL Cert Ordering Information
[**getSslInfo**](SSLCertificatesApi.md#getSslInfo) | **GET** /ssl/{id} | Get SSL Cert Info
[**getSslInvoices**](SSLCertificatesApi.md#getSslInvoices) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices
[**getSslList**](SSLCertificatesApi.md#getSslList) | **GET** /ssl | List SSL Certs
[**getSslWelcomeEmail**](SSLCertificatesApi.md#getSslWelcomeEmail) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email
[**putSsl**](SSLCertificatesApi.md#putSsl) | **PUT** /ssl/order | Validate SSL Cert Order
[**sslCancel**](SSLCertificatesApi.md#sslCancel) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service
[**updateSslInfo**](SSLCertificatesApi.md#updateSslInfo) | **POST** /ssl/{id} | Update SSL Cert Order



## addSsl

Place SSL Cert Order

Places an order for a new SSL certificate. Use 'PUT /ssl/order' to validate the order first.

### Example

```bash
 addSsl
```

### Parameters

This endpoint does not need any parameter.

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getNewSsl

SSL Cert Ordering Information

Retrieves available SSL certificate types and pricing for ordering.

### Example

```bash
 getNewSsl
```

### Parameters

This endpoint does not need any parameter.

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getSslInfo

Get SSL Cert Info

Returns detailed information about a specific SSL certificate including its domain and expiration.

### Example

```bash
 getSslInfo id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | SSL certificate ID number. | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getSslInvoices

Get SSL Cert Invoices

Returns the billing invoices associated with this SSL certificate.

### Example

```bash
 getSslInvoices id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | SSL Cert ID number | [default to null]

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getSslList

List SSL Certs

Returns all SSL certificate services on the account with their current status.

### Example

```bash
 getSslList
```

### Parameters

This endpoint does not need any parameter.

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getSslWelcomeEmail

Resend SSL Welcome Email

Resends the welcome email for the order.

### Example

```bash
 getSslWelcomeEmail id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | SSL Cert ID number | [default to null]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## putSsl

Validate SSL Cert Order

Validates an SSL certificate order before placing it.

### Example

```bash
 putSsl
```

### Parameters

This endpoint does not need any parameter.

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## sslCancel

Cancel SSL Certificate Service

Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.

### Example

```bash
 sslCancel id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | SSL Cert ID number | [default to null]

### Return type

[**SslCancel200Response**](SslCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## updateSslInfo

Update SSL Cert Order

Updates settings on an SSL certificate order.

### Example

```bash
 updateSslInfo id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string** | SSL certificate ID number. | [default to null]

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

